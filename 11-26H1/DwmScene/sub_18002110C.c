/*
 * XREFs of sub_18002110C @ 0x18002110C
 * Callers:
 *     sub_1800C4F18 @ 0x1800C4F18 (sub_1800C4F18.c)
 *     sub_1800C4FE4 @ 0x1800C4FE4 (sub_1800C4FE4.c)
 * Callees:
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_180020A1C @ 0x180020A1C (sub_180020A1C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002110C(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  const void *v5[5]; // [rsp+30h] [rbp-28h] BYREF

  sub_1800143C0(a2);
  sub_180020A1C(v3 + 24, (__int64)v5);
  if ( v5[0] )
    sub_18001490C(a2, v5[0], (size_t)v5[1]);
  return a2;
}
