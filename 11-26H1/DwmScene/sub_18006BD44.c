/*
 * XREFs of sub_18006BD44 @ 0x18006BD44
 * Callers:
 *     sub_18006BF04 @ 0x18006BF04 (sub_18006BF04.c)
 * Callees:
 *     sub_180012A50 @ 0x180012A50 (sub_180012A50.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 */

__int64 __fastcall sub_18006BD44(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = a2;
  sub_180012AC4(a1 + 104);
  sub_180012A50((__int64 *)(a1 + 200), (__int64)&v5, &v6);
  if ( v5 != *(_QWORD *)(a1 + 200) )
    v3 = *(_QWORD *)(v5 + 40);
  Mtx_unlock((_Mtx_t)(a1 + 104));
  return v3;
}
