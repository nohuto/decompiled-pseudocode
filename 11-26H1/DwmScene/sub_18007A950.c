/*
 * XREFs of sub_18007A950 @ 0x18007A950
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _o___std_type_info_name @ 0x18000CD1E (_o___std_type_info_name.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C968 @ 0x18001C968 (sub_18001C968.c)
 *     sub_18004941C @ 0x18004941C (sub_18004941C.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_18007A950(__int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD v15[4]; // [rsp+48h] [rbp-F0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v17[4]; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE v18[32]; // [rsp+C0h] [rbp-78h] BYREF
  _BYTE v19[32]; // [rsp+E0h] [rbp-58h] BYREF
  _BYTE v20[32]; // [rsp+100h] [rbp-38h] BYREF

  if ( (*a3 & 0x10000) == 0 )
  {
    _RTtypeid(a1);
    v8 = o___std_type_info_name();
    v9 = sub_18001C968(v17, (__int64)"Component::Clone() -- component '", a1 + 24);
    v10 = sub_18001C87C((__int64)v18, (__int64)v9, (__int64)"' of type ");
    v11 = sub_18001C87C((__int64)v19, v10, v8);
    v12 = sub_18001C87C((__int64)v20, v11, (__int64)" does not support cloning.");
    v13 = sub_180011CC4(
            v15,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\component.cpp");
    sub_18004941C(pExceptionObject, (__int64)v13, v14, v12);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = *(_QWORD *)(a4 + 8);
  if ( v6 )
    sub_180010EC8(v6);
  return a2;
}
