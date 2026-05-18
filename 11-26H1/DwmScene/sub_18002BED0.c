/*
 * XREFs of sub_18002BED0 @ 0x18002BED0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002BED0(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  unsigned int v4; // eax
  int v5; // r8d
  _BYTE v6[8]; // [rsp+30h] [rbp-A8h] BYREF
  volatile signed __int32 *v7; // [rsp+38h] [rbp-A0h]
  __int64 v8; // [rsp+40h] [rbp-98h] BYREF
  __int64 v9; // [rsp+48h] [rbp-90h]
  _QWORD v10[4]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v11[4]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+90h] [rbp-48h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 376LL))(a1, v6);
  sub_180012A94(v2, &v8);
  if ( v7 )
    sub_180010F00(v7);
  if ( !v8 )
  {
    sub_180011CC4(v11, "RenderDevice was removed");
    v4 = (unsigned int)sub_180011CC4(
                         v10,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\renderoutput.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v4, v5, (unsigned int)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  result = sub_18006DE14(a1[26]);
  if ( v9 )
    return sub_180010EC8(v9);
  return result;
}
