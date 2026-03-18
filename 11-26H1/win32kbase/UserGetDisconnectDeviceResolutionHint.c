/*
 * XREFs of UserGetDisconnectDeviceResolutionHint @ 0x1401D9C74
 * Callers:
 *     DrvGetDisplayDriverParameters @ 0x1400285D4 (DrvGetDisplayDriverParameters.c)
 *     ?StubDispGetModes@@YAKPEAXKPEAU_devicemodeW@@@Z @ 0x1401FBAE0 (-StubDispGetModes@@YAKPEAXKPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     GetPhysicalScreenRect @ 0x14019133C (GetPhysicalScreenRect.c)
 */

__int64 __fastcall UserGetDisconnectDeviceResolutionHint(_DWORD *a1, int a2, int a3)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // xmm0_8
  int v6; // ecx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(__m128i *)GetPhysicalScreenRect(&v8, a2, a3);
  a1[18] = 1835008;
  v5 = _mm_srli_si128(v4, 8).m128i_u64[0];
  a1[43] = v5 - v4.m128i_i32[0];
  a1[44] = HIDWORD(v5) - v4.m128i_i32[1];
  result = *(unsigned __int8 *)(*(_QWORD *)(W32GetUserSessionState(v6, v4.m128i_i32[1], HIDWORD(v5) - v4.m128i_i32[1])
                                          + 19904)
                              + 7003LL);
  a1[42] = result;
  return result;
}
