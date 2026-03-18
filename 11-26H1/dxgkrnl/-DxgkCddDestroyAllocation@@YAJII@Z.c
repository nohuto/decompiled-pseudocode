/*
 * XREFs of ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1403B67C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9A60 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkDestroyClientAllocation @ 0x1403731B8 (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DxgkCddDestroyAllocation(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  struct DXGDEVICE *v8; // rbx
  __int64 v9; // rax
  const char *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  ADAPTER_RENDER **v21; // rcx
  __int64 v22; // rcx
  ADAPTER_RENDER **v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  __int64 CurrentProcess; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h]
  char v33; // [rsp+60h] [rbp-A0h]
  struct DXGDEVICE *v34; // [rsp+68h] [rbp-98h] BYREF
  char v35; // [rsp+70h] [rbp-90h]
  struct DXGDEVICE *v36; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v37[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+88h] [rbp-78h]
  char v39; // [rsp+90h] [rbp-70h]
  _BYTE v40[24]; // [rsp+98h] [rbp-68h] BYREF
  PERESOURCE *v41; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v42[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  char v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  _BYTE v47[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  char v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  struct DXGDEVICE *v52; // [rsp+138h] [rbp+38h]
  char v53; // [rsp+140h] [rbp+40h]

  v2 = a2;
  v3 = (unsigned int)a1;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 3018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 3018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  v7 = (__int64)Current;
  if ( Current )
  {
    v34 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v36, v3, Current, &v34);
    v8 = v34;
    if ( !v34 )
    {
      WdLogSingleEntry3(2LL, -1073741811LL, v3, v7);
      WdLogGlobalForLineNumber = 1216;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
        -1073741811LL,
        v3,
        v7,
        0LL,
        0LL);
LABEL_32:
      v24 = (ADAPTER_RENDER **)v36;
      if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v24[2], (struct DXGDEVICE *)v24);
      goto LABEL_35;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v34, v34);
    v9 = *((_QWORD *)v8 + 2);
    v39 = 0;
    v38 = *(_QWORD *)(v9 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
    v11 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL);
    v44 = v11;
    v45 = 0;
    v46 = 0LL;
    if ( v11 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24));
      v43 = -1LL;
    }
    v12 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL);
    v49 = v12;
    v50 = 0;
    v51 = 0LL;
    if ( v12 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
      v48 = -1LL;
    }
    v52 = v8;
    v53 = 0;
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)&v41, v10);
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 200LL) == 4 )
      goto LABEL_22;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v40,
      (struct DXGPROCESS *)v7);
    v14 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v14 < *(_DWORD *)(v7 + 296)
      && (v15 = *(_QWORD *)(v7 + 280),
          v16 = *(_DWORD *)(v15 + 16 * v14 + 8),
          (((unsigned int)v2 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60))
      && (v16 & 0x2000) == 0
      && (v16 & 0x1F) != 0 )
    {
      v17 = v2;
      if ( (*(_BYTE *)(v15 + 16 * ((v2 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
      {
        v18 = *(_QWORD *)(v15 + 16 * ((v2 >> 6) & 0xFFFFFF));
        if ( v18 )
          *(_DWORD *)(v15 + 16 * ((v2 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        goto LABEL_19;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      v17 = v2;
    }
    v18 = 0LL;
LABEL_19:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40);
    if ( v18 )
    {
      if ( *((_DWORD *)v8 + 152) == 4 )
        DxgkDestroyClientAllocation(v19, v8, 0, 0LL, *(struct DXGALLOCATION ***)(v18 + 40));
      else
        DXGDEVICE::DestroyAllocationInternal(
          v8,
          0,
          0LL,
          *(struct DXGRESOURCE **)(v18 + 40),
          &v41,
          DXGDEVICE::DestroyFlagsDefault);
LABEL_22:
      COREACCESS::~COREACCESS((COREACCESS *)v47, v13);
      COREACCESS::~COREACCESS((COREACCESS *)v42, v20);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
      if ( v35 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v34 + 17));
        KeLeaveCriticalRegion();
      }
      v21 = (ADAPTER_RENDER **)v36;
      if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v21[2], (struct DXGDEVICE *)v21);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
      }
      return 0LL;
    }
    WdLogSingleEntry3(2LL, *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL), v8, v17);
    WdLogGlobalForLineNumber = 1248;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid allocation is passed to DxgkCddDestroyAllocation. DXGADAPTER 0x%I64x DXGDEVICE 0x%I64x DXGALLOCATION 0x%I64x",
      *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL),
      (__int64)v8,
      v17,
      0LL,
      0LL);
    COREACCESS::~COREACCESS((COREACCESS *)v47, v26);
    COREACCESS::~COREACCESS((COREACCESS *)v42, v27);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
    if ( v35 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v34 + 17));
      KeLeaveCriticalRegion();
    }
    goto LABEL_32;
  }
  CurrentProcess = PsGetCurrentProcess(v6);
  WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
  WdLogGlobalForLineNumber = 1207;
  v30 = PsGetCurrentProcess(v29);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x Unexpected process 0x%I64x",
    -1073741811LL,
    v30,
    0LL,
    0LL,
    0LL);
LABEL_35:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
  return 3221225485LL;
}
