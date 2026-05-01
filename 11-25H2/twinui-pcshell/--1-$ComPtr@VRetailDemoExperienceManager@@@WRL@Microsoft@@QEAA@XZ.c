/*
 * XREFs of ??1?$ComPtr@VRetailDemoExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801C9D94
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_RetailDemoExperienceManager_RetailDemoExperienceManager__::_1_::dtor$2 @ 0x1806AB45F (_Microsoft--WRL--Details--MakeAndInitialize_RetailDemoExperienceManager_RetailDemoExperienceMana.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801C9DC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1801C9DC0.c)
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
