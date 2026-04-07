/*
 * XREFs of ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800BE360
 * Callers:
 *     <none>
 * Callees:
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x180013990 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180025A50 (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x18009EBC0 (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@CProjectionBorderManager@@I@Z @ 0x1800BE1A4 (-AddMultipleAndSet@-$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@C.c)
 *     ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800BE294 (-ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800BE314 (-ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z @ 0x1800BE6E4 (-_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z.c)
 *     ?_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z @ 0x1800BE740 (-_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z.c)
 *     ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x1800BE7CC (-_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z.c)
 *     ?_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ @ 0x1800BE9AC (-_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x1800BEA18 (-_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z.c)
 *     ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x1800BEAA0 (-_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ.c)
 *     ?UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z @ 0x1800BEBC8 (-UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::UpdateOutputDuplication(
        CProjectionBorderManager *this,
        const struct _LUID *a2)
{
  __int64 v5; // rcx
  int inserted; // esi
  unsigned int i; // edx
  __int64 j; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int ProjectionVisualByAdapter; // ebx
  int v14; // eax
  _QWORD *v15; // r15
  int v16; // eax
  __int64 v17; // r12
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  CContainerVisual *OverlayRootVisualForDesktop; // rsi
  __int64 v21; // r12
  struct CVisual *v22; // rdx
  CContainerVisual *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned int v27; // eax
  char v28; // [rsp+30h] [rbp-49h]
  int v29; // [rsp+34h] [rbp-45h]
  unsigned __int64 v30; // [rsp+38h] [rbp-41h] BYREF
  __int64 v31; // [rsp+40h] [rbp-39h]
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+48h] [rbp-31h] BYREF
  struct CProjectionBorderVisual *v33; // [rsp+50h] [rbp-29h] BYREF
  RECT v34; // [rsp+58h] [rbp-21h]
  struct _LUID v35; // [rsp+68h] [rbp-11h]
  DWORD LowPart; // [rsp+70h] [rbp-9h]
  unsigned __int64 v37; // [rsp+78h] [rbp-1h]
  char v38; // [rsp+80h] [rbp+7h]
  RECT rc1; // [rsp+88h] [rbp+Fh] BYREF

  if ( a2->LowPart > 0x10 )
    return 2147942487LL;
  v32 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  inserted = 0;
  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
  {
    v5 = 56LL * i;
    *(_BYTE *)(v5 + *((_QWORD *)this + 50) + 48) = 0;
  }
  for ( j = 0LL; ; j = (unsigned int)(v29 + 1) )
  {
    v29 = j;
    if ( (unsigned int)j >= a2->LowPart )
    {
      CProjectionBorderManager::_RemoveInactiveVisuals(this);
      CProjectionBorderManager::_UpdateFilteredVisualList(this);
      goto LABEL_37;
    }
    v9 = 3 * j;
    rc1 = 0LL;
    v10 = 3 * j;
    if ( (int)CProjectionBorderManager::_GetAdapterDisplayRect(
                (CProjectionBorderManager *)v5,
                &a2[3 * j + 2],
                a2[3 * j + 3].LowPart,
                &rc1) < 0 )
    {
      WindowFrameLoggingTelemetry::ScreenDuplicationInvalidMonitor(v12, v11);
      continue;
    }
    ProjectionVisualByAdapter = CProjectionBorderManager::_FindProjectionVisualByAdapter(
                                  this,
                                  &a2[v10 + 2],
                                  a2[v9 + 3].LowPart);
    if ( ProjectionVisualByAdapter == -1 )
      ProjectionVisualByAdapter = CProjectionBorderManager::_FindProjectionVisualByRect(this, &rc1);
    v30 = 0LL;
    if ( (unsigned int)GetDesktopID(1LL, &v30) )
      break;
LABEL_28:
    ;
  }
  v28 = 0;
  if ( ProjectionVisualByAdapter == -1 )
  {
    v33 = 0LL;
    v38 = 1;
    v34 = rc1;
    v35 = a2[v10 + 2];
    LowPart = a2[v9 + 3].LowPart;
    v37 = v30;
    v14 = CProjectionBorderVisual::Create(&v33);
    inserted = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x86u, 0LL);
      goto LABEL_37;
    }
    *((_DWORD *)v33 + 55) = 1;
    v15 = (_QWORD *)((char *)this + 400);
    v16 = DynArray<CProjectionBorderManager::VisualInfo,0>::AddMultipleAndSet((__int64)this + 400, (__int64)&v33);
    inserted = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x89u, 0LL);
      goto LABEL_37;
    }
    ProjectionVisualByAdapter = *((_DWORD *)this + 106) - 1;
    v28 = 1;
  }
  else
  {
    v31 = ProjectionVisualByAdapter;
    v17 = 56LL * ProjectionVisualByAdapter;
    v15 = (_QWORD *)((char *)this + 400);
    *(_BYTE *)(v17 + *((_QWORD *)this + 50) + 48) = 1;
    if ( !EqualRect(&rc1, (const RECT *)(v17 + *((_QWORD *)this + 50) + 8LL)) )
    {
      *(RECT *)(v17 + *v15 + 8) = rc1;
      v28 = 1;
    }
    v19 = v30;
    if ( v30 == *(_QWORD *)(v17 + *v15 + 40) )
    {
LABEL_25:
      if ( v28 )
      {
        v24 = 56 * v31;
        CProjectionBorderVisual::UpdateRect(
          *(CProjectionBorderVisual **)(56 * v31 + *v15),
          (const struct tagRECT *)(*v15 + 56 * v31 + 8));
        CVisual::SetOpacity(*(CVisual **)(v24 + *v15), 1.0, v25);
        v26 = *(_QWORD *)(*(_QWORD *)(v24 + *v15) + 24LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26);
      }
      WindowFrameLoggingTelemetry::ScreenDuplicationEnabled(v19, v18);
      goto LABEL_28;
    }
    *(_QWORD *)(v17 + *v15 + 40) = v30;
  }
  OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                  v30,
                                  1);
  if ( !OverlayRootVisualForDesktop )
  {
    OverlayRootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                    v30);
    if ( !OverlayRootVisualForDesktop )
    {
      inserted = -2147024882;
      v27 = 171;
      goto LABEL_34;
    }
  }
  v31 = ProjectionVisualByAdapter;
  v21 = 56LL * ProjectionVisualByAdapter;
  v22 = *(struct CVisual **)(v21 + *v15);
  v23 = (CContainerVisual *)*((_QWORD *)v22 + 3);
  if ( v23 )
    CContainerVisual::RemoveChild(v23, v22);
  inserted = CContainerVisual::InsertChildBefore(OverlayRootVisualForDesktop, *(CBaseObject ****)(v21 + *v15), 0LL);
  if ( inserted >= 0 )
    goto LABEL_25;
  v27 = 179;
LABEL_34:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v27, 0LL);
  if ( ProjectionVisualByAdapter != -1 )
    CProjectionBorderManager::_RemoveVisualByIndex(this, ProjectionVisualByAdapter);
LABEL_37:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v32);
  return (unsigned int)inserted;
}
