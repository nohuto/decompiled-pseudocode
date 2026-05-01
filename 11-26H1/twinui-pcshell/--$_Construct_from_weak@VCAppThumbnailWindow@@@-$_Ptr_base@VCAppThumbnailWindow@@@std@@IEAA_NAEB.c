/*
 * XREFs of ??$_Construct_from_weak@VCAppThumbnailWindow@@@?$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEBV?$weak_ptr@VCAppThumbnailWindow@@@1@@Z @ 0x1804A2544
 * Callers:
 *     ?lock@?$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1804A9FA8 (-lock@-$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA-.c)
 *     ?shared_from_this@?$enable_shared_from_this@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1804AA0EC (-shared_from_this@-$enable_shared_from_this@UBootProviderActivator@implementation@Shell@Internal.c)
 *     _lambda_d12d1524a0e5f53c0c1207645a73e7d0_::operator() @ 0x18066B294 (_lambda_d12d1524a0e5f53c0c1207645a73e7d0_--operator().c)
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18066B3C0 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x1800F0FF8 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 */

char __fastcall std::_Ptr_base<CAppThumbnailWindow>::_Construct_from_weak<CAppThumbnailWindow>(__int64 a1, __int64 a2)
{
  std::_Ref_count_base *v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // r9

  v2 = *(std::_Ref_count_base **)(a2 + 8);
  if ( !v2 || !std::_Ref_count_base::_Incref_nz(v2) )
    return 0;
  *v4 = *v3;
  v4[1] = v3[1];
  return 1;
}
