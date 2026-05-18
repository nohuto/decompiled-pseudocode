/*
 * XREFs of sub_18003EF1C @ 0x18003EF1C
 * Callers:
 *     sub_18003EFE4 @ 0x18003EFE4 (sub_18003EFE4.c)
 *     sub_18003F094 @ 0x18003F094 (sub_18003F094.c)
 *     sub_18008A284 @ 0x18008A284 (sub_18008A284.c)
 * Callees:
 *     sub_18003EE44 @ 0x18003EE44 (sub_18003EE44.c)
 */

__int64 __fastcall sub_18003EF1C(_DWORD *a1, int a2)
{
  __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  sub_18003EE44(a1, &v4);
  return v2;
}
