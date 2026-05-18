/*
 * XREFs of sub_1800C1050 @ 0x1800C1050
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180025EA0 @ 0x180025EA0 (sub_180025EA0.c)
 *     sub_1800BBF84 @ 0x1800BBF84 (sub_1800BBF84.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800BF2BC @ 0x1800BF2BC (sub_1800BF2BC.c)
 *     sub_1800C0430 @ 0x1800C0430 (sub_1800C0430.c)
 *     sub_1800C048C @ 0x1800C048C (sub_1800C048C.c)
 *     sub_1800C05D4 @ 0x1800C05D4 (sub_1800C05D4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_1800C1050(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // r12
  _QWORD *v5; // rsi
  __int64 v6; // r13
  __int64 (__fastcall *v7)(__int64, __int64, _QWORD, _QWORD, int, _DWORD); // rsi
  int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  int v11; // eax
  ULONG_PTR v12; // rbx
  __int64 v13; // rdi
  __int64 i; // rbx
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, _QWORD, void *, __int64 *); // rbx
  int v17; // eax
  ULONG_PTR v18; // rbx
  __int64 v19; // rbx
  void (__fastcall *v20)(__int64, const IID *, __int64 *); // rdi
  void (__fastcall *v21)(__int64 *, __int64, _QWORD, _DWORD *, __int64 *); // rbx
  _QWORD *v22; // rax
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v31[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v32; // [rsp+130h] [rbp+30h]
  int v33; // [rsp+138h] [rbp+38h]
  int v34; // [rsp+13Ch] [rbp+3Ch]
  int v35; // [rsp+140h] [rbp+40h]
  int v36; // [rsp+144h] [rbp+44h]
  __int64 v37; // [rsp+148h] [rbp+48h]
  void *retaddr; // [rsp+198h] [rbp+98h]

  v25[0] = (__int64)a2;
  sub_1800C05D4((__int64)a1, &v28);
  v4 = v28;
  if ( !v28 )
    goto LABEL_23;
  v5 = a1 + 63;
  v6 = a1[63];
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD))(*(_QWORD *)v6 + 104LL);
    v8 = sub_1800C048C((__int64)a1);
    v9 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 88))(a1);
    v10 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 80))(a1);
    v11 = v7(v6, 2LL, v10, v9, v8, 0);
    v12 = v11;
    sub_1800BDDBC(v4, v11);
    if ( (v12 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v12;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4) )
    {
      v13 = a1[17];
      for ( i = a1[16]; i != v13; i += 64LL )
        sub_180025EA0(i);
    }
    v5 = a1 + 63;
  }
  else
  {
    v36 = 0;
    v37 = 3LL;
    v33 = 32;
    v34 = 2;
    v31[2] = sub_1800C048C((__int64)a1);
    v31[1] = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 88))(a1);
    v31[0] = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 80))(a1);
    v32 = 1LL;
    v35 = 0;
    v31[3] = 0;
    v24 = 0LL;
    sub_1800C05D4((__int64)a1, &v26);
    if ( v26 )
    {
      sub_1800BBF84(v26, v25);
      if ( v27 )
        sub_180010EC8(v27);
      v19 = v25[0];
    }
    else
    {
      if ( v27 )
        sub_180010EC8(v27);
      v25[0] = 0LL;
      v19 = 0LL;
    }
    v20 = *(void (__fastcall **)(__int64, const IID *, __int64 *))(*(_QWORD *)v19 + 48LL);
    sub_18000F938(&v24);
    v20(v19, &stru_18018F518, &v24);
    sub_18000F938(v25);
    v21 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _DWORD *, __int64 *))(*a1 + 408);
    sub_18000F938(a1 + 63);
    v22 = sub_1800C0430((__int64)a1, v25);
    v21(a1, v24, *v22, v31, a1 + 63);
    sub_18000F938(v25);
    sub_18000F938(&v24);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4) )
  {
    (*(void (__fastcall **)(__int64 *))(*a1 + 416))(a1);
    v24 = 0LL;
    v15 = *v5;
    v16 = *(__int64 (__fastcall **)(__int64, _QWORD, void *, __int64 *))(*(_QWORD *)*v5 + 72LL);
    sub_18000F938(&v24);
    v17 = v16(v15, 0LL, &unk_18018F790, &v24);
    v18 = v17;
    if ( v17 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v18;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    sub_1800BF2BC(a2, &v24);
    sub_18000F938(&v24);
    if ( v29 )
      sub_180010EC8(v29);
  }
  else
  {
LABEL_23:
    if ( v29 )
      sub_180010EC8(v29);
    *a2 = 0LL;
  }
  return a2;
}
