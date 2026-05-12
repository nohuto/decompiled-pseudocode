/*
 * XREFs of sub_14002CA70 @ 0x14002CA70
 * Callers:
 *     sub_1400D1B4C @ 0x1400D1B4C (sub_1400D1B4C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14002CA70(__int64 a1)
{
  if ( *(_DWORD *)a1 == 1094997074 )
    return *(unsigned __int8 *)(a1 + 4370);
  if ( *(_DWORD *)a1 == 1314275652 )
    return (*(_DWORD *)(a1 + 144) >> 12) & 1;
  return 0LL;
}
