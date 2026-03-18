/*
 * XREFs of UnpackTouchpadSettings @ 0x14021C8D4
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x14021F560 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     _SetPrecisionTouchPadConfiguration @ 0x1401BA808 (_SetPrecisionTouchPadConfiguration.c)
 *     EditionxxxBroadcastSPIChange @ 0x1401C1AC8 (EditionxxxBroadcastSPIChange.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 (__fastcall *__fastcall UnpackTouchpadSettings(_DWORD *a1))(_QWORD, _QWORD, _QWORD)
{
  unsigned int v1; // edx
  __int32 v2; // eax
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // edx
  __int64 UserSessionState; // rax
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  int v9; // r8d
  __int64 v10; // rdx
  __m128i Source1; // [rsp+20h] [rbp-40h] BYREF
  __int128 v12; // [rsp+30h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-20h]

  v1 = a1[10];
  v2 = a1[6];
  Source1 = 0LL;
  Source1.m128i_i32[0] = v2;
  Source1.m128i_i32[2] = a1[7];
  v3 = a1[8];
  v12 = 0LL;
  DWORD1(v12) = v3;
  DWORD2(v12) = a1[9];
  Source1.m128i_i32[3] = (8 * (v1 & 1)) | ((v1 & 4 | ((v1 & 8 | ((v1 & 0x800 | (v1 >> 3) & 0x200) >> 4)) >> 2)) >> 1);
  v4 = (v1 & 0x80 | ((v1 & 0x240 | ((v1 & 0x2400 | (v1 >> 1) & 0x80) >> 3)) >> 1)) >> 3;
  v5 = 32 * (v1 & 2);
  v6 = v1 & 0x30;
  LODWORD(v12) = (8 * (v6 | v5)) | v4;
  v13 = 0LL;
  UserSessionState = W32GetUserSessionState(v12, v6, 128);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RtlCompareMemory(
                                                             &Source1,
                                                             (const void *)(UserSessionState + 16760),
                                                             0x30uLL);
  if ( result != (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))48 )
  {
    SetPrecisionTouchPadConfiguration(&Source1, 1, v9);
    return EditionxxxBroadcastSPIChange(175LL, v10, 0);
  }
  return result;
}
