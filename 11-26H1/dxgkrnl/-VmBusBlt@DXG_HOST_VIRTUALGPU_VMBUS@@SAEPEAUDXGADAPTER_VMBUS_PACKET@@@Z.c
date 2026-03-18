/*
 * XREFs of ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140221A60
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14000FD00 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x140017698 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140062488 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     Feature_MSRC99339_58279198__private_IsEnabledNoReportingNoInline @ 0x1400850B8 (Feature_MSRC99339_58279198__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@@Z @ 0x1401F37FC (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusBlt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  char v2; // di
  __int64 v5; // rax
  __int64 v6; // rsi
  struct DXGADAPTER *v7; // r13
  unsigned __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  struct _KTHREAD **Current; // rax
  __int64 v12; // r12
  bool v13; // bl
  struct _KTHREAD **v14; // rax
  struct _KTHREAD **v15; // rax
  struct DXGHWQUEUE *v16; // rbx
  __int64 v17; // r9
  char *v18; // rcx
  unsigned int v19; // r8d
  struct tagRECT v20; // xmm1
  unsigned int v21; // edx
  int v22; // eax
  char *v23; // rcx
  __int64 v24; // [rsp+28h] [rbp-E0h]
  __int64 v25; // [rsp+28h] [rbp-E0h]
  UINT v26; // [rsp+48h] [rbp-C0h]
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGCONTEXT *v28; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v29[8]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v30[16]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v31[16]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v32[24]; // [rsp+A0h] [rbp-68h] BYREF
  struct tagRECT v33; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v34[24]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v35[24]; // [rsp+E0h] [rbp-28h] BYREF
  struct tagRECT v36; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v37[160]; // [rsp+108h] [rbp+0h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  v2 = 0;
  if ( *(_BYTE *)(v1 + 155) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2115;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Presentation is disabled", 2115LL, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v35, (struct _KTHREAD **)(v1 + 248));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2119;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      2119LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35);
    return 0;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(struct DXGADAPTER **)(*((_QWORD *)a1 + 10) + 16LL);
    v8 = 16LL * *(unsigned int *)(v5 + 72);
    if ( v8 > 0xFFFFFFFF
      || (v9 = v8 + 80, (unsigned int)v8 >= 0xFFFFFFB0)
      || (v10 = v9 + *(_DWORD *)(v6 + 76), v10 < v9)
      || v10 > *((_DWORD *)a1 + 36) )
    {
      LODWORD(v27) = -1073741811;
      goto LABEL_29;
    }
    *(_QWORD *)&v36.left = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)v29,
      *(_DWORD *)(v6 + 24),
      Current,
      (struct DXGDEVICE **)&v36);
    v12 = *(_QWORD *)&v36.left;
    if ( !*(_QWORD *)&v36.left )
    {
      WdLogSingleEntry1(2LL);
      v24 = *(unsigned int *)(v6 + 24);
      WdLogGlobalForLineNumber = 2153;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid device handle: 0x%I64x", v24, 0LL, 0LL, 0LL, 0LL);
      LODWORD(v27) = -1073741811;
LABEL_13:
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v29);
LABEL_29:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v27, 4u);
      v2 = 1;
      goto LABEL_30;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v32,
      *(struct DXGDEVICE **)&v36.left);
    v28 = 0LL;
    *(_QWORD *)&v36.left = 0LL;
    v13 = (unsigned int)Feature_MSRC99339_58279198__private_IsEnabledNoReportingNoInline() == 0;
    v14 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31, *(_DWORD *)(v6 + 28), v14, &v28, v13, 0);
    v15 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
      (DXGHWQUEUEBYHANDLE *)v30,
      *(_DWORD *)(v6 + 28),
      v15,
      (struct DXGHWQUEUE **)&v36,
      v13,
      0);
    v16 = *(struct DXGHWQUEUE **)&v36.left;
    if ( v28 )
    {
      if ( !*(_QWORD *)&v36.left )
      {
LABEL_20:
        if ( !(unsigned int)Feature_MSRC99339_58279198__private_IsEnabledNoReportingNoInline()
          || *((_QWORD *)v28 + 2) == v12 )
        {
          DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v28 + 440));
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v34, v7, 1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, v12, 0, v17, 0);
          LODWORD(v27) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v37, 0LL);
          if ( (int)v27 >= 0 )
          {
            v19 = *(_DWORD *)(v6 + 36);
            v20 = *(struct tagRECT *)(v6 + 40);
            v21 = *(_DWORD *)(v6 + 32);
            v26 = *(_DWORD *)(v6 + 72);
            v36 = *(struct tagRECT *)(v6 + 56);
            v33 = v20;
            v22 = DXGCONTEXT::BltFromVm(
                    v28,
                    v21,
                    v19,
                    0LL,
                    &v28,
                    v16,
                    &v33,
                    &v36,
                    v26,
                    (const struct tagRECT *)(v6 + 80),
                    (struct COREDEVICEACCESS *)v37);
            v23 = (char *)v28 + 440;
            LODWORD(v27) = v22;
            *((_QWORD *)v28 + 56) = 0LL;
            ExReleasePushLockExclusiveEx(v23, 0LL);
            KeLeaveCriticalRegion();
            if ( (int)v27 < 0 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 2229;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"VmBusBlt failed: 0x%I64x",
                (int)v27,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          else
          {
            v18 = (char *)v28 + 440;
            *((_QWORD *)v28 + 56) = 0LL;
            ExReleasePushLockExclusiveEx(v18, 0LL);
            KeLeaveCriticalRegion();
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
        }
        else
        {
          WdLogSingleEntry2(2LL, v28, v12);
          WdLogGlobalForLineNumber = 2194;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Context 0x%I64x does not belong to device 0x%I64x",
            (__int64)v28,
            v12,
            0LL,
            0LL,
            0LL);
          LODWORD(v27) = -1073741811;
          *(_QWORD *)&v36.left = 58279181LL;
          v36.right = 0;
          RtlLogUnexpectedCodepath(&v36);
        }
        goto LABEL_17;
      }
    }
    else if ( !*(_QWORD *)&v36.left )
    {
      WdLogSingleEntry1(2LL);
      v25 = *(unsigned int *)(v6 + 28);
      WdLogGlobalForLineNumber = 2178;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid context handle: 0x%I64x", v25, 0LL, 0LL, 0LL, 0LL);
      LODWORD(v27) = -1073741811;
LABEL_17:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v30);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
      goto LABEL_13;
    }
    v28 = *(struct DXGCONTEXT **)(*(_QWORD *)&v36.left + 16LL);
    goto LABEL_20;
  }
LABEL_30:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35);
  return v2;
}
