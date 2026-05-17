/*
 * XREFs of LdrpInitializeCfgScpHelpers @ 0x1800FF4BC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x180081428 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 */

__int64 LdrpInitializeCfgScpHelpers()
{
  _DWORD *Config; // rbx
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  Config = LdrImageDirectoryEntryToLoadConfigEx(LdrpSystemDllBase);
  RtlImageNtHeaderEx(1, LdrpSystemDllBase, 0LL, &v2);
  result = LdrControlFlowGuardEnforced();
  if ( (_DWORD)result )
  {
    result = 0x4000LL;
    if ( (*(_WORD *)(v2 + 94) & 0x4000) != 0 && (Config[36] & 0x100) != 0 )
    {
      LdrProtectMrdata(0);
      LdrpGuardCheckIcallNoESFptr = (__int64 (__fastcall *)())LdrpValidateUserCallTarget;
      LdrpGuardDispatchIcallNoESFptr[0] = LdrpDispatchUserCallTarget;
      return (__int64)LdrProtectMrdata(1);
    }
  }
  return result;
}
