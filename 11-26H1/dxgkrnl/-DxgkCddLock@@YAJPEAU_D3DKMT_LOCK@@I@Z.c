/*
 * XREFs of ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1402B8AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1402B9970 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddLock(struct _D3DKMT_LOCK *a1)
{
  struct _KTHREAD **Current; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  D3DKMT_HANDLE hDevice; // edx
  struct DXGDEVICE *v6; // rdi
  __int64 v7; // rax
  struct DXGADAPTER *v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  unsigned __int64 v13; // rdx
  __int64 v14; // r15
  unsigned __int64 v15; // rdx
  ADAPTER_RENDER **v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  ADAPTER_RENDER **v21; // rcx
  __int64 v22; // rcx
  __int64 CurrentProcess; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v27; // ecx
  __int64 v28; // r8
  int v29; // edx
  struct _EX_RUNDOWN_REF *v30; // rdx
  __int64 v31; // [rsp+30h] [rbp-D8h]
  __int64 v32; // [rsp+40h] [rbp-C8h]
  struct DXGDEVICE *v33; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGDEVICE *v34; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v35[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+78h] [rbp-90h]
  __int64 v37; // [rsp+80h] [rbp-88h] BYREF
  char v38; // [rsp+88h] [rbp-80h]
  _BYTE v39[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v40; // [rsp+98h] [rbp-70h]
  char v41; // [rsp+A0h] [rbp-68h]
  _BYTE v42[8]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v43[64]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v44[64]; // [rsp+F0h] [rbp-18h] BYREF
  struct DXGDEVICE *v45; // [rsp+130h] [rbp+28h]
  char v46; // [rsp+138h] [rbp+30h]

  LODWORD(v35[0]) = -1;
  v35[1] = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    LOBYTE(v36) = 1;
    LODWORD(v35[0]) = 3006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    LOBYTE(v36) = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)v35, 3006);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v4 = (__int64)Current;
  if ( Current )
  {
    hDevice = a1->hDevice;
    v33 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34, hDevice, Current, &v33);
    v6 = v33;
    if ( v33 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v37, v33);
      v7 = *((_QWORD *)v6 + 2);
      v41 = 0;
      v40 = *(_QWORD *)(v7 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v39);
      COREACCESS::COREACCESS((COREACCESS *)v43, *(struct DXGADAPTER *const *)(*((_QWORD *)v6 + 2) + 16LL));
      v8 = (struct DXGADAPTER *)*((_QWORD *)v6 + 237);
      if ( !v8 )
        v8 = *(struct DXGADAPTER **)(*((_QWORD *)v6 + 2) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v44, v8);
      v45 = v6;
      v9 = *((_QWORD *)v6 + 237);
      if ( v9 == *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) || (v46 = 1, !v9) )
        v46 = 0;
      v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42, 0LL);
      v11 = v10;
      if ( v10 >= 0 )
      {
        v12 = DXGDEVICE::Lock(v6, a1, (struct COREDEVICEACCESS *)v42, 1);
        v14 = v12;
        if ( v12 >= 0 )
        {
LABEL_13:
          COREACCESS::~COREACCESS((COREACCESS *)v44, v13);
          COREACCESS::~COREACCESS((COREACCESS *)v43, v15);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v39);
          if ( v38 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v37 + 136));
            KeLeaveCriticalRegion();
          }
          v16 = (ADAPTER_RENDER **)v34;
          if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(v16[2], (struct DXGDEVICE *)v16);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v35);
          if ( (_BYTE)v36 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
          }
          return (unsigned int)v14;
        }
        hAllocation = a1->hAllocation;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 248));
        v27 = (hAllocation >> 6) & 0xFFFFFF;
        if ( v27 < *(_DWORD *)(v4 + 296) )
        {
          v28 = *(_QWORD *)(v4 + 280);
          v29 = *(_DWORD *)(v28 + 16LL * v27 + 8);
          if ( ((hAllocation >> 25) & 0x60) == (v29 & 0x60) && (v29 & 0x2000) == 0 && (v29 & 0x1F) != 0 )
          {
            if ( (*(_BYTE *)(v28 + 16 * (((unsigned __int64)hAllocation >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
            {
              v30 = *(struct _EX_RUNDOWN_REF **)(v28 + 16 * (((unsigned __int64)hAllocation >> 6) & 0xFFFFFF));
              goto LABEL_42;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        v30 = 0LL;
LABEL_42:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v33, v30);
        _InterlockedDecrement((volatile signed __int32 *)(v4 + 264));
        ExReleasePushLockSharedEx(v4 + 248, 0LL);
        KeLeaveCriticalRegion();
        WdLogSingleEntry5(2LL, v14, v6, v4, a1->hAllocation, v33);
        v32 = a1->hAllocation;
        WdLogGlobalForLineNumber = 1486;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x Lock failed 0x%I64x 0x%I64x 0x%I64x 0x%I64x",
          v14,
          (__int64)v6,
          v4,
          v32,
          (__int64)v33);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v33);
        goto LABEL_13;
      }
      WdLogSingleEntry3(4LL, v10, v6, v4);
      WdLogGlobalForLineNumber = 1476;
      COREACCESS::~COREACCESS((COREACCESS *)v44, v19);
      COREACCESS::~COREACCESS((COREACCESS *)v43, v20);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v39);
      if ( v38 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v37 + 136));
        KeLeaveCriticalRegion();
      }
      v21 = (ADAPTER_RENDER **)v34;
      if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v21[2], (struct DXGDEVICE *)v21);
    }
    else
    {
      v11 = -1073741811;
      WdLogSingleEntry3(2LL, -1073741811LL, a1->hDevice, v4);
      v31 = a1->hDevice;
      WdLogGlobalForLineNumber = 1460;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
        -1073741811LL,
        v31,
        v4,
        0LL,
        0LL);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v34);
    }
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v3);
    v11 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 1450;
    v25 = PsGetCurrentProcess(v24);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v25,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v35);
  if ( (_BYTE)v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
  return v11;
}
