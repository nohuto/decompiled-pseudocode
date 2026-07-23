/*
 * XREFs of MD4Final @ 0x180158704
 * Callers:
 *     RtlpMD4Final @ 0x18013B2C0 (RtlpMD4Final.c)
 * Callees:
 *     ScRsa32Compat_Md4Import @ 0x180158970 (ScRsa32Compat_Md4Import.c)
 *     SymCryptMd4Result @ 0x18015E8D0 (SymCryptMd4Result.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

unsigned __int64 __fastcall MD4Final(__int64 a1)
{
  __int64 v2; // rbx
  __int128 v3; // xmm0
  unsigned __int64 v4; // rax
  unsigned __int64 result; // rax
  _BYTE v6[4]; // [rsp+28h] [rbp-39h] BYREF
  int v7; // [rsp+2Ch] [rbp-35h]
  __int64 v8; // [rsp+38h] [rbp-29h]
  __int128 v9; // [rsp+98h] [rbp+37h] BYREF

  v7 = 0;
  memset_thunk_772440563353939046(v6, 0, 0x6CuLL);
  v9 = 0uLL;
  ScRsa32Compat_Md4Import(a1, v6);
  v2 = v8;
  SymCryptMd4Result(v6, &v9);
  v3 = v9;
  *(_OWORD *)a1 = v9;
  v4 = (8 * v2 + 576) & 0x7FFFFFE00LL;
  *(_DWORD *)(a1 + 16) = v4;
  result = HIDWORD(v4);
  *(_DWORD *)(a1 + 20) = result;
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
