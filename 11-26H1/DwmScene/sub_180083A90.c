/*
 * XREFs of sub_180083A90 @ 0x180083A90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180029070 @ 0x180029070 (sub_180029070.c)
 *     sub_1800382B8 @ 0x1800382B8 (sub_1800382B8.c)
 *     sub_180051E20 @ 0x180051E20 (sub_180051E20.c)
 *     sub_18006A8B8 @ 0x18006A8B8 (sub_18006A8B8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180083A90(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // ebx
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // [rsp+30h] [rbp-89h] BYREF
  __int64 v10; // [rsp+38h] [rbp-81h] BYREF
  __int64 v11; // [rsp+40h] [rbp-79h]
  __int64 v12; // [rsp+48h] [rbp-71h] BYREF
  __int64 v13; // [rsp+50h] [rbp-69h]
  _QWORD v14[4]; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v15[4]; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v16[4]; // [rsp+98h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B8h] [rbp-1h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    sub_180029070(a1, (__int64)a2);
    sub_1800382B8(a1 + 120, &v12);
    if ( !v12 )
    {
      sub_180011CC4(v16, "Shader::AttachDevice() -- shader program no longer available for creating new device shader");
      v9 = sub_180011CC4(
             v14,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader.cpp");
      v7 = sub_1800181BC(v15, (__int64)v9);
      sub_18006A8B8(pExceptionObject, (__int64)v7, v8, -2147418113, (__int64)v16, 0);
      pExceptionObject[0] = &Spectre::Engine::EngineUnexpectedException::`vftable';
      sub_1800129D0((__int64)v9);
      throw (Spectre::Engine::EngineUnexpectedException *)pExceptionObject;
    }
    v5 = *(_DWORD *)(*a2 + 244LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD *))(*(_QWORD *)a1 + 48LL))(a1, &v10, v12, a2);
    LODWORD(v9) = v5;
    v6 = sub_180051E20((__int64 *)(a1 + 136), (__int64)v14, &v9);
    result = (__int64)sub_180013540((__int64 *)(*(_QWORD *)v6 + 40LL), &v10);
    if ( !v10 )
      *(_BYTE *)(a1 + 152) = 0;
    if ( v11 )
      result = sub_180010EC8(v11);
    if ( v13 )
      return sub_180010EC8(v13);
  }
  return result;
}
