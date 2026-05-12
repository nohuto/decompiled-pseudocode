/*
 * XREFs of sub_1401212A8 @ 0x1401212A8
 * Callers:
 *     sub_140121320 @ 0x140121320 (sub_140121320.c)
 * Callees:
 *     <none>
 */

__int64 sub_1401212A8()
{
  USHORT HighestNodeNumber; // si
  USHORT v1; // bx
  unsigned __int16 v2; // di
  USHORT Count; // [rsp+30h] [rbp+8h] BYREF

  HighestNodeNumber = KeQueryHighestNodeNumber();
  v1 = 0;
  v2 = 0;
  do
  {
    Count = 0;
    KeQueryNodeActiveAffinity(v1, 0LL, &Count);
    if ( Count )
      ++v2;
    ++v1;
  }
  while ( v1 <= HighestNodeNumber );
  return v2;
}
