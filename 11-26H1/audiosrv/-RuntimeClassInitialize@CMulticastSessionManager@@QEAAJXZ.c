/*
 * XREFs of ?RuntimeClassInitialize@CMulticastSessionManager@@QEAAJXZ @ 0x180108340
 * Callers:
 *     ??$MakeAndInitialize@VCMulticastSessionManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMulticastSessionManager@@@Z @ 0x180106E08 (--$MakeAndInitialize@VCMulticastSessionManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMultica.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800AE644 (--1-$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VBluetoothBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800E85C8 (--$MakeAndInitialize@VBluetoothBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerN.c)
 *     ?push_front@?$forward_list@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801085CC (-push_front@-$forward_list@V-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMulticastSessionManager::RuntimeClassInitialize(CMulticastSessionManager *this)
{
  int v1; // eax
  unsigned int v2; // edi
  __int64 result; // rax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  BluetoothBroadcastProvider *v6; // [rsp+30h] [rbp+8h] BYREF
  struct IMulticastManagerNotificationClient *v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = (struct IMulticastManagerNotificationClient *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v1 = Microsoft::WRL::Details::MakeAndInitialize<BluetoothBroadcastProvider,IMulticastProvider,IMulticastManagerNotificationClient * &>(
         &v6,
         &v7);
  v2 = v1;
  if ( v1 >= 0 )
  {
    try
    {
      std::forward_list<wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>>::push_front();
      wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&v6);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0xA7,
                             (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
                             v4);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D1,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
      (const char *)(unsigned int)v1);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)v2);
    wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&v6);
    return v2;
  }
  return result;
}
