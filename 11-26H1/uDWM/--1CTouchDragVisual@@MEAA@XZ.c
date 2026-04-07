/*
 * XREFs of ??1CTouchDragVisual@@MEAA@XZ @ 0x18008782C
 * Callers:
 *     ??_GCTouchDragVisual@@MEAAPEAXI@Z @ 0x180075350 (--_GCTouchDragVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ??1CGraphicsResourceOwner@@IEAA@XZ @ 0x18001B464 (--1CGraphicsResourceOwner@@IEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800796F0 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ??1?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@QEAA@XZ @ 0x1800878C4 (--1-$deque@UTrailPoint@CTouchDragVisual@@V-$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@.c)
 */

void __fastcall CTouchDragVisual::~CTouchDragVisual(CTouchDragVisual *this)
{
  CGraphicsResourceOwner *v2; // rbx

  *(_QWORD *)this = &CTouchDragVisual::`vftable'{for `CTouchVisual'};
  v2 = (CTouchDragVisual *)((char *)this + 224);
  *((_QWORD *)this + 28) = &CTouchDragVisual::`vftable'{for `CGraphicsResourceOwner'};
  CTouchDragVisual::Stop(this);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 51);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 50);
  std::deque<CTouchDragVisual::TrailPoint>::~deque<CTouchDragVisual::TrailPoint>((char *)this + 352);
  std::deque<CTouchDragVisual::TrailPoint>::~deque<CTouchDragVisual::TrailPoint>((char *)this + 312);
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 35);
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 31);
  CGraphicsResourceOwner::~CGraphicsResourceOwner(v2);
  CTouchVisual::~CTouchVisual((CBaseObject **)this);
}
