/*
 * XREFs of sub_1400425B8 @ 0x1400425B8
 * Callers:
 *     sub_14000BD54 @ 0x14000BD54 (sub_14000BD54.c)
 *     sub_14017A040 @ 0x14017A040 (sub_14017A040.c)
 *     sub_1401B2A00 @ 0x1401B2A00 (sub_1401B2A00.c)
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_140029648 @ 0x140029648 (sub_140029648.c)
 */

__int64 __fastcall sub_1400425B8(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 608) || !*(_QWORD *)(a1 + 616) )
    return 0LL;
  if ( sub_140020090(a1 + 376, 1) )
    return (unsigned int)sub_140029648(a1);
  return v1;
}
