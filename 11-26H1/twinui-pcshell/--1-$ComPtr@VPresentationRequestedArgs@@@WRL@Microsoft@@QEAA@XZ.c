/*
 * XREFs of ??1?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x1802DD200
 * Callers:
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$21 @ 0x1806DEC42 (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$21.c)
 *     _wil::MakeOrThrow_PresentationRequestedArgs_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings___IApplicationView___unsigned_int_&__::_1_::dtor$0 @ 0x1806E0D15 (_wil--MakeOrThrow_PresentationRequestedArgs_Windows--Internal--Shell--ViewManagerInterop--IWindo.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802E41E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PresentationRequestedArgs>::~ComPtr<PresentationRequestedArgs>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(result);
  }
  return result;
}
