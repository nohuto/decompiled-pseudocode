/*
 * XREFs of sub_140012E50 @ 0x140012E50
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 *     sub_140042620 @ 0x140042620 (sub_140042620.c)
 *     sub_1400C225C @ 0x1400C225C (sub_1400C225C.c)
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_1400296E0 @ 0x1400296E0 (sub_1400296E0.c)
 */

__int64 __fastcall sub_140012E50(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  if ( (unsigned __int8)sub_140020090(a1, a2) )
    return sub_1400296E0(a1, v2);
  else
    return 3221225659LL;
}
