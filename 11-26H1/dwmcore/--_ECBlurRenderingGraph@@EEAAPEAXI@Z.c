/*
 * XREFs of ??_ECBlurRenderingGraph@@EEAAPEAXI@Z @ 0x18015A9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBlurRenderingGraph@@EEAA@XZ @ 0x18015AA0C (--1CBlurRenderingGraph@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CBlurRenderingGraph *__fastcall CBlurRenderingGraph::`vector deleting destructor'(CBlurRenderingGraph *this, char a2)
{
  CBlurRenderingGraph::~CBlurRenderingGraph(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x638uLL);
  return this;
}
