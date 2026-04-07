/*
 * XREFs of ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180051F68
 * Callers:
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180051D8C (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z @ 0x18006BD50 (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18000A81C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x18004C3BC (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x18005222C (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18005478C (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 *     ?GetFrameMaximizedClipMargins@CTopLevelWindow@@AEAA?AU_MARGINS@@XZ @ 0x18009A3C8 (-GetFrameMaximizedClipMargins@CTopLevelWindow@@AEAA-AU_MARGINS@@XZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::GetLivePreviewVisual(
        struct CWindowData *a1,
        struct CTopLevelWindow **a2,
        struct CWindowIconic **a3)
{
  unsigned int v3; // ebx
  CTopLevelWindow *v7; // rcx
  __int64 v8; // r8
  CTopLevelWindow *v9; // rdi
  CWindowData *v10; // r9
  bool v11; // zf
  __int64 v12; // r8
  CMILRefCountBase *v13; // rcx
  int WindowRestoreRect; // eax
  signed int LastError; // eax
  unsigned int v17; // [rsp+20h] [rbp-58h]
  struct _MARGINS v18; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  v7 = (CTopLevelWindow *)*((_QWORD *)a1 + 55);
  if ( (*((_BYTE *)a1 + 673) & 1) != 0 )
  {
LABEL_17:
    WindowRestoreRect = CWindowIconic::Create(a1, a3, 1);
    v3 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      v17 = 5621;
      goto LABEL_11;
    }
    *a2 = (struct CTopLevelWindow *)*((_QWORD *)*a3 + 11);
    v13 = (CMILRefCountBase *)*((_QWORD *)*a3 + 11);
    if ( v13 )
      goto LABEL_7;
    return v3;
  }
  v8 = *((_QWORD *)a1 + 60);
  if ( !v8 )
  {
    if ( v7 && (*((_DWORD *)a1 + 29) & 0x20000000) == 0 )
    {
      WindowRestoreRect = CTopLevelWindow::CloneVisualTreeForLivePreview(v7, 0, a2);
      v3 = WindowRestoreRect;
      if ( WindowRestoreRect < 0 )
      {
        v17 = 5642;
        goto LABEL_11;
      }
      return v3;
    }
    goto LABEL_17;
  }
  v9 = *(CTopLevelWindow **)(v8 + 24);
  CTopLevelWindow::GetFrameMaximizedClipMargins(v9, &v18);
  v11 = (*((_DWORD *)v10 + 29) & 0x20000000) == 0;
  rc = *(struct tagRECT *)(*(_QWORD *)(v12 + 32) + 48LL);
  if ( !v11 )
  {
    WindowRestoreRect = CWindowData::GetWindowRestoreRect(v10, &rc, 1);
    v3 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      v17 = 5632;
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRestoreRect, v17, 0LL);
      return v3;
    }
  }
  SetLastError(0);
  if ( OffsetRect(&rc, -v18.cxLeftWidth, -v18.cyTopHeight) )
  {
    CVisual::SetOffset((struct tagPOINT *)v9, (const struct tagPOINT *)&rc);
    *a2 = v9;
    if ( v9 )
    {
      v13 = v9;
LABEL_7:
      CMILRefCountBase::AddRef(v13);
    }
  }
  else
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    if ( (v3 & 0x80000000) == 0 )
      v3 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1603u, 0LL);
  }
  return v3;
}
