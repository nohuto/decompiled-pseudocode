/*
 * XREFs of sub_14001DED0 @ 0x14001DED0
 * Callers:
 *     sub_14004BED0 @ 0x14004BED0 (sub_14004BED0.c)
 *     sub_14004BF34 @ 0x14004BF34 (sub_14004BF34.c)
 * Callees:
 *     sub_14001DFBC @ 0x14001DFBC (sub_14001DFBC.c)
 */

__int64 __fastcall sub_14001DED0(unsigned int *a1, unsigned int a2)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 result; // rax

  *a1 = a2;
  v2 = sub_14001DFBC(a2);
  *(_DWORD *)(v3 + 4) = v2;
  result = v3;
  *(_DWORD *)(v3 + 8) = 0;
  return result;
}
