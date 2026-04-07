/*
 * XREFs of ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180070890
 * Callers:
 *     ??_ECAnimatedTransitionVisual@@MEAAPEAXI@Z @ 0x180070844 (--_ECAnimatedTransitionVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800164E0 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CGraphicsResourceOwner@@IEAA@XZ @ 0x18001B464 (--1CGraphicsResourceOwner@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x180077970 (-Release@CAnimationResource@@UEAAKXZ.c)
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 */

void __fastcall CAnimatedTransitionVisual::~CAnimatedTransitionVisual(
        CAnimatedTransitionVisual *this,
        const struct std::nothrow_t *a2)
{
  CGraphicsResourceOwner *v3; // r15
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  CAnimationResource **v17; // rdi
  __int64 v18; // rsi
  const struct std::nothrow_t *v19; // rdx
  const struct std::nothrow_t *v20; // rdx

  *(_QWORD *)this = &CAnimatedTransitionVisual::`vftable'{for `IAnimatedVisual'};
  v3 = (CAnimatedTransitionVisual *)((char *)this + 216);
  *((_QWORD *)this + 1) = &CAnimatedTransitionVisual::`vftable'{for `CRectangleVisual'};
  v4 = (CBaseObject *)*((_QWORD *)this + 30);
  *(_QWORD *)v3 = &CAnimatedTransitionVisual::`vftable'{for `CGraphicsResourceOwner'};
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 34);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 77);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 78);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)*((_QWORD *)this + 79);
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = (CBaseObject *)*((_QWORD *)this + 80);
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = (CBaseObject *)*((_QWORD *)this + 76);
  if ( v10 )
    CBaseObject::Release(v10);
  v11 = (CBaseObject *)*((_QWORD *)this + 81);
  if ( v11 )
    CBaseObject::Release(v11);
  v12 = (CBaseObject *)*((_QWORD *)this + 82);
  if ( v12 )
    CBaseObject::Release(v12);
  v13 = (CBaseObject *)*((_QWORD *)this + 83);
  if ( v13 )
    CBaseObject::Release(v13);
  v14 = (CBaseObject *)*((_QWORD *)this + 31);
  if ( v14 )
    CBaseObject::Release(v14);
  v15 = (CBaseObject *)*((_QWORD *)this + 32);
  if ( v15 )
    CBaseObject::Release(v15);
  v16 = (CBaseObject *)*((_QWORD *)this + 33);
  if ( v16 )
    CBaseObject::Release(v16);
  v17 = (CAnimationResource **)((char *)this + 552);
  v18 = 7LL;
  do
  {
    if ( *v17 )
      CAnimationResource::Release(*v17);
    ++v17;
    --v18;
  }
  while ( v18 );
  CDisplayBlackCurtainAnimatedVisual::operator delete(*((void **)this + 35), a2);
  CDisplayBlackCurtainAnimatedVisual::operator delete(*((void **)this + 36), v19);
  CDisplayBlackCurtainAnimatedVisual::operator delete(*((void **)this + 37), v20);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 68);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 67);
  CVisualBrush::~CVisualBrush((CAnimatedTransitionVisual *)((char *)this + 520));
  CGraphicsResourceOwner::~CGraphicsResourceOwner(v3);
  CRectangleVisual::~CRectangleVisual((CBaseObject **)this + 1);
}
