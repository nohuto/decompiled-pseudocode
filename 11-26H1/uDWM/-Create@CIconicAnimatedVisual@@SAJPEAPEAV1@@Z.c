/*
 * XREFs of ?Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800CE520
 * Callers:
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800CF648 (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CSpriteVisual@@UEAAJXZ @ 0x180037E50 (-Initialize@CSpriteVisual@@UEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800B5F28 (--0CIconicAnimatedVisual@@IEAA@XZ.c)
 */

__int64 __fastcall CIconicAnimatedVisual::Create(struct CIconicAnimatedVisual **a1)
{
  int v2; // edi
  CIconicAnimatedVisual *v3; // rax
  CSpriteVisual *v4; // rax
  struct CIconicAnimatedVisual *v5; // rbx

  if ( !a1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x18u, 0LL);
    return (unsigned int)v2;
  }
  v3 = (CIconicAnimatedVisual *)DefaultHeap::AllocClear(0x120uLL);
  if ( v3 )
  {
    v4 = CIconicAnimatedVisual::CIconicAnimatedVisual(v3);
    v5 = v4;
    if ( v4 )
    {
      v2 = CSpriteVisual::Initialize(v4);
      if ( v2 >= 0 )
      {
        *a1 = v5;
        return 0;
      }
      goto LABEL_9;
    }
  }
  else
  {
    v5 = 0LL;
  }
  v2 = -2147024882;
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x18u, 0LL);
  *a1 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v2;
}
