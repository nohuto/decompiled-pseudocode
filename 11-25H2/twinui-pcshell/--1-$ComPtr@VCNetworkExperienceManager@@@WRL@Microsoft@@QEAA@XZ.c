/*
 * XREFs of ??1?$ComPtr@VCNetworkExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802CCBF0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CNetworkExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$1 @ 0x1806AAC56 (_Microsoft--WRL--Details--MakeAndInitialize_CNetworkExperienceManager_IInspectable_IServiceProvi.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18020B5B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UINetworkFlyoutExp.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CNetworkExperienceManager>::~ComPtr<CNetworkExperienceManager>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager,Windows::Foundation::IClosable>::Release(result);
  }
  return result;
}
