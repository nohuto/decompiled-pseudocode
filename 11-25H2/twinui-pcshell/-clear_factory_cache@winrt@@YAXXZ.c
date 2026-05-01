/*
 * XREFs of ?clear_factory_cache@winrt@@YAXXZ @ 0x1802DEB8C
 * Callers:
 *     WINRT_CanUnloadNow @ 0x180172500 (WINRT_CanUnloadNow.c)
 * Callees:
 *     WINRT_IMPL_InterlockedFlushSList @ 0x1802DBAB1 (WINRT_IMPL_InterlockedFlushSList.c)
 *     ?clear@factory_cache_entry_base@impl@winrt@@QEAAXXZ @ 0x1802DEB3C (-clear@factory_cache_entry_base@impl@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::clear_factory_cache(winrt *this)
{
  PSLIST_ENTRY v1; // rax
  struct _SLIST_ENTRY *Next; // rbx

  v1 = WINRT_IMPL_InterlockedFlushSList(&`winrt::impl::get_factory_cache'::`2'::cache);
  if ( v1 )
  {
    do
    {
      Next = v1->Next;
      winrt::impl::factory_cache_entry_base::clear((winrt::impl::factory_cache_entry_base *)&v1[-1]);
      v1 = Next;
    }
    while ( Next );
  }
}
