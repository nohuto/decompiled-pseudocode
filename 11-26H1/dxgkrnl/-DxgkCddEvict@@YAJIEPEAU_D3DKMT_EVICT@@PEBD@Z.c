/*
 * XREFs of ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEBD@Z @ 0x140432E30
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x140049B60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1401BC3EC (-AllocateElements@-$PagedPoolArray@I$03@@QEAAPEAII@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z @ 0x14028AB0C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolArray@I$03@@QEAA@XZ @ 0x140391BA4 (--1-$PagedPoolArray@I$03@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddEvict(__int64 a1, char a2, struct _D3DKMT_EVICT *a3, const char *a4)
{
  __int64 v4; // rsi
  __int64 v8; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct DXGDEVICE *v15; // rbx
  __int64 v16; // r9
  int v17; // eax
  unsigned int v18; // esi
  __int64 v19; // rcx
  unsigned int NumDifferentPhysicalAdapters; // eax
  const D3DKMT_HANDLE *v22; // rsi
  __int64 v23; // rcx
  D3DKMT_HANDLE v24; // ebx
  unsigned int v25; // eax
  int v26; // r8d
  __int64 v27; // rcx
  struct _EX_RUNDOWN_REF *v28; // rdx
  ULONG_PTR Count; // rdi
  UINT v30; // ebx
  __int64 i; // rdx
  __int64 v32; // rcx
  unsigned int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h]
  char v38; // [rsp+60h] [rbp-A0h]
  _BYTE v39[8]; // [rsp+68h] [rbp-98h] BYREF
  struct _EX_RUNDOWN_REF *v40; // [rsp+70h] [rbp-90h] BYREF
  struct DXGDEVICE *v41[2]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v42[16]; // [rsp+88h] [rbp-78h] BYREF
  void *v43[3]; // [rsp+98h] [rbp-68h] BYREF
  UINT v44; // [rsp+B0h] [rbp-50h]
  _BYTE v45[160]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = (unsigned int)a1;
  v36 = -1;
  v37 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 3061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 3061);
  v43[0] = 0LL;
  v44 = 0;
  if ( !a2 )
    goto LABEL_39;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8);
  v11 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v10);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 3591;
    v14 = PsGetCurrentProcess(v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v14,
      0LL,
      0LL,
      0LL);
LABEL_46:
    PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v43);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  v41[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v39, v4, Current, v41);
  v15 = v41[0];
  if ( !v41[0] )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, v4, v11);
    WdLogGlobalForLineNumber = 3600;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v4,
      v11,
      0LL,
      0LL);
LABEL_45:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v39);
    goto LABEL_46;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41, v41[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, (__int64)v15, 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v45, 0LL);
  v18 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry3(4LL, v17, v15, v11);
    WdLogGlobalForLineNumber = 3616;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v39);
    PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v43);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
    return v18;
  }
  NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
  PagedPoolArray<unsigned int,4>::AllocateElements((__int64 *)v43, NumDifferentPhysicalAdapters);
  v22 = (const D3DKMT_HANDLE *)v43[0];
  if ( !v43[0] )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3626;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocation allocation array",
      3626LL,
      0LL,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v39);
    PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v43);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
    return 3221225495LL;
  }
  v24 = *a3->AllocationList;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 248));
  v25 = (v24 >> 6) & 0xFFFFFF;
  if ( v25 < *(_DWORD *)(v11 + 296) )
  {
    v26 = *(_DWORD *)(*(_QWORD *)(v11 + 280) + 16LL * v25 + 8);
    if ( ((v24 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v11 + 280) + 16LL * v25 + 8) & 0x60)
      && (v26 & 0x2000) == 0
      && (v26 & 0x1F) != 0 )
    {
      v27 = *(_QWORD *)(v11 + 280);
      if ( (*(_BYTE *)(v27 + 16LL * v25 + 8) & 0x1F) == 5 )
      {
        v28 = *(struct _EX_RUNDOWN_REF **)(v27 + 16LL * v25);
        goto LABEL_27;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v28 = 0LL;
LABEL_27:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v40, v28);
  _InterlockedDecrement((volatile signed __int32 *)(v11 + 264));
  ExReleasePushLockSharedEx(v11 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v40 )
  {
    WdLogSingleEntry2(3LL, *a3->AllocationList, -1073741811LL);
    WdLogGlobalForLineNumber = 3638;
LABEL_44:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v40);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41);
    goto LABEL_45;
  }
  Count = v40[5].Count;
  v30 = 0;
  if ( Count )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v42, (struct DXGFASTMUTEX *const)(Count + 80), 0);
    if ( (unsigned int)Feature_3472570682__private_IsEnabledDeviceUsageNoInline() )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v42);
    for ( i = *(_QWORD *)(Count + 24); ; i = *(_QWORD *)(i + 64) )
    {
      if ( !i )
      {
        a3->AllocationList = v22;
        a3->NumAllocations = v30;
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v42);
        goto LABEL_38;
      }
      if ( v30 >= v44 )
        break;
      v32 = v30++;
      v22[v32] = *(_DWORD *)(i + 16);
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3658;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Allocation index exceeds number of allocations in the array",
      3658LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v42);
    goto LABEL_44;
  }
LABEL_38:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v40);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v39);
LABEL_39:
  v33 = DxgkEvictInternal(a3, 0, a4);
  PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v43);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit);
  return v33;
}
