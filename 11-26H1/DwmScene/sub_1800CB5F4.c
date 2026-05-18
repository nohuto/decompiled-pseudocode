/*
 * XREFs of sub_1800CB5F4 @ 0x1800CB5F4
 * Callers:
 *     sub_1800BFAC0 @ 0x1800BFAC0 (sub_1800BFAC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18006A92C @ 0x18006A92C (sub_18006A92C.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C04E0 @ 0x1800C04E0 (sub_1800C04E0.c)
 *     sub_1800CAFCC @ 0x1800CAFCC (sub_1800CAFCC.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_1800CB5F4(__int64 *a1, __int64 *a2, int a3, int a4, __int64 a5)
{
  int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // rdi
  int (__fastcall *v12)(__int64, _DWORD *, _QWORD, __int64 *); // rbx
  ULONG_PTR v13; // rbx
  const char *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdi
  int (__fastcall *v17)(__int64, __int64, int *, __int64 *); // rbx
  ULONG_PTR v18; // rbx
  const char *v19; // rax
  _QWORD *v20; // rbx
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+5Ch] [rbp-A4h]
  __int64 *v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v32[5]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v33; // [rsp+134h] [rbp+34h]
  int v34; // [rsp+13Ch] [rbp+3Ch]
  __int64 v35; // [rsp+140h] [rbp+40h]
  int v36; // [rsp+148h] [rbp+48h]
  void *retaddr; // [rsp+198h] [rbp+98h]

  v29 = a1;
  v30 = a5;
  v25 = 0;
  v9 = sub_1800C04E0(1, 0);
  v32[0] = a3;
  v32[1] = a4;
  v32[2] = 1;
  v32[3] = 1;
  v32[4] = v9;
  v34 = 0;
  v35 = 64LL;
  v36 = 0;
  v33 = 1LL;
  v23 = 0LL;
  v10 = sub_1800BC108(*a2, &v22);
  v11 = *v10;
  v12 = *(int (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)*v10 + 40LL);
  sub_18000F938(&v23);
  v13 = v12(v11, v32, 0LL, &v23);
  sub_18000F938(&v22);
  sub_1800BDDBC(*a2, v13);
  if ( (v13 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v13;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v14 = (const char *)sub_1800148EC(a5);
  sub_180012384(v23, v14);
  v27 = 0;
  v28 = 5LL;
  v24 = 0LL;
  v15 = sub_1800BC108(*a2, &v22);
  v16 = *v15;
  v17 = *(int (__fastcall **)(__int64, __int64, int *, __int64 *))(*(_QWORD *)*v15 + 80LL);
  sub_18000F938(&v24);
  v18 = v17(v16, v23, &v27, &v24);
  sub_18000F938(&v22);
  sub_1800BDDBC(*a2, v18);
  if ( (v18 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v18;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v19 = (const char *)sub_1800148EC(a5);
  sub_180012384(v24, v19);
  sub_18006A92C(*a2, a1);
  v25 = 1;
  v20 = (_QWORD *)_RTDynamicCast(
                    *a1,
                    0LL,
                    &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
                    &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
                    1);
  v26 = v23;
  sub_180012440(&v26);
  v22 = v24;
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  sub_1800CAFCC(v20, &v22, &v26);
  sub_18000F938(&v24);
  sub_18000F938(&v23);
  sub_1800129D0(a5);
  return a1;
}
