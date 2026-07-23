/*
 * XREFs of MmGetVaTypeForVerifier @ 0x1406F8520
 * Callers:
 *     DifObjTrkRemoveItem @ 0x1403B7980 (DifObjTrkRemoveItem.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14051E9C0 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     DifObjTrkInsertItem @ 0x14064EAB0 (DifObjTrkInsertItem.c)
 *     DifObjTrkLookupItem @ 0x14064EC40 (DifObjTrkLookupItem.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MmGetVaTypeForVerifier(unsigned __int64 a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  if ( !MmVerifierData || a1 < 0xFFFF800000000000uLL )
    return 5LL;
  v1 = MiGetSystemRegionType(a1) - 4;
  if ( !v1 )
    return 1LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 6;
  if ( !v3 )
    return 3LL;
  if ( v3 == 2 )
    return 2LL;
  return 4LL;
}
