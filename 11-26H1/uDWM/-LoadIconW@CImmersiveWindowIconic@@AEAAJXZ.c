/*
 * XREFs of ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800873F4
 * Callers:
 *     ?OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z @ 0x180087384 (-OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B7C30 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180008D8C (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180019D08 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800B70C4 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA_ea_1800B70C4.c)
 */

__int64 __fastcall CImmersiveWindowIconic::LoadIconW(CImmersiveWindowIconic *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rax
  CBaseObject *BitmapSourceNoRef; // rax
  LONG *v6; // rsi
  const struct tagSIZE *v7; // rcx
  const struct tagSIZE *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  struct tagRECT v13; // [rsp+20h] [rbp-18h] BYREF
  struct tagPOINT v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 54);
  if ( v1 == 2 || (unsigned int)(*((_DWORD *)this + 54) - 3) <= 1 )
  {
    v3 = *((_QWORD *)this + 23);
    v14 = 0LL;
    IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                            *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
                            *(HWND *)(v3 + 40));
    if ( IconicResourceNoRef )
    {
      BitmapSourceNoRef = (CBaseObject *)CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
                                           IconicResourceNoRef,
                                           v1,
                                           *((unsigned int *)this + 57));
      v6 = (LONG *)BitmapSourceNoRef;
      if ( BitmapSourceNoRef )
      {
        CBaseObject::AddRef(BitmapSourceNoRef);
        v8 = v7 + 16;
        *(_QWORD *)&v13.left = 0LL;
        v13.right = v7[16].cx;
        v13.bottom = v6[33];
        CRectangleVisual::SetRect(*((CRectangleVisual **)this + 24), &v13);
        CVisual::SetSize(*((CVisual **)this + 25), v8, v9, v10);
        CVisual::SetOffset(*((struct tagPOINT **)this + 25), &v14, v11);
        CImage::SetBitmapSource(*((CImage **)this + 25), (struct CBitmapSource *)v6);
        CBaseObject::Release((CBaseObject *)v6);
      }
    }
  }
  return 0LL;
}
