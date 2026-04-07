/*
 * XREFs of ??1CThumbnailVisual@@MEAA@XZ @ 0x180081BA4
 * Callers:
 *     ??_ECThumbnailVisual@@MEAAPEAXI@Z @ 0x18006A980 (--_ECThumbnailVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 */

void __fastcall CThumbnailVisual::~CThumbnailVisual(CThumbnailVisual *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  *(_QWORD *)this = &CThumbnailVisual::`vftable'{for `CCanvasVisual'};
  *((_QWORD *)this + 23) = &CPrimitiveGroupVisual::`vftable'{for `CGraphicsResourceOwner'};
  *((_QWORD *)this + 33) = &CThumbnailAnimatedVisual::`vftable';
  *((_QWORD *)this + 43) = &CThumbnailVisual::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  v2 = (CBaseObject *)*((_QWORD *)this + 45);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 45) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 51);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 51) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 49);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 49) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 50);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 50) = 0LL;
  }
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 48);
  CVisualBrush::~CVisualBrush((CThumbnailVisual *)((char *)this + 368));
  CPrimitiveGroupVisual::~CPrimitiveGroupVisual(this);
}
