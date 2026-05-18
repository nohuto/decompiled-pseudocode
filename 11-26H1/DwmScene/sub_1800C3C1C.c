/*
 * XREFs of sub_1800C3C1C @ 0x1800C3C1C
 * Callers:
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 *     sub_1800C403C @ 0x1800C403C (sub_1800C403C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800BF2BC @ 0x1800BF2BC (sub_1800BF2BC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_1800C3C1C(__int64 a1, _QWORD *a2, __int64 a3, __int16 a4, int a5)
{
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, unsigned int *, __int64 *); // rdi
  int v15; // eax
  ULONG_PTR v16; // rbx
  _QWORD *v17; // rax
  const char *v18; // rax
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h]
  unsigned int v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+4Ch] [rbp-B4h]
  int v25; // [rsp+54h] [rbp-ACh]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  __int128 v30; // [rsp+120h] [rbp+20h] BYREF
  __int128 v31; // [rsp+130h] [rbp+30h]
  __int64 v32; // [rsp+140h] [rbp+40h]
  int v33; // [rsp+148h] [rbp+48h]
  _QWORD v34[4]; // [rsp+150h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  v21 = a2;
  if ( (a4 & 1) != 0 )
  {
    v26 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 80LL))(a3, &v30);
    v9 = v31;
    if ( (_DWORD)v31 == 44 )
    {
      v9 = (a4 & 0x400 | 0xB800u) >> 10;
    }
    else if ( (_DWORD)v31 == 39 )
    {
      v9 = 41;
    }
    v23 = v9;
    v10 = 4;
    if ( DWORD1(v31) > 1 )
      v10 = 6;
    if ( (a4 & 0x10) != 0 )
      v24 = 9LL;
    else
      v24 = v10;
    if ( a5 )
      v25 = a5;
    else
      v25 = -1;
    v20 = 0LL;
    sub_180012A94(a1 + 72, &v21);
    v11 = (__int64)v21;
    v27 = (__int64)v21;
    v12 = v22;
    v28 = v22;
    sub_1800BC108((__int64)v21, &v21);
    v13 = (__int64)v21;
    v14 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int *, __int64 *))(*v21 + 56LL);
    sub_18000F938(&v20);
    v15 = v14(v13, a3, &v23, &v20);
    v16 = v15;
    sub_1800BDDBC(v11, v15);
    if ( (v16 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v16;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v17 = sub_18002912C(a1, v34);
    v18 = (const char *)sub_1800148EC((__int64)v17);
    sub_180012384(v20, v18);
    sub_1800129D0((__int64)v34);
    sub_18000F938((__int64 *)&v21);
    if ( v12 )
      sub_180010EC8(v12);
    sub_1800BF2BC(a2, &v20);
    sub_18000F938(&v20);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
