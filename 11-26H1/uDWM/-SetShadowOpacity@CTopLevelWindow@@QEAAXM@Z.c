/*
 * XREFs of ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x18006A884
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180023778 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetOpacity@CNineGridImagePrimitive@@QEAAXM@Z @ 0x1800BD8BC (-SetOpacity@CNineGridImagePrimitive@@QEAAXM@Z.c)
 */

void __fastcall CTopLevelWindow::SetShadowOpacity(CTopLevelWindow *this, float a2)
{
  CNineGridImagePrimitive *v3; // rcx
  CNineGridImagePrimitive *v4; // rcx
  CNineGridImagePrimitive *v5; // rcx
  CNineGridImagePrimitive *v6; // rcx

  v3 = (CNineGridImagePrimitive *)*((_QWORD *)this + 54);
  if ( v3 )
    CNineGridImagePrimitive::SetOpacity(v3, a2);
  v4 = (CNineGridImagePrimitive *)*((_QWORD *)this + 55);
  if ( v4 )
    CNineGridImagePrimitive::SetOpacity(v4, a2);
  v5 = (CNineGridImagePrimitive *)*((_QWORD *)this + 56);
  if ( v5 )
    CNineGridImagePrimitive::SetOpacity(v5, a2);
  v6 = (CNineGridImagePrimitive *)*((_QWORD *)this + 57);
  if ( v6 )
    CNineGridImagePrimitive::SetOpacity(v6, a2);
}
