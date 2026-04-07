/*
 * XREFs of ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x18002B330
 * Callers:
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x18002C88C (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x18002C448 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x18002CAEC (-_GetDesktopWorkArea@CLivePreview@@AEAA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180033AB8 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800581F4 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@AEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x18009D124 (--$_Emplace_reallocate@AEBQEAVCWindowData@@@-$vector@PEAVCWindowData@@V-$allocator@PEAVCWindowDa.c)
 *     ?GetMonitorDesktopWorkArea@CImmersiveState@@QEAA?AUtagRECT@@PEAUHMONITOR__@@@Z @ 0x1800B795C (-GetMonitorDesktopWorkArea@CImmersiveState@@QEAA-AUtagRECT@@PEAUHMONITOR__@@@Z.c)
 *     ?SetMonitorDesktopWorkArea@CImmersiveState@@QEAAXPEAUHMONITOR__@@AEBUtagRECT@@@Z @ 0x1800B7A1C (-SetMonitorDesktopWorkArea@CImmersiveState@@QEAAXPEAUHMONITOR__@@AEBUtagRECT@@@Z.c)
 *     ?FindTabWindowData@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800E0CE4 (-FindTabWindowData@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall CLivePreview::Activate(__int64 a1, __int64 a2, unsigned int a3, HWND a4, int a5, int a6, __int64 a7)
{
  unsigned int v8; // ebx
  __int64 v9; // r15
  CDesktopManager *v10; // rcx
  __int64 v11; // rdx
  __int64 i; // rcx
  __int64 j; // r12
  struct CWindowData *WindowDataByHwnd; // rax
  struct CWindowData *v16; // rbx
  int v17; // eax
  bool v18; // al
  RECT v19; // xmm0
  struct CWindowData **v20; // rdx
  const RECT *v21; // r14
  HMONITOR v22; // rax
  HMONITOR v23; // r15
  struct tagRECT *DesktopWorkArea; // rax
  signed int LastError; // eax
  struct CWindowData *v27; // [rsp+38h] [rbp-79h] BYREF
  __int64 v28; // [rsp+40h] [rbp-71h]
  struct tagRECT v29; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v30; // [rsp+58h] [rbp-59h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+68h] [rbp-49h] BYREF
  struct tagRECT Rect; // [rsp+98h] [rbp-19h] BYREF
  RECT rc1; // [rsp+A8h] [rbp-9h] BYREF

  v8 = a3;
  v28 = a2;
  v9 = a2;
  *(_DWORD *)(a1 + 408) = a5;
  v10 = CDesktopManager::s_pDesktopManagerInstance;
  *(_BYTE *)(a1 + 187) = a5 == 4;
  *(_BYTE *)(a1 + 188) = 0;
  *(_WORD *)(a1 + 185) = 1;
  *(_DWORD *)(a1 + 200) = a6;
  *(_QWORD *)(a1 + 392) = CWindowList::FindWindowDataByHwnd(*((CWindowList **)v10 + 53), a4);
  v11 = *(_QWORD *)(a1 + 376);
  for ( i = *(_QWORD *)(a1 + 368); i != v11; i += 8LL )
    *(_BYTE *)(*(_QWORD *)i + 742LL) &= ~1u;
  if ( *(_QWORD *)(a1 + 368) != *(_QWORD *)(a1 + 376) )
    *(_QWORD *)(a1 + 376) = *(_QWORD *)(a1 + 368);
  for ( j = 0LL; (unsigned int)j < v8; j = (unsigned int)(j + 1) )
  {
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                         *(HWND *)(v9 + 8 * j));
    v27 = WindowDataByHwnd;
    v16 = WindowDataByHwnd;
    if ( WindowDataByHwnd
      || (WindowDataByHwnd = CWindowList::FindTabWindowData(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                               *(HWND *)(v9 + 8 * j)),
          v27 = WindowDataByHwnd,
          (v16 = WindowDataByHwnd) != 0LL) )
    {
      if ( (*((_BYTE *)WindowDataByHwnd + 736) & 4) == 0 )
      {
        v20 = *(struct CWindowData ***)(a1 + 376);
        if ( v20 == *(struct CWindowData ***)(a1 + 384) )
        {
          std::vector<CWindowData *>::_Emplace_reallocate<CWindowData * const &>(a1 + 368, v20, &v27);
          v16 = v27;
        }
        else
        {
          *v20 = v16;
          *(_QWORD *)(a1 + 376) += 8LL;
        }
        *((_BYTE *)v16 + 742) |= 1u;
      }
      if ( (*((_DWORD *)v16 + 29) & 0x20000000) != 0 && !*((_QWORD *)v16 + 60) && !CWindowData::GetMDIOwner(v16) )
      {
        wndpl.length = 44;
        memset(&wndpl.flags, 0, 40);
        SetLastError(0);
        if ( !GetWindowPlacement(*((HWND *)v16 + 5), &wndpl) )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          if ( LastError >= 0 )
            LastError = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, 0x355u, 0LL);
          return CLivePreview::Activate((CLivePreview *)a1);
        }
        if ( (wndpl.flags & 2) == 0 )
        {
          Rect = 0LL;
          AdjustWindowRectEx(&Rect, *((_DWORD *)v16 + 29), 0, *((_DWORD *)v16 + 30));
        }
      }
      if ( !*(_BYTE *)(a1 + 186) )
      {
        v17 = *((_DWORD *)v16 + 32);
        v18 = v17 == 1 || ((v17 - 8) & 0xFFFFFFFD) == 0;
        *(_BYTE *)(a1 + 186) = v18;
      }
      if ( !a7
        || (v21 = (const RECT *)(a7 + 16LL * (unsigned int)j),
            (unsigned __int8)TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(v21)) )
      {
        if ( *((_DWORD *)v16 + 32) == 1 )
          v19 = *CLivePreview::_GetDesktopWorkArea((CLivePreview *)a1, &v30, v16);
        else
          v19 = (RECT)*((_OWORD *)v16 + 3);
      }
      else if ( *((_DWORD *)v16 + 32) == 1 )
      {
        v22 = MonitorFromWindow(*((HWND *)v16 + 5), 0);
        v23 = v22;
        if ( v22 )
        {
          CImmersiveState::GetMonitorDesktopWorkArea(*(CImmersiveState **)(a1 + 400), &rc1, v22);
          if ( !EqualRect(&rc1, v21) )
            CImmersiveState::SetMonitorDesktopWorkArea(*(CImmersiveState **)(a1 + 400), v23, v21);
        }
        DesktopWorkArea = CLivePreview::_GetDesktopWorkArea((CLivePreview *)a1, &v29, v16);
        v9 = v28;
        v19 = *DesktopWorkArea;
      }
      else
      {
        v19 = *v21;
      }
      *(RECT *)((char *)v16 + 852) = v19;
    }
    v8 = a3;
  }
  return CLivePreview::Activate((CLivePreview *)a1);
}
