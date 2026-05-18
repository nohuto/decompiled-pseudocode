/*
 * XREFs of sub_18000D81C @ 0x18000D81C
 * Callers:
 *     sub_18002D9B4 @ 0x18002D9B4 (sub_18002D9B4.c)
 *     sub_18004CEF4 @ 0x18004CEF4 (sub_18004CEF4.c)
 *     sub_1800569F0 @ 0x1800569F0 (sub_1800569F0.c)
 *     sub_180056A30 @ 0x180056A30 (sub_180056A30.c)
 *     sub_180056DC0 @ 0x180056DC0 (sub_180056DC0.c)
 *     sub_18005C9D8 @ 0x18005C9D8 (sub_18005C9D8.c)
 *     sub_180060AC4 @ 0x180060AC4 (sub_180060AC4.c)
 *     sub_18006AA98 @ 0x18006AA98 (sub_18006AA98.c)
 *     sub_18006C198 @ 0x18006C198 (sub_18006C198.c)
 *     sub_18006D4B8 @ 0x18006D4B8 (sub_18006D4B8.c)
 *     sub_1800778D0 @ 0x1800778D0 (sub_1800778D0.c)
 *     sub_18007A430 @ 0x18007A430 (sub_18007A430.c)
 *     sub_18007FE50 @ 0x18007FE50 (sub_18007FE50.c)
 *     sub_1800956F0 @ 0x1800956F0 (sub_1800956F0.c)
 *     sub_180095A60 @ 0x180095A60 (sub_180095A60.c)
 *     sub_180095DF4 @ 0x180095DF4 (sub_180095DF4.c)
 *     sub_18009609C @ 0x18009609C (sub_18009609C.c)
 *     sub_180096734 @ 0x180096734 (sub_180096734.c)
 *     sub_18009820C @ 0x18009820C (sub_18009820C.c)
 *     sub_18009BF04 @ 0x18009BF04 (sub_18009BF04.c)
 *     sub_1800C6D50 @ 0x1800C6D50 (sub_1800C6D50.c)
 *     sub_1800CDC44 @ 0x1800CDC44 (sub_1800CDC44.c)
 * Callees:
 *     sub_18000C014 @ 0x18000C014 (sub_18000C014.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall sub_18000D81C(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__int64))
{
  _UNKNOWN **result; // rax
  __int64 i; // rbx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0LL; i != a3; ++i )
  {
    result = (_UNKNOWN **)a4(a1);
    a1 += a2;
  }
  return result;
}
