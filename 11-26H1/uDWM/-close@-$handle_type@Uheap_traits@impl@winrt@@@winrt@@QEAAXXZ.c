/*
 * XREFs of ?close@?$handle_type@Uheap_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800931D4
 * Callers:
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x180093284 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 * Callees:
 *     WINRT_IMPL_HeapFree @ 0x18008F043 (WINRT_IMPL_HeapFree.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x18008F073 (WINRT_IMPL_GetProcessHeap.c)
 */

void __fastcall winrt::handle_type<winrt::impl::heap_traits>::close(void **a1)
{
  void *v1; // rdi
  HANDLE ProcessHeap; // rax

  v1 = *a1;
  if ( *a1 )
  {
    ProcessHeap = WINRT_IMPL_GetProcessHeap();
    WINRT_IMPL_HeapFree(ProcessHeap, 0, v1);
    *a1 = 0LL;
  }
}
