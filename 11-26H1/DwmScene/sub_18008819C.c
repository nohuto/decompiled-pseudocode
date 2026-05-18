/*
 * XREFs of sub_18008819C @ 0x18008819C
 * Callers:
 *     sub_1800885D8 @ 0x1800885D8 (sub_1800885D8.c)
 *     sub_1800887D8 @ 0x1800887D8 (sub_1800887D8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_180016FD4 @ 0x180016FD4 (sub_180016FD4.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180036040 @ 0x180036040 (sub_180036040.c)
 *     sub_18004941C @ 0x18004941C (sub_18004941C.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008819C(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rsi
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _DWORD *v14; // [rsp+58h] [rbp-59h] BYREF
  __int64 v15; // [rsp+60h] [rbp-51h]
  __int64 v16[3]; // [rsp+70h] [rbp-41h] BYREF
  _QWORD v17[4]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v18[4]; // [rsp+A8h] [rbp-9h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+C8h] [rbp+17h] BYREF

  v2 = sub_18007AB60(a1);
  sub_180036040(v2, v16);
  v3 = (_QWORD *)v16[0];
  v4 = v16[1];
  while ( v3 != (_QWORD *)v4 )
  {
    sub_180012C40(&v14, v3);
    if ( v14[61] )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v14 + 96LL))(v14, 1LL) )
      {
        v5 = *(_QWORD *)(a1 + 144);
        if ( !v5 || ((v5 - 1) & v5) != 0 )
        {
          sub_180011CC4(
            v18,
            "ColorTransform::CreateResources() -- volume texture must be power of two below feature level 10.0");
          v6 = sub_180011CC4(
                 v17,
                 "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\c"
                 "olortransform.cpp");
          sub_18004941C(pExceptionObject, (__int64)v6, v7, (__int64)v18);
          throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
        }
      }
    }
    if ( v15 )
      sub_180010EC8(v15);
    v3 += 2;
  }
  v8 = sub_18007AB60(a1);
  v9 = sub_180016FD4(v8, &v14);
  v10 = (__int64 *)(a1 + 96);
  sub_180011F5C((_QWORD *)(a1 + 96), v9);
  if ( v15 )
    sub_180010EC8(v15);
  v11 = *v10;
  v12 = sub_180011CC4(v18, "ColorTransform");
  sub_1800292C4(v11, (__int64)v12);
  sub_180053894(
    *v10,
    *(_DWORD *)(a1 + 144),
    *(_DWORD *)(a1 + 144),
    *(_DWORD *)(a1 + 144),
    16,
    0,
    1,
    *(_QWORD *)(a1 + 112),
    (*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 112)) & 0xFFFFFFFC,
    0LL);
  return sub_1800141F0((__int64)v16);
}
