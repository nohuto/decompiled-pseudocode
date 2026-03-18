/*
 * XREFs of HvlQueryConnection @ 0x140497A50
 * Callers:
 *     HvlPhase0Initialize @ 0x14079166C (HvlPhase0Initialize.c)
 *     EtwpSysModuleRunDown @ 0x14096F07C (EtwpSysModuleRunDown.c)
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
