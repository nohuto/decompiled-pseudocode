/*
 * XREFs of sub_1800C13F0 @ 0x1800C13F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C0430 @ 0x1800C0430 (sub_1800C0430.c)
 *     sub_1800C048C @ 0x1800C048C (sub_1800C048C.c)
 *     sub_1800C05D4 @ 0x1800C05D4 (sub_1800C05D4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_1800C13F0(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, _DWORD *, _QWORD, __int64 *); // rbx
  ULONG_PTR v7; // rbx
  __int64 *v8; // rax
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h]
  __int64 *v12; // [rsp+48h] [rbp-B8h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v14[5]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v15; // [rsp+104h] [rbp+4h]
  int v16; // [rsp+10Ch] [rbp+Ch]
  __int64 v17; // [rsp+110h] [rbp+10h]
  int v18; // [rsp+118h] [rbp+18h]
  void *retaddr; // [rsp+158h] [rbp+58h]

  v12 = a2;
  v17 = 32LL;
  v14[3] = 1;
  v14[4] = sub_1800C048C(a1);
  v14[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  v14[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
  v14[2] = 1;
  v15 = 1LL;
  v18 = 512;
  v16 = 0;
  *a2 = 0LL;
  v4 = sub_1800C0430(a1, &v10);
  v5 = *v4;
  v6 = *(int (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)*v4 + 40LL);
  sub_18000F938(a2);
  v7 = v6(v5, v14, 0LL, a2);
  sub_18000F938(&v10);
  v8 = sub_1800C05D4(a1, &v10);
  sub_1800BDDBC(*v8, v7);
  if ( v11 )
    sub_180010EC8(v11);
  if ( (v7 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v7;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return a2;
}
