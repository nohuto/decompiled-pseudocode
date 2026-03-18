/*
 * XREFs of ?VmBusIsFeatureEnabled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140227D00
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14005C2E0 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DxgkGetFeatureDescriptor@@YAPEBUDXGK_FEATURE_DESC@@W4_DXGK_FEATURE_ID@@@Z @ 0x14028930C (-DxgkGetFeatureDescriptor@@YAPEBUDXGK_FEATURE_DESC@@W4_DXGK_FEATURE_ID@@@Z.c)
 *     DpiIsFeatureEnabled @ 0x1403EC964 (DpiIsFeatureEnabled.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusIsFeatureEnabled(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 FeatureDescriptor; // rax
  _BYTE v7[24]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v8; // [rsp+68h] [rbp-20h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v7,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
    if ( v4 )
    {
      v5 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL);
      v8 = 0LL;
      LODWORD(v8) = DpiIsFeatureEnabled(*(_QWORD *)(v5 + 216), *(unsigned int *)(v4 + 24), 0LL, (char *)&v8 + 10);
      if ( (BYTE12(v8) & 2) != 0 )
      {
        FeatureDescriptor = DxgkGetFeatureDescriptor(*(unsigned int *)(v4 + 24));
        DWORD1(v8) = *(_DWORD *)FeatureDescriptor;
        WORD4(v8) = *(_WORD *)(FeatureDescriptor + 4);
      }
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v8, 0x10u);
      v2 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5902;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5902LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7);
    return 0;
  }
}
