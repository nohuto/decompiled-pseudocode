/*
 * XREFs of PrintIndent @ 0x140055A94
 * Callers:
 *     ParseScope @ 0x140005CE0 (ParseScope.c)
 *     ParseTerm @ 0x140006120 (ParseTerm.c)
 *     ParseFieldList @ 0x140010940 (ParseFieldList.c)
 *     ParseField @ 0x140010AC8 (ParseField.c)
 *     ParsePackage @ 0x1400387D0 (ParsePackage.c)
 * Callees:
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 */

ULONG __fastcall PrintIndent(__int64 a1)
{
  ULONG result; // eax
  int i; // ebx

  result = ConPrintf("\n%I64x: ", *(_QWORD *)(a1 + 120));
  for ( i = 0; i < dword_14008EC34; ++i )
    result = ConPrintf("| ");
  return result;
}
