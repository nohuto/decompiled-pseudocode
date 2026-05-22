/*
 * XREFs of ?clear@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAAXXZ @ 0x1800A34B8
 * Callers:
 *     ??1test_state@tip2@@QEAA@XZ @ 0x1800A317C (--1test_state@tip2@@QEAA@XZ.c)
 * Callees:
 *     ??_GStoredFailureInfo@wil@@QEAAPEAXI@Z @ 0x1800A3278 (--_GStoredFailureInfo@wil@@QEAAPEAXI@Z.c)
 */

void __fastcall tip2::vector_nothrow<wil::StoredFailureInfo>::clear(_QWORD *a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rbx
  void *v5; // rbx
  HANDLE ProcessHeap; // rax

  v1 = a1 + 2;
  if ( *a1 )
  {
    v3 = 0LL;
    if ( *v1 )
    {
      v4 = 0LL;
      do
      {
        wil::StoredFailureInfo::`scalar deleting destructor'((volatile signed __int32 **)(v4 + *a1));
        ++v3;
        v4 += 168LL;
      }
      while ( v3 < *v1 );
    }
    v5 = (void *)*a1;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v5);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  *v1 = 0LL;
}
