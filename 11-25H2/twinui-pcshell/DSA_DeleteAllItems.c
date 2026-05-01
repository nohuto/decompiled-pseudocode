/*
 * XREFs of DSA_DeleteAllItems @ 0x18065E040
 * Callers:
 *     ?ClearAdapterInfo@@YAXPEAV?$CDSA@U_AdapterInfo@@@@_N@Z @ 0x18064F130 (-ClearAdapterInfo@@YAXPEAV-$CDSA@U_AdapterInfo@@@@_N@Z.c)
 * Callees:
 *     ?CCv6s_HeapFree@@YAJPEAX0@Z @ 0x18065DA54 (-CCv6s_HeapFree@@YAJPEAX0@Z.c)
 */

BOOL __stdcall DSA_DeleteAllItems(HDSA hdsa)
{
  void *v1; // rdi
  HANDLE ProcessHeap; // rax
  BOOL result; // eax

  v1 = (void *)*((_QWORD *)hdsa + 1);
  if ( v1 )
  {
    ProcessHeap = GetProcessHeap();
    if ( (int)CCv6s_HeapFree(ProcessHeap, v1) < 0 )
      return 0;
  }
  *((_QWORD *)hdsa + 1) = 0LL;
  result = 1;
  *((_DWORD *)hdsa + 4) = 0;
  *(_DWORD *)hdsa = 0;
  return result;
}
