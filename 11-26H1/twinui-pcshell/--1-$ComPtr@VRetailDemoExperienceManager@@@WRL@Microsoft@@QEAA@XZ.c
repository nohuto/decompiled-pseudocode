/*
 * XREFs of ??1?$ComPtr@VRetailDemoExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180216CF0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_RetailDemoExperienceManager_RetailDemoExperienceManager__::_1_::dtor$2 @ 0x1806D2FBB (_Microsoft--WRL--Details--MakeAndInitialize_RetailDemoExperienceManager_RetailDemoExperienceMana.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D7620 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1800D7620.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<RetailDemoExperienceManager>::~ComPtr<RetailDemoExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,Windows::Internal::RetailDemo::IRetailDemoExperienceManager,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
