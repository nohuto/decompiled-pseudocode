/*
 * XREFs of ?CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z @ 0x1801DAD0C
 * Callers:
 *     ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z @ 0x18023020C (-CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 */

__int64 __fastcall CSuperWetInkManager::CheckCommonComputeScribbleSupport(CSuperWetInkManager *this, bool *a2)
{
  bool v2; // zf

  v2 = CCommonRegistryData::SuperWetEnabled == 0;
  *a2 = 0;
  if ( v2 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        9LL);
  }
  else
  {
    *a2 = 1;
  }
  return 0LL;
}
