/*
 * XREFs of sub_14012B860 @ 0x14012B860
 * Callers:
 *     sub_1400EFBBC @ 0x1400EFBBC (sub_1400EFBBC.c)
 *     sub_14012B334 @ 0x14012B334 (sub_14012B334.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14012B860(unsigned __int16 *a1)
{
  bool v2; // zf
  int v3; // eax
  int v4; // ecx

  if ( !a1 )
    return 0xFFFFFFFFLL;
  v2 = (*((_BYTE *)a1 + 3) & 1) == 0;
  v3 = 10000;
  v4 = *a1;
  if ( !v2 )
    v3 = 100;
  return (unsigned int)(v4 * v3);
}
