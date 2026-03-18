/*
 * XREFs of ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403BCBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14005C2E0 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ??_GCDriverStoreCopy@@QEAAPEAXI@Z @ 0x14006D578 (--_GCDriverStoreCopy@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401D7008 (-EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401D7994 (-ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401D7FF8 (-SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_.c)
 *     DpiGetDriverStorePath @ 0x1403BCEA0 (DpiGetDriverStorePath.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDriverStoreFile(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v9; // rax
  int v10; // eax
  CDriverStoreCopy *v11; // rcx
  int v12; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v14[32]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v15[148]; // [rsp+90h] [rbp-70h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v13,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v3 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
    if ( !v3 )
    {
LABEL_10:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
      return v2;
    }
    v4 = *((_QWORD *)a1 + 10);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v14, (struct _KTHREAD **)(v4 + 56));
    memset(v15, 0, 0x248uLL);
    if ( *(_BYTE *)(v4 + 153) )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 5944;
      v15[4] = -1073741790;
      goto LABEL_9;
    }
    if ( !*(_BYTE *)(v3 + 24) )
    {
      v5 = *(_QWORD *)(v4 + 16);
      v12 = 520;
      v15[4] = DpiGetDriverStorePath(*(_QWORD *)(v5 + 216), &v15[15], &v12);
      if ( v15[4] < 0 )
      {
LABEL_9:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v15, 0x248u);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
        v2 = 1;
        goto LABEL_10;
      }
      v15[4] = 0;
      if ( *(_QWORD *)(v4 + 336) )
        goto LABEL_14;
      v6 = operator new(0x658uLL, 0x4B677844u, 256LL);
      v7 = v6;
      if ( !v6 )
      {
        *(_QWORD *)(v4 + 336) = 0LL;
        v15[4] = -1073741801;
        goto LABEL_9;
      }
      *(_QWORD *)v6 = 0LL;
      *(_DWORD *)(v6 + 8) = 536;
      *(_QWORD *)(v6 + 16) = -1LL;
      *(_DWORD *)(v6 + 1584) = 0;
      v9 = (_QWORD *)(v6 + 1592);
      v9[1] = v9;
      *v9 = v9;
      *(_QWORD *)(v7 + 1616) = v7 + 1608;
      *(_QWORD *)(v7 + 1608) = v7 + 1608;
      *(_QWORD *)(v4 + 336) = v7;
      HIWORD(v15[144]) = 0;
      CDriverStoreCopy::SetRootDirectory(
        *(CDriverStoreCopy **)(v4 + 336),
        *(struct DXGADAPTER **)(v4 + 16),
        (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v15);
      v10 = v15[4];
      LOWORD(v15[15]) = 0;
      if ( v15[4] >= 0 )
      {
LABEL_14:
        CDriverStoreCopy::EnumDirectory(
          *(CDriverStoreCopy **)(v4 + 336),
          (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v15);
        while ( 1 )
        {
          v10 = v15[4];
          if ( v15[4] != -2147483642 )
            break;
          if ( !CDriverStoreCopy::ProcessNextDirectory(
                  *(CDriverStoreCopy **)(v4 + 336),
                  (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v15) )
          {
            v10 = v15[4];
            break;
          }
        }
        if ( v10 >= 0 )
          goto LABEL_9;
      }
      if ( v10 == -2147483642 )
        goto LABEL_9;
    }
    v11 = *(CDriverStoreCopy **)(v4 + 336);
    if ( v11 )
      CDriverStoreCopy::`scalar deleting destructor'(v11);
    *(_QWORD *)(v4 + 336) = 0LL;
    goto LABEL_9;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 5932;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    5932LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  return 0;
}
