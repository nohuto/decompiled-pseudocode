/*
 * XREFs of ?VmBusDdiGetNodeMetadata@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140225070
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiGetNodeMetadata(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rsi
  char v3; // bl
  struct DXGADAPTER *v4; // rsi
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned int v6; // edx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE v12[32]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v13[5]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v14[144]; // [rsp+C0h] [rbp-40h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v12,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  if ( *(_BYTE *)(v2 + 173) )
  {
    memset(v13, 0, sizeof(v13));
    v4 = *(struct DXGADAPTER **)(v2 + 16);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, v4, 0LL);
    HIDWORD(v13[4]) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14, 0LL);
    if ( v13[4] >= 0 )
    {
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v4);
      if ( v6 < NumDifferentPhysicalAdapters )
      {
        v8 = *((_QWORD *)v4 + 379);
        v9 = 352LL * v6;
        if ( (unsigned int)v7 < *(unsigned __int16 *)(v9 + v8) )
        {
          v10 = *(_QWORD *)(v9 + v8 + 32);
          v13[0] = *(_OWORD *)(74 * v7 + v10);
          v13[1] = *(_OWORD *)(74 * v7 + v10 + 16);
          v13[2] = *(_OWORD *)(74 * v7 + v10 + 32);
          v13[3] = *(_OWORD *)(74 * v7 + v10 + 48);
          *(_QWORD *)&v13[4] = *(_QWORD *)(74 * v7 + v10 + 64);
          WORD4(v13[4]) = *(_WORD *)(74 * v7 + v10 + 72);
          goto LABEL_10;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4930;
      }
      else
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4922;
      }
      HIDWORD(v13[4]) = -1073741811;
    }
LABEL_10:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v13, 0x50u);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
    v3 = 1;
    goto LABEL_11;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 4909;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    4909LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_11:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  return v3;
}
