/*
 * XREFs of ?Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800DE90C
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180025DF0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDesktopThumbnailBase@@MEAAJXZ @ 0x180066C00 (-Initialize@CDesktopThumbnailBase@@MEAAJXZ.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x180066D04 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

__int64 __fastcall CDCompDesktopThumbnail::Create(struct CDCompDesktopThumbnail **a1)
{
  int v2; // edi
  CDesktopThumbnailBase *v3; // rax
  CDesktopThumbnailBase *v4; // rbx

  if ( a1 )
  {
    v3 = (CDesktopThumbnailBase *)DefaultHeap::AllocClear(0xE8uLL);
    v4 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0xE8uLL);
      CDesktopThumbnailBase::CDesktopThumbnailBase(v4);
      *(_QWORD *)v4 = &CDCompDesktopThumbnail::`vftable';
      v2 = CDesktopThumbnailBase::Initialize((struct CContainerVisualProxy **)v4);
      if ( v2 >= 0 )
      {
        *a1 = v4;
        return 0;
      }
    }
    else
    {
      v4 = 0LL;
      v2 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xFEu, 0LL);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xFEu, 0LL);
  }
  return (unsigned int)v2;
}
