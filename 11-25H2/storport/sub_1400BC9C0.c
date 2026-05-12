/*
 * XREFs of sub_1400BC9C0 @ 0x1400BC9C0
 * Callers:
 *     sub_1400BD714 @ 0x1400BD714 (sub_1400BD714.c)
 *     sub_1400EB850 @ 0x1400EB850 (sub_1400EB850.c)
 *     sub_1400ECCD0 @ 0x1400ECCD0 (sub_1400ECCD0.c)
 *     sub_1400F6320 @ 0x1400F6320 (sub_1400F6320.c)
 *     sub_1400F6568 @ 0x1400F6568 (sub_1400F6568.c)
 *     sub_140124E74 @ 0x140124E74 (sub_140124E74.c)
 * Callees:
 *     sub_1400BD6D8 @ 0x1400BD6D8 (sub_1400BD6D8.c)
 *     sub_1400BDDB0 @ 0x1400BDDB0 (sub_1400BDDB0.c)
 */

__int64 __fastcall sub_1400BC9C0(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        int a8,
        int a9)
{
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // r11d
  unsigned __int8 v13; // r10
  int v14; // r11d

  *(_DWORD *)(a2 + 4) = a8;
  *(_QWORD *)(a2 + 24) = a7;
  *(_BYTE *)(a2 + 47) = a6;
  *(_BYTE *)a2 = 6;
  *(_BYTE *)(a2 + 40) = a3;
  *(_DWORD *)(a2 + 42) = 0;
  result = sub_1400BD6D8();
  if ( (_BYTE)result )
  {
    v13 = a9;
    result = (unsigned int)(a9 - 1);
    if ( (unsigned int)result <= 0x7E )
    {
      if ( !v12
        || (v14 = v12 - 1) == 0
        || (unsigned int)(v14 - 4) <= 1 && (result = sub_1400BDDB0(v11, 2LL), (_BYTE)result) )
      {
        result = *(unsigned int *)(a2 + 56);
        *(_DWORD *)(a2 + 56) = result ^ ((unsigned __int8)result ^ v13) & 0x7F;
      }
    }
  }
  return result;
}
