/*
 * XREFs of sub_140979CA0 @ 0x140979CA0
 * Callers:
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140979CA0(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  return ((a7 << (15 * (a3 / 0xF) - a3 + 31)) | (a7 >> (a3 % 0xF + 1)))
       + *(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
       * (a7 ^ *(unsigned __int16 *)(a6 + 2LL * (((a1 & 3) + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3)));
}
