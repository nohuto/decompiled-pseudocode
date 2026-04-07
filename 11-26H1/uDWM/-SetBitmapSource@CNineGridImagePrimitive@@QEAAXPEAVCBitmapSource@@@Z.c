/*
 * XREFs of ?SetBitmapSource@CNineGridImagePrimitive@@QEAAXPEAVCBitmapSource@@@Z @ 0x180072CA8
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180094B30 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?InitializeClonedPrimitive@CNineGridImagePrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD6D0 (-InitializeClonedPrimitive@CNineGridImagePrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSource@@@Z @ 0x18001BA84 (--4-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSource@@@.c)
 */

void __fastcall CNineGridImagePrimitive::SetBitmapSource(CNineGridImagePrimitive *this, struct CBitmapSource *a2)
{
  CBaseObject **v3; // rcx

  v3 = (CBaseObject **)((char *)this + 56);
  if ( *v3 != a2 )
  {
    wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>::operator=(v3, a2);
    CPrimitive::MarkGroupForRebuild(this);
  }
}
