/*
 * XREFs of sub_180087F00 @ 0x180087F00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18004941C @ 0x18004941C (sub_18004941C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180087F00(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD v9[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 96LL))(*a2, 1LL);
  if ( !(_BYTE)result )
  {
    v5 = *(_QWORD *)(a1 + 144);
    if ( !v5 || (result = v5 - 1, ((v5 - 1) & v5) != 0) )
    {
      sub_180011CC4(
        v10,
        "ColorTransform::CreateResources() -- volume texture must be power of two below feature level 10.0");
      v6 = sub_180011CC4(
             v9,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\colortransform.cpp");
      sub_18004941C(pExceptionObject, (__int64)v6, v7, (__int64)v10);
      throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
    }
  }
  v8 = a2[1];
  if ( v8 )
    return sub_180010EC8(v8);
  return result;
}
