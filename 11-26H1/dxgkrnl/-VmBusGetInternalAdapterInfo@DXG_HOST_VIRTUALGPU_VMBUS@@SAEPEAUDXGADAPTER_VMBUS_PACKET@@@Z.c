/*
 * XREFs of ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140195EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1401F6B18 (-IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 *     ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x140220B64 (-FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetInternalAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rsi
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int8 IsVailEnabled; // al
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // esi
  __int64 v13; // rax
  unsigned int v14; // r8d
  __int64 v16; // [rsp+58h] [rbp-B0h]
  _BYTE v17[24]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v18[89]; // [rsp+78h] [rbp-90h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v17,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  if ( *(_BYTE *)(v2 + 173) )
  {
    memset(v18, 0, sizeof(v18));
    DXGADAPTER::FillInternalAdapterInfo(
      *(DXGADAPTER **)(v2 + 16),
      (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)v18);
    v4 = *((_QWORD *)a1 + 12);
    HIDWORD(v18[1]) = HIDWORD(v18[1]) & 0xFFFFFFFE | *(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) & 1;
    v5 = *(_QWORD *)(v4 + 592);
    LOBYTE(v4) = *(_BYTE *)(v5 + 338);
    *(_BYTE *)(v5 + 338) = 0;
    LODWORD(v5) = HIDWORD(v18[1]) & 0xFFFFFFFD | (2 * (v4 & 1));
    v6 = *((_QWORD *)a1 + 10);
    HIDWORD(v18[1]) = v5;
    v7 = *((_QWORD *)a1 + 12);
    HIDWORD(v18[0]) = *(_DWORD *)(*(_QWORD *)(v6 + 16) + 3104LL);
    IsVailEnabled = DXGVIRTUALMACHINE::IsVailEnabled(*(DXGVIRTUALMACHINE **)(v7 + 592));
    v9 = HIDWORD(v18[1]) & 0xFFFFFFFB | (4 * (IsVailEnabled & 1));
    v10 = *((_QWORD *)a1 + 12);
    HIDWORD(v18[1]) = v9;
    v11 = *(_QWORD *)(v10 + 592);
    v12 = *(_DWORD *)(v11 + 392);
    if ( v12 >= 0x21 )
      HIDWORD(v18[1]) = v9 & 0xFFFFFFDF | (*(_QWORD *)(v11 + 272) != 0LL ? 0x20 : 0);
    if ( v12 >= 0x28 )
    {
      if ( (Feature_AsyncVmBusMessages__private_featureState & 0x10) == 0 )
      {
        v16 = Feature_AsyncVmBusMessages__private_featureState | 1u;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_AsyncVmBusMessages__private_descriptor,
          v16,
          3LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v16,
          3,
          (__int64)&Feature_AsyncVmBusMessages__private_descriptor);
      }
      v13 = *((_QWORD *)a1 + 13);
      HIDWORD(v18[1]) |= 0x40u;
      *(_BYTE *)(v13 + 339) = 1;
    }
    v18[88] = *(_QWORD *)(*((_QWORD *)a1 + 10) + 28LL);
    if ( v12 > 0x10 )
      v14 = v12 < 0x22 ? 704 : 712;
    else
      v14 = 24;
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v18, v14);
    v3 = 1;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5329;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5329LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
  return v3;
}
