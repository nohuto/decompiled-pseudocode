/*
 * XREFs of sub_1800C5A60 @ 0x1800C5A60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800BF218 @ 0x1800BF218 (sub_1800BF218.c)
 *     sub_1800C52A0 @ 0x1800C52A0 (sub_1800C52A0.c)
 *     sub_1800C5C48 @ 0x1800C5C48 (sub_1800C5C48.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800C5A60(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64 *); // rdi
  int v7; // ebx
  int v8; // edx
  __int64 v9; // rbx
  _QWORD *v10; // rax
  const char *v11; // rax
  __int64 v12; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+28h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h]
  __int64 v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h]
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 56LL))(*a2);
  if ( !(_BYTE)result )
  {
    sub_1800BF218(&v16, a2);
    sub_1800C5C48(v16, &v13);
    v12 = 0LL;
    v5 = v13;
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 912LL);
    sub_18000F938(&v12);
    v7 = v6(v5, 0LL, &v12);
    sub_180012A94(a1 + 72, &v18);
    sub_1800C52A0(&v14, &v18);
    if ( v19 )
      sub_180010EC8(v19);
    v8 = v7;
    v9 = v14;
    sub_1800BDDBC(v14, v8);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9) )
    {
      v10 = sub_18002912C(*a2, &v18);
      v11 = (const char *)sub_1800148EC((__int64)v10);
      sub_180012384(v12, v11);
      sub_1800129D0((__int64)&v18);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 464LL))(
        *(_QWORD *)(a1 + 144),
        v12,
        0LL);
    }
    if ( v15 )
      sub_180010EC8(v15);
    sub_18000F938(&v12);
    result = sub_18000F938(&v13);
    if ( v17 )
      return sub_180010EC8(v17);
  }
  return result;
}
