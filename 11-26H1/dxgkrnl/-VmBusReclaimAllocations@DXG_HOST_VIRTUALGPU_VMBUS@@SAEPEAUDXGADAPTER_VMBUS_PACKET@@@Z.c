/*
 * XREFs of ?VmBusReclaimAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022AF90
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004ED14 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkReclaimAllocations2 @ 0x14038E1A0 (DxgkReclaimAllocations2.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusReclaimAllocations(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v4; // rbx
  __int128 *v5; // rsi
  __int64 v6; // r14
  unsigned int v7; // r12d
  unsigned __int64 v8; // r8
  int v9; // eax
  __int128 Src; // [rsp+50h] [rbp-29h] BYREF
  __int128 v11; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+70h] [rbp-9h]
  _BYTE v13[24]; // [rsp+78h] [rbp-1h] BYREF
  __int128 v14; // [rsp+90h] [rbp+17h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v13,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
    if ( v4 )
    {
      v5 = &v14;
      LODWORD(v6) = -1073741811;
      v14 = 0LL;
      v12 = 0LL;
      Src = 0LL;
      v7 = 16;
      v11 = 0LL;
      v8 = *(unsigned int *)(v4 + 32);
      if ( (_DWORD)v8 && ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) / v8 >= 4 )
      {
        if ( !*(_BYTE *)(v4 + 37)
          || (unsigned int)v8 <= 1
          || (v7 = 4 * v8 + 12, (v5 = (__int128 *)operator new[](v7, 0x4B677844u, 64LL)) != 0LL) )
        {
          *(_QWORD *)&Src = *(_QWORD *)(v4 + 28);
          if ( *(_BYTE *)(v4 + 36) )
            *((_QWORD *)&Src + 1) = v4 + 40;
          else
            *(_QWORD *)&v11 = v4 + 40;
          if ( *(_BYTE *)(v4 + 37) )
            *((_QWORD *)&v11 + 1) = (char *)v5 + 12;
          v9 = DxgkReclaimAllocations2(&Src);
          v6 = v9;
          if ( v9 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1684;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DxgkReclaimAllocations failed: 0x%I64x",
              v6,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1659;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate memory for reclaim results",
            1659LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v6) = -1073741801;
        }
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1649;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid packet size", 1649LL, 0LL, 0LL, 0LL, 0LL);
      }
      *((_DWORD *)v5 + 2) = v6;
      *(_QWORD *)v5 = v12;
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v5, v7);
      if ( v5 != &v14 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
      v2 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1636;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1636LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    return 0;
  }
}
