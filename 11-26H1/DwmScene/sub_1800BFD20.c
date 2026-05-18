/*
 * XREFs of sub_1800BFD20 @ 0x1800BFD20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_1800BEE94 @ 0x1800BEE94 (sub_1800BEE94.c)
 *     sub_1800BFBF0 @ 0x1800BFBF0 (sub_1800BFBF0.c)
 *     sub_1800C03B4 @ 0x1800C03B4 (sub_1800C03B4.c)
 *     sub_1800C048C @ 0x1800C048C (sub_1800C048C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BFD20(__int64 *a1, __int64 *a2)
{
  _QWORD *v4; // r15
  int v5; // eax
  ULONG_PTR v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, _QWORD, _DWORD *, __int64 *); // rdi
  int v10; // eax
  ULONG_PTR v11; // rbx
  __int64 v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v15[3]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v16; // [rsp+ECh] [rbp-14h]
  __int64 v17; // [rsp+F4h] [rbp-Ch]
  void *retaddr; // [rsp+138h] [rbp+38h]

  v13[1] = (__int64)a2;
  v13[0] = *a2;
  sub_180012440(v13);
  sub_1800BFBF0((__int64)a1, v13);
  v4 = a1 + 213;
  v5 = sub_1800BEE94((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2, a1 + 213);
  v6 = v5;
  if ( v5 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v6;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_1800C03B4(*v4, "BackBufferSurface");
  sub_18000F938(a1 + 215);
  D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &riid, 0LL, (void **)a1 + 215);
  v7 = sub_1800C048C(a1);
  v13[0] = v7 | 0x100000000LL;
  v15[0] = 0;
  v15[1] = v7;
  v15[2] = 1;
  v16 = 0LL;
  v17 = 2LL;
  v8 = a1[215];
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64 *))(*(_QWORD *)v8 + 120LL);
  sub_18000F938(a1 + 214);
  v10 = v9(v8, *v4, v15, a1 + 214);
  v11 = v10;
  if ( v10 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v11;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return sub_18000F938(a2);
}
