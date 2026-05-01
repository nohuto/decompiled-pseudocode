/*
 * XREFs of DSA_Destroy @ 0x18065E098
 * Callers:
 *     ??1CPinList@@QEAA@XZ @ 0x180665A30 (--1CPinList@@QEAA@XZ.c)
 * Callees:
 *     ?CCv6s_HeapFree@@YAJPEAX0@Z @ 0x18065DA54 (-CCv6s_HeapFree@@YAJPEAX0@Z.c)
 */

BOOL __stdcall DSA_Destroy(HDSA hdsa)
{
  void *v3; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v5; // rax

  if ( !hdsa )
    return 1;
  v3 = (void *)*((_QWORD *)hdsa + 1);
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    if ( (int)CCv6s_HeapFree(ProcessHeap, v3) < 0 )
      return 0;
  }
  v5 = GetProcessHeap();
  return (int)CCv6s_HeapFree(v5, hdsa) >= 0;
}
