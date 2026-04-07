/*
 * XREFs of ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18002748C
 * Callers:
 *     ?Initialize@CContactStationaryVisual@@MEAAJXZ @ 0x180002D10 (-Initialize@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x1800034E0 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038650 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800502E0 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CFlickVisual@@MEAAJXZ @ 0x1800B4E50 (-Initialize@CFlickVisual@@MEAAJXZ.c)
 *     ?CloneVisualTree@CImage@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800B6C30 (-CloneVisualTree@CImage@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B7C30 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800B8250 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJXZ @ 0x1800BBC80 (-Initialize@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800BC110 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z @ 0x1800DD800 (-SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CImage@@IEAA@XZ @ 0x180027580 (--0CImage@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImage::Create(struct CImage **a1)
{
  CImage *v2; // rax
  CImage *v3; // rbx
  CImage *v4; // rax
  struct CImage *v5; // rbx
  int v6; // edi

  if ( !a1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xCu, 0LL);
    return (unsigned int)v6;
  }
  v2 = (CImage *)DefaultHeap::AllocClear(0xF0uLL);
  v3 = v2;
  if ( !v2 )
  {
    v5 = 0LL;
    goto LABEL_11;
  }
  memset_0(v2, 0, 0xF0uLL);
  v4 = CImage::CImage(v3);
  v5 = v4;
  if ( !v4 )
  {
LABEL_11:
    v6 = -2147024882;
    goto LABEL_6;
  }
  v6 = (*(__int64 (__fastcall **)(CImage *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v6 >= 0 )
  {
    *a1 = v5;
    return 0;
  }
LABEL_6:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xCu, 0LL);
  *a1 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v6;
}
