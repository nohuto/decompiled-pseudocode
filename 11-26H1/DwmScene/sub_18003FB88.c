/*
 * XREFs of sub_18003FB88 @ 0x18003FB88
 * Callers:
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 * Callees:
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180029C10 @ 0x180029C10 (sub_180029C10.c)
 *     sub_18003E2E8 @ 0x18003E2E8 (sub_18003E2E8.c)
 *     sub_18003F094 @ 0x18003F094 (sub_18003F094.c)
 *     sub_1800406B0 @ 0x1800406B0 (sub_1800406B0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 **__fastcall sub_18003FB88(__int64 **a1, __int64 a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rax
  _BYTE v7[32]; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0LL;
  v5 = sub_18001C514(216LL);
  if ( v5 )
    v4 = (__int64 *)sub_18003F094(v5, a2);
  sub_18003E2E8(a1, v4);
  sub_180029C10((__int64)(*a1 + 2), (__int64)v7);
  sub_1800406B0(*a1);
  sub_180011E54((__int64)v7);
  return a1;
}
