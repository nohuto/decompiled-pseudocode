/*
 * XREFs of ??4?$ComPtr@VCWindowBackgroundTreatmentVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatmentVisual@@@Z @ 0x180066D98
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180023778 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject **__fastcall Microsoft::WRL::ComPtr<CWindowBackgroundTreatmentVisual>::operator=(
        CBaseObject **a1,
        CBaseObject *a2)
{
  CBaseObject *v3; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      CBaseObject::AddRef(a2);
    v3 = *a1;
    *a1 = a2;
    if ( v3 )
      CBaseObject::Release(v3);
  }
  return a1;
}
