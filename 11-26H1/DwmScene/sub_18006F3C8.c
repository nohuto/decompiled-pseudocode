/*
 * XREFs of sub_18006F3C8 @ 0x18006F3C8
 * Callers:
 *     sub_18002ADB4 @ 0x18002ADB4 (sub_18002ADB4.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

__int64 __fastcall sub_18006F3C8(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax

  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v2 = sub_180011790(0xF8uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *(_QWORD *)(a1 + 16) = v2;
  result = a1;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
