/*
 * XREFs of sub_1800C8EA0 @ 0x1800C8EA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_180029258 @ 0x180029258 (sub_180029258.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004F174 @ 0x18004F174 (sub_18004F174.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800BF284 @ 0x1800BF284 (sub_1800BF284.c)
 *     sub_1800C9080 @ 0x1800C9080 (sub_1800C9080.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_1800C8EA0(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, __int64, _QWORD, __int64); // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ebx
  _QWORD *v11; // rax
  const char *v12; // rax
  const char *v13; // rbx
  __int64 v14; // r14
  void (__fastcall *v15)(__int64, void *, _QWORD, const char *); // r15
  unsigned __int64 v16; // rax
  __int64 v18; // [rsp+30h] [rbp-59h] BYREF
  __int64 v19; // [rsp+38h] [rbp-51h] BYREF
  __int64 v20; // [rsp+40h] [rbp-49h]
  __int64 v21; // [rsp+58h] [rbp-31h] BYREF
  __int64 v22; // [rsp+60h] [rbp-29h]
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-11h] BYREF

  if ( *(_BYTE *)(a1 + 96) )
  {
    sub_180011CC4(&v21, "VertexShaderD3D11::Load() -- this function can only be called once per shader instance");
    v4 = sub_180011CC4(
           &v19,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\vertexshaderd3d11.cpp");
    sub_18003A468(pExceptionObject, (__int64)v4, v5, (__int64)&v21, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !sub_18004F174((__int64)a2) )
  {
    sub_180012A94(a1 + 72, &v19);
    sub_1800BF284(&v21, &v19);
    sub_1800BC108(v21, &v18);
    v6 = v18;
    v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v18 + 96LL);
    sub_18000F938((__int64 *)(a1 + 104));
    v8 = sub_1800C9080(a2);
    v9 = *a2;
    if ( *a2 == a2[1] )
      v9 = a2[3];
    v10 = v7(v6, v9, v8, 0LL, a1 + 104);
    sub_1800BDDBC(v21, v10);
    if ( v10 >= 0 )
    {
      *(_BYTE *)(a1 + 96) = 1;
      v11 = sub_18002912C(a1, pExceptionObject);
      v12 = (const char *)sub_1800148EC((__int64)v11);
      v13 = v12;
      v14 = *(_QWORD *)(a1 + 104);
      if ( v14 )
      {
        v15 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v14 + 40LL);
        if ( v12 )
          LODWORD(v12) = strnlen(v12, 0x7FFFFFFFuLL);
        v15(v14, &unk_1800F9CC8, (unsigned int)v12, v13);
      }
      sub_1800129D0((__int64)pExceptionObject);
      v16 = sub_1800C9080(a2);
      sub_180029258(a1, v16, 8);
    }
    sub_18000F938(&v18);
    if ( v22 )
      sub_180010EC8(v22);
    if ( v20 )
      sub_180010EC8(v20);
  }
  return *(_BYTE *)(a1 + 96);
}
