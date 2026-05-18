/*
 * XREFs of sub_1800BB650 @ 0x1800BB650
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001818C @ 0x18001818C (sub_18001818C.c)
 *     sub_18002657C @ 0x18002657C (sub_18002657C.c)
 *     sub_180026A6C @ 0x180026A6C (sub_180026A6C.c)
 *     sub_180026E5C @ 0x180026E5C (sub_180026E5C.c)
 *     sub_180029C10 @ 0x180029C10 (sub_180029C10.c)
 *     sub_18002B3C4 @ 0x18002B3C4 (sub_18002B3C4.c)
 *     sub_180054068 @ 0x180054068 (sub_180054068.c)
 *     sub_1800BC2E4 @ 0x1800BC2E4 (sub_1800BC2E4.c)
 *     sub_1800C4EEC @ 0x1800C4EEC (sub_1800C4EEC.c)
 *     sub_1800C5C48 @ 0x1800C5C48 (sub_1800C5C48.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=11
char __fastcall sub_1800BB650(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  void (__fastcall *v10)(__int64, _QWORD, __int64); // rsi
  __int64 v11; // rdi
  _QWORD *v12; // rax
  int v13; // eax
  ULONG_PTR v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rcx
  float v17; // xmm2_4
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  float v20; // xmm1_4
  size_t v21; // rdi
  __int64 v22; // r12
  char *v23; // r14
  char *i; // r15
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h]
  void *Src[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-48h]
  __int64 v40; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v41; // [rsp+C8h] [rbp-38h]
  _BYTE v42[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v43[16]; // [rsp+E0h] [rbp-20h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+F0h] [rbp-10h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+D8h]

  sub_180029C10(a1 + 24, (__int64)v43);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 320LL))(a3, v42);
  v6 = sub_180012C40(&v33, (_QWORD *)(a1 + 272));
  sub_18001818C(&v40, v6);
  sub_1800C5C48(v40, &v28);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 32LL))(a3, &v29);
  sub_180026A6C(v29, &v33);
  v7 = sub_180054068(v33, &v31, *(_DWORD *)(a1 + 244));
  sub_18001818C(&v38, v7);
  sub_1800BC2E4(v29, &v31);
  v8 = sub_180054068(v31, v27, *(_DWORD *)(a1 + 244));
  sub_18001818C(&v36, v8);
  v9 = v28;
  v10 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v28 + 376LL);
  v11 = *(_QWORD *)sub_1800C4EEC(v38, &v26);
  v12 = (_QWORD *)sub_1800C4EEC(v36, v27);
  v10(v9, *v12, v11);
  sub_18000F938(v27);
  sub_18000F938(&v26);
  sub_1800C4EEC(v36, &v26);
  *(_OWORD *)Src = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v9 + 112LL))(
          v9,
          v26,
          0LL,
          1LL,
          0,
          Src);
  v14 = v13;
  if ( v13 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v14;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_18002657C(v29, v27);
  v16 = 0LL;
  v17 = *((float *)v27 + 1);
  if ( *((float *)v27 + 1) >= 9.223372e18 )
  {
    v17 = *((float *)v27 + 1) - 9.223372e18;
    if ( (float)(*((float *)v27 + 1) - 9.223372e18) < 9.223372e18 )
      v16 = 0x8000000000000000uLL;
  }
  v18 = v16 + (unsigned int)(int)v17;
  v19 = 0LL;
  v20 = *(float *)v27;
  if ( *(float *)v27 >= 9.223372e18 )
  {
    v20 = *(float *)v27 - 9.223372e18;
    if ( (float)(*(float *)v27 - 9.223372e18) < 9.223372e18 )
      v19 = 0x8000000000000000uLL;
  }
  v21 = 4 * (v19 + (unsigned int)(int)v20);
  v22 = LODWORD(Src[1]);
  v23 = (char *)Src[0];
  for ( i = (char *)sub_180026E5C(v16, a2, v15, v21 * v18); v18; --v18 )
  {
    memcpy(i, v23, v21);
    v23 += v22;
    i += v21;
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v9 + 120LL))(v9, v26, 0LL);
  sub_18000F938(&v26);
  if ( v37 )
    sub_180010EC8(v37);
  if ( v32 )
    sub_180010EC8(v32);
  if ( v39 )
    sub_180010EC8(v39);
  if ( v34 )
    sub_180010EC8(v34);
  if ( v30 )
    sub_180010EC8(v30);
  sub_18000F938(&v28);
  if ( v41 )
    sub_180010EC8(v41);
  sub_18002B3C4((__int64)v42);
  sub_180011E54((__int64)v43);
  return 1;
}
