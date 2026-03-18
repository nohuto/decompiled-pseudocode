/*
 * XREFs of ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140232E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF00 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE40 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetExistingSysMemStore(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  _DWORD *v4; // rdi
  struct _KTHREAD **Current; // rax
  unsigned int v6; // edx
  struct _KTHREAD **v7; // r15
  struct DXGDEVICE *v8; // r14
  __int64 v9; // r9
  unsigned int v10; // r12d
  unsigned int v11; // eax
  int v12; // r8d
  struct _KTHREAD *v13; // rcx
  struct DXGALLOCATION *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // [rsp+28h] [rbp-E0h]
  __int64 v17; // [rsp+28h] [rbp-E0h]
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGDEVICE *v19; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v20[16]; // [rsp+68h] [rbp-A0h] BYREF
  char v21[8]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v22[24]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v23[160]; // [rsp+98h] [rbp-70h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v22,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1936;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1936LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
    return 0;
  }
  v4 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( v4 )
  {
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    v6 = v4[6];
    v19 = 0LL;
    v7 = Current;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v21, v6, Current, &v19);
    v8 = v19;
    if ( !v19 )
    {
      WdLogSingleEntry1(2LL);
      v16 = (unsigned int)v4[6];
      WdLogGlobalForLineNumber = 1946;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid device handle: 0x%I64x", v16, 0LL, 0LL, 0LL, 0LL);
      LODWORD(v18) = -1073741811;
LABEL_24:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v18, 4u);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v21);
      v2 = 1;
      goto LABEL_25;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v20,
      v19);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, (__int64)v8, 0, v9, 0);
    LODWORD(v18) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v23, 0LL);
    if ( (int)v18 < 0 )
    {
LABEL_23:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v20);
      goto LABEL_24;
    }
    v10 = v4[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 31));
    v11 = (v10 >> 6) & 0xFFFFFF;
    if ( v11 < *((_DWORD *)v7 + 74) )
    {
      v12 = *((_DWORD *)v7[35] + 4 * v11 + 2);
      if ( ((v10 >> 25) & 0x60) == (*((_BYTE *)v7[35] + 16 * v11 + 8) & 0x60)
        && (v12 & 0x2000) == 0
        && (v12 & 0x1F) != 0 )
      {
        v13 = v7[35];
        if ( (*((_BYTE *)v13 + 16 * v11 + 8) & 0x1F) == 5 )
        {
          v14 = (struct DXGALLOCATION *)*((_QWORD *)v13 + 2 * v11);
          goto LABEL_14;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v14 = 0LL;
LABEL_14:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v19, v14);
    _InterlockedDecrement((volatile signed __int32 *)v7 + 66);
    ExReleasePushLockSharedEx(v7 + 31, 0LL);
    KeLeaveCriticalRegion();
    if ( v19 && *((_QWORD *)v19 + 3) )
    {
      v15 = *((_QWORD *)v8 + 2);
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 1) + 16LL) + 16LL) == *(_QWORD *)(v15 + 16) )
      {
        LODWORD(v18) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v15 + 760) + 8LL) + 1152LL))(
                         *((_QWORD *)v19 + 3),
                         (unsigned int)v4[8]);
LABEL_22:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v19);
        goto LABEL_23;
      }
      WdLogSingleEntry3(2LL, v8, v19, -1073741811LL);
      WdLogGlobalForLineNumber = 1971;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        (__int64)v8,
        (__int64)v19,
        -1073741811LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL);
      v17 = (unsigned int)v4[7];
      WdLogGlobalForLineNumber = 1962;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid allocation handle: 0x%I64x",
        v17,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    LODWORD(v18) = -1073741811;
    goto LABEL_22;
  }
LABEL_25:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
  return v2;
}
