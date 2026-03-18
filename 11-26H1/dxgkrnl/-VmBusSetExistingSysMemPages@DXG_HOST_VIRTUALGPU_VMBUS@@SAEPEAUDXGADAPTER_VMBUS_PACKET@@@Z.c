/*
 * XREFs of ?VmBusSetExistingSysMemPages@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140232900
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

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetExistingSysMemPages(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  _DWORD *v4; // rdi
  struct _KTHREAD **Current; // rax
  unsigned int v6; // edx
  struct DXGDEVICE *v7; // r12
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned int v10; // eax
  int v11; // r10d
  struct _KTHREAD *v12; // rdx
  struct DXGALLOCATION *v13; // rdx
  struct _KTHREAD **v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // [rsp+20h] [rbp-E0h]
  __int64 v18; // [rsp+20h] [rbp-E0h]
  __int64 v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v21; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v22; // [rsp+60h] [rbp-A0h]
  struct _KTHREAD **v23; // [rsp+68h] [rbp-98h]
  _BYTE v24[16]; // [rsp+70h] [rbp-90h] BYREF
  struct _KTHREAD **v25; // [rsp+80h] [rbp-80h]
  char v26[8]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v27[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v28[160]; // [rsp+B0h] [rbp-50h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v27,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1989;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1989LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
    return 0;
  }
  v4 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( v4 )
  {
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    v6 = v4[6];
    v23 = Current;
    v21 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v26, v6, Current, &v21);
    v7 = v21;
    if ( !v21 )
    {
      WdLogSingleEntry1(2LL);
      v17 = (unsigned int)v4[6];
      WdLogGlobalForLineNumber = 1999;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid device handle: 0x%I64x", v17, 0LL, 0LL, 0LL, 0LL);
      v20 = -1073741811;
      goto LABEL_27;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v24,
      v21);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, (__int64)v7, 0, v8, 0);
    v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v28, 0LL);
    if ( v20 >= 0 )
    {
      v9 = (unsigned int)v4[8];
      if ( (_DWORD)v9 && ((unsigned __int64)*((unsigned int *)a1 + 36) - 40) >> 3 >= v9 )
      {
        v22 = v4[7];
        v25 = v23 + 31;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v23 + 31));
        v10 = (v22 >> 6) & 0xFFFFFF;
        if ( v10 < *((_DWORD *)v23 + 74) )
        {
          v11 = *((_DWORD *)v23[35] + 4 * v10 + 2);
          if ( ((v22 >> 25) & 0x60) == (*((_BYTE *)v23[35] + 16 * v10 + 8) & 0x60)
            && (v11 & 0x2000) == 0
            && (v11 & 0x1F) != 0 )
          {
            v12 = v23[35];
            if ( (*((_BYTE *)v12 + 16 * v10 + 8) & 0x1F) == 5 )
            {
              v13 = (struct DXGALLOCATION *)*((_QWORD *)v12 + 2 * v10);
              goto LABEL_16;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        v13 = 0LL;
LABEL_16:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v21, v13);
        v14 = v25;
        _InterlockedDecrement((volatile signed __int32 *)v25 + 4);
        ExReleasePushLockSharedEx(v14, 0LL);
        KeLeaveCriticalRegion();
        if ( v21 && (v15 = *((_QWORD *)v21 + 3)) != 0 )
        {
          v16 = *((_QWORD *)v7 + 2);
          if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v21 + 1) + 16LL) + 16LL) == *(_QWORD *)(v16 + 16) )
          {
            v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(v16 + 760) + 8LL)
                                                                                        + 1280LL))(
                    v15,
                    8LL,
                    (unsigned int)v4[8],
                    (unsigned int)v4[9],
                    v4 + 10);
            goto LABEL_21;
          }
          WdLogSingleEntry3(2LL, v7, v21, -1073741811LL);
          WdLogGlobalForLineNumber = 2032;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            (__int64)v7,
            (__int64)v21,
            -1073741811LL,
            0LL,
            0LL);
        }
        else
        {
          WdLogSingleEntry1(2LL);
          v18 = (unsigned int)v4[7];
          WdLogGlobalForLineNumber = 2023;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid allocation handle: 0x%I64x",
            v18,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v20 = -1073741811;
LABEL_21:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v21);
        goto LABEL_26;
      }
      WdLogSingleEntry1(2LL);
      v19 = (unsigned int)v4[8];
      WdLogGlobalForLineNumber = 2015;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid NumPages in the command: 0x%I64x",
        v19,
        0LL,
        0LL,
        0LL,
        0LL);
      v20 = -1073741811;
    }
LABEL_26:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v24);
    if ( v20 >= 0 )
    {
LABEL_28:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v20, 4u);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v26);
      v2 = 1;
      goto LABEL_29;
    }
LABEL_27:
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2047;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSetExistingSysMemPages failed: 0x%I64x",
      v20,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_28;
  }
LABEL_29:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
  return v2;
}
