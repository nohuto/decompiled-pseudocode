/*
 * XREFs of ?VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403DC6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14005C2E0 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1403A35A8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rdi
  struct _KTHREAD **v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r9
  __int64 v9; // rax
  const wchar_t *v10; // r9
  int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGDEVICE *v14; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v15[8]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v16[16]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v17[24]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v18[160]; // [rsp+98h] [rbp-70h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v17,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3327;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      3327LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
    LODWORD(v13) = -1073741811;
    v7 = *(_DWORD *)(v4 + 24);
    v14 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v15, v7, v6, &v14);
    if ( v14 )
    {
      v11 = *(_DWORD *)(v5 + 28);
      if ( (unsigned int)(v11 - 1) <= 6 )
      {
        if ( v11 == 4 )
        {
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v18, (__int64)v14, 0, v8, 0);
          LODWORD(v13) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v18, 0LL);
          if ( (int)v13 >= 0 )
          {
            DXGDEVICE::FlushScheduler(v14, 4, 0xFFFFFFFD, 0);
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 3358;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Device was removed: 0x%I64x",
              (int)v13,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v18);
        }
        else
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v16, v14);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v18, (__int64)v14, 0, v12, 0);
          LODWORD(v13) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v18, 0LL);
          if ( (int)v13 >= 0 )
          {
            DXGDEVICE::FlushScheduler(v14, *(_DWORD *)(v5 + 28), 0xFFFFFFFD, 0);
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 3370;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Device was removed: 0x%I64x",
              (int)v13,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v18);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v16);
        }
        goto LABEL_18;
      }
      WdLogSingleEntry1(2LL);
      v9 = *(int *)(v5 + 28);
      v10 = L"Invalid device flush reason: 0x%I64x";
      WdLogGlobalForLineNumber = 3342;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      v9 = *(unsigned int *)(v5 + 24);
      v10 = L"Invalid device handle: 0x%I64x";
      WdLogGlobalForLineNumber = 3336;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
LABEL_18:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v13, 4u);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v15);
    v2 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
  return v2;
}
