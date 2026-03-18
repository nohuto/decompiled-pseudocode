/*
 * XREFs of ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14028A8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE40 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z @ 0x14028AB0C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEvict(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  struct VMBPACKETCOMPLETION__ *v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-19h]
  _BYTE v10[24]; // [rsp+50h] [rbp+17h] BYREF
  _D3DKMT_EVICT Src; // [rsp+68h] [rbp+2Fh] BYREF
  UINT64 NumBytesToTrim; // [rsp+A0h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v10,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v3 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( v3 )
    {
      v4 = *(unsigned int *)(v3 + 32);
      if ( (_DWORD)v4 && ((unsigned __int64)*((unsigned int *)a1 + 36) - 36) / v4 >= 4 )
      {
        *(_QWORD *)(&Src.Flags + 1) = 0LL;
        HIDWORD(Src.NumBytesToTrim) = 0;
        Src.Flags.Value = *(_DWORD *)(v3 + 28);
        Src.AllocationList = (const D3DKMT_HANDLE *)(v3 + 36);
        Src.NumAllocations = *(_DWORD *)(v3 + 32);
        Src.hDevice = *(_DWORD *)(v3 + 24);
        v5 = DxgkEvictInternal(&Src, 0, 0LL);
        if ( v5 >= 0 )
        {
          v8 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
          NumBytesToTrim = Src.NumBytesToTrim;
          VmBusCompletePacket(v8, &NumBytesToTrim, 8u);
          v2 = 1;
        }
        else
        {
          v6 = v5;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 5203;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"DxgkEvictInternal failed: 0x%I64x",
            v6,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        v9 = *((unsigned int *)a1 + 36);
        WdLogGlobalForLineNumber = 5182;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid packet size 0x%I64x", v9, 0LL, 0LL, 0LL, 0LL);
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5175;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5175LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    return 0;
  }
}
