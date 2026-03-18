/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x14004A9C0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x140025B40 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_q @ 0x14002EC00 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x14002ED00 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_i @ 0x14005D6F0 (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase4(_DWORD *a1)
{
  int v1; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // edx
  __int64 *v6; // rbp
  __int64 Pool2; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rax
  int v13; // eax
  int v14; // edx
  __int64 result; // rax
  int v16; // [rsp+70h] [rbp+8h] BYREF
  int v17; // [rsp+74h] [rbp+Ch]

  v1 = 0;
  a1[53] = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      67,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      (char)a1,
      0);
  v3 = a1[26];
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v4 = a1[27];
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v3 != 1 || v4 != 5 || !gUsb4ControlGranted )
    goto LABEL_15;
  v6 = AMLIGetNamedChild(*(__int64 **)(RootDeviceExtension + 760), 1129533279);
  if ( v6 )
  {
    Pool2 = ExAllocatePool2(64LL, 160LL, 1097884481LL);
    v16 = 0;
    v8 = Pool2;
    v9 = 2LL;
    v10 = 1LL;
    v17 = AcpiRootFeaturesGranted;
    *(_QWORD *)(Pool2 + 32) = &SB_OSC_UUID;
    v11 = (_QWORD *)(Pool2 + 56);
    *(_WORD *)(v8 + 2) = 3;
    *(_DWORD *)(v8 + 24) = 16;
    do
    {
      *((_WORD *)v11 - 7) = 1;
      *v11 = v10++;
      v11 += 5;
      --v9;
    }
    while ( v9 );
    *(_WORD *)(v8 + 122) = 3;
    *(_DWORD *)(v8 + 144) = 8;
    *(_QWORD *)(v8 + 152) = &v16;
    v12 = ExAllocatePool2(64LL, 40LL, 1097884481LL);
    v13 = AMLIAsyncEvalObject(v6, v12, 4, v8, &ACPIDeviceCompleteOscReevalPhase, (__int64)a1);
    v1 = v13;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_i(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        10,
        68,
        (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
        v13);
    }
    AMLIDereferenceHandleEx((__int64)v6);
    ExFreePoolWithTag((PVOID)v8, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      10,
      69,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      (char)a1);
  }
  result = 259LL;
  if ( v1 != 259 )
  {
LABEL_15:
    ACPIDeviceCompleteGenericPhase(0LL, v1, 0LL, (__int64)a1);
    return 0LL;
  }
  return result;
}
