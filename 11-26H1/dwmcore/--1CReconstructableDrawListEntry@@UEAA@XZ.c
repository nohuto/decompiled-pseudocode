/*
 * XREFs of ??1CReconstructableDrawListEntry@@UEAA@XZ @ 0x18009D77C
 * Callers:
 *     ??_GCReconstructableDrawListEntry_UVx0@@UEAAPEAXI@Z @ 0x18009D6D0 (--_GCReconstructableDrawListEntry_UVx0@@UEAAPEAXI@Z.c)
 *     ??_ECReconstructableDrawListEntry_UVxN@@UEAAPEAXI@Z @ 0x18009D730 (--_ECReconstructableDrawListEntry_UVxN@@UEAAPEAXI@Z.c)
 *     ??_ECReconstructableDrawListEntry@@UEAAPEAXI@Z @ 0x18025DA10 (--_ECReconstructableDrawListEntry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VCRenderingEffect@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18009D970 (-InternalRelease@-$CMILRefCountBaseT@VCRenderingEffect@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CReconstructableDrawListEntry::~CReconstructableDrawListEntry(CReconstructableDrawListEntry *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  if ( *((_QWORD *)this + 10) )
    CMILRefCountBaseT<CRenderingEffect,CMilObjectDeleter>::InternalRelease();
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v4 )
    (**v4)(v4, 1LL);
}
