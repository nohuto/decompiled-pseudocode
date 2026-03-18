/*
 * XREFs of ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x18022A994
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180234B84 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CComposition::CurrentRedrawRegionColor(
        CComposition *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  CComposition *v2; // r8
  __int64 v3; // rax
  int *v4; // rcx
  struct _D3DCOLORVALUE *result; // rax

  v2 = g_pComposition;
  v3 = *((_QWORD *)g_pComposition + 110);
  v4 = (int *)((char *)g_pComposition + 6352);
  if ( v3 != *((_QWORD *)g_pComposition + 795) )
  {
    *((_QWORD *)g_pComposition + 795) = v3;
    *v4 = ((unsigned __int8)*v4 + 1) & 3;
  }
  result = retstr;
  *(struct _D3DCOLORVALUE *)&retstr->r = *((struct _D3DCOLORVALUE *)v2 + (unsigned int)*v4 + 393);
  return result;
}
