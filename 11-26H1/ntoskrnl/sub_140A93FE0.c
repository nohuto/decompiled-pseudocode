/*
 * XREFs of sub_140A93FE0 @ 0x140A93FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A93FE0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  unsigned int v7; // edx

  v7 = *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)) ^ a7;
  return *(unsigned __int16 *)(a6 + 2 * (a1 & 3)) * ((v7 >> (7 * (a3 / 7) - a3 + 31)) | (v7 << (a3 % 7 + 1)))
       - (a7 >> (a4 % 0xF + 1));
}
