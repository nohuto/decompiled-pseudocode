/*
 * XREFs of ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140225B00
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14005C2E0 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x1400678B0 (-FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x14040CB14 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyNtSharedObject(struct DXGPROCESS **a1)
{
  __int64 v2; // rbx
  struct DXGPROCESS *v3; // rsi
  unsigned int v4; // eax
  int v5; // r8d
  __int64 v6; // rsi
  DXGSHAREDVMOBJECT *v8; // rsi
  struct DXGPROCESS *v9; // rcx
  struct VMBPACKETCOMPLETION__ *v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-98h]
  int v12; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-48h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( !v2 )
    return 0;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v13, a1[12]);
  v3 = a1[12];
  v4 = (*(_DWORD *)(v2 + 24) >> 6) & 0xFFFFFF;
  if ( v4 >= *((_DWORD *)v3 + 74)
    || (v5 = *(_DWORD *)(*((_QWORD *)v3 + 35) + 16LL * v4 + 8),
        ((*(_DWORD *)(v2 + 24) >> 25) & 0x60) != (*(_BYTE *)(*((_QWORD *)v3 + 35) + 16LL * v4 + 8) & 0x60))
    || (v5 & 0x2000) != 0
    || (v5 & 0x1F) == 0 )
  {
LABEL_8:
    WdLogSingleEntry1(2LL);
    v11 = *(unsigned int *)(v2 + 24);
    WdLogGlobalForLineNumber = 7720;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid NT shared object handle: 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    return 0;
  }
  v6 = *((_QWORD *)v3 + 35);
  if ( (*(_BYTE *)(v6 + 16LL * v4 + 8) & 0x1F) != 0xD )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_8;
  }
  v8 = *(DXGSHAREDVMOBJECT **)(v6 + 16LL * v4);
  if ( !v8 )
    goto LABEL_8;
  DXGPROCESS::FreeHandleUnsafe(a1[12], *(_DWORD *)(v2 + 24));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  v9 = a1[12];
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*((PRKPROCESS *)v9 + 7), &ApcState);
  DXGSHAREDVMOBJECT::ReleaseReference(v8);
  KeUnstackDetachProcess(&ApcState);
  v10 = a1[16];
  v12 = 0;
  VmBusCompletePacket(v10, &v12, 4u);
  return 1;
}
