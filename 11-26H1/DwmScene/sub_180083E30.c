/*
 * XREFs of sub_180083E30 @ 0x180083E30
 * Callers:
 *     sub_18004E514 @ 0x18004E514 (sub_18004E514.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_1800162FC @ 0x1800162FC (sub_1800162FC.c)
 *     sub_180036040 @ 0x180036040 (sub_180036040.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 *     sub_180051E20 @ 0x180051E20 (sub_180051E20.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_180083E30(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // r15
  int v9; // esi
  __int64 v10; // rax
  int v12; // [rsp+30h] [rbp-79h] BYREF
  __int64 v13; // [rsp+38h] [rbp-71h] BYREF
  __int64 v14; // [rsp+40h] [rbp-69h]
  __int64 v15[3]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v16[4]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v17; // [rsp+80h] [rbp-29h] BYREF
  __int64 v18; // [rsp+88h] [rbp-21h]
  _QWORD pExceptionObject[7]; // [rsp+A0h] [rbp-9h] BYREF

  if ( *(_BYTE *)(a1 + 152) )
  {
    sub_180011CC4(&v17, "Shader::Load() -- this function can only be called once per shader instance");
    v4 = sub_180011CC4(
           v16,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader.cpp");
    sub_18003A468(pExceptionObject, (__int64)v4, v5, (__int64)&v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_1800162FC((_QWORD *)(a1 + 120), a2);
  *(_BYTE *)(a1 + 152) = 1;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  sub_180036040(v6, v15);
  v7 = (_QWORD *)v15[0];
  v8 = v15[1];
  while ( v7 != (_QWORD *)v8 )
  {
    sub_180012C40(&v13, v7);
    if ( v13 )
    {
      v9 = *(_DWORD *)(v13 + 244);
      if ( v9 )
      {
        v12 = *(_DWORD *)(v13 + 244);
        if ( sub_180042544(a1 + 136, (__int64)&v12) == *(_QWORD *)(a1 + 136) )
        {
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v17, *a2, &v13);
          v12 = v9;
          v10 = sub_180051E20((__int64 *)(a1 + 136), (__int64)v16, &v12);
          sub_180013540((__int64 *)(*(_QWORD *)v10 + 40LL), &v17);
          if ( !v17 )
            *(_BYTE *)(a1 + 152) = 0;
          if ( v18 )
            sub_180010EC8(v18);
        }
      }
    }
    if ( v14 )
      sub_180010EC8(v14);
    v7 += 2;
  }
  sub_1800141F0((__int64)v15);
  return 1;
}
