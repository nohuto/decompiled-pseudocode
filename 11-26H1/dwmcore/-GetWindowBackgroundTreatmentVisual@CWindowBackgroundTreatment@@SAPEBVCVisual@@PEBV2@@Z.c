/*
 * XREFs of ?GetWindowBackgroundTreatmentVisual@CWindowBackgroundTreatment@@SAPEBVCVisual@@PEBV2@@Z @ 0x1801A4E24
 * Callers:
 *     ?InvalidateDrawListCachesForBackdropInputsIfRequired@CVisual@@AEBAJPEBVCDrawingContext@@@Z @ 0x18002BE10 (-InvalidateDrawListCachesForBackdropInputsIfRequired@CVisual@@AEBAJPEBVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

const struct CVisual *__fastcall CWindowBackgroundTreatment::GetWindowBackgroundTreatmentVisual(
        const struct CVisual *a1)
{
  const struct CVisual *result; // rax

  for ( result = a1; result; result = (const struct CVisual *)*((_QWORD *)result + 11) )
  {
    if ( (**((_DWORD **)result + 28) & 0x800000) != 0 )
      break;
  }
  return result;
}
