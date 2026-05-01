/*
 * XREFs of ??1?$ComPtr@VCControlCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C4464
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CControlCenterExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x1806DB7C1 (_Microsoft--WRL--Details--MakeAndInitialize_CControlCenterExperienceManager_IInspec_ea_1806DB7C1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@UIInputSwitchHost@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180206BA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_180206BA0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CControlCenterExperienceManager>::~ComPtr<CControlCenterExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputSwitchHost,IInputHostLayoutChanges>::Release(result);
  }
  return result;
}
