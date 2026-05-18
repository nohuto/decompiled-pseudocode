/*
 * XREFs of sub_18002C9B8 @ 0x18002C9B8
 * Callers:
 *     sub_18002CAA0 @ 0x18002CAA0 (sub_18002CAA0.c)
 *     sub_1800C0F20 @ 0x1800C0F20 (sub_1800C0F20.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180028640 @ 0x180028640 (sub_180028640.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18002C9B8(__int64 a1)
{
  __m128 v1; // xmm0
  __int64 v3; // rdx
  float v4; // xmm6_4
  __m128 v5; // xmm7
  float v6; // xmm6_4
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]

  v3 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
  if ( v3 )
  {
    sub_180012C40(&v7, (_QWORD *)(v3 + 456));
    if ( v7 )
    {
      v4 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
      *(double *)v1.m128_u64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
      v5 = v1;
      v5.m128_f32[0] = v1.m128_f32[0] * v4;
      v6 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
      *(double *)v1.m128_u64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
      v1.m128_f32[0] = v1.m128_f32[0] * v6;
      sub_180028640(v7, _mm_unpacklo_ps(v1, v5).m128_i64[0]);
    }
    if ( v8 )
      sub_180010EC8(v8);
  }
}
