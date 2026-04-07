/*
 * XREFs of ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x1800460A8
 * Callers:
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x180045C40 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180055C44 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001BAFC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CIconicBitmapRegistry::OnLivePreviewDismissed(CIconicBitmapRegistry *this)
{
  CBaseObject *v2; // rcx

  if ( *((_BYTE *)this + 89) )
    CIconicBitmapRegistry::RequestBitmap(this, (HWND *)0xFFFFFFFFFFFFFFFFLL, 0);
  *(_WORD *)((char *)this + 89) = 0;
  v2 = (CBaseObject *)*((_QWORD *)this + 12);
  *((_BYTE *)this + 88) = 0;
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 12) = 0LL;
  }
}
