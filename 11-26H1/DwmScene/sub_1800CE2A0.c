/*
 * XREFs of sub_1800CE2A0 @ 0x1800CE2A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800B97A8 @ 0x1800B97A8 (sub_1800B97A8.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800CE1D4 @ 0x1800CE1D4 (sub_1800CE1D4.c)
 *     sub_1800CE794 @ 0x1800CE794 (sub_1800CE794.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1800CE2A0(__int64 a1)
{
  int v2; // eax
  ULONG_PTR v3; // rbx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64, __int64); // rbx
  int v6; // eax
  ULONG_PTR v7; // rbx
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64); // rdi
  int v10; // eax
  ULONG_PTR v11; // rbx
  __int64 v12; // [rsp+28h] [rbp-89h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp-81h] BYREF
  __int64 v14; // [rsp+38h] [rbp-79h] BYREF
  __int64 v15; // [rsp+40h] [rbp-71h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+48h] [rbp-69h] BYREF
  void *retaddr; // [rsp+110h] [rbp+5Fh]

  sub_1800CE1D4(a1);
  if ( *(_QWORD *)(a1 + 536) )
  {
    sub_1800CE794(a1, &v14);
    sub_1800BC108(v14, &v13);
    v12 = 0LL;
    v2 = sub_1800B97A8(&v13, &v12);
    v3 = v2;
    if ( v2 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v3;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v4 = *(_QWORD *)(a1 + 512);
    v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 216LL);
    sub_18000F938((__int64 *)(a1 + 520));
    v6 = v5(v4, v12, a1 + 520);
    v7 = v6;
    if ( v6 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v7;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v8 = *(_QWORD *)(a1 + 520);
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v8 + 88LL);
    sub_18000F938((__int64 *)(a1 + 528));
    v10 = v9(v8, 0LL, a1 + 528);
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
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 536) + 8LL))(*(_QWORD *)(a1 + 536), a1);
    sub_18000F938(&v12);
    sub_18000F938((__int64 *)&v13);
    if ( v15 )
      sub_180010EC8(v15);
  }
}
