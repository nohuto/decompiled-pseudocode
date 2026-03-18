/*
 * XREFs of RtlpHpLfhSubsegmentCountEmptyUnits @ 0x140349CC0
 * Callers:
 *     RtlpHpLfhSubsegmentFree @ 0x140349360 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x1403499A0 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x140349D70 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCountEmptyUnits(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v3; // r11d
  int EmptyUnits; // eax
  int i; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0;
  for ( i = 0; v1 < *(unsigned __int8 *)(a1 + 39); v1 = i + EmptyUnits )
  {
    EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(a1, v1, &i);
    if ( EmptyUnits == -1 )
      break;
    v3 += i;
  }
  return v3;
}
