/*
 * XREFs of DxgkCacheHybridQueryValue @ 0x1403D8280
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000CFBC (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGpuPreferenceDListState@DXGPROCESS@@QEAA?AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z @ 0x14005B99C (-GetGpuPreferenceDListState@DXGPROCESS@@QEAA-AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCacheHybridQueryValue(void *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  struct DXGADAPTER *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  int GpuPreferenceDListState; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // [rsp+50h] [rbp-88h] BYREF
  __int64 v16; // [rsp+58h] [rbp-80h]
  char v17; // [rsp+60h] [rbp-78h]
  _BYTE v18[16]; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v19[8]; // [rsp+78h] [rbp-60h] BYREF
  struct DXGADAPTER *v20; // [rsp+80h] [rbp-58h]
  char v21; // [rsp+88h] [rbp-50h]
  unsigned __int64 v22; // [rsp+90h] [rbp-48h] BYREF
  __int128 Src; // [rsp+98h] [rbp-40h] BYREF
  int v24; // [rsp+A8h] [rbp-30h]

  v15 = -1;
  v16 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2091;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2091);
  Current = DXGPROCESS::GetCurrent(v2);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4151;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_23;
  }
  Src = 0LL;
  v24 = 0;
  RtlCopyFromUser(&Src, a1, 0x14uLL);
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v18, Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  if ( v24 )
  {
    if ( v24 == 1 )
    {
      v13 = *((_DWORD *)Current + 131);
      if ( !v13 )
      {
        *((_DWORD *)Current + 131) = Src;
        goto LABEL_15;
      }
    }
    else
    {
      if ( v24 != 2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4265;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Invalid D3DKMT_HYBRID_LIST QueryType!",
          4265LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_15;
      }
      v13 = *((_DWORD *)Current + 130);
      if ( !v13 )
      {
        *((_DWORD *)Current + 130) = Src;
        goto LABEL_15;
      }
    }
    LODWORD(Src) = v13;
LABEL_15:
    RtlCopyToUser(a1, &Src, 4uLL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    }
    return 0LL;
  }
  Global = DXGGLOBAL::GetGlobal();
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)&Src + 4), &v22);
  v6 = v5;
  if ( v5 )
  {
    v20 = v5;
    v21 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
    DXGADAPTER::ReleaseReference(v6);
    if ( *((_QWORD *)v6 + 396) )
    {
      if ( *((_DWORD *)v6 + 50) == 1 )
      {
        v7 = *((_QWORD *)v6 + 396);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v7 + 72, 0LL);
        *(_QWORD *)(v7 + 80) = KeGetCurrentThread();
        v8 = *((unsigned int *)v6 + 60);
        GpuPreferenceDListState = DXGPROCESS::GetGpuPreferenceDListState(Current, v8);
        if ( GpuPreferenceDListState )
        {
          LODWORD(Src) = GpuPreferenceDListState;
        }
        else
        {
          v10 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8 * v8);
          if ( v10 )
          {
            *(_DWORD *)(v10 + 104) = Src;
          }
          else
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 990;
          }
        }
        *(_QWORD *)(v7 + 80) = 0LL;
        ExReleasePushLockExclusiveEx(v7 + 72, 0LL);
        KeLeaveCriticalRegion();
      }
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
      goto LABEL_15;
    }
    WdLogSingleEntry2(2LL, SDWORD2(Src), DWORD1(Src));
    WdLogGlobalForLineNumber = 4201;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"D3DKMTCacheHybridQueryValue called with a display-only adapter with LUID (0x%I64x%08I64x).",
      SDWORD2(Src),
      DWORD1(Src),
      0LL,
      0LL,
      0LL);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
  }
  else
  {
    WdLogSingleEntry2(2LL, SDWORD2(Src), DWORD1(Src));
    WdLogGlobalForLineNumber = 4185;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x).",
      SDWORD2(Src),
      DWORD1(Src),
      0LL,
      0LL,
      0LL);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
  return 3221225485LL;
}
