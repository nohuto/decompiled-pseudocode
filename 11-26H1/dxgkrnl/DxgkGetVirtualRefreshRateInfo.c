/*
 * XREFs of DxgkGetVirtualRefreshRateInfo @ 0x1402C3E30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 */

__int64 __fastcall DxgkGetVirtualRefreshRateInfo(struct _LUID a1, unsigned int a2, _DWORD *a3)
{
  __int64 v4; // r13
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r12
  int v12; // r14d
  bool v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // r12
  int **v20; // rax
  int v21; // ebx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  DXGADAPTER *v25; // rbx
  char *v26; // rcx
  unsigned int v28; // esi
  struct DXGADAPTER *v29; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v31; // [rsp+60h] [rbp-20h] BYREF
  DXGADAPTER *v32; // [rsp+68h] [rbp-18h]
  char v33; // [rsp+70h] [rbp-10h]
  LONG HighPart; // [rsp+B4h] [rbp+34h]

  HighPart = a1.HighPart;
  v4 = a2;
  Global = DXGGLOBAL::GetGlobal();
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v30);
  v29 = v7;
  v8 = (__int64)v7;
  if ( !v7 )
  {
    WdLogSingleEntry2(3LL, a1.LowPart, HighPart);
    WdLogGlobalForLineNumber = 5709;
    v28 = -1073741811;
    WdLogSingleEntry3(2LL, HighPart, a1.LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 7875;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetVirtualRefreshRateInfo function, returning 0x%I64x.",
      HighPart,
      a1.LowPart,
      -1073741811LL,
      0LL,
      0LL);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v29, 0LL);
    return v28;
  }
  v9 = *((_QWORD *)v7 + 395);
  if ( !v9 )
  {
    v28 = -1073741811;
    WdLogSingleEntry2(2LL, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 7884;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter 0x%I64x is not a display adapter in DxgkGetVirtualRefreshRateInfo function, returning 0x%I64x.",
      v8,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_22:
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v8);
    return v28;
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(v9 + 96) )
  {
    v28 = -1073741811;
    WdLogSingleEntry3(2LL, v8, v4, -1073741811LL);
    WdLogGlobalForLineNumber = 7897;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Adapter 0x%I64x does not have caller specified VidPn source Id 0x%I64x in DxgkGetVirtualRefreshRateInfo f"
                "unction, returning 0x%I64x.",
      v8,
      v4,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_22;
  }
  v10 = DxgkAcquireSessionModeChangeLock(0LL);
  v11 = v10;
  v12 = 1;
  v13 = v10 >= 0;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7910;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v13 )
      DxgkReleaseSessionModeChangeLock();
    v28 = v11;
    goto LABEL_22;
  }
  v32 = (DXGADAPTER *)v8;
  v33 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v31);
  if ( *(_DWORD *)(v8 + 200) != 1 )
  {
    v28 = -1073741130;
    WdLogSingleEntry2(3LL, v8, -1073741130LL);
    WdLogGlobalForLineNumber = 7923;
    goto LABEL_25;
  }
  _mm_lfence();
  v18 = *(_QWORD *)(v8 + 3160);
  if ( (unsigned int)v4 >= *(_DWORD *)(v18 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 87;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"VidPnSourceId < m_NumVidPnSources", 87LL, 0LL, 0LL, 0LL, 0LL);
  }
  v19 = 4024 * v4;
  v20 = *(int ***)(*(_QWORD *)(v18 + 128) + 4024 * v4 + 48);
  if ( !v20 || (v21 = **v20, v21 != (unsigned int)PsGetCurrentProcessSessionId(v15, v14, v16, v17)) )
  {
    v28 = -1073741811;
    WdLogSingleEntry3(3LL, v4, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 7937;
LABEL_25:
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v31);
    if ( v13 )
      DxgkReleaseSessionModeChangeLock();
    goto LABEL_22;
  }
  v22 = *(_QWORD *)(v8 + 3160);
  if ( (unsigned int)v4 >= *(_DWORD *)(v22 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5871;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      5871LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v23 = *(_QWORD *)(v22 + 128);
  v24 = v23 + v19;
  if ( *(_DWORD *)(v23 + v19 + 1048) == -2 && *(_DWORD *)(v24 + 1052) == -2 )
  {
    a3[6] = 1;
    a3[5] = 64;
    a3[7] = 64;
    a3[8] = 1;
  }
  else
  {
    a3[5] = *(_DWORD *)(v23 + v19 + 1056);
    a3[6] = *(_DWORD *)(v23 + v19 + 1060);
    a3[7] = *(_DWORD *)(v23 + v19 + 1048);
    a3[8] = *(_DWORD *)(v24 + 1052);
    v12 = *(_DWORD *)(v23 + v19 + 1064);
  }
  a3[9] = v12;
  if ( v33 )
  {
    v25 = v32;
    v26 = (char *)v32 + 136;
    _InterlockedDecrement((volatile signed __int32 *)v32 + 38);
    ExReleasePushLockSharedEx(v26, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference(v25);
  }
  if ( v13 )
    DxgkReleaseSessionModeChangeLock();
  if ( v8 )
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v8);
  return 0LL;
}
