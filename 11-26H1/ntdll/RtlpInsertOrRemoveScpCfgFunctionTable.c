/*
 * XREFs of RtlpInsertOrRemoveScpCfgFunctionTable @ 0x18007FBF0
 * Callers:
 *     LdrpUnmapModule @ 0x1801199AC (LdrpUnmapModule.c)
 *     LdrpProcessMappedModule @ 0x18011A098 (LdrpProcessMappedModule.c)
 *     LdrpUnloadNode @ 0x18011BEB0 (LdrpUnloadNode.c)
 * Callees:
 *     RtlAddGrowableFunctionTable @ 0x180081550 (RtlAddGrowableFunctionTable.c)
 *     RtlDeleteFunctionTable @ 0x1800DB030 (RtlDeleteFunctionTable.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpInsertOrRemoveScpCfgFunctionTable(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v8; // rdx
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  char v10; // [rsp+38h] [rbp-30h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v9 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  result = ZwQueryVirtualMemory(-1LL, a1, 14LL, &v11, 24LL, &v9);
  if ( (_DWORD)result == -1073741637 )
    return 279LL;
  if ( (int)result >= 0 )
  {
    if ( !v12 )
      return 279LL;
    v6 = a1 + *((_QWORD *)&v11 + 1);
    v7 = *(unsigned int *)(a1 + *((_QWORD *)&v11 + 1) + 20);
    if ( !(_DWORD)v7 )
      return 279LL;
    v8 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + v7);
    if ( a3 )
    {
      result = RtlAddGrowableFunctionTable((unsigned int)&v10, (_DWORD)v8, 1, 1, a1 + *((_QWORD *)&v11 + 1), v6 + v12);
      if ( (int)result >= 0 )
        return 0LL;
    }
    else
    {
      RtlDeleteFunctionTable(v8);
      return 0LL;
    }
  }
  return result;
}
