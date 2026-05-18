/*
 * XREFs of sub_1800CC850 @ 0x1800CC850
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_180029258 @ 0x180029258 (sub_180029258.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004F174 @ 0x18004F174 (sub_18004F174.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800BF284 @ 0x1800BF284 (sub_1800BF284.c)
 *     sub_1800C9080 @ 0x1800C9080 (sub_1800C9080.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800CC850(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, __int64, _QWORD, __int64); // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ebx
  const char *v11; // rax
  const char *v12; // rbx
  __int64 v13; // r14
  void (__fastcall *v14)(__int64, void *, _QWORD, const char *); // r15
  unsigned __int64 v15; // rax
  __int64 v17; // [rsp+30h] [rbp-59h] BYREF
  __int64 v18; // [rsp+38h] [rbp-51h] BYREF
  __int64 v19; // [rsp+40h] [rbp-49h]
  __int64 v20; // [rsp+58h] [rbp-31h] BYREF
  __int64 v21; // [rsp+60h] [rbp-29h]
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-11h] BYREF

  if ( *(_BYTE *)(a1 + 96) )
  {
    sub_180011CC4(&v20, "DomainShaderD3D11::Load() -- this function can only be called once per shader instance");
    v4 = sub_180011CC4(
           &v18,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\domainshaderd3d11.cpp");
    sub_18003A468(pExceptionObject, (__int64)v4, v5, (__int64)&v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !sub_18004F174((__int64)a2) )
  {
    sub_180012A94(a1 + 72, &v18);
    sub_1800BF284(&v20, &v18);
    sub_1800BC108(v20, &v17);
    v6 = v17;
    v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v17 + 136LL);
    sub_18000F938((__int64 *)(a1 + 104));
    v8 = sub_1800C9080((__int64)a2);
    v9 = *a2;
    if ( *a2 == a2[1] )
      v9 = a2[3];
    v10 = v7(v6, v9, v8, 0LL, a1 + 104);
    sub_1800BDDBC(v20, v10);
    if ( v10 < 0 )
    {
      sub_18001DCFC(&qword_1801BD5A8, 5);
    }
    else
    {
      *(_BYTE *)(a1 + 96) = 1;
      v11 = (const char *)sub_1800148EC(a1 + 8);
      v12 = v11;
      v13 = *(_QWORD *)(a1 + 104);
      if ( v13 )
      {
        v14 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v13 + 40LL);
        if ( v11 )
          LODWORD(v11) = strnlen(v11, 0x7FFFFFFFuLL);
        v14(v13, &unk_1800F9CC8, (unsigned int)v11, v12);
      }
      v15 = sub_1800C9080((__int64)a2);
      sub_180029258(a1, v15, 8);
    }
    sub_18000F938(&v17);
    if ( v21 )
      sub_180010EC8(v21);
    if ( v19 )
      sub_180010EC8(v19);
  }
  return *(_BYTE *)(a1 + 96);
}
