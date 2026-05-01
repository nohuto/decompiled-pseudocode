/*
 * XREFs of ?clear@factory_cache_entry_base@impl@winrt@@QEAAXXZ @ 0x1802D782C
 * Callers:
 *     ?clear_factory_cache@winrt@@YAXXZ @ 0x1802D787C (-clear_factory_cache@winrt@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::impl::factory_cache_entry_base::clear(winrt::impl::factory_cache_entry_base *this)
{
  volatile signed __int64 v1; // r8
  __int128 v2; // rt0
  unsigned __int8 v3; // tt

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v2 = *(unsigned __int64 *)this;
    v3 = _InterlockedCompareExchange128((volatile signed __int64 *)this, 0LL, 0LL, (signed __int64 *)&v2);
    if ( v3 != 0 )
      (*(void (__fastcall **)(volatile signed __int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
}
