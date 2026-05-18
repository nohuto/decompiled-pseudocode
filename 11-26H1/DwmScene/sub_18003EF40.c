/*
 * XREFs of sub_18003EF40 @ 0x18003EF40
 * Callers:
 *     sub_18003EFE4 @ 0x18003EFE4 (sub_18003EFE4.c)
 *     sub_18003F094 @ 0x18003F094 (sub_18003F094.c)
 * Callees:
 *     unknown_libname_3 @ 0x180020780 (unknown_libname_3.c)
 */

__int64 __fastcall sub_18003EF40(_QWORD *a1)
{
  __int64 v1; // rcx
  unsigned __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 0xFFFFFFFF00000001uLL;
  unknown_libname_3(a1, v3);
  return v1;
}
