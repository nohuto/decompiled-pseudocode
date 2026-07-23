/*
 * XREFs of LdrpInitializeCfgScpHelpers @ 0x1800FEC0C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1800787C8 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrControlFlowGuardEnforced @ 0x180078C70 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 */

void LdrpInitializeCfgScpHelpers()
{
  _DWORD *Config; // rbx
  int v1; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  OutHeaders = 0LL;
  Config = LdrImageDirectoryEntryToLoadConfigEx(LdrpSystemDllBase);
  RtlImageNtHeaderEx(1u, LdrpSystemDllBase, 0LL, &OutHeaders);
  LOBYTE(v1) = LdrControlFlowGuardEnforced();
  if ( v1 && (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) != 0 && (Config[36] & 0x100) != 0 )
  {
    LdrProtectMrdata(0);
    LdrpGuardCheckIcallNoESFptr = (__int64 (__fastcall *)())LdrpValidateUserCallTarget;
    LdrpGuardDispatchIcallNoESFptr = LdrpDispatchUserCallTarget;
    LdrProtectMrdata(1);
  }
}
