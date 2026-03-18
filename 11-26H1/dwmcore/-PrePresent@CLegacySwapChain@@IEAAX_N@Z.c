/*
 * XREFs of ?PrePresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1801AA88C
 * Callers:
 *     ?Present@CLegacyStereoSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1802A6B30 (-Present@CLegacyStereoSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEAA_NXZ @ 0x180035C1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacySwapChain::PrePresent(CLegacySwapChain *this, char a2)
{
  if ( a2 )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_UnpinForNoFlip>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_UnpinForNoFlip>::GetImpl'::`2'::impl) )
      CD3DDevice::NotifyNoSequencePresent(
        *((CD3DDevice **)this + 8),
        *(struct _LUID *)((char *)this + 76),
        *((_DWORD *)this + 18));
  }
  else
  {
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 136LL))((char *)this + 24);
  }
}
