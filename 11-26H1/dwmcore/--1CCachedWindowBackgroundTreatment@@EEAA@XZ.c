/*
 * XREFs of ??1CCachedWindowBackgroundTreatment@@EEAA@XZ @ 0x1801D24EC
 * Callers:
 *     ??_GCCachedWindowBackgroundTreatment@@EEAAPEAXI@Z @ 0x1801D24B0 (--_GCCachedWindowBackgroundTreatment@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180039E6C (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 */

void __fastcall CCachedWindowBackgroundTreatment::~CCachedWindowBackgroundTreatment(
        CCachedWindowBackgroundTreatment *this)
{
  volatile signed __int32 *v2; // rcx
  CResource *v3; // rcx

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v2);
  }
  v3 = (CResource *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v3);
  }
}
