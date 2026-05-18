/*
 * XREFs of sub_1800C3E50 @ 0x1800C3E50
 * Callers:
 *     sub_1800C37E0 @ 0x1800C37E0 (sub_1800C37E0.c)
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
_QWORD *__fastcall sub_1800C3E50(__int64 a1, _QWORD *a2, __int64 a3, char a4, int a5)
{
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, int *, __int64 *); // rdi
  int v13; // eax
  ULONG_PTR v14; // rbx
  _QWORD *v15; // rax
  const char *v16; // rax
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h]
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+4Ch] [rbp-B4h]
  int v23; // [rsp+54h] [rbp-ACh]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+68h] [rbp-98h]
  __int64 v26; // [rsp+70h] [rbp-90h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  __int128 v28; // [rsp+120h] [rbp+20h] BYREF
  __int128 v29; // [rsp+130h] [rbp+30h]
  int v30; // [rsp+140h] [rbp+40h]
  _QWORD v31[4]; // [rsp+148h] [rbp+48h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v19 = a2;
  if ( (a4 & 1) != 0 )
  {
    v24 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 80LL))(a3, &v28);
    v8 = v29;
    if ( (_DWORD)v29 == 44 )
    {
      v21 = 46;
    }
    else
    {
      if ( (_DWORD)v29 == 39 )
        v8 = 41;
      v21 = v8;
    }
    v22 = 8LL;
    v23 = a5;
    v18 = 0LL;
    sub_180012A94(a1 + 72, &v19);
    v9 = (__int64)v19;
    v25 = (__int64)v19;
    v10 = v20;
    v26 = v20;
    sub_1800BC108((__int64)v19, &v19);
    v11 = (__int64)v19;
    v12 = *(__int64 (__fastcall **)(__int64, __int64, int *, __int64 *))(*v19 + 56LL);
    sub_18000F938(&v18);
    v13 = v12(v11, a3, &v21, &v18);
    v14 = v13;
    sub_1800BDDBC(v9, v13);
    if ( (v14 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v14;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v15 = sub_18002912C(a1, v31);
    v16 = (const char *)sub_1800148EC((__int64)v15);
    sub_180012384(v18, v16);
    sub_1800129D0((__int64)v31);
    sub_18000F938((__int64 *)&v19);
    if ( v10 )
      sub_180010EC8(v10);
    sub_1800BF2BC(a2, &v18);
    sub_18000F938(&v18);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
