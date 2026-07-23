/*
 * XREFs of PrExtGetRecord @ 0x1406E0F1C
 * Callers:
 *     HalpGetMicrocodePatchRecord @ 0x1405958A4 (HalpGetMicrocodePatchRecord.c)
 *     HalpLoadSfsUpdateEx @ 0x14059D2B0 (HalpLoadSfsUpdateEx.c)
 * Callees:
 *     SfsFwpGetRecord @ 0x1406E1184 (SfsFwpGetRecord.c)
 *     MicrocodeGetRecord @ 0x1406E18B8 (MicrocodeGetRecord.c)
 */

__int64 __fastcall PrExtGetRecord(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  if ( a3 <= 6 )
  {
    if ( a3 == 6 || a3 != 1 && a3 != 2 )
      return 3221225659LL;
    return MicrocodeGetRecord(a3, a1, a2, a4, a5, a6);
  }
  if ( a3 == 7 || a3 == 9 )
    return 3221225659LL;
  if ( a3 == 13 )
    return MicrocodeGetRecord(a3, a1, a2, a4, a5, a6);
  if ( a3 != 14 )
    return 3221225659LL;
  return SfsFwpGetRecord(a1, a2, a4, a5, a6);
}
