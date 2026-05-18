/*
 * XREFs of sub_1800C0F20 @ 0x1800C0F20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_18002C9B8 @ 0x18002C9B8 (sub_18002C9B8.c)
 *     sub_1800BEEE4 @ 0x1800BEEE4 (sub_1800BEEE4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800C0F20(__int64 (__fastcall ****a1)(_QWORD, void *, __int64 *))
{
  float (__fastcall *v2)(__int64 (__fastcall ****)(_QWORD, void *, __int64 *)); // rbx
  double v3; // xmm0_8
  float v4; // xmm7_4
  float (__fastcall *v5)(__int64 (__fastcall ****)(_QWORD, void *, __int64 *)); // rbx
  double v6; // xmm0_8
  float v7; // xmm6_4
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  float v9; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+2Ch] [rbp-4Ch]
  float v11; // [rsp+34h] [rbp-44h]
  __int64 v12; // [rsp+38h] [rbp-40h]

  sub_18002C9B8((__int64)a1);
  v2 = (float (__fastcall *)(__int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*a1)[16];
  v3 = ((double (__fastcall *)(__int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*a1)[14])(a1);
  v4 = *(float *)&v3 * v2(a1);
  v5 = (float (__fastcall *)(__int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*a1)[15];
  v6 = ((double (__fastcall *)(__int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*a1)[17])(a1);
  v7 = *(float *)&v6 * v5(a1);
  if ( v4 != 0.0 && v7 != 0.0 && a1[63] )
  {
    v8 = 0LL;
    if ( !(unsigned int)sub_1800BEEE4(a1 + 63, &v8) )
    {
      v10 = 0LL;
      v12 = 0LL;
      v9 = 1.0 / v4;
      v11 = 1.0 / v7;
      (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v8 + 272LL))(v8, &v9);
    }
    sub_18000F938(&v8);
  }
}
