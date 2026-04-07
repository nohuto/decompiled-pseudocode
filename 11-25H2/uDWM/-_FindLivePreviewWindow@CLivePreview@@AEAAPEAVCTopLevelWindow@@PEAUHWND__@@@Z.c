/*
 * XREFs of ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x1800BA21C
 * Callers:
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180051D8C (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180057C74 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CTopLevelWindow *__fastcall CLivePreview::_FindLivePreviewWindow(CLivePreview *this, HWND a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax

  LODWORD(v2) = *((_DWORD *)this + 80);
  v3 = 0LL;
  while ( 1 )
  {
    v2 = (unsigned int)(v2 - 1);
    if ( (int)v2 < 0 )
      break;
    v4 = *((_QWORD *)this + 37);
    if ( *(HWND *)(v4 + 48 * v2 + 24) == a2 )
      return *(struct CTopLevelWindow **)(v4 + 48 * v2);
  }
  return (struct CTopLevelWindow *)v3;
}
