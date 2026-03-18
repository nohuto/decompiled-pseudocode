/*
 * XREFs of ?VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402324D0
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
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE40 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1403BEDFC (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetAllocationPriority(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v3; // rax
  const wchar_t *v4; // r9
  unsigned int *v6; // rax
  unsigned int *v7; // rdx
  D3DKMT_HANDLE v8; // r8d
  UINT AllocationCount; // r9d
  __int64 v10; // r14
  UINT v11; // eax
  struct _KTHREAD **v12; // r8
  DXGDEVICE *v13; // rsi
  __int64 v14; // r9
  int v15; // eax
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v17[2]; // [rsp+58h] [rbp-A8h] BYREF
  _D3DKMT_SETALLOCATIONPRIORITY v18; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v19[8]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v20[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v21[160]; // [rsp+B0h] [rbp-50h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v20,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 1705LL;
    v4 = L"The adapter is already closed by the guest";
LABEL_3:
    WdLogGlobalForLineNumber = v3;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v4, v3, 0LL, 0LL, 0LL, 0LL);
LABEL_4:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
    return 0;
  }
  v6 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v7 = v6;
  if ( !v6 || v6[8] > 0x20000 )
    goto LABEL_4;
  v8 = v6[7];
  AllocationCount = 0;
  v10 = v6[6];
  v18.AllocationCount = v6[8];
  *(&v18.AllocationCount + 1) = 0;
  v18.hDevice = v10;
  v18.hResource = v8;
  v11 = 4;
  if ( !v8 )
  {
    AllocationCount = v18.AllocationCount;
    v11 = 4 * v18.AllocationCount;
  }
  if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 40 < AllocationCount * 4 + v11 )
  {
    WdLogSingleEntry0(2LL);
    v3 = 1722LL;
    v4 = L"Invalid packet size";
    goto LABEL_3;
  }
  if ( v8 )
    v18.phAllocationList = 0LL;
  else
    v18.phAllocationList = v7 + 10;
  v12 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
  v17[0] = 0LL;
  v18.pPriorities = &v7[AllocationCount + 10];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v19, v10, v12, v17);
  v13 = v17[0];
  if ( v17[0] )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17, v17[0]);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v21, (__int64)v13, 0, v14, 0);
    v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v21, 0LL);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v16 = DXGDEVICE::SetAllocationPriority(v13, &v18, 0);
    }
    else
    {
      WdLogSingleEntry2(3LL, v13, v15);
      WdLogGlobalForLineNumber = 1743;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v16, 4u);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v21);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
    v2 = 1;
  }
  else
  {
    WdLogSingleEntry2(2LL, v10, -1073741811LL);
    WdLogGlobalForLineNumber = 1733;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v19);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
  return v2;
}
