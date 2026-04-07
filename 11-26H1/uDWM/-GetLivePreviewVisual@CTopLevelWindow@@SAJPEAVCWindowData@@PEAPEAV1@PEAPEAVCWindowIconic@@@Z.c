/*
 * XREFs of ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180031B64
 * Callers:
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180031978 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z @ 0x180044CC0 (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x180023D1C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180033740 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003852C (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 *     ?GetFrameMaximizedClipMargins@CTopLevelWindow@@AEAA?AU_MARGINS@@XZ @ 0x18008DE38 (-GetFrameMaximizedClipMargins@CTopLevelWindow@@AEAA-AU_MARGINS@@XZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
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
  __int64 v13; // r8
  CBaseObject *v14; // rcx
  int WindowRestoreRect; // eax
  int v17; // r9d
  signed int LastError; // eax
  unsigned int v19; // [rsp+20h] [rbp-58h]
  struct _MARGINS v20; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  v7 = (CTopLevelWindow *)*((_QWORD *)a1 + 55);
  if ( (*((_BYTE *)a1 + 737) & 1) != 0 )
    goto LABEL_22;
  v8 = *((_QWORD *)a1 + 60);
  if ( !v8 )
  {
    if ( v7 && (*((_DWORD *)a1 + 29) & 0x20000000) == 0 )
    {
      WindowRestoreRect = CTopLevelWindow::CloneVisualTreeForLivePreview(v7, 0, a2);
      v3 = WindowRestoreRect;
      if ( WindowRestoreRect < 0 )
      {
        v19 = 5444;
        goto LABEL_14;
      }
      return v3;
    }
LABEL_22:
    WindowRestoreRect = CWindowIconic::Create(a1, a3, 1);
    v3 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      v19 = 5423;
      goto LABEL_14;
    }
    *a2 = (struct CTopLevelWindow *)*((_QWORD *)*a3 + 11);
    v14 = (CBaseObject *)*((_QWORD *)*a3 + 11);
    if ( !v14 )
      return v3;
    goto LABEL_7;
  }
  v9 = *(CTopLevelWindow **)(v8 + 24);
  CTopLevelWindow::GetFrameMaximizedClipMargins(v9, &v20);
  v11 = (*((_DWORD *)v10 + 29) & 0x20000000) == 0;
  rc = *(struct tagRECT *)(*(_QWORD *)(v12 + 32) + 48LL);
  if ( !v11 )
  {
    WindowRestoreRect = CWindowData::GetWindowRestoreRect(v10, &rc, 1);
    v3 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      v19 = 5434;
LABEL_14:
      v17 = WindowRestoreRect;
LABEL_15:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, v19, 0LL);
      return v3;
    }
  }
  SetLastError(0);
  if ( !OffsetRect(&rc, -v20.cxLeftWidth, -v20.cyTopHeight) )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    v19 = 5437;
    if ( (v3 & 0x80000000) == 0 )
      v3 = -2003304445;
    v17 = v3;
    goto LABEL_15;
  }
  CVisual::SetOffset((struct tagPOINT *)v9, (const struct tagPOINT *)&rc, v13);
  *a2 = v9;
  if ( v9 )
  {
    v14 = v9;
LABEL_7:
    CBaseObject::AddRef(v14);
  }
  return v3;
}
