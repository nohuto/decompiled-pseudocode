/*
 * XREFs of sub_18001B41C @ 0x18001B41C
 * Callers:
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800188B8 @ 0x1800188B8 (sub_1800188B8.c)
 *     sub_18001C72C @ 0x18001C72C (sub_18001C72C.c)
 *     sub_1800593B4 @ 0x1800593B4 (sub_1800593B4.c)
 *     sub_18005A910 @ 0x18005A910 (sub_18005A910.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18001B41C(__int64 a1, __int64 a2)
{
  __m128 *v4; // rax
  char result; // al
  __int128 v6; // xmm2
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _QWORD v9[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+40h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 316) != 5 )
  {
    sub_180011CC4(v9, "Camera::SetProjectionMatrix() -- ProjectionType must be Custom for this to take effect");
    sub_18001C72C(pExceptionObject, v9, 0LL);
    throw (Spectre::Utils::SpectreException *)pExceptionObject;
  }
  v4 = (__m128 *)sub_1800593B4(a1, 1LL, 2LL);
  result = sub_1800188B8((__m128 *)a2, v4);
  if ( result )
  {
    v6 = *(_OWORD *)(a2 + 16);
    v7 = *(_OWORD *)(a2 + 32);
    v8 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(a1 + 932) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 948) = v6;
    *(_OWORD *)(a1 + 964) = v7;
    *(_OWORD *)(a1 + 980) = v8;
    return sub_18005A910(a1, 2LL);
  }
  return result;
}
