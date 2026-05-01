/*
 * XREFs of ?Release@?$implements_delegate@U?$TypedEventHandler@UTileStore@Tiles@Internal@Windows@winrt@@UTileStoreChangedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_b2611106fbec30b7121fc45a813eabb5_@@@impl@winrt@@UEAAIXZ @ 0x18037D850
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E68E8 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x180287CD8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>,_lambda_b2611106fbec30b7121fc45a813eabb5_>::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(a1 + 2);
  if ( !v2 && a1 )
  {
    winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
    operator delete((void *)a1, (const struct std::nothrow_t *)0x28);
  }
  return v2;
}
