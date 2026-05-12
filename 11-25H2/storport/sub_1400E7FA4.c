/*
 * XREFs of sub_1400E7FA4 @ 0x1400E7FA4
 * Callers:
 *     sub_1400D74A8 @ 0x1400D74A8 (sub_1400D74A8.c)
 *     sub_1400EA590 @ 0x1400EA590 (sub_1400EA590.c)
 * Callees:
 *     sub_140072AE8 @ 0x140072AE8 (sub_140072AE8.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400E7FA4(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  void *v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax

  result = sub_140072AE8(*(_QWORD *)(a1 + 128), a1, a2);
  if ( (int)result >= 0 )
  {
    v4 = *(void **)(a1 + 1624);
    memset_0(v4, 0, 0x2000uLL);
    v5 = ((unsigned __int64)v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v6 = v5 + *(_QWORD *)(a1 + 1632) - (_QWORD)v4;
    *(_QWORD *)(a1 + 1112) = v5;
    *(_QWORD *)(a1 + 1120) = v6;
    return 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 1176) = 38;
  }
  return result;
}
