/*
 * XREFs of sub_18001F008 @ 0x18001F008
 * Callers:
 *     sub_18003E908 @ 0x18003E908 (sub_18003E908.c)
 *     sub_18003EA38 @ 0x18003EA38 (sub_18003EA38.c)
 * Callees:
 *     sub_18001FA20 @ 0x18001FA20 (sub_18001FA20.c)
 */

char __fastcall sub_18001F008(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // r8
  int v8; // r8d

  v5 = a4;
  if ( a4 >= a2 )
    v5 = a2;
  v8 = sub_18001FA20(a1, a3, v5);
  if ( v8 )
    return v8;
  if ( a2 >= a4 )
    return a2 > a4;
  return -1;
}
