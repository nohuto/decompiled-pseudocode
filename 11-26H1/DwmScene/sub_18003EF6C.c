/*
 * XREFs of sub_18003EF6C @ 0x18003EF6C
 * Callers:
 *     sub_18003EFE4 @ 0x18003EFE4 (sub_18003EFE4.c)
 *     sub_18003F094 @ 0x18003F094 (sub_18003F094.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

__int64 *__fastcall sub_18003EF6C(__int64 *a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_180011790(0x50uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *a1 = v2;
  return a1;
}
