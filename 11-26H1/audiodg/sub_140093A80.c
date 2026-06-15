/*
 * XREFs of sub_140093A80 @ 0x140093A80
 * Callers:
 *     sub_140093C78 @ 0x140093C78 (sub_140093C78.c)
 * Callees:
 *     sub_140093134 @ 0x140093134 (sub_140093134.c)
 */

__int64 __fastcall sub_140093A80(_QWORD *a1)
{
  __int64 *v1; // rdx
  __int64 result; // rax

  v1 = (__int64 *)a1[2];
  a1[2] = *v1;
  sub_140093134((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
