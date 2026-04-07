/*
 * XREFs of ??4?$com_ptr_t@VCSolidRectangleVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180078858
 * Callers:
 *     ?EnsureResources@CTopLevelWindow3D@@AEAAJXZ @ 0x1800836E0 (-EnsureResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?ConnectSprite@CTouchDragVisual@@AEAAJPEAUTrailPoint@1@@Z @ 0x1800CC60C (-ConnectSprite@CTouchDragVisual@@AEAAJPEAUTrailPoint@1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject **__fastcall wil::com_ptr_t<CSolidRectangleVisual,wil::err_returncode_policy>::operator=(
        CBaseObject **a1,
        CBaseObject **a2)
{
  CBaseObject *v2; // rax
  CBaseObject *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    CBaseObject::Release(v4);
  return a1;
}
