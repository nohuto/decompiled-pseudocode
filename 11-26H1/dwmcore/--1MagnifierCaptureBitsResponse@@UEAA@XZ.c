/*
 * XREFs of ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x18009A98C
 * Callers:
 *     ??_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z @ 0x18009A940 (--_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 */

void __fastcall MagnifierCaptureBitsResponse::~MagnifierCaptureBitsResponse(MagnifierCaptureBitsResponse *this)
{
  CResource *v2; // rcx

  *(_QWORD *)this = &MagnifierCaptureBitsResponse::`vftable';
  v2 = (CResource *)*((_QWORD *)this + 192);
  if ( v2 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v2);
  CaptureBitsResponse::~CaptureBitsResponse(this);
}
