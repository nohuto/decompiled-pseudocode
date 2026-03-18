/*
 * XREFs of BmlCompareSingleWireFormatType @ 0x140194C4C
 * Callers:
 *     BmlCompareWireFormat @ 0x14041CFD0 (BmlCompareWireFormat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareSingleWireFormatType(char a1, char a2)
{
  int v2; // edx

  v2 = a2 & 0xC;
  if ( (a1 & 0xC) != 0 )
    return v2 == 0;
  else
    return (unsigned int)-(v2 != 0);
}
