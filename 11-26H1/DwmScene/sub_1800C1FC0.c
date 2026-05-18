/*
 * XREFs of sub_1800C1FC0 @ 0x1800C1FC0
 * Callers:
 *     sub_1800BFBF0 @ 0x1800BFBF0 (sub_1800BFBF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_18001155C @ 0x18001155C (sub_18001155C.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C04E0 @ 0x1800C04E0 (sub_1800C04E0.c)
 *     sub_1800C1B5C @ 0x1800C1B5C (sub_1800C1B5C.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_1800C1FC0(__int64 *a1, __int64 *a2, int a3, int a4, __int64 *a5, __int64 a6)
{
  const char *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, __int128 *, _QWORD, __int64 *); // rbx
  ULONG_PTR v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rdi
  int (__fastcall *v17)(__int64, __int64, _QWORD, __int64 *); // rbx
  ULONG_PTR v18; // rbx
  const char *v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+50h] [rbp-B0h]
  int v29; // [rsp+54h] [rbp-ACh]
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[20]; // [rsp+70h] [rbp-90h]
  int v33; // [rsp+84h] [rbp-7Ch]
  __int64 *v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v37; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v38[20]; // [rsp+150h] [rbp+50h]
  __int64 v39; // [rsp+164h] [rbp+64h]
  _OWORD v40[2]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v41; // [rsp+190h] [rbp+90h]
  int v42; // [rsp+198h] [rbp+98h]
  void *retaddr; // [rsp+1F8h] [rbp+F8h]

  v29 = a4;
  v34 = a1;
  v35 = a6;
  v28 = 0;
  v10 = (const char *)sub_1800148EC(a6);
  sub_180012384(*a5, v10);
  v33 = 0;
  *(_DWORD *)v32 = sub_1800C04E0(16, 0);
  *(_QWORD *)&v31 = __PAIR64__(a4, a3);
  *((_QWORD *)&v31 + 1) = 0x100000001LL;
  *(_OWORD *)&v32[4] = 1uLL;
  v37 = v31;
  *(_OWORD *)v38 = *(_OWORD *)v32;
  v39 = 0x20000LL;
  *(_QWORD *)&v38[12] = 3LL;
  v26 = 0LL;
  v11 = sub_1800BC108(*a2, &v24);
  v12 = *v11;
  v13 = *(int (__fastcall **)(__int64, __int128 *, _QWORD, __int64 *))(*(_QWORD *)*v11 + 40LL);
  sub_18000F938(&v26);
  v14 = v13(v12, &v37, 0LL, &v26);
  sub_18000F938(&v24);
  sub_1800BDDBC(*a2, v14);
  if ( (v14 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v14;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_180012384(v26, "BackBufferStaging");
  v25 = 0LL;
  v15 = sub_1800BC108(*a2, &v24);
  v16 = *v15;
  v17 = *(int (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)*v15 + 72LL);
  sub_18000F938(&v25);
  v18 = v17(v16, *a5, 0LL, &v25);
  sub_18000F938(&v24);
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
  v19 = (const char *)sub_1800148EC(a6);
  sub_180012384(v25, v19);
  sub_18001155C(*a2, a1);
  v28 = 1;
  v20 = *a1;
  v21 = sub_180011CC4(&v31, "Output");
  sub_1800292C4(v20, (__int64)v21);
  v22 = (_QWORD *)_RTDynamicCast(
                    *a1,
                    0LL,
                    &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
                    &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
                    1);
  v30 = v26;
  sub_180012440(&v30);
  v27 = *a5;
  sub_180012440(&v27);
  v24 = v25;
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  sub_1800C1B5C(v22, &v24, &v27, &v30, a3, v29);
  memset(v40, 0, sizeof(v40));
  v41 = 0LL;
  v42 = 0;
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)*a5 + 80LL))(*a5, v40);
  sub_18000F938(&v25);
  sub_18000F938(&v26);
  sub_1800129D0(a6);
  return a1;
}
