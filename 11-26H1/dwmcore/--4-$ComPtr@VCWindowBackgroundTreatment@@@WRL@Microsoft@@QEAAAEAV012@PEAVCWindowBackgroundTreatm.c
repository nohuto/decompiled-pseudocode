/*
 * XREFs of ??4?$ComPtr@VCWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatment@@@Z @ 0x18016E260
 * Callers:
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016E108 (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@A.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 */

CResource **__fastcall Microsoft::WRL::ComPtr<CWindowBackgroundTreatment>::operator=(CResource **a1, __int64 a2)
{
  CResource *v4; // rcx

  if ( *a1 != (CResource *)a2 )
  {
    if ( a2 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
    v4 = *a1;
    *a1 = (CResource *)a2;
    if ( v4 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v4);
  }
  return a1;
}
