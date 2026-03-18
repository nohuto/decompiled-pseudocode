/*
 * XREFs of UserGetDisconnectDeviceResolutionHint @ 0x1401B6D74
 * Callers:
 *     DrvGetDisplayDriverParameters @ 0x14004C840 (DrvGetDisplayDriverParameters.c)
 *     ?StubDispGetModes@@YAKPEAXKPEAU_devicemodeW@@@Z @ 0x14017DB20 (-StubDispGetModes@@YAKPEAXKPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     GetPhysicalScreenRect @ 0x1401533EC (GetPhysicalScreenRect.c)
 */

__int64 __fastcall UserGetDisconnectDeviceResolutionHint(_DWORD *a1, __int64 a2)
{
  __m128i v3; // xmm1
  unsigned __int64 v4; // xmm0_8
  __int64 v5; // rcx
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(__m128i *)GetPhysicalScreenRect(&v7, a2);
  a1[18] = 1835008;
  v4 = _mm_srli_si128(v3, 8).m128i_u64[0];
  a1[43] = v4 - v3.m128i_i32[0];
  a1[44] = HIDWORD(v4) - v3.m128i_i32[1];
  result = *(unsigned __int8 *)(*(_QWORD *)(W32GetUserSessionState(v5, HIDWORD(v3.m128i_i64[0])) + 19872) + 7003LL);
  a1[42] = result;
  return result;
}
