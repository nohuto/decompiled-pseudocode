/*
 * XREFs of sub_1800CD75C @ 0x1800CD75C
 * Callers:
 *     sub_1800CD520 @ 0x1800CD520 (sub_1800CD520.c)
 *     sub_1800CD640 @ 0x1800CD640 (sub_1800CD640.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18006A8B8 @ 0x18006A8B8 (sub_18006A8B8.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_1800CD75C(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v8; // eax
  __int128 *v9; // rcx
  __int128 *v10; // r14
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, int *, __int128 *, __int64 *); // rdi
  int v13; // ebx
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // [rsp+38h] [rbp-A1h] BYREF
  __int128 v18; // [rsp+40h] [rbp-99h] BYREF
  __int64 *v19; // [rsp+50h] [rbp-89h]
  _QWORD v20[4]; // [rsp+60h] [rbp-79h] BYREF
  int v21; // [rsp+80h] [rbp-59h] BYREF
  int v22; // [rsp+84h] [rbp-55h]
  int v23; // [rsp+88h] [rbp-51h]
  __int64 v24; // [rsp+8Ch] [rbp-4Dh]
  int v25; // [rsp+94h] [rbp-45h]
  _QWORD v26[4]; // [rsp+98h] [rbp-41h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B8h] [rbp-21h] BYREF

  v19 = a1;
  v24 = 0LL;
  v25 = 0;
  v21 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v9 = &v18;
  do
  {
    *(_DWORD *)v9 = v8++;
    v9 = (__int128 *)((char *)v9 + 4);
  }
  while ( v8 < 4 );
  v22 = *((_DWORD *)&v18 + *(unsigned int *)(a4 + 24));
  v23 = a6;
  sub_1800BC108(a3, &v17);
  v18 = 0LL;
  v10 = 0LL;
  if ( v22 == 2 )
  {
    LODWORD(v24) = 0x10000;
  }
  else
  {
    *(_QWORD *)&v18 = a5;
    v10 = &v18;
  }
  *a1 = 0LL;
  v11 = v17;
  v12 = *(__int64 (__fastcall **)(__int64, int *, __int128 *, __int64 *))(*(_QWORD *)v17 + 24LL);
  sub_18000F938(a1);
  v13 = v12(v11, &v21, v10, a1);
  sub_1800BDDBC(a3, v13);
  if ( v13 < 0 )
  {
    sub_180011CC4(v26, "D3DBufferUtils::CreateBuffer() - Direct3D could not create the buffer");
    v15 = sub_180011CC4(
            v20,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\d3dbufferutils.cpp");
    sub_18006A8B8(pExceptionObject, (__int64)v15, v16, v13, (__int64)v26, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_18000F938(&v17);
  return a1;
}
