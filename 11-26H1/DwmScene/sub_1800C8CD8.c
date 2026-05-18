/*
 * XREFs of sub_1800C8CD8 @ 0x1800C8CD8
 * Callers:
 *     sub_1800C7F00 @ 0x1800C7F00 (sub_1800C7F00.c)
 *     sub_1800C8020 @ 0x1800C8020 (sub_1800C8020.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C52A0 @ 0x1800C52A0 (sub_1800C52A0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C8CD8(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v4; // r15
  ULONG_PTR v8; // rbx
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B8h]
  __int128 v12; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+70h] [rbp-90h] BYREF
  void *retaddr; // [rsp+158h] [rbp+58h]

  v4 = a4;
  v12 = 0LL;
  v8 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int128 *))(**(_QWORD **)(a1 + 144) + 112LL))(
         *(_QWORD *)(a1 + 144),
         a2,
         0LL,
         4LL,
         0,
         &v12);
  sub_180012A94(a1 + 72, &v10);
  sub_1800C52A0(&v13, &v10);
  if ( v11 )
    sub_180010EC8(v11);
  sub_1800BDDBC(v13, v8);
  if ( (v8 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v8;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_1800114C0((void *)v12, v4, a3, v4);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 120LL))(
             *(_QWORD *)(a1 + 144),
             a2,
             0LL);
  if ( v14 )
    return sub_180010EC8(v14);
  return result;
}
