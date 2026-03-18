/*
 * XREFs of ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402267E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE40 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1403A35A8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // rax
  const wchar_t *v9; // r9
  int v10; // r8d
  unsigned int v11; // ebx
  __int64 v12; // r15
  __int64 v13; // r14
  _QWORD **v14; // r15
  _QWORD *i; // rdi
  unsigned __int64 v16; // rdx
  __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGADAPTER *v18; // [rsp+60h] [rbp-A8h] BYREF
  DXGADAPTER *v19[2]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v20[32]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v21[144]; // [rsp+98h] [rbp-70h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v20,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3386;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      3386LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = *((_QWORD *)a1 + 10);
    LODWORD(v17) = -1073741811;
    v7 = *(_DWORD *)(v4 + 24);
    v18 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v19, v7, *(struct _KTHREAD ***)(v6 + 96), &v18, 1);
    if ( !v18 )
    {
      WdLogSingleEntry1(2LL);
      v8 = *(unsigned int *)(v5 + 24);
      v9 = L"Invalid adapter handle: 0x%I64x";
      WdLogGlobalForLineNumber = 3397;
LABEL_21:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_22;
    }
    if ( (unsigned int)(*(_DWORD *)(v5 + 28) - 1) > 9 )
    {
      WdLogSingleEntry1(2LL);
      v8 = *(int *)(v5 + 28);
      v9 = L"Invalid adapter flush reason: 0x%I64x";
      WdLogGlobalForLineNumber = 3403;
      goto LABEL_21;
    }
    if ( !*((_QWORD *)v18 + 396) )
    {
      WdLogSingleEntry0(2LL);
      v8 = 3409LL;
      v9 = L"Must be render adapter";
      WdLogGlobalForLineNumber = 3409;
      goto LABEL_21;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v18, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v21, (unsigned int)(v10 + 2)) >= 0 )
    {
      v11 = 3;
      v12 = *((_QWORD *)a1 + 10);
      switch ( *(_DWORD *)(v5 + 28) )
      {
        case 3:
          v11 = 2;
LABEL_15:
          v13 = v12 + 288;
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 288));
          v14 = (_QWORD **)(v12 + 320);
          for ( i = *v14; i != v14; i = (_QWORD *)*i )
            DXGDEVICE::FlushScheduler(i - 15, v11, 4294967293LL, 0LL);
          _InterlockedDecrement((volatile signed __int32 *)(v13 + 16));
          ExReleasePushLockSharedEx(v13, 0LL);
          KeLeaveCriticalRegion();
          break;
        case 4:
          goto LABEL_15;
        case 5:
          v11 = 4;
          goto LABEL_15;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
LABEL_22:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v17, 4u);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v19, v16);
    v2 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
  return v2;
}
