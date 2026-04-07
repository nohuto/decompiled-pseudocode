/*
 * XREFs of ?Create@CSpriteVisual@@SAJPEAPEAV1@@Z @ 0x180088F20
 * Callers:
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x1800592D4 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CloneVisualTree@CSpriteVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800C6060 (-CloneVisualTree@CSpriteVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSpriteVisual@@QEAA@XZ @ 0x18003983C (--0CSpriteVisual@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVisual::Create(struct CSpriteVisual **a1)
{
  int v2; // edi
  CSpriteVisual *v3; // rax
  CSpriteVisual *v4; // rbx
  CSpriteVisual *v5; // rax
  struct CSpriteVisual *v6; // rbx

  if ( !a1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xCu, 0LL);
    return (unsigned int)v2;
  }
  v3 = (CSpriteVisual *)DefaultHeap::AllocClear(0xA8uLL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0xA8uLL);
    v5 = CSpriteVisual::CSpriteVisual(v4);
    v6 = v5;
    if ( v5 )
    {
      v2 = (*(__int64 (__fastcall **)(CSpriteVisual *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( v2 >= 0 )
      {
        *a1 = v6;
        return 0;
      }
      goto LABEL_9;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v2 = -2147024882;
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xCu, 0LL);
  *a1 = 0LL;
  if ( v6 )
    CBaseObject::Release(v6);
  return (unsigned int)v2;
}
