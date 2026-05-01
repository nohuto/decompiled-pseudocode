/*
 * XREFs of ?OnDeviceLocked@SearchAppExperienceManagerNotification@@UEAAXXZ @ 0x1803A3300
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@$$T@Z @ 0x18036FEE0 (--$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCor.c)
 */

void __fastcall SearchAppExperienceManagerNotification::OnDeviceLocked(SearchAppExperienceManagerNotification *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
  {
    *(_BYTE *)(v1 + 545) = 1;
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,std::nullptr_t>(
      *((_QWORD *)this + 5) + 336LL,
      *((_QWORD *)this + 5));
  }
}
