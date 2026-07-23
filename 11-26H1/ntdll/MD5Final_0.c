/*
 * XREFs of MD5Final_0 @ 0x180022A90
 * Callers:
 *     RtlpMD5Final @ 0x18013B2F0 (RtlpMD5Final.c)
 * Callees:
 *     SymCryptHashCommonPaddingMd4Style @ 0x180022BAC (SymCryptHashCommonPaddingMd4Style.c)
 *     ScRsa32Compat_Md5Import @ 0x180022CB8 (ScRsa32Compat_Md5Import.c)
 *     SymCryptWipeAsm @ 0x180137700 (SymCryptWipeAsm.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall MD5Final_0(__int64 a1)
{
  __int64 v2; // rbx
  __int128 v3; // xmm0
  __int64 result; // rax
  _DWORD v5[4]; // [rsp+20h] [rbp-39h] BYREF
  __int64 v6; // [rsp+30h] [rbp-29h]
  __int128 v7; // [rsp+80h] [rbp+27h]
  __int128 v8; // [rsp+90h] [rbp+37h]

  v5[1] = 0;
  memset_thunk_772440563353939046(v5, 0, 0x6CuLL);
  ScRsa32Compat_Md5Import(a1, v5);
  v2 = v6;
  SymCryptHashCommonPaddingMd4Style(SymCryptMd5Algorithm_default, v5);
  v8 = v7;
  SymCryptWipeAsm(v5, 112LL);
  v3 = v8;
  *(_QWORD *)a1 = (8 * v2 + 576) & 0x7FFFFFE00LL;
  *(_QWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 16) = DWORD2(v8);
  result = HIDWORD(v8);
  *(_DWORD *)(a1 + 20) = HIDWORD(v8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 88) = v3;
  return result;
}
