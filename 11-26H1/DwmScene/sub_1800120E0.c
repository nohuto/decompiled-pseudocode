/*
 * XREFs of sub_1800120E0 @ 0x1800120E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001155C @ 0x18001155C (sub_18001155C.c)
 *     sub_1800116C8 @ 0x1800116C8 (sub_1800116C8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180027D80 @ 0x180027D80 (sub_180027D80.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_18002C530 @ 0x18002C530 (sub_18002C530.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800C05D4 @ 0x1800C05D4 (sub_1800C05D4.c)
 *     sub_1800C1B5C @ 0x1800C1B5C (sub_1800C1B5C.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800120E0(__int64 a1, __int64 *a2)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, __int64, _QWORD, __int64 *); // rbx
  ULONG_PTR v10; // rbx
  int v11; // ebx
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h]
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v18[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v19; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+88h] [rbp-78h]
  _QWORD v22[4]; // [rsp+90h] [rbp-70h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v24[2]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v25; // [rsp+170h] [rbp+70h]
  int v26; // [rsp+178h] [rbp+78h]
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  v18[1] = a2;
  sub_1800C05D4(a1, &v20);
  v4 = v20;
  if ( v20 )
  {
    v19 = 0LL;
    if ( *a2 )
    {
      sub_18001155C(v20, (__int64 *)&v17);
      v5 = v17;
      v6 = sub_180011CC4(v22, "Output");
      sub_1800292C4(v5, v6);
      memset(v24, 0, sizeof(v24));
      v25 = 0LL;
      v26 = 0;
      (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)*a2 + 80LL))(*a2, v24);
      v13 = 0LL;
      v7 = sub_1800BC108(v4, &v14);
      v8 = *(_QWORD *)v7;
      v9 = *(int (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(**(_QWORD **)v7 + 72LL);
      sub_18000F938(&v13);
      v10 = v9(v8, *a2, 0LL, &v13);
      sub_18000F938(&v14);
      if ( (v10 & 0x80000000) != 0LL )
      {
        memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
        pExceptionRecord.ExceptionCode = -532265403;
        pExceptionRecord.ExceptionAddress = retaddr;
        pExceptionRecord.NumberParameters = 1;
        pExceptionRecord.ExceptionInformation[0] = v10;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      sub_180012384(*a2, "RenderOutput ColorBuffer");
      sub_180012384(v13, "RenderOutput ColorBuffer");
      v11 = _RTDynamicCast(
              v17,
              0LL,
              &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
              &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
              0);
      v18[0] = 0LL;
      v16 = *a2;
      sub_180012440(&v16);
      v14 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      sub_1800C1B5C(v11, (unsigned int)&v14, (unsigned int)&v16, (unsigned int)v18, v24[0], DWORD1(v24[0]));
      sub_1800116C8(*(_QWORD *)(v4 + 3984), &v14);
      sub_180011F5C(&v19, &v14);
      if ( v15 )
        sub_180010EC8(v15);
      sub_180027D80(v19, &v17);
      sub_18000F938(&v13);
      if ( *((_QWORD *)&v17 + 1) )
        sub_180010EC8(*((__int64 *)&v17 + 1));
    }
    v17 = v19;
    sub_18002C530(a1, &v17);
  }
  if ( v21 )
    sub_180010EC8(v21);
  return sub_18000F938(a2);
}
