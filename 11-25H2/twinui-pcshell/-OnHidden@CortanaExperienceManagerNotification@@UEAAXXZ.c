/*
 * XREFs of ?OnHidden@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18036CAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@$$T@Z @ 0x180368B8C (--$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCor.c)
 *     ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x18036F4FC (-_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnHidden(CortanaExperienceManagerNotification *this)
{
  __int64 v1; // rdx

  if ( CortanaExperienceManagerNotification::_CanNotify((CortanaExperienceManagerNotification *)((char *)this - 8)) )
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,std::nullptr_t>(
      *(_QWORD *)(v1 + 48) + 72LL,
      *(_QWORD *)(v1 + 48));
}
