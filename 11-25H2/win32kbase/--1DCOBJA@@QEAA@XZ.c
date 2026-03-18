/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x14008B640
 * Callers:
 *     GreValidateVisrgn @ 0x1400473D4 (GreValidateVisrgn.c)
 *     GreSelectVisRgnShared @ 0x140089820 (GreSelectVisRgnShared.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x140089890 (GreLockVisRgnSharedOrExclusive.c)
 *     GreGetDCOrgEx @ 0x14008A850 (GreGetDCOrgEx.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14008AA94 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetDCOrg @ 0x14008B230 (GreSetDCOrg.c)
 *     GreGetBounds @ 0x14008B330 (GreGetBounds.c)
 *     GreIsRendering @ 0x14008B570 (GreIsRendering.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     GreCopyVisRgn @ 0x14017D470 (GreCopyVisRgn.c)
 *     GreIntersectVisRect @ 0x14017D540 (GreIntersectVisRect.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1400D9140 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DCOBJA::~DCOBJA(DCOBJA *this)
{
  __int64 v1; // rbx
  HDC v3; // r15
  __int64 v4; // rcx
  PVOID *p_DeviceContext; // rdi
  __int64 v6; // rcx
  PVOID *v7; // rax
  __int64 v8; // rsi
  char v9; // bp
  bool v10; // zf
  __int64 v11; // rcx
  char v12; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v13; // rdi
  __int64 SessionState; // rax
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v15; // rcx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v16; // rdx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v17; // rdi
  __int64 v18; // rax
  char *v19; // rax
  __int64 v20; // rcx
  char **v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-38h] BYREF
  int v23; // [rsp+28h] [rbp-30h]
  __int16 v24; // [rsp+2Ch] [rbp-2Ch]
  PVOID *v25; // [rsp+30h] [rbp-28h]

  v1 = *(_QWORD *)this;
  if ( !*(_QWORD *)this )
    goto LABEL_29;
  v3 = *(HDC *)v1;
  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    p_DeviceContext = *(PVOID **)(W32GetSessionState(v4) + 88);
  else
    p_DeviceContext = &WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    v7 = p_DeviceContext;
  else
    v7 = *(PVOID **)(W32GetSessionState(v6) + 88);
  v25 = v7;
  HANDLELOCK::vLockHandle(&v22, (unsigned __int16)*(_DWORD *)v1 | (*(_DWORD *)v1 >> 8) & 0xFF0000, 5);
  if ( !v23 )
  {
    HmgPentryFromPobj((_DWORD *)v1);
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v22);
    goto LABEL_29;
  }
  v8 = v22;
  v9 = *(_BYTE *)(v22 + 15) & 8;
  v10 = (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() == 0;
  v12 = *(_BYTE *)(v8 + 14);
  if ( !v10 )
  {
    if ( v12 == 5 )
    {
      v16 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v1 + 680);
      if ( !v16 )
        goto LABEL_26;
      v15 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)p_DeviceContext[713];
    }
    else
    {
      if ( v12 != 16 )
        goto LABEL_26;
      v16 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v1 + 136);
      if ( !v16 )
        goto LABEL_26;
      v15 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)p_DeviceContext[717];
    }
    if ( !v15 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( v12 == 5 )
  {
    v13 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v1 + 680);
    SessionState = W32GetSessionState(v11);
    if ( v13 )
    {
      v15 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(SessionState + 88) + 5704LL);
      if ( v15 )
      {
        v16 = v13;
LABEL_25:
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v15, v16, 0);
      }
    }
  }
  else if ( v12 == 16 )
  {
    v17 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v1 + 136);
    v18 = W32GetSessionState(v11);
    if ( v17 )
    {
      v15 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(v18 + 88) + 5736LL);
      if ( v15 )
      {
        v16 = v17;
        goto LABEL_25;
      }
    }
  }
LABEL_26:
  --*(_DWORD *)(v1 + 8);
  HANDLELOCK::vUnlock((HANDLELOCK *)&v22);
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v22);
  if ( v9 )
    GrepDeleteDC(v3, 0x2000000u);
LABEL_29:
  v19 = (char *)this + 40;
  if ( this != (DCOBJA *)-40LL )
  {
    v20 = *(_QWORD *)v19;
    if ( *(char **)(*(_QWORD *)v19 + 8LL) != v19 || (v21 = (char **)*((_QWORD *)this + 6), *v21 != v19) )
      __fastfail(3u);
    *v21 = (char *)v20;
    *(_QWORD *)(v20 + 8) = v21;
    *((_QWORD *)this + 6) = (char *)this + 40;
    *(_QWORD *)v19 = v19;
  }
}
