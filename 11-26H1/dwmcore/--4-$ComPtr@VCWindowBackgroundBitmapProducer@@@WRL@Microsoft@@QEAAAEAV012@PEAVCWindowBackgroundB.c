/*
 * XREFs of ??4?$ComPtr@VCWindowBackgroundBitmapProducer@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundBitmapProducer@@@Z @ 0x18016E218
 * Callers:
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016E108 (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@A.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180039E6C (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::ComPtr<CWindowBackgroundBitmapProducer>::operator=(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2)
{
  volatile signed __int32 *v4; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 2));
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v4);
  }
  return a1;
}
