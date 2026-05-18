/*
 * XREFs of sub_1800BB9A0 @ 0x1800BB9A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001818C @ 0x18001818C (sub_18001818C.c)
 *     sub_18002657C @ 0x18002657C (sub_18002657C.c)
 *     sub_180026A6C @ 0x180026A6C (sub_180026A6C.c)
 *     sub_180026E5C @ 0x180026E5C (sub_180026E5C.c)
 *     sub_18002B3C4 @ 0x18002B3C4 (sub_18002B3C4.c)
 *     sub_180054068 @ 0x180054068 (sub_180054068.c)
 *     sub_1800BC2E4 @ 0x1800BC2E4 (sub_1800BC2E4.c)
 *     sub_1800C4EEC @ 0x1800C4EEC (sub_1800C4EEC.c)
 *     sub_1800C5C48 @ 0x1800C5C48 (sub_1800C5C48.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall sub_1800BB9A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rbx
  void (__fastcall *v11)(__int64, _QWORD, __int64); // rsi
  __int64 v12; // rdi
  _QWORD *v13; // rax
  int (__fastcall *v14)(__int64, _QWORD, _QWORD, __int64, _DWORD, void **); // rdi
  _QWORD *v15; // rax
  ULONG_PTR v16; // rdi
  __int64 v17; // rcx
  float v18; // xmm2_4
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  float v21; // xmm1_4
  size_t v22; // rdi
  __int64 v23; // r12
  char *v24; // r14
  char *i; // r15
  void (__fastcall *v26)(__int64, _QWORD, _QWORD); // rdi
  _QWORD *v27; // rax
  __int64 v29[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h]
  void *Src[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-48h]
  _BYTE v43[16]; // [rsp+C0h] [rbp-40h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+D0h] [rbp-30h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+C8h]

  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 320LL))(a3, v43);
  v7 = sub_180012C40(&v34, (_QWORD *)(a1 + 272));
  sub_18001818C(&v41, v7);
  sub_1800C5C48(v41, &v33);
  sub_180026A6C(a4, &v34);
  sub_1800BC2E4(a4, &v39);
  v8 = sub_180054068(v34, &v31, *(_DWORD *)(a1 + 244));
  sub_18001818C(&v37, v8);
  v9 = sub_180054068(v39, v29, *(_DWORD *)(a1 + 244));
  sub_18001818C(&v31, v9);
  v10 = v33;
  v11 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v33 + 376LL);
  v12 = *(_QWORD *)sub_1800C4EEC(v37, v29);
  v13 = (_QWORD *)sub_1800C4EEC(v31, &v30);
  v11(v10, *v13, v12);
  sub_18000F938(&v30);
  sub_18000F938(v29);
  *(_OWORD *)Src = 0LL;
  v14 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v10 + 112LL);
  v15 = (_QWORD *)sub_1800C4EEC(v31, v29);
  v16 = v14(v10, *v15, 0LL, 1LL, 0, Src);
  sub_18000F938(v29);
  if ( (v16 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v16;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_18002657C(a4, &v30);
  v17 = 0LL;
  v18 = *((float *)&v30 + 1);
  if ( *((float *)&v30 + 1) >= 9.223372e18 )
  {
    v18 = *((float *)&v30 + 1) - 9.223372e18;
    if ( (float)(*((float *)&v30 + 1) - 9.223372e18) < 9.223372e18 )
      v17 = 0x8000000000000000uLL;
  }
  v19 = v17 + (unsigned int)(int)v18;
  v20 = 0LL;
  v21 = *(float *)&v30;
  if ( *(float *)&v30 >= 9.223372e18 )
  {
    v21 = *(float *)&v30 - 9.223372e18;
    if ( (float)(*(float *)&v30 - 9.223372e18) < 9.223372e18 )
      v20 = 0x8000000000000000uLL;
  }
  v22 = 16 * (v20 + (unsigned int)(int)v21);
  v23 = LODWORD(Src[1]);
  v24 = (char *)Src[0];
  for ( i = (char *)sub_180026E5C(v17, a2, a4, v22 * v19); v19; --v19 )
  {
    memcpy(i, v24, v22);
    v24 += v23;
    i += v22;
  }
  *(_DWORD *)(a2 + 20) = 1;
  v26 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 120LL);
  v27 = (_QWORD *)sub_1800C4EEC(v31, v29);
  v26(v10, *v27, 0LL);
  sub_18000F938(v29);
  if ( v32 )
    sub_180010EC8(v32);
  if ( v38 )
    sub_180010EC8(v38);
  if ( v40 )
    sub_180010EC8(v40);
  if ( v35 )
    sub_180010EC8(v35);
  sub_18000F938(&v33);
  if ( v42 )
    sub_180010EC8(v42);
  sub_18002B3C4((__int64)v43);
  return 1;
}
