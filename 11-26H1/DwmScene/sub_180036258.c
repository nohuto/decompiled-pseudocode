/*
 * XREFs of sub_180036258 @ 0x180036258
 * Callers:
 *     sub_180016344 @ 0x180016344 (sub_180016344.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 *     sub_18001D620 @ 0x18001D620 (sub_18001D620.c)
 *     sub_1800276A8 @ 0x1800276A8 (sub_1800276A8.c)
 *     sub_180028AE4 @ 0x180028AE4 (sub_180028AE4.c)
 *     sub_18002AE20 @ 0x18002AE20 (sub_18002AE20.c)
 *     sub_18002CE5C @ 0x18002CE5C (sub_18002CE5C.c)
 *     sub_180030AAC @ 0x180030AAC (sub_180030AAC.c)
 *     sub_18003145C @ 0x18003145C (sub_18003145C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_180036258(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _BYTE *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, _QWORD *, void **, __m128i *); // rbx
  __int64 v10; // rcx
  __m128i v11; // [rsp+38h] [rbp-D0h] BYREF
  void *v12[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v13[4]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v14[4]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v15[4]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v16[8]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v17[4]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v18[32]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v19; // [rsp+138h] [rbp+30h] BYREF

  result = *(_QWORD *)(a1 + 480);
  if ( result )
  {
    if ( !qword_1801C8F28 )
      qword_1801C8F28 = *(_QWORD *)(a1 + 480);
    v4 = sub_180028AE4(v15, 1);
    sub_18002CE5C(v16, v5, (__int64)v4);
    v6 = (_BYTE *)sub_1800148EC((__int64)&unk_1801C8FA8);
    v7 = sub_1800276A8(v14, v6, &v6[qword_1801C8FB8]);
    sub_180011CC4(v17, "Hardware Version");
    sub_18001D260((__int64)v18, (__int64)v7);
    v11.m128i_i64[0] = (__int64)v16;
    v11.m128i_i64[1] = (__int64)&v19;
    sub_180030AAC((__int64 *)v12, &v11);
    sub_18000BFA4((__int64)v16, 64LL, 2LL, (void (__fastcall *)(__int64))sub_1800317A0);
    sub_1800129D0((__int64)v14);
    sub_1800129D0((__int64)v15);
    v8 = *(_QWORD *)(a1 + 480);
    v9 = *(void (__fastcall **)(__int64, _QWORD *, void **, __m128i *))(*(_QWORD *)v8 + 40LL);
    sub_18002AE20(v11.m128i_i64);
    sub_180011CC4(v13, "Engine Initialized Success");
    v9(v8, v13, v12, &v11);
    sub_1800129D0((__int64)v13);
    sub_18001D620((void **)&v11);
    result = sub_18003145C(v12);
  }
  v10 = *(_QWORD *)(a1 + 496);
  if ( v10 )
  {
    LOBYTE(a2) = 1;
    return (*(__int64 (__fastcall **)(__int64, __int64, void *, const char *))(*(_QWORD *)v10 + 24LL))(
             v10,
             a2,
             &unk_1800F9DE0,
             "2.7.0.2");
  }
  return result;
}
