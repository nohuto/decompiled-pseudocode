/*
 * XREFs of RtlpInsertOrRemoveScpCfgFunctionTable @ 0x180076F90
 * Callers:
 *     LdrpUnmapModule @ 0x18011975C (LdrpUnmapModule.c)
 *     LdrpProcessMappedModule @ 0x180119E48 (LdrpProcessMappedModule.c)
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 * Callees:
 *     RtlAddGrowableFunctionTable @ 0x1800788F0 (RtlAddGrowableFunctionTable.c)
 *     RtlDeleteFunctionTable @ 0x1800D7FF0 (RtlDeleteFunctionTable.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

int __fastcall RtlpInsertOrRemoveScpCfgFunctionTable(char *BaseAddress, __int64 a2, char a3)
{
  int result; // eax
  char *v6; // rax
  __int64 v7; // rdx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v8; // rdx
  ULONG_PTR v9; // [rsp+30h] [rbp-38h] BYREF
  PVOID DynamicTable; // [rsp+38h] [rbp-30h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v9 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  result = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MaxMemoryInfoClass, &v11, 0x18uLL, &v9);
  if ( result == -1073741637 )
    return 279;
  if ( result >= 0 )
  {
    if ( !v12 )
      return 279;
    v6 = &BaseAddress[*((_QWORD *)&v11 + 1)];
    v7 = *(unsigned int *)&BaseAddress[*((_QWORD *)&v11 + 1) + 20];
    if ( !(_DWORD)v7 )
      return 279;
    v8 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)&v6[v7];
    if ( a3 )
    {
      result = RtlAddGrowableFunctionTable(
                 &DynamicTable,
                 v8,
                 1u,
                 1u,
                 (ULONG_PTR)&BaseAddress[*((_QWORD *)&v11 + 1)],
                 (ULONG_PTR)&v6[v12]);
      if ( result >= 0 )
        return 0;
    }
    else
    {
      RtlDeleteFunctionTable(v8);
      return 0;
    }
  }
  return result;
}
