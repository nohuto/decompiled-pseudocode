/*
 * XREFs of ?VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140226B90
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
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_GETALLOCATIONPRIORITY@@@@YAPEAUDXGKVMB_COMMAND_GETALLOCATIONPRIORITY@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14005ECF8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_GETALLOCATIONPRIORITY@@@@YAPEAUDXGKVMB_COMMAND_GETALLOCAT.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x140408124 (-GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetAllocationPriority(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v3; // rax
  const wchar_t *v4; // r9
  unsigned int *v6; // rax
  unsigned int *v7; // rdx
  UINT v8; // ecx
  D3DKMT_HANDLE v9; // r8d
  int v10; // r12d
  __int64 v11; // r15
  unsigned int v12; // r9d
  __int64 v13; // rax
  int v14; // ecx
  unsigned int v15; // r12d
  struct _KTHREAD **v16; // r8
  char *v17; // r14
  DXGDEVICE *v18; // rsi
  __int64 v19; // r9
  int v20; // eax
  char v21[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v22[2]; // [rsp+58h] [rbp-A8h] BYREF
  _D3DKMT_GETALLOCATIONPRIORITY v23; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v24[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v25[160]; // [rsp+A0h] [rbp-60h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v24,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 1756LL;
    v4 = L"The adapter is already closed by the guest";
LABEL_3:
    WdLogGlobalForLineNumber = v3;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v4, v3, 0LL, 0LL, 0LL, 0LL);
LABEL_4:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
    return 0;
  }
  v6 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_GETALLOCATIONPRIORITY>((__int64)a1);
  v7 = v6;
  if ( !v6 )
    goto LABEL_4;
  v8 = v6[8];
  if ( v8 > 0x20000 )
    goto LABEL_4;
  v9 = v6[7];
  v10 = 4;
  v11 = v6[6];
  v12 = 0;
  v13 = *((unsigned int *)a1 + 36);
  v23.AllocationCount = v8;
  v14 = 4 * v8;
  *(&v23.AllocationCount + 1) = 0;
  v23.hDevice = v11;
  if ( !v9 )
    v10 = v14;
  v23.hResource = v9;
  if ( !v9 )
    v12 = v14;
  v15 = v10 + 4;
  if ( v13 - 40 < (unsigned __int64)(v15 + v12) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 1774LL;
    v4 = L"Invalid packet size";
    goto LABEL_3;
  }
  if ( v9 )
    v23.phAllocationList = 0LL;
  else
    v23.phAllocationList = v7 + 10;
  v16 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
  v17 = (char *)v7 + v12;
  v22[0] = 0LL;
  v23.pPriorities = (UINT *)(v17 + 44);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v21, v11, v16, v22);
  v18 = v22[0];
  if ( !v22[0] )
  {
    WdLogSingleEntry2(2LL, v11, -1073741811LL);
    WdLogGlobalForLineNumber = 1786;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v21);
    goto LABEL_4;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22, v22[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v25, (__int64)v18, 0, v19, 0);
  v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v25, 0LL);
  if ( v20 >= 0 )
  {
    *((_DWORD *)v17 + 10) = DXGDEVICE::GetAllocationPriority(v18, &v23, 0);
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v17 + 40, v15);
    v2 = 1;
  }
  else
  {
    WdLogSingleEntry2(3LL, v18, v20);
    WdLogGlobalForLineNumber = 1796;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v25);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v21);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
  return v2;
}
