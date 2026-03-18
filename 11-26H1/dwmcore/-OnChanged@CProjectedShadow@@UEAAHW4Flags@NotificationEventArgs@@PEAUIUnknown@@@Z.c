/*
 * XREFs of ?OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180193250
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18001EC50 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 */

__int64 __fastcall CProjectedShadow::OnChanged(_QWORD *a1, int a2, _QWORD *a3)
{
  if ( a3 && (!a2 || (unsigned int)(a2 - 5) <= 1) )
  {
    detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(a1 + 32);
    if ( a3 == a1 || a3 == (_QWORD *)a1[10] )
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(a1 + 43);
  }
  return 0LL;
}
