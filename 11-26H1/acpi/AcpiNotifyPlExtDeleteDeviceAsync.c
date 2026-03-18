/*
 * XREFs of AcpiNotifyPlExtDeleteDeviceAsync @ 0x1400661C8
 * Callers:
 *     AcpiNotifyPlExtDeleteDeviceSync @ 0x1400663A0 (AcpiNotifyPlExtDeleteDeviceSync.c)
 * Callees:
 *     AcpiQueryPlatformExtensionRegistered @ 0x140035754 (AcpiQueryPlatformExtensionRegistered.c)
 *     WPP_RECORDER_SF_qD @ 0x14003D714 (WPP_RECORDER_SF_qD.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x140065E2C (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1400660C0 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 *     WPP_RECORDER_SF_qqD @ 0x140066C6C (WPP_RECORDER_SF_qqD.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcpiNotifyPlExtDeleteDeviceAsync(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID v4; // rsi
  unsigned int v8; // ebx
  __int64 *Pool2; // rax
  int v10; // edx
  __int64 *v11; // rdi
  int v12; // eax
  int v13; // edx
  int v14; // edx
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  P = 0LL;
  if ( !qword_14008FAA8 || !(unsigned __int8)AcpiQueryPlatformExtensionRegistered() )
    return 0;
  Pool2 = (__int64 *)ExAllocatePool2(64LL, 72LL, 1315988289LL);
  v11 = Pool2;
  if ( !Pool2 )
  {
    v8 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v10, 19, 14);
LABEL_15:
    if ( v4 )
      ExFreePoolWithTag(v4, 0x4E706341u);
    return v8;
  }
  Pool2[1] = (__int64)Pool2;
  *Pool2 = (__int64)Pool2;
  Pool2[4] = a2;
  Pool2[6] = a4;
  Pool2[5] = (__int64)AcpiNotifyDeleteDeviceSyncCompletion;
  Pool2[2] = a1;
  v12 = AcpiCreateDiscoveryDeleteParameters(Pool2, 0, (__int64 *)&P);
  v4 = P;
  v8 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v13, 19, 15);
    ExFreePoolWithTag(v11, 0x4E706341u);
    goto LABEL_15;
  }
  v8 = ((__int64 (__fastcall *)(PVOID))xmmword_14008FAB0)(P);
  if ( v8 != 259 )
  {
    AcpiNotifyDiscoverDeleteMainCompletion((char *)v4);
    v8 = 259;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      19,
      16,
      (__int64)&WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids,
      a1,
      v8);
  }
  return v8;
}
