/*
 * XREFs of ?Release@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ @ 0x180120D2C
 * Callers:
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1800AEB68 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CMonitor::CMonitorNotification_CMonitor::CMonitorNotification_enum___MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001_CMonitor____::_1_::dtor$1 @ 0x18016B097 (_Microsoft--WRL--Details--MakeAndInitialize_CMonitor--CMonitorNotification_CMonitor_ea_18016B097.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSessionEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800BCAB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSessionEve.c)
 */

__int64 __fastcall ATL::CComPtrBase<CMonitor::CMonitorNotification>::Release(__int64 *a1, volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSessionEvents>::Release(
             result,
             a2);
  }
  return result;
}
