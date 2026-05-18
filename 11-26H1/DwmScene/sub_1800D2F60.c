/*
 * XREFs of sub_1800D2F60 @ 0x1800D2F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D1A4C @ 0x1800D1A4C (sub_1800D1A4C.c)
 */

char __fastcall sub_1800D2F60(__int64 a1, __int64 a2, char a3)
{
  int v4; // eax
  char v5; // dl
  char v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0;
  v4 = sub_1800D1A4C(a1, a2, &v7);
  v5 = a3;
  if ( !v4 )
    return v7;
  return v5;
}
