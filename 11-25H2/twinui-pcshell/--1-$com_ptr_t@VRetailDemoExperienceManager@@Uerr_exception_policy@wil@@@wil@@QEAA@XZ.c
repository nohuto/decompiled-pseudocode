/*
 * XREFs of ??1?$com_ptr_t@VRetailDemoExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1803947D0
 * Callers:
 *     ?CreateInstance@RetailDemoExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180394AB0 (-CreateInstance@RetailDemoExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _RetailDemoExperienceManagerFactory::CreateInstance_::_1_::dtor$0 @ 0x1806BF80B (_RetailDemoExperienceManagerFactory--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801C9DC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1801C9DC0.c)
 */

__int64 __fastcall wil::com_ptr_t<RetailDemoExperienceManager,wil::err_exception_policy>::~com_ptr_t<RetailDemoExperienceManager,wil::err_exception_policy>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,Windows::Internal::RetailDemo::IRetailDemoExperienceManager,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::Release();
  return result;
}
