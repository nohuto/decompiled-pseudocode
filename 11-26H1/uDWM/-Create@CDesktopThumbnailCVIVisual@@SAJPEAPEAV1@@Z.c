/*
 * XREFs of ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x180066AA0
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180025DF0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180066670 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800AD6C0 (-CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x1800E0750 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRectangleVisual@@IEAA@XZ @ 0x180027600 (--0CRectangleVisual@@IEAA@XZ.c)
 *     ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ @ 0x180066BB0 (-Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::Create(struct CDesktopThumbnailCVIVisual **a1)
{
  CRectangleVisual *v2; // rax
  CRectangleVisual *v3; // rbx
  int v4; // edi

  if ( !a1 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xACu, 0LL);
    return (unsigned int)v4;
  }
  v2 = (CRectangleVisual *)DefaultHeap::AllocClear(0x108uLL);
  v3 = v2;
  if ( v2 )
  {
    CRectangleVisual::CRectangleVisual(v2);
    *((_QWORD *)v3 + 26) = 0LL;
    *(_QWORD *)v3 = &CDesktopThumbnailCVIVisual::`vftable';
    *((_QWORD *)v3 + 28) = 0LL;
    *((_QWORD *)v3 + 29) = 0LL;
    *((_WORD *)v3 + 128) = 0;
    v4 = CDesktopThumbnailCVIVisual::Initialize(v3);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      return 0;
    }
  }
  else
  {
    v3 = 0LL;
    v4 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xACu, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v4;
}
