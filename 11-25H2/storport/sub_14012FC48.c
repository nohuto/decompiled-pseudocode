/*
 * XREFs of sub_14012FC48 @ 0x14012FC48
 * Callers:
 *     sub_14012ACA0 @ 0x14012ACA0 (sub_14012ACA0.c)
 *     sub_14012EC28 @ 0x14012EC28 (sub_14012EC28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14012FC48(_DWORD *a1, int a2, int a3)
{
  int v3; // r9d
  unsigned int v4; // eax
  __int64 result; // rax

  v3 = 1;
  if ( a2 == 1 || *a1 >= a2 )
    v3 = 0;
  v4 = a1[3] & 0xFFFFFFFE;
  *a1 = a2;
  result = v3 | v4;
  a1[2] = a3;
  a1[3] = result;
  return result;
}
