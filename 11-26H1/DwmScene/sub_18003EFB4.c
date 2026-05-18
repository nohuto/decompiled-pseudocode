/*
 * XREFs of sub_18003EFB4 @ 0x18003EFB4
 * Callers:
 *     sub_18003EFE4 @ 0x18003EFE4 (sub_18003EFE4.c)
 *     sub_18003F094 @ 0x18003F094 (sub_18003F094.c)
 * Callees:
 *     sub_18003EE54 @ 0x18003EE54 (sub_18003EE54.c)
 */

__int64 __fastcall sub_18003EFB4(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  sub_18003EE54(a1, &v3);
  return a1;
}
