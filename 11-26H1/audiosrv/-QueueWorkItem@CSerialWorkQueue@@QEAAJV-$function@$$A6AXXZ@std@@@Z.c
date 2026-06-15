/*
 * XREFs of ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001BB70
 * Callers:
 *     ??1CPowerReference@@QEAA@XZ @ 0x180011640 (--1CPowerReference@@QEAA@XZ.c)
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180011774 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18001D748 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x18001E3EC (-OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnActiveRenderEndpointChanged@CAudioRenderEndpointChangeDelegator@@AEAAXXZ @ 0x180047054 (-OnActiveRenderEndpointChanged@CAudioRenderEndpointChangeDelegator@@AEAAXXZ.c)
 *     ?OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x18005C560 (-OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettingsAsync@CPolicyConfig@@SAXXZ @ 0x180061B50 (-UpdateRenderingEndpointsSpatialSettingsAsync@CPolicyConfig@@SAXXZ.c)
 *     ?ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z @ 0x180061BF0 (-ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x1800628AC (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?OnStreamStateChanged@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x1800873F4 (-OnStreamStateChanged@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothContr.c)
 *     ?OnStreamStateChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x1800874A4 (-OnStreamStateChanged@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@.c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18008D064 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z @ 0x1800CA4B0 (-OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z.c)
 *     wistd::__function::__func__lambda_cc54e5dd528306179db4038c2fc6bf4d__void___cdecl(enum__PO_STANDBY_AUDIO_POLICY_const_&)_::operator() @ 0x1800D7730 (wistd--__function--__func__lambda_cc54e5dd528306179db4038c2fc6bf4d__void___cdecl(enum__PO_STANDB.c)
 *     ?OnBidirectionalModeChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXXZ @ 0x1800DD3B8 (-OnBidirectionalModeChanged@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothCon.c)
 *     ?OnBidirectionalModeChanged@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@AEAAXXZ @ 0x1800DD45C (-OnBidirectionalModeChanged@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@Bluetoot.c)
 *     ?OnSaDeviceDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z @ 0x1800E4AF0 (-OnSaDeviceDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEBUSaDeviceParams@@@Z.c)
 *     ?OnStreamStateChanged@CBtAudioResourceManagerBase@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800E4C10 (-OnStreamStateChanged@CBtAudioResourceManagerBase@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamSta.c)
 *     wistd::__function::__func__lambda_735ddb5d5b78506d8297ba52162f5331__void___cdecl(enum_Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState_const_&)_::operator() @ 0x1800EAFF0 (wistd--__function--__func__lambda_735ddb5d5b78506d8297ba52162f5331__void___cdecl(enum_Microsoft-.c)
 *     ?OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800EC560 (-OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     ?OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800EC690 (-OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z.c)
 *     ?DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z @ 0x1800FCA94 (-DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z.c)
 *     ?OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800FE940 (-OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     ?OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z @ 0x180103720 (-OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z.c)
 *     ?ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ @ 0x180103ADC (-ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ.c)
 *     ?ScanForMulticastSessions@CMulticastSessionManager@@UEAAJXZ @ 0x180108400 (-ScanForMulticastSessions@CMulticastSessionManager@@UEAAJXZ.c)
 *     ?ValidateSpatialAudioSettings@CPolicyConfig@@UEAAJXZ @ 0x18010CE40 (-ValidateSpatialAudioSettings@CPolicyConfig@@UEAAJXZ.c)
 *     ?OnClientInvalidation@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18010FF14 (-OnClientInvalidation@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?OnPoStandbyAudioRequestReceived@@YAJW4_PO_STANDBY_AUDIO_POLICY@@@Z @ 0x180112BD0 (-OnPoStandbyAudioRequestReceived@@YAJW4_PO_STANDBY_AUDIO_POLICY@@@Z.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x18001BEB0 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x18001BF60 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x18001C8B8 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSerialWorkQueue::QueueWorkItem(__int64 a1, __int64 *a2)
{
  signed int v4; // esi
  PTP_POOL Threadpool; // rax
  signed int v6; // eax
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int v8; // eax
  __int64 *v9; // rax
  unsigned int v10; // edx
  __int64 *v11; // rbx
  __int64 (__fastcall ***v12)(_QWORD, _BYTE *); // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v14; // rax
  _DWORD *v15; // r15
  volatile signed __int32 *v16; // rsi
  __int64 v17; // rbp
  _BYTE *v18; // rdx
  struct _TP_WORK *ThreadpoolWork; // rbp
  __int64 *v20; // rcx
  __int64 v21; // rdx
  signed int LastError; // eax
  signed int v24; // eax
  _BYTE v25[56]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE *v26; // [rsp+58h] [rbp-40h]

  v4 = 0;
  if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load(a1 + 80) )
    goto LABEL_35;
  if ( *(_QWORD *)a1 )
  {
LABEL_13:
    v9 = (__int64 *)operator new[](0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v9;
    if ( v9 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      v9[2] = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
    {
      v26 = 0LL;
      v12 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))a2[7];
      if ( v12 )
        v26 = (_BYTE *)(**v12)(v12, v25);
      v11[2] = a1;
      ProcessHeap = GetProcessHeap();
      v14 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
      v15 = v14;
      if ( v14 )
      {
        *(_OWORD *)v14 = 0LL;
        v14[2] = 1;
        v14[3] = 1;
        *(_QWORD *)v14 = &std::_Ref_count_obj2<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
        std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(v14 + 4, v25);
      }
      else
      {
        v15 = 0LL;
      }
      *v11 = (__int64)(v15 + 4);
      v16 = (volatile signed __int32 *)v11[1];
      v11[1] = (__int64)v15;
      if ( v16 )
      {
        if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        }
      }
      v17 = *v11;
      v4 = -2147024882;
      if ( *v11 )
        v4 = 0;
      if ( v26 )
      {
        v18 = v25;
        LOBYTE(v18) = v26 != v25;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v26 + 32LL))(v26, v18);
      }
      if ( !v17 )
        goto LABEL_33;
      ThreadpoolWork = CreateThreadpoolWork(
                         (PTP_WORK_CALLBACK)CSerialWorkQueue::WorkCallback,
                         v11,
                         (PTP_CALLBACK_ENVIRON)(a1 + 8));
      if ( ThreadpoolWork )
      {
        v4 = 0;
      }
      else
      {
        LastError = GetLastError();
        v4 = LastError;
        if ( LastError > 0 )
          v4 = (unsigned __int16)LastError | 0x80070000;
        if ( v4 < 0 )
          goto LABEL_33;
      }
      v11 = 0LL;
      SubmitThreadpoolWork(ThreadpoolWork);
    }
    else
    {
      v4 = -2147024882;
    }
LABEL_33:
    if ( v11 )
      _WorkTask::`scalar deleting destructor'((_WorkTask *)v11, v10);
    goto LABEL_35;
  }
  Threadpool = CreateThreadpool(0LL);
  *(_QWORD *)a1 = Threadpool;
  if ( Threadpool )
    goto LABEL_11;
  v24 = GetLastError();
  v4 = v24;
  if ( v24 > 0 )
    v4 = (unsigned __int16)v24 | 0x80070000;
  if ( v4 >= 0 )
  {
LABEL_11:
    if ( SetThreadpoolThreadMinimum(*(PTP_POOL *)a1, 1u) )
      goto LABEL_50;
    v6 = GetLastError();
    v4 = v6;
    if ( v6 > 0 )
      v4 = (unsigned __int16)v6 | 0x80070000;
    if ( v4 >= 0 )
    {
LABEL_50:
      ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
      *(_QWORD *)(a1 + 168) = ThreadpoolCleanupGroup;
      if ( ThreadpoolCleanupGroup )
        goto LABEL_12;
      v8 = GetLastError();
      v4 = v8;
      if ( v8 > 0 )
        v4 = (unsigned __int16)v8 | 0x80070000;
      if ( v4 >= 0 )
      {
LABEL_12:
        SetThreadpoolThreadMaximum(*(PTP_POOL *)a1, 1u);
        *(_QWORD *)(a1 + 16) = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 168);
        *(_QWORD *)(a1 + 32) = 0LL;
        goto LABEL_13;
      }
    }
  }
LABEL_35:
  v20 = (__int64 *)a2[7];
  if ( v20 )
  {
    v21 = *v20;
    LOBYTE(v21) = v20 != a2;
    (*(void (__fastcall **)(__int64 *, __int64))(*v20 + 32))(v20, v21);
    a2[7] = 0LL;
  }
  return (unsigned int)v4;
}
