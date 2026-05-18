/*
 * XREFs of sub_180029AC0 @ 0x180029AC0
 * Callers:
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_18002AF28 @ 0x18002AF28 (sub_18002AF28.c)
 *     sub_180030CF0 @ 0x180030CF0 (sub_180030CF0.c)
 *     sub_18003EFE4 @ 0x18003EFE4 (sub_18003EFE4.c)
 *     sub_18003F094 @ 0x18003F094 (sub_18003F094.c)
 * Callees:
 *     unknown_libname_4 @ 0x1800294C0 (unknown_libname_4.c)
 *     sub_1800D5364 @ 0x1800D5364 (sub_1800D5364.c)
 */

__int64 __fastcall sub_180029AC0(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rdx

  sub_1800D5364(a1);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = a2;
  unknown_libname_4((_DWORD *)(a1 + 28));
  result = a1;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 40) = v5;
  *(_QWORD *)(a1 + 48) = v5;
  return result;
}
