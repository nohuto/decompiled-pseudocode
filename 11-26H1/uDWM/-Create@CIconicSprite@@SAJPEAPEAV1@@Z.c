/*
 * XREFs of ?Create@CIconicSprite@@SAJPEAPEAV1@@Z @ 0x18008A110
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038650 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSpriteVisual@@QEAA@XZ @ 0x180027638 (--0CSpriteVisual@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     ?Initialize@CIconicSprite@@MEAAJXZ @ 0x1800DE720 (-Initialize@CIconicSprite@@MEAAJXZ.c)
 */

__int64 __fastcall CIconicSprite::Create(struct CIconicSprite **a1)
{
  int v2; // edi
  CSpriteVisual *v3; // rax
  CSpriteVisual *v4; // rbx

  if ( a1 )
  {
    v3 = (CSpriteVisual *)DefaultHeap::AllocClear(0xB8uLL);
    v4 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0xB8uLL);
      CSpriteVisual::CSpriteVisual(v4);
      *(_QWORD *)v4 = &CIconicSprite::`vftable';
      v2 = CIconicSprite::Initialize(v4);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x20u, 0LL);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x20u, 0LL);
  }
  return (unsigned int)v2;
}
