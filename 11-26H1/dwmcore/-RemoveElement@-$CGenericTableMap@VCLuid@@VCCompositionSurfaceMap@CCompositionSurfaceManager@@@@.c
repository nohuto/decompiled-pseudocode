/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@QEAAXPEAVCCompositionSurfaceMap@CCompositionSurfaceManager@@@Z @ 0x1801B4CBC
 * Callers:
 *     ?RemoveFromSurfaceMap@CCompositionSurfaceManager@@MEAA_NU_LUID@@@Z @ 0x1801B4C60 (-RemoveFromSurfaceMap@CCompositionSurfaceManager@@MEAA_NU_LUID@@@Z.c)
 *     ??_GCCompositionSurfaceManager@@MEAAPEAXI@Z @ 0x18022E020 (--_GCCompositionSurfaceManager@@MEAAPEAXI@Z.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x1802319F0 (--1CSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::RemoveElement(
        struct _RTL_GENERIC_TABLE *a1,
        _QWORD *a2)
{
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = *a2;
  Buffer[1] = 0LL;
  if ( !RtlDeleteElementGenericTable(a1, Buffer) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
