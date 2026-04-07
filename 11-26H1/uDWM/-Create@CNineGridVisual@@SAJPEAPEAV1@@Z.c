/*
 * XREFs of ?Create@CNineGridVisual@@SAJPEAPEAV1@@Z @ 0x18006F188
 * Callers:
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCNineGridVisual@@PEAVCVisual@@@Z @ 0x180063914 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCNineGridVisual@@PEAVCVisual@@@.c)
 *     ?EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ @ 0x180081CD0 (-EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ.c)
 *     ?CloneVisualTree@CNineGridVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800BBA80 (-CloneVisualTree@CNineGridVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x1800BED6C (-_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ.c)
 *     ?EnsureBorderSprite@CTouchPressHoldVisual@@IEAAJPEAPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x1800CD0E4 (-EnsureBorderSprite@CTouchPressHoldVisual@@IEAAJPEAPEAUICompositionColorBrush@Composition@UI@Win.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CNineGridVisual@@QEAA@XZ @ 0x1800275D8 (--0CNineGridVisual@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridVisual::Create(struct CNineGridVisual **a1)
{
  CNineGridVisual *v2; // rax
  CNineGridVisual *v3; // rbx
  CNineGridVisual *v4; // rax
  struct CNineGridVisual *v5; // rbx
  int v6; // edi

  if ( !a1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 9u, 0LL);
    return (unsigned int)v6;
  }
  v2 = (CNineGridVisual *)DefaultHeap::AllocClear(0xD0uLL);
  v3 = v2;
  if ( !v2 )
  {
    v5 = 0LL;
    goto LABEL_8;
  }
  memset_0(v2, 0, 0xD0uLL);
  v4 = CNineGridVisual::CNineGridVisual(v3);
  v5 = v4;
  if ( !v4 )
  {
LABEL_8:
    v6 = -2147024882;
    goto LABEL_9;
  }
  v6 = (*(__int64 (__fastcall **)(CNineGridVisual *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v6 >= 0 )
  {
    *a1 = v5;
    return 0;
  }
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 9u, 0LL);
  *a1 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v6;
}
