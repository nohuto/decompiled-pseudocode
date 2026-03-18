/*
 * XREFs of OSNotifyCreate @ 0x14001E5B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsL @ 0x14001C7BC (WPP_RECORDER_SF_qsL.c)
 *     OSNotifyCreateDevice @ 0x14001E2EC (OSNotifyCreateDevice.c)
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     OSNotifyCreateOperationRegion @ 0x14001E71C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateThermalZone @ 0x140051E28 (OSNotifyCreateThermalZone.c)
 *     OSNotifyCreatePowerResource @ 0x140063BC4 (OSNotifyCreatePowerResource.c)
 *     OSNotifyCreateProcessor @ 0x140063C6C (OSNotifyCreateProcessor.c)
 */

__int64 __fastcall OSNotifyCreate(int a1, ULONG_PTR a2)
{
  int v4; // edx
  KIRQL v5; // si
  int Device; // eax
  int v7; // ebx
  __int64 v8; // rdx

  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  switch ( a1 )
  {
    case 6:
      Device = OSNotifyCreateDevice(a2, 0LL);
      goto LABEL_4;
    case 10:
      Device = OSNotifyCreateOperationRegion(a2);
LABEL_4:
      v7 = Device;
      goto LABEL_5;
    case 11:
      Device = OSNotifyCreatePowerResource(a2);
      goto LABEL_4;
    case 12:
      Device = OSNotifyCreateProcessor(a2, 0LL);
      goto LABEL_4;
    case 13:
      Device = OSNotifyCreateThermalZone(a2, 0LL);
      goto LABEL_4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      21,
      10,
      (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
      a1);
  }
  v7 = 0;
LABEL_5:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_14008E680 = *(_DWORD *)(*(_QWORD *)a2 + 40LL);
    byte_14008E684 = 0;
    WPP_RECORDER_SF_qsL(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      6u,
      0xBu,
      (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
      a2,
      &dword_14008E680,
      v7);
  }
  return 0LL;
}
