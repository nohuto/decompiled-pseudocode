/*
 * XREFs of sub_180043BE0 @ 0x180043BE0
 * Callers:
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_180043974 @ 0x180043974 (sub_180043974.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180043BE0(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // r8
  int v9[4]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-A8h]
  _QWORD v11[5]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v12[4]; // [rsp+78h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-50h] BYREF

  v10 = a1;
  v11[4] = a2;
  sub_18001D260(a1, a2);
  *(_DWORD *)(v4 + 32) = 1;
  v9[0] = 0;
  sub_180043974((_QWORD *)(v4 + 40), v5, v9);
  if ( (int)**(float **)(a1 + 40) )
  {
    sub_180011CC4(
      v12,
      "Shader integer has default value is outside the currently supported range (must be exactly representable as float).");
    v6 = sub_180011CC4(
           v11,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\Inc\\NativeRenderer\\Re"
           "sources\\ShaderDefinitions.h");
    sub_18003A468(pExceptionObject, (__int64)v6, v7, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_1800129D0(a2);
  return a1;
}
