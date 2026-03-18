/*
 * XREFs of ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1402AEB80
 * Callers:
 *     DxgkOpenAdapterFromDeviceName @ 0x1403A0BD0 (DxgkOpenAdapterFromDeviceName.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DpiGetDxgAdapterSafe @ 0x1402AEF6C (DpiGetDxgAdapterSafe.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1402AF2AC (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenAdapter(struct _D3DKMT_OPENADAPTER *a1)
{
  struct DXGPROCESS *Current; // rsi
  __int64 v3; // rcx
  int DxgAdapterSafe; // ebx
  DXGADAPTER *v5; // rbx
  int v6; // eax
  _QWORD *v7; // rcx
  int Handle; // esi
  __int64 v9; // rcx
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-28h]
  char v19; // [rsp+60h] [rbp-20h]
  _QWORD v20[2]; // [rsp+68h] [rbp-18h] BYREF
  char v21; // [rsp+78h] [rbp-8h]
  DXGADAPTER *v22; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+50h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2001);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    DxgAdapterSafe = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 311;
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
LABEL_25:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
    return (unsigned int)DxgAdapterSafe;
  }
  v3 = *(_QWORD *)a1;
  v22 = 0LL;
  v23 = 0LL;
  DxgAdapterSafe = DpiGetDxgAdapterSafe(v3, &v22, &v23);
  if ( DxgAdapterSafe < 0 )
    goto LABEL_25;
  v5 = v22;
  if ( (*((_DWORD *)v22 + 754) & 4) != 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 336;
LABEL_21:
    DXGADAPTER::ReleaseReference(v5);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
    return 3221225506LL;
  }
  v20[1] = v22;
  _InterlockedIncrement64((volatile signed __int64 *)v22 + 3);
  v20[0] = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v5 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v5 + 38);
  v6 = *((_DWORD *)v5 + 50);
  v21 = 1;
  if ( v6 == 1 && !*((_BYTE *)v5 + 3057) )
  {
    v7 = (_QWORD *)*((_QWORD *)v5 + 396);
    if ( v7 )
    {
      if ( !*(_BYTE *)(v7[2] + 209LL) )
      {
        v11 = *((_QWORD *)Current + 8);
        v12 = v7[92];
        v13 = v7[93];
        if ( !v11 || (v11 = *(_QWORD *)(v11 + 8LL * (unsigned int)(*(_DWORD *)v12 - 1) + 16)) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1039;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidSchProcess", 1039LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v12 + 8) + 864LL))(v13, v11) )
        {
          WdLogSingleEntry2(4LL, v5, Current);
          WdLogGlobalForLineNumber = 354;
          DXGADAPTER::ReleaseReference(v5);
          _InterlockedDecrement((volatile signed __int32 *)v5 + 38);
          ExReleasePushLockSharedEx((char *)v5 + 136, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_21;
        }
      }
    }
  }
  LODWORD(v22) = 0;
  Handle = DXGADAPTER::CreateHandle(v5, Current, (unsigned int *)&v22);
  DXGADAPTER::ReleaseReference(v5);
  if ( Handle < 0 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
    return (unsigned int)Handle;
  }
  else
  {
    *((_DWORD *)a1 + 2) = (_DWORD)v22;
    *(_QWORD *)((char *)a1 + 12) = *(_QWORD *)((char *)v5 + 412);
    _InterlockedDecrement((volatile signed __int32 *)v5 + 38);
    ExReleasePushLockSharedEx((char *)v5 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference(v5);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
    }
    return 0LL;
  }
}
