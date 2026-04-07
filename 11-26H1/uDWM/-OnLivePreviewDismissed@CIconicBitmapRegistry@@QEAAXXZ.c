/*
 * XREFs of ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x18002D478
 * Callers:
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x18002D00C (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180038A3C (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800194C0 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CIconicBitmapRegistry::OnLivePreviewDismissed(CIconicBitmapRegistry *this)
{
  CBaseObject *v2; // rcx

  if ( *((_BYTE *)this + 89) )
    CIconicBitmapRegistry::RequestBitmap(this, (HWND *)0xFFFFFFFFFFFFFFFFLL, 0);
  v2 = (CBaseObject *)*((_QWORD *)this + 12);
  *(_WORD *)((char *)this + 89) = 0;
  *((_BYTE *)this + 88) = 0;
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 12) = 0LL;
  }
}
