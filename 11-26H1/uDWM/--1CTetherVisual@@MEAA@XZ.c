/*
 * XREFs of ??1CTetherVisual@@MEAA@XZ @ 0x1800C8534
 * Callers:
 *     ??_GCTetherVisual@@MEAAPEAXI@Z @ 0x1800C85D0 (--_GCTetherVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??1CGraphicsResourceOwner@@IEAA@XZ @ 0x18001B464 (--1CGraphicsResourceOwner@@IEAA@XZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800C8A50 (-Stop@CTetherVisual@@UEAAXXZ.c)
 */

void __fastcall CTetherVisual::~CTetherVisual(CTetherVisual *this)
{
  CGraphicsResourceOwner *v2; // rdi
  CTimelineBase *v3; // rcx
  CTimelineBase *v4; // rcx

  *(_QWORD *)this = &CTetherVisual::`vftable'{for `CTouchVisual'};
  v2 = (CTetherVisual *)((char *)this + 224);
  *((_QWORD *)this + 28) = &CTetherVisual::`vftable'{for `CGraphicsResourceOwner'};
  CTetherVisual::Stop(this);
  v3 = (CTimelineBase *)*((_QWORD *)this + 34);
  if ( v3 )
  {
    CTimelineBase::Release(v3);
    *((_QWORD *)this + 34) = 0LL;
  }
  v4 = (CTimelineBase *)*((_QWORD *)this + 35);
  if ( v4 )
  {
    CTimelineBase::Release(v4);
    *((_QWORD *)this + 35) = 0LL;
  }
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 33);
  CGraphicsResourceOwner::~CGraphicsResourceOwner(v2);
  CTouchVisual::~CTouchVisual((CBaseObject **)this);
}
