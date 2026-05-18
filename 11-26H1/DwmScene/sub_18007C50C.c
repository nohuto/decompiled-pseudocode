/*
 * XREFs of sub_18007C50C @ 0x18007C50C
 * Callers:
 *     sub_180043E08 @ 0x180043E08 (sub_180043E08.c)
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     sub_1800451CC @ 0x1800451CC (sub_1800451CC.c)
 *     sub_1800456D0 @ 0x1800456D0 (sub_1800456D0.c)
 *     sub_180045760 @ 0x180045760 (sub_180045760.c)
 *     sub_18004EF74 @ 0x18004EF74 (sub_18004EF74.c)
 *     sub_18005D8B8 @ 0x18005D8B8 (sub_18005D8B8.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180078BE0 @ 0x180078BE0 (sub_180078BE0.c)
 *     sub_180078F80 @ 0x180078F80 (sub_180078F80.c)
 *     sub_180079644 @ 0x180079644 (sub_180079644.c)
 *     sub_18007E4C4 @ 0x18007E4C4 (sub_18007E4C4.c)
 *     sub_1800DD707 @ 0x1800DD707 (sub_1800DD707.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004E184 @ 0x18004E184 (sub_18004E184.c)
 *     sub_18007C314 @ 0x18007C314 (sub_18007C314.c)
 *     sub_18007CA8C @ 0x18007CA8C (sub_18007CA8C.c)
 *     sub_18007CB2C @ 0x18007CB2C (sub_18007CB2C.c)
 *     sub_18007E81C @ 0x18007E81C (sub_18007E81C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007C50C(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 result; // rax
  _QWORD *v5; // rax
  __int64 v6; // rax
  _BYTE v7[16]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v8; // [rsp+40h] [rbp-88h] BYREF
  __int64 v9; // [rsp+48h] [rbp-80h]
  _QWORD v10[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_180011CC4(v10, "ShaderPropertyLayout::EndDeclaration() -- this function must only be called once");
    v2 = sub_180011CC4(
           &v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v2, v3, (__int64)v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_BYTE *)(a1 + 1242) = *(_QWORD *)(a1 + 56) == *(_QWORD *)(a1 + 64);
  sub_18007CA8C(a1, 16LL);
  sub_18007C314(a1);
  result = sub_18007CA8C(a1, 0LL);
  *(_DWORD *)(a1 + 1168) = 1;
  if ( *(_BYTE *)(a1 + 1241) )
  {
    v5 = (_QWORD *)sub_18004E184(*(_QWORD *)(a1 + 1152), &v8);
    v6 = sub_18007E81C(*v5, v7);
    result = sub_18007CB2C(a1, v6);
    if ( v9 )
      return sub_180010EC8(v9);
  }
  return result;
}
