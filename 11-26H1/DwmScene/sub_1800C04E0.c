/*
 * XREFs of sub_1800C04E0 @ 0x1800C04E0
 * Callers:
 *     sub_1800C048C @ 0x1800C048C (sub_1800C048C.c)
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 *     sub_1800C1FC0 @ 0x1800C1FC0 (sub_1800C1FC0.c)
 *     sub_1800C48B0 @ 0x1800C48B0 (sub_1800C48B0.c)
 *     sub_1800C6720 @ 0x1800C6720 (sub_1800C6720.c)
 *     sub_1800CB160 @ 0x1800CB160 (sub_1800CB160.c)
 *     sub_1800CB5F4 @ 0x1800CB5F4 (sub_1800CB5F4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_1800BFA48 @ 0x1800BFA48 (sub_1800BFA48.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C04E0(int a1, int a2)
{
  unsigned int v2; // ecx
  int v3; // edx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD v7[5]; // [rsp+38h] [rbp-71h] BYREF
  _OWORD pExceptionObject[6]; // [rsp+60h] [rbp-49h] BYREF
  int v9; // [rsp+C0h] [rbp+17h]
  _QWORD v10[4]; // [rsp+D0h] [rbp+27h] BYREF

  pExceptionObject[0] = _mm_load_si128((const __m128i *)&xmmword_180191510);
  pExceptionObject[1] = _mm_load_si128((const __m128i *)&xmmword_180191520);
  pExceptionObject[2] = _mm_load_si128((const __m128i *)&xmmword_1801914C0);
  pExceptionObject[3] = _mm_load_si128((const __m128i *)&xmmword_180191500);
  pExceptionObject[4] = _mm_load_si128((const __m128i *)&xmmword_180191530);
  pExceptionObject[5] = _mm_load_si128((const __m128i *)&xmmword_180191550);
  v9 = 107;
  v2 = *((_DWORD *)pExceptionObject + a1);
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( !v3 )
      return sub_1800BFA48(v2);
    if ( v3 != 1 )
    {
      sub_180011CC4(v10, "Unsupported color space");
      v4 = sub_180011CC4(
             v7,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\Inc\\NativeRendererD3D11\\D3DUtils.h");
      sub_18003A468(pExceptionObject, (__int64)v4, v5, (__int64)v10, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  return v2;
}
