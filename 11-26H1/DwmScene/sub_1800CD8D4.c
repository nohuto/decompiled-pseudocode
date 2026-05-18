/*
 * XREFs of sub_1800CD8D4 @ 0x1800CD8D4
 * Callers:
 *     sub_1800CD5B0 @ 0x1800CD5B0 (sub_1800CD5B0.c)
 *     sub_1800CD6D0 @ 0x1800CD6D0 (sub_1800CD6D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _o__invalid_parameter_noinfo @ 0x18000CDBA (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180025A84 @ 0x180025A84 (sub_180025A84.c)
 *     sub_18004F470 @ 0x18004F470 (sub_18004F470.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BC140 @ 0x1800BC140 (sub_1800BC140.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_1800CD8D4(_QWORD *a1, __int64 *a2, __int64 *a3, unsigned int a4)
{
  size_t v4; // r15
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, int *, _QWORD, __int64 *); // rdi
  int v10; // eax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  ULONG_PTR v13; // rbx
  __int64 v14; // rcx
  void *v15; // rdx
  void *v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rax
  void *v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23[2]; // [rsp+58h] [rbp-A8h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v25; // [rsp+78h] [rbp-88h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  int v27; // [rsp+120h] [rbp+20h] BYREF
  __int64 v28; // [rsp+124h] [rbp+24h]
  int v29; // [rsp+12Ch] [rbp+2Ch]
  __int64 v30; // [rsp+130h] [rbp+30h]
  void *retaddr; // [rsp+178h] [rbp+78h]

  v4 = a4;
  v23[0] = (__int64)a1;
  v25 = a3;
  v7 = *a2;
  sub_1800BC108(*a2, &v22);
  v30 = 0LL;
  v27 = v4;
  v28 = 3LL;
  v29 = 0x20000;
  v21 = 0LL;
  v8 = v22;
  v9 = *(__int64 (__fastcall **)(__int64, int *, _QWORD, __int64 *))(*(_QWORD *)v22 + 24LL);
  sub_18000F938(&v21);
  v10 = v9(v8, &v27, 0LL, &v21);
  sub_1800BDDBC(v7, v10);
  v11 = sub_1800BC140(v7, &v20);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v11 + 376LL))(*v11, v21, *a3);
  sub_18000F938((__int64 *)&v20);
  *(_OWORD *)Src = 0LL;
  v12 = sub_1800BC140(v7, &v20);
  v13 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)*v12 + 112LL))(
          *v12,
          v21,
          0LL,
          1LL,
          0,
          Src);
  sub_18000F938((__int64 *)&v20);
  if ( (v13 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v13;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_18004F470(&v20, v4);
  v15 = Src[0];
  v16 = v20;
  if ( (_DWORD)v4 )
  {
    if ( v20 )
    {
      if ( Src[0] )
      {
        memcpy(v20, Src[0], v4);
        goto LABEL_9;
      }
      memset(v20, 0, v4);
    }
    *(_DWORD *)o__errno(v14, v15) = 22;
    o__invalid_parameter_noinfo();
  }
LABEL_9:
  v17 = sub_1800BC140(v7, v23);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v17 + 120LL))(*v17, v21, 0LL);
  sub_18000F938(v23);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v16 )
  {
    v18 = sub_18001C514(24LL);
    if ( v18 )
    {
      *(_DWORD *)(v18 + 8) = 1;
      *(_DWORD *)(v18 + 12) = 1;
      *(_QWORD *)v18 = &std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::`vftable';
      *(_QWORD *)(v18 + 16) = v16;
    }
    *a1 = v16;
    a1[1] = v18;
    v20 = 0LL;
  }
  sub_180025A84(&v20);
  sub_18000F938(&v21);
  sub_18000F938(&v22);
  sub_18000F938(a3);
  return a1;
}
