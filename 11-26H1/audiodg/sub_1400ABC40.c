/*
 * XREFs of sub_1400ABC40 @ 0x1400ABC40
 * Callers:
 *     sub_1400AB5FC @ 0x1400AB5FC (sub_1400AB5FC.c)
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_1400ABC40(_DWORD *a1)
{
  _DWORD *v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  memset(a1 + 4, 0, 0x40uLL);
  v2 = a1 + 9;
  v3 = 2LL;
  do
  {
    *(v2 - 1) = a1[2];
    result = (unsigned int)a1[3];
    *v2 = result;
    v2 += 8;
    --v3;
  }
  while ( v3 );
  return result;
}
