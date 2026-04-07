/*
 * XREFs of ?clear@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAAXXZ @ 0x1800886B8
 * Callers:
 *     ??1test_state@tip2@@QEAA@XZ @ 0x180088570 (--1test_state@tip2@@QEAA@XZ.c)
 * Callees:
 *     ??_GStoredFailureInfo@wil@@QEAAPEAXI@Z @ 0x1800D2A9C (--_GStoredFailureInfo@wil@@QEAAPEAXI@Z.c)
 */

void __fastcall tip2::vector_nothrow<wil::StoredFailureInfo>::clear(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  void *v6; // rbx
  HANDLE ProcessHeap; // rax

  v2 = a1 + 2;
  if ( *a1 )
  {
    v4 = 0LL;
    if ( *v2 )
    {
      v5 = 0LL;
      do
      {
        wil::StoredFailureInfo::`scalar deleting destructor'((wil::StoredFailureInfo *)(v5 + *a1), a2);
        ++v4;
        v5 += 168LL;
      }
      while ( v4 < *v2 );
    }
    v6 = (void *)*a1;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  *v2 = 0LL;
}
