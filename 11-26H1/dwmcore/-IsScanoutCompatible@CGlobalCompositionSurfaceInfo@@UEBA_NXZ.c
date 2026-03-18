/*
 * XREFs of ?IsScanoutCompatible@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1801A3250
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 */

bool __fastcall CGlobalCompositionSurfaceInfo::IsScanoutCompatible(CGlobalCompositionSurfaceInfo *this)
{
  bool result; // al

  result = 1;
  if ( *((_DWORD *)this + 36) == 3 && !*((_BYTE *)this + 300) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &CompSurfInfo_ScanoutIncompatible,
        0LL);
    return 0;
  }
  return result;
}
