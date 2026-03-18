/*
 * XREFs of ?DxgkCreateHwQueueForUserModeSubmissionInternal@@YAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@_N@Z @ 0x1401E1F3C
 * Callers:
 *     NtDxgkCreateHwQueueForUserModeSubmission @ 0x1401E41C0 (NtDxgkCreateHwQueueForUserModeSubmission.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?VidSchGetNativeFenceLogDetail@VIDSCH_EXPORT@@QEAAXPEAUVIDSCH_HW_QUEUE@@PEAI1PEA_K2@Z @ 0x14007C7FC (-VidSchGetNativeFenceLogDetail@VIDSCH_EXPORT@@QEAAXPEAUVIDSCH_HW_QUEUE@@PEAI1PEA_K2@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?CreateHwQueueForUserModeSubmission@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1401E147C (-CreateHwQueueForUserModeSubmission@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateHwQueueForUserModeSubmissionInternal(
        struct _D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION *a1)
{
  struct _KTHREAD **Current; // rax
  __int64 v3; // rcx
  struct _KTHREAD **v4; // r14
  __int64 CurrentProcess; // rax
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v14; // rcx
  struct DXGDEVICE *v16; // rbx
  __int64 v17; // r9
  int v18; // esi
  __int64 v19; // rcx
  unsigned int v20; // ebx
  unsigned int v21; // edx
  unsigned int v22; // ebx
  unsigned int v24; // r8d
  __int64 v25; // rbx
  int v26; // [rsp+50h] [rbp-268h] BYREF
  __int64 v27; // [rsp+58h] [rbp-260h]
  char v28; // [rsp+60h] [rbp-258h]
  struct DXGCONTEXT *v29; // [rsp+68h] [rbp-250h] BYREF
  _BYTE v30[16]; // [rsp+70h] [rbp-248h] BYREF
  struct DXGHWQUEUE *v31; // [rsp+80h] [rbp-238h] BYREF
  _BYTE v32[24]; // [rsp+88h] [rbp-230h] BYREF
  _QWORD Src[40]; // [rsp+A0h] [rbp-218h] BYREF
  _BYTE v34[160]; // [rsp+1E0h] [rbp-D8h] BYREF

  v26 = -1;
  v27 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2228;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 2228);
  memset(Src, 0, sizeof(Src));
  RtlCopyFromUser(Src, a1, 0x140uLL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v4 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v3);
    v6 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 1247;
    v8 = PsGetCurrentProcess(v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x, returning 0x%I64x",
      v8,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_24;
  }
  if ( (Src[0] & 0x800000000LL) != 0 && !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1254;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"NoKmdAccess can be used only with testsigning",
      1254LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
    return (unsigned int)-1073741811;
  }
  v29 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30, Src[0], Current, &v29, 0, 1);
  v10 = (unsigned int *)v29;
  if ( !v29 )
  {
    v6 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 1263;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hHwContext (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Src[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_23:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30);
LABEL_24:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v6;
  }
  if ( (*((_DWORD *)v29 + 98) & 0x10) == 0 )
  {
    v6 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 1271;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot create HW queue on context (0x%x) that doesn't support hardware queues, returning 0x%I64x.",
      LODWORD(Src[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_23;
  }
  if ( (Src[0] & 0x800000000LL) == 0 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 2) + 16LL) + 16LL) + 3032LL)
                    + 352LL * *((unsigned int *)v29 + 97)
                    + 32);
    v12 = *((unsigned int *)v29 + 95);
    if ( !v11 || (*(_BYTE *)(74 * v12 + v11 + 68) & 8) == 0 )
    {
      v6 = -1073741811;
      WdLogSingleEntry3(2LL, v29, v12, -1073741811LL);
      WdLogGlobalForLineNumber = 1283;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot create UserModeSubmission capable HWQueue on DXGCONTEXT 0x%I64x, because Node Ordinal %u does no"
                  "t support UserModeSubmission, returning 0x%I64x",
        (__int64)v10,
        v10[95],
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_23;
    }
  }
  v16 = (struct DXGDEVICE *)*((_QWORD *)v29 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32, v16);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, (__int64)v16, 0, v17, 0);
  v6 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v34, 0LL);
  if ( v6 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
    goto LABEL_23;
  }
  v31 = 0LL;
  v18 = DXGCONTEXT::CreateHwQueueForUserModeSubmission(
          (DXGCONTEXT *)v10,
          (struct _D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION *)Src,
          &v31);
  if ( v18 >= 0 )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
    {
      LODWORD(Src[12]) = *(_DWORD *)(*((_QWORD *)v31 + 7) + 40LL);
      Src[13] = *(_QWORD *)(*((_QWORD *)v31 + 7) + 56LL);
      Src[14] = *(_QWORD *)(*((_QWORD *)v31 + 7) + 48LL);
      Src[15] = *(_QWORD *)(*((_QWORD *)v31 + 7) + 104LL);
    }
    LODWORD(Src[10]) = *((_DWORD *)v31 + 6);
    Src[11] = *(_QWORD *)(*((_QWORD *)v31 + 19) + 144LL);
    Src[20] = *((_QWORD *)v31 + 31);
    VIDSCH_EXPORT::VidSchGetNativeFenceLogDetail(
      *(VIDSCH_EXPORT **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 2) + 16LL) + 16LL) + 736LL),
      *((struct VIDSCH_HW_QUEUE **)v31 + 6),
      (unsigned int *)&Src[21],
      (unsigned int *)&Src[21] + 1,
      &Src[22],
      &Src[23]);
    v20 = Src[10];
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v4 + 31));
    v21 = (v20 >> 6) & 0xFFFFFF;
    v22 = v20 >> 30;
    if ( v21 < *((_DWORD *)v4 + 74) )
    {
      v24 = *((_DWORD *)v4[35] + 4 * v21 + 2);
      if ( v22 == ((v24 >> 5) & 3) && (v24 & 0x1F) != 0 )
      {
        v25 = 16LL * v21;
        if ( (*(_DWORD *)((_BYTE *)v4[35] + v25 + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)((char *)v4[35] + v25 + 8) &= ~0x2000u;
      }
    }
    v4[32] = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 31, 0LL);
    KeLeaveCriticalRegion();
    RtlCopyToUser(a1, Src, 0x140uLL);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
  return (unsigned int)v18;
}
