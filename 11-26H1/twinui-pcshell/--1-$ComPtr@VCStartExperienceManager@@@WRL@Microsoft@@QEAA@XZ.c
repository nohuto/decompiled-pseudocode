/*
 * XREFs of ??1?$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801AA474
 * Callers:
 *     _StartExperienceManagerFactory::GetExperienceManager_::_1_::dtor$0 @ 0x1806D8AB1 (_StartExperienceManagerFactory--GetExperienceManager_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::Make_CStartExperienceManager_bool__::_1_::dtor$0 @ 0x1806E00A7 (_Microsoft--WRL--Details--Make_CStartExperienceManager_bool__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CStartExperienceManager>::~ComPtr<CStartExperienceManager>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release(result);
  }
  return result;
}
