/*
 * XREFs of ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800C2880
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x180015914 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004BCB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18004CCDC (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@CProjectionBorderManager@@I@Z @ 0x1800BDCCC (-AddMultipleAndSet@-$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@C.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x1800BE098 (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800C076C (-ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800C07EC (-ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z @ 0x1800C3BC0 (-_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z.c)
 *     ?_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z @ 0x1800C3C1C (-_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z.c)
 *     ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x1800C3CA4 (-_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z.c)
 *     ?_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ @ 0x1800C42CC (-_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x1800C4338 (-_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z.c)
 *     ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x1800C4F1C (-_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ.c)
 *     ?UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x1800C52DC (-UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::UpdateOutputDuplication(
        CProjectionBorderManager *this,
        const struct _D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_ *a2)
{
  __int64 v5; // rcx
  int inserted; // esi
  unsigned int i; // edx
  __int64 j; // rax
  __int64 v9; // r15
  const struct _LUID *v10; // r13
  __int64 v11; // rcx
  unsigned int ProjectionVisualByAdapter; // ebx
  int v13; // eax
  _QWORD *v14; // r15
  int v15; // eax
  __int64 v16; // r13
  __int64 v17; // rcx
  CContainerVisual *OverlayRootVisualForDesktop; // rsi
  __int64 v19; // r13
  struct CVisualProxy **v20; // rdx
  CContainerVisual *v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rcx
  char v24; // [rsp+30h] [rbp-49h]
  int v25; // [rsp+34h] [rbp-45h]
  __int64 v26; // [rsp+40h] [rbp-39h]
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+48h] [rbp-31h] BYREF
  struct CProjectionBorderVisual *v28; // [rsp+50h] [rbp-29h] BYREF
  RECT v29; // [rsp+58h] [rbp-21h]
  struct _LUID v30; // [rsp+68h] [rbp-11h]
  int v31; // [rsp+70h] [rbp-9h]
  __int64 v32; // [rsp+78h] [rbp-1h]
  char v33; // [rsp+80h] [rbp+7h]
  RECT rc1; // [rsp+88h] [rbp+Fh] BYREF

  if ( *(_DWORD *)a2 > 0x10u )
    return 2147942487LL;
  v27 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  inserted = 0;
  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
  {
    v5 = 56LL * i;
    *(_BYTE *)(v5 + *((_QWORD *)this + 50) + 48) = 0;
  }
  for ( j = 0LL; ; j = (unsigned int)(v25 + 1) )
  {
    v25 = j;
    if ( (unsigned int)j >= *(_DWORD *)a2 )
    {
      CProjectionBorderManager::_RemoveInactiveVisuals(this);
      CProjectionBorderManager::_UpdateFilteredVisualList(this);
      goto LABEL_38;
    }
    v9 = 3 * j;
    rc1 = 0LL;
    v10 = (const struct _LUID *)((char *)a2 + 24 * j);
    if ( (int)CProjectionBorderManager::_GetAdapterDisplayRect(
                (CProjectionBorderManager *)v5,
                v10 + 2,
                v10[3].LowPart,
                &rc1) < 0 )
    {
      WindowFrameLoggingTelemetry::ScreenDuplicationInvalidMonitor(v11);
      continue;
    }
    ProjectionVisualByAdapter = CProjectionBorderManager::_FindProjectionVisualByAdapter(
                                  this,
                                  v10 + 2,
                                  *((_DWORD *)a2 + 2 * v9 + 6));
    if ( ProjectionVisualByAdapter == -1 )
      ProjectionVisualByAdapter = CProjectionBorderManager::_FindProjectionVisualByRect(this, &rc1);
    if ( (unsigned int)GetDesktopID(1LL) )
      break;
LABEL_32:
    ;
  }
  v24 = 0;
  if ( ProjectionVisualByAdapter == -1 )
  {
    v28 = 0LL;
    v33 = 1;
    v29 = rc1;
    v30 = v10[2];
    v31 = *((_DWORD *)a2 + 2 * v9 + 6);
    v32 = 0LL;
    v13 = CProjectionBorderVisual::Create(&v28);
    inserted = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x86u, 0LL);
      goto LABEL_38;
    }
    *((_DWORD *)v28 + 65) = 1;
    v14 = (_QWORD *)((char *)this + 400);
    v15 = DynArray<CProjectionBorderManager::VisualInfo,0>::AddMultipleAndSet((__int64)this + 400, (__int64)&v28);
    inserted = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x89u, 0LL);
      goto LABEL_38;
    }
    ProjectionVisualByAdapter = *((_DWORD *)this + 106) - 1;
    v24 = 1;
  }
  else
  {
    v14 = (_QWORD *)((char *)this + 400);
    v16 = 56LL * ProjectionVisualByAdapter;
    *(_BYTE *)(*((_QWORD *)this + 50) + v16 + 48) = 1;
    if ( !EqualRect(&rc1, (const RECT *)(v16 + *((_QWORD *)this + 50) + 8LL)) )
    {
      *(RECT *)(*v14 + v16 + 8) = rc1;
      v24 = 1;
    }
    v17 = 0LL;
    if ( !*(_QWORD *)(*v14 + v16 + 40) )
    {
      v19 = ProjectionVisualByAdapter;
LABEL_29:
      if ( v24 )
      {
        CSolidRectangleVisual::UpdateRect(
          *(CSolidRectangleVisual **)(56 * v19 + *v14),
          (const struct tagRECT *)(56 * v19 + *v14 + 8LL));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(56 * v19 + *v14) + 88LL))(*(_QWORD *)(56 * v19 + *v14));
        v23 = *(_QWORD *)(*(_QWORD *)(*v14 + 56 * v19) + 24LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL))(v23);
      }
      WindowFrameLoggingTelemetry::ScreenDuplicationEnabled(v17);
      goto LABEL_32;
    }
    *(_QWORD *)(*v14 + v16 + 40) = 0LL;
  }
  OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                  0LL,
                                  1);
  if ( OverlayRootVisualForDesktop
    || (OverlayRootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                        0LL)) != 0LL )
  {
    v19 = ProjectionVisualByAdapter;
    v26 = 56LL * ProjectionVisualByAdapter;
    v20 = *(struct CVisualProxy ***)(v26 + *v14);
    v21 = v20[3];
    if ( v21 )
      CContainerVisual::RemoveChild(v21, v20);
    inserted = CContainerVisual::InsertChildBefore(
                 OverlayRootVisualForDesktop,
                 *(CMILRefCountBase ****)(v26 + *v14),
                 0LL);
    if ( inserted < 0 )
    {
      v22 = 179;
      goto LABEL_26;
    }
    goto LABEL_29;
  }
  inserted = -2147024882;
  v22 = 171;
LABEL_26:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v22, 0LL);
  if ( ProjectionVisualByAdapter != -1 )
    CProjectionBorderManager::_RemoveVisualByIndex(this, ProjectionVisualByAdapter);
LABEL_38:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v27);
  return (unsigned int)inserted;
}
