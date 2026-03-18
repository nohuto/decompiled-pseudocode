/*
 * XREFs of DxgkSetIndirectDisplayRenderAdapter @ 0x1401B863C
 * Callers:
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x140190C38 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1401B8D08 (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     DXGKCALLONEXIT__lambda_b92d923974d1229c2f7b920661264967___ @ 0x140073744 (DXGKCALLONEXIT__lambda_b92d923974d1229c2f7b920661264967___.c)
 *     _DXGKCALLONEXIT__lambda_b92d923974d1229c2f7b920661264967____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1400737A0 (_DXGKCALLONEXIT__lambda_b92d923974d1229c2f7b920661264967____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1401A4CE8 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x1401A6EA0 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z.c)
 *     _lambda_b92d923974d1229c2f7b920661264967_::_lambda_b92d923974d1229c2f7b920661264967_ @ 0x1401B3C54 (_lambda_b92d923974d1229c2f7b920661264967_--_lambda_b92d923974d1229c2f7b920661264967_.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x14029F0F4 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 */

__int64 __fastcall DxgkSetIndirectDisplayRenderAdapter(struct DXGADAPTER *a1, struct _LUID *a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  _QWORD *v7; // rax
  __int128 v8; // xmm1
  struct _LUID *v9; // rdx
  bool v10; // zf
  LONG *p_HighPart; // r15
  __int64 v12; // rdi
  LONG *v13; // r13
  __int64 *v14; // r14
  __int64 v15; // r14
  __int64 *v16; // r15
  __int64 v17; // r15
  __int64 v19; // [rsp+20h] [rbp-E0h]
  __int64 LowPart; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v21[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[16]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  __int128 v25[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-50h]
  struct _GUID v27; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v28[48]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v29[12]; // [rsp+100h] [rbp+0h] BYREF
  char v30; // [rsp+170h] [rbp+70h] BYREF
  int IndirectDisplayPairedAdapter; // [rsp+180h] [rbp+80h] BYREF
  __int64 v32; // [rsp+188h] [rbp+88h] BYREF

  v3 = 0;
  IndirectDisplayPairedAdapter = 0;
  v32 = 0LL;
  v24 = 0LL;
  v30 = 0;
  v27 = 0LL;
  if ( a3 )
    *a3 = 0;
  v7 = lambda_b92d923974d1229c2f7b920661264967_::_lambda_b92d923974d1229c2f7b920661264967_(
         v29,
         (__int64)a2,
         (__int64)&IndirectDisplayPairedAdapter,
         (__int64)&v32,
         (__int64)&v24,
         (__int64)&v30);
  v8 = *((_OWORD *)v7 + 1);
  v25[0] = *(_OWORD *)v7;
  v26 = v7[4];
  v25[1] = v8;
  DXGKCALLONEXIT__lambda_b92d923974d1229c2f7b920661264967_((__int64)v28, v25);
  v32 = *(_QWORD *)((char *)a1 + 412);
  v21[0] = 0LL;
  DXGADAPTER::IsAdapterSessionized(a1, v9, 0LL, v21);
  v10 = (*((_DWORD *)a1 + 111) & 0x100) == 0;
  v24 = v21[0];
  if ( v10 )
  {
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 12391;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.",
      (__int64)a1,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v3 = -1073741585;
    IndirectDisplayPairedAdapter = -1073741585;
LABEL_38:
    DXGKCALLONEXIT__lambda_b92d923974d1229c2f7b920661264967____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v28);
    return v3;
  }
  p_HighPart = &a2->HighPart;
  v21[0] = 0LL;
  v12 = 0LL;
  if ( a2->HighPart )
  {
    v13 = &a2->HighPart;
  }
  else
  {
    if ( !a2->LowPart )
      goto LABEL_11;
    v13 = &a2->HighPart;
  }
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v21, a2);
  v12 = v21[0];
  if ( !v21[0] )
  {
    WdLogSingleEntry3(2LL, *p_HighPart, a2->LowPart, -1073741811LL);
    LowPart = a2->LowPart;
    v19 = *p_HighPart;
    WdLogGlobalForLineNumber = 12408;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid Render Adapter LUID (0x%I64x, 0x%I64x) specified, returning 0x%I64x",
      v19,
      LowPart,
      -1073741811LL,
      0LL,
      0LL);
    IndirectDisplayPairedAdapter = -1073741584;
    goto LABEL_37;
  }
  p_HighPart = v13;
LABEL_11:
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(*((_QWORD *)a1 + 395) + 152LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v22[0] = 0LL;
  IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(a1, 0, (struct DXGADAPTER_REFERENCE *)v22);
  if ( IndirectDisplayPairedAdapter < 0 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 12446;
  }
  if ( v22[0] == v12 )
  {
    WdLogSingleEntry2(4LL, *p_HighPart, a2->LowPart);
    WdLogGlobalForLineNumber = 12453;
    IndirectDisplayPairedAdapter = 0;
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v22, 0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v21, 0LL);
    goto LABEL_38;
  }
  v14 = (__int64 *)(v22[0] + 3168LL);
  if ( !v22[0] )
    v14 = (__int64 *)(v12 + 3168);
  v15 = *v14;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v15 + 24, 0LL);
  *(_QWORD *)(v15 + 32) = KeGetCurrentThread();
  if ( v22[0] )
    v16 = (__int64 *)(v22[0] + 3168LL);
  else
    v16 = (__int64 *)(v12 + 3168);
  v17 = *v16;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v17 + 48, 0LL);
  *(_QWORD *)(v17 + 56) = KeGetCurrentThread();
  if ( v12 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v25,
      (struct DXGADAPTER *)v12,
      1);
    if ( *(_QWORD *)(v12 + 3168) && (*(_DWORD *)(v12 + 3016) & 8) == 0 )
    {
      if ( *(_DWORD *)(v12 + 200) != 1 || *(_BYTE *)(v12 + 3057) )
      {
        WdLogSingleEntry2(3LL, v12, -1073741130LL);
        WdLogGlobalForLineNumber = 12496;
        IndirectDisplayPairedAdapter = -1073741130;
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
        *(_QWORD *)(v17 + 56) = 0LL;
        ExReleasePushLockExclusiveEx(v17 + 48, 0LL);
        KeLeaveCriticalRegion();
        *(_QWORD *)(v15 + 32) = 0LL;
        ExReleasePushLockExclusiveEx(v15 + 24, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v22, 0LL);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v21, 0LL);
        v3 = -1073741130;
        goto LABEL_38;
      }
      v27 = *(struct _GUID *)(v12 + 316);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
      goto LABEL_26;
    }
    WdLogSingleEntry2(2LL, v12, -1073741584LL);
    WdLogGlobalForLineNumber = 12488;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter 0x%I64x is not a capable adapter, returning 0x%I64x",
      v12,
      -1073741584LL,
      0LL,
      0LL,
      0LL);
    IndirectDisplayPairedAdapter = -1073741584;
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
    *(_QWORD *)(v17 + 56) = 0LL;
    ExReleasePushLockExclusiveEx(v17 + 48, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)(v15 + 32) = 0LL;
    ExReleasePushLockExclusiveEx(v15 + 24, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v22, 0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
LABEL_37:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v21, 0LL);
    v3 = -1073741584;
    goto LABEL_38;
  }
LABEL_26:
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v25, a1, 1);
  if ( *((_DWORD *)a1 + 50) != 1 || *((_BYTE *)a1 + 3057) )
  {
    WdLogSingleEntry2(3LL, a1, -1073741130LL);
    WdLogGlobalForLineNumber = 12513;
    IndirectDisplayPairedAdapter = -1073741130;
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
    *(_QWORD *)(v17 + 56) = 0LL;
    ExReleasePushLockExclusiveEx(v17 + 48, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)(v15 + 32) = 0LL;
    ExReleasePushLockExclusiveEx(v15 + 24, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v22, 0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v21, 0LL);
    DXGKCALLONEXIT__lambda_b92d923974d1229c2f7b920661264967____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v28);
    return 3221226166LL;
  }
  else
  {
    if ( v22[0] )
      ADAPTER_RENDER::DisconnectFromDisplayAdapters(*(ADAPTER_RENDER **)(v22[0] + 3168LL), a1, *((_DWORD *)a1 + 50));
    ADAPTER_DISPLAY::SetPairedRenderAdapter(*((ADAPTER_DISPLAY **)a1 + 395), (struct DXGADAPTER *)v12, &v27);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
    v30 = 1;
    if ( a3 )
      *a3 = 1;
    IndirectDisplayPairedAdapter = 0;
    *(_QWORD *)(v17 + 56) = 0LL;
    ExReleasePushLockExclusiveEx(v17 + 48, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)(v15 + 32) = 0LL;
    ExReleasePushLockExclusiveEx(v15 + 24, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v22, 0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v21, 0LL);
    DXGKCALLONEXIT__lambda_b92d923974d1229c2f7b920661264967____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v28);
    return 0LL;
  }
}
