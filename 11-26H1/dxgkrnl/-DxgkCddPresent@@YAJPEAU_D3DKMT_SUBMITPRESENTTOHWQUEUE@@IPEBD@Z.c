/*
 * XREFs of ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEBD@Z @ 0x1401BCE50
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400095A0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x14002FE80 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x140049B60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1402BBFE4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddPresent(struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *a1, unsigned int a2, char *a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // r14
  __int64 CurrentProcess; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  D3DKMT_HANDLE hDevice; // edx
  __int64 *v10; // rsi
  D3DKMT_HANDLE v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r9
  ULONG BroadcastContextCount; // ebx
  __int64 v17; // rbx
  _QWORD *Pool2; // rax
  ULONG v19; // r13d
  PVOID v20; // rdx
  __int64 v21; // rbx
  D3DKMT_HANDLE v22; // r12d
  unsigned int v23; // eax
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v30; // r9
  int v31; // eax
  unsigned int v32; // ebx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // [rsp+28h] [rbp-D8h]
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h]
  char v39; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h]
  _BYTE v41[32]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v42; // [rsp+90h] [rbp-70h]
  struct DXGCONTEXT *v43[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v44; // [rsp+A8h] [rbp-58h]
  _BYTE v45[16]; // [rsp+B0h] [rbp-50h] BYREF
  char *v46; // [rsp+C0h] [rbp-40h]
  _BYTE v47[24]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v48[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v49[160]; // [rsp+120h] [rbp+20h] BYREF

  v46 = a3;
  v44 = a2;
  v37 = -1;
  v38 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 3008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 3008);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v5 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess();
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 2236;
    v8 = PsGetCurrentProcess();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v8,
      0LL,
      0LL,
      0LL);
LABEL_37:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v7;
  }
  hDevice = a1->PrivatePresentData.hDevice;
  v43[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45, hDevice, Current, v43, 0, 1);
  v10 = (__int64 *)v43[0];
  if ( !v43[0] )
  {
    v11 = a1->PrivatePresentData.hDevice;
    v12 = PsGetCurrentProcess();
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v12, v11);
    v13 = a1->PrivatePresentData.hDevice;
    WdLogGlobalForLineNumber = 2249;
    v14 = PsGetCurrentProcess();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid context handle 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      v14,
      v13,
      0LL,
      0LL);
LABEL_36:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45);
    goto LABEL_37;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
    (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43,
    *((struct DXGDEVICE **)v43[0] + 2));
  BroadcastContextCount = a1->PrivatePresentData.BroadcastContextCount;
  if ( BroadcastContextCount > 0x40 )
  {
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry2(3LL, v10, -1073741811LL);
    WdLogGlobalForLineNumber = 2263;
LABEL_35:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43);
    goto LABEL_36;
  }
  v17 = BroadcastContextCount + 1;
  P = 0LL;
  v42 = 0;
  if ( (unsigned int)v17 <= 4 )
  {
    Pool2 = v41;
    P = v41;
    if ( (_DWORD)v17 )
    {
      memset(v41, 0, 8LL * (unsigned int)v17);
      Pool2 = P;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v17 < 8 )
      goto LABEL_17;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v17, 1265072196LL);
    P = Pool2;
  }
  v42 = v17;
  if ( !Pool2 )
  {
LABEL_17:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2270;
LABEL_57:
    if ( P != v41 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v42 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit);
    return 3221225495LL;
  }
  *Pool2 = v10;
  v19 = 0;
  v20 = P;
  while ( v19 < a1->PrivatePresentData.BroadcastContextCount )
  {
    v21 = v19;
    v22 = a1->PrivatePresentData.BroadcastContext[v19];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v5 + 248));
    v23 = (v22 >> 6) & 0xFFFFFF;
    if ( v23 < *(_DWORD *)(v5 + 296) )
    {
      v24 = *(_DWORD *)(*(_QWORD *)(v5 + 280) + 16LL * v23 + 8);
      if ( ((v22 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v5 + 280) + 16LL * v23 + 8) & 0x60)
        && (v24 & 0x2000) == 0
        && (v24 & 0x1F) != 0 )
      {
        v25 = *(_QWORD *)(v5 + 280);
        if ( (*(_BYTE *)(v25 + 16LL * v23 + 8) & 0x1F) == 7 )
        {
          v26 = *(_QWORD *)(v25 + 16LL * v23);
          goto LABEL_28;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v26 = 0LL;
LABEL_28:
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 264));
    ExReleasePushLockSharedEx(v5 + 248, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)P + ++v19) = v26;
    v20 = P;
    v27 = *((_QWORD *)P + v19);
    if ( !v27 || *(_QWORD *)(v27 + 16) != v10[2] )
    {
      LODWORD(v7) = -1073741811;
      WdLogSingleEntry4(2LL, v10, a1->PrivatePresentData.BroadcastContext[v21], v21, -1073741811LL);
      v36 = a1->PrivatePresentData.BroadcastContext[v21];
      WdLogGlobalForLineNumber = 2297;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v10,
        v36,
        v21,
        -1073741811LL,
        0LL);
LABEL_31:
      if ( P != v41 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v42 = 0;
      goto LABEL_35;
    }
  }
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v48,
    v20,
    v42,
    v15,
    1);
  if ( !v48[0] )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2309;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v48);
    goto LABEL_57;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v47,
    *(struct DXGADAPTER **)(*(_QWORD *)(v10[2] + 16) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, v10[2], 2, v30, 0);
  v31 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v49, v46);
  v32 = v31;
  if ( v31 >= 0 )
  {
    v34 = DXGCONTEXT::PresentFromCdd(
            (DXGCONTEXT *)v10,
            a1,
            v44,
            (struct COREDEVICEACCESS *)v49,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)v47,
            (struct DXGCONTEXT **)P);
    v7 = v34;
    if ( v34 < 0 )
    {
      if ( v34 == -1071775482 )
      {
        WdLogSingleEntry3(4LL, -1071775482LL, v10, v5);
        WdLogGlobalForLineNumber = 2334;
      }
      else if ( v34 != -1071774910 )
      {
        WdLogSingleEntry3(2LL, v34, v10, v5);
        WdLogGlobalForLineNumber = 2339;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x PresentFromCdd failed 0x%I64x 0x%I64x",
          v7,
          (__int64)v10,
          v5,
          0LL,
          0LL);
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v48);
    goto LABEL_31;
  }
  WdLogSingleEntry3(4LL, v31, v10, v5);
  WdLogGlobalForLineNumber = 2322;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v48);
  if ( P != v41 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v42 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit);
  return v32;
}
