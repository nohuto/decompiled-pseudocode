/*
 * XREFs of sub_140020894 @ 0x140020894
 * Callers:
 *     sub_1400240D8 @ 0x1400240D8 (sub_1400240D8.c)
 *     sub_14002438C @ 0x14002438C (sub_14002438C.c)
 *     sub_140024A30 @ 0x140024A30 (sub_140024A30.c)
 *     sub_140029AF8 @ 0x140029AF8 (sub_140029AF8.c)
 *     sub_140029BE8 @ 0x140029BE8 (sub_140029BE8.c)
 * Callees:
 *     sub_140006580 @ 0x140006580 (sub_140006580.c)
 */

__int64 __fastcall sub_140020894(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        unsigned __int8 a9)
{
  char v9; // di
  __int64 result; // rax

  v9 = a3;
  sub_140006580(a1, a2, a3, a4, a5, -1, a7, 0);
  if ( a8 && v9 == 7 )
    *(_DWORD *)(a2 + 4136) = *(_DWORD *)(a2 + 4136) & 0xFFFFF0FF | 0x100;
  result = *(unsigned int *)(a2 + 4136);
  *(_DWORD *)(a2 + 4136) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(a9 << 15)) & 0x8000;
  return result;
}
