/*
 * XREFs of ?SetOpacity@CNineGridImagePrimitive@@QEAAXM@Z @ 0x1800BD8BC
 * Callers:
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x18006A884 (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CNineGridImagePrimitive::SetOpacity(CNineGridImagePrimitive *this, float a2)
{
  CNineGridImagePrimitive::InternalSetOpacity(this, fminf(1.0, fmaxf(a2, 0.0)));
}
