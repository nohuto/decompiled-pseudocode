/*
 * XREFs of DxgkGetCachedHybridQueryValue @ 0x1403C0EE0
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

__int64 __fastcall DxgkGetCachedHybridQueryValue(void *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rsi
  int v4; // eax
  __int64 v5; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  struct DXGADAPTER *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  int Src; // [rsp+50h] [rbp-88h] BYREF
  int v13; // [rsp+58h] [rbp-80h] BYREF
  __int64 v14; // [rsp+60h] [rbp-78h]
  char v15; // [rsp+68h] [rbp-70h]
  _BYTE v16[16]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v17[8]; // [rsp+80h] [rbp-58h] BYREF
  struct DXGADAPTER *v18; // [rsp+88h] [rbp-50h]
  char v19; // [rsp+90h] [rbp-48h]
  unsigned __int64 v20; // [rsp+98h] [rbp-40h] BYREF
  struct _LUID v21[2]; // [rsp+A0h] [rbp-38h] BYREF
  int v22; // [rsp+B0h] [rbp-28h]

  v13 = -1;
  v14 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2090;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 2090);
  Current = DXGPROCESS::GetCurrent(v2);
  if ( Current )
  {
    *(_OWORD *)&v21[0].LowPart = 0LL;
    v22 = 0;
    RtlCopyFromUser(v21, a1, 0x14uLL);
    Src = 0;
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v16, Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        v4 = *((_DWORD *)Current + 131);
      }
      else
      {
        if ( v22 != 2 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 4115;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Invalid D3DKMT_HYBRID_LIST QueryType!",
            4115LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_11;
        }
        v4 = *((_DWORD *)Current + 130);
      }
      Src = v4;
LABEL_11:
      RtlCopyToUser(a1, &Src, 4uLL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
      if ( v15 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit);
      }
      return 0LL;
    }
    Global = DXGGLOBAL::GetGlobal();
    v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v21[0].HighPart, &v20);
    v9 = v8;
    if ( v8 )
    {
      v18 = v8;
      v19 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
      DXGADAPTER::ReleaseReference(v9);
      if ( *((_QWORD *)v9 + 396) )
      {
        if ( *((_DWORD *)v9 + 50) == 1 )
        {
          v10 = *((_QWORD *)v9 + 396);
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v10 + 72, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 88));
          Src = DXGPROCESS::GetGpuPreferenceDListState(Current, *((_DWORD *)v9 + 60));
          _InterlockedDecrement((volatile signed __int32 *)(v10 + 88));
          ExReleasePushLockSharedEx(v10 + 72, 0LL);
          KeLeaveCriticalRegion();
        }
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
        goto LABEL_11;
      }
      WdLogSingleEntry2(2LL, (int)v21[1].LowPart, (unsigned int)v21[0].HighPart);
      WdLogGlobalForLineNumber = 4083;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"D3DKMTGetCachedHybridQueryValue called with a display-only adapter with LUID (0x%I64x%08I64x).",
        (int)v21[1].LowPart,
        (unsigned int)v21[0].HighPart,
        0LL,
        0LL,
        0LL);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
    }
    else
    {
      WdLogSingleEntry2(2LL, (int)v21[1].LowPart, (unsigned int)v21[0].HighPart);
      WdLogGlobalForLineNumber = 4067;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x).",
        (int)v21[1].LowPart,
        (unsigned int)v21[0].HighPart,
        0LL,
        0LL,
        0LL);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4031;
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
  return 3221225485LL;
}
