/*
 * XREFs of ?OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18007C280
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CThumbnailVisual::OnRootVisualChanged(
        CThumbnailVisual *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  v3 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 3) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 9) = 0LL;
  }
  CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)((char *)this - 320), 0x2000u);
}
