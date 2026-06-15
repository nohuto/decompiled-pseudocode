/*
 * XREFs of ?OnSaDeviceDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z @ 0x1800E4AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001BB70 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180040624 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification@@@details@wil@@QEAA_NXZ @ 0x1800DEFD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotif.c)
 *     ?DecrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800E1C90 (-DecrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 *     ?IsBidirectionalSaDevice@CBtAudioResourceManagerBase@@IEAA_NW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z @ 0x1800E4690 (-IsBidirectionalSaDevice@CBtAudioResourceManagerBase@@IEAA_NW4AUDIO_DIRECTION@@PEBUSaDeviceParam.c)
 *     ?UpdateCurrentGameOperatingMode@CBtAudioResourceManagerBase@@IEAAXPEA_N@Z @ 0x1800E788C (-UpdateCurrentGameOperatingMode@CBtAudioResourceManagerBase@@IEAAXPEA_N@Z.c)
 */

void __fastcall CBtAudioResourceManagerBase::OnSaDeviceDestroyed(CBtAudioResourceManagerBase *a1, int a2, __int64 a3)
{
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  int v7; // eax
  struct CSerialWorkQueue *v8; // rax
  int v9; // eax
  __int64 (__fastcall **v10)(); // [rsp+20h] [rbp-40h] BYREF
  CBtAudioResourceManagerBase *v11; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall ***v12)(); // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  bool v14; // [rsp+78h] [rbp+18h] BYREF

  if ( a2 == 1 )
  {
    *((_DWORD *)a1 + 128) = 0;
    SerialWorkQueue = GetSerialWorkQueue();
    v11 = a1;
    v10 = off_180176008;
    v12 = &v10;
    v7 = CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, (__int64 *)&v10);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        684LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    *((_DWORD *)a1 + 127) = 0;
  }
  v14 = 0;
  CBtAudioResourceManagerBase::UpdateCurrentGameOperatingMode(a1, &v14);
  if ( v14 )
  {
    v8 = GetSerialWorkQueue();
    v11 = a1;
    v10 = off_180175FD8;
    v12 = &v10;
    v9 = CSerialWorkQueue::QueueWorkItem((__int64)v8, (__int64 *)&v10);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        699LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v9);
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::GetImpl'::`2'::impl) )
  {
    if ( CBtAudioResourceManagerBase::IsBidirectionalSaDevice((__int64)a1, a2, a3) )
      CBtAudioResourceManagerBase::DecrementBidirectionalSaDeviceCount(a1);
  }
}
