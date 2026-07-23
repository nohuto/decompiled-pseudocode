/*
 * XREFs of sub_140A74AA0 @ 0x140A74AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A74AA0(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rsi
  unsigned int v8; // edx

  v7 = a1 & 3;
  v8 = a7 ^ *(unsigned __int16 *)(a6 + 2LL * (((_BYTE)v7 + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3));
  return ((v8 << (a3 % 7 + 1)) | (v8 >> (7 * (a3 / 7) - a3 + 31))) * *(unsigned __int16 *)(a6 + 2 * v7)
       - ((a7 << (31 * (a4 / 0x1F) - a4 + 31)) | (a7 >> (a4 % 0x1F + 1)));
}
