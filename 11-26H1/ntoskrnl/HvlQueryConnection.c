/*
 * XREFs of HvlQueryConnection @ 0x1404915A0
 * Callers:
 *     HvlPhase0Initialize @ 0x14079419C (HvlPhase0Initialize.c)
 *     EtwpSysModuleRunDown @ 0x1409BC6CC (EtwpSysModuleRunDown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryConnection(_QWORD *a1)
{
  if ( !HvlpHypercallCodeVa )
    return 3221225473LL;
  if ( a1 )
    *a1 = HvlpHypercallCodeVa;
  return 0LL;
}
