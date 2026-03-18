/*
 * XREFs of ??1CBlurRenderingGraph@@EEAA@XZ @ 0x18015AA0C
 * Callers:
 *     ??_ECBlurRenderingGraph@@EEAAPEAXI@Z @ 0x18015A9D0 (--_ECBlurRenderingGraph@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CBlurRenderingGraph::~CBlurRenderingGraph(CBlurRenderingGraph *this)
{
  char *v2; // rcx

  *(_QWORD *)this = &CBlurRenderingGraph::`vftable';
  v2 = (char *)this + 16;
  *((_DWORD *)v2 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v2, 0x18u);
  *((_BYTE *)this + 200) = 1;
  CExternalEffectGraph::~CExternalEffectGraph(this);
}
