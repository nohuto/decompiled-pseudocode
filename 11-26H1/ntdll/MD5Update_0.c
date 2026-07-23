/*
 * XREFs of MD5Update_0 @ 0x180022D20
 * Callers:
 *     RtlpMD5Update @ 0x18013B310 (RtlpMD5Update.c)
 * Callees:
 *     ScRsa32Compat_Md5Import @ 0x180022CB8 (ScRsa32Compat_Md5Import.c)
 *     SymCryptHashAppendInternal @ 0x180022EFC (SymCryptHashAppendInternal.c)
 *     SymCryptWipeAsm @ 0x180137700 (SymCryptWipeAsm.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall MD5Update_0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int128 v6; // xmm0
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  _BYTE v11[4]; // [rsp+20h] [rbp-39h] BYREF
  int v12; // [rsp+24h] [rbp-35h]
  __int64 v13; // [rsp+30h] [rbp-29h]
  __int128 v14; // [rsp+40h] [rbp-19h]
  __int128 v15; // [rsp+50h] [rbp-9h]
  __int128 v16; // [rsp+60h] [rbp+7h]
  __int128 v17; // [rsp+70h] [rbp+17h]
  __int128 v18; // [rsp+80h] [rbp+27h]

  v12 = 0;
  memset_thunk_772440563353939046(v11, 0, 0x6CuLL);
  ScRsa32Compat_Md5Import((unsigned int *)a1, (__int64)v11);
  SymCryptHashAppendInternal(SymCryptMd5Algorithm_default, v11, a2, a3);
  v6 = v18;
  v7 = v13;
  *(_OWORD *)(a1 + 24) = v14;
  v7 *= 8LL;
  v8 = v16;
  *(_OWORD *)(a1 + 8) = v6;
  v13 = v7;
  *(_OWORD *)(a1 + 40) = v15;
  *(_DWORD *)a1 = v7;
  v9 = v17;
  *(_OWORD *)(a1 + 56) = v8;
  *(_DWORD *)(a1 + 4) = HIDWORD(v7);
  *(_OWORD *)(a1 + 72) = v9;
  return SymCryptWipeAsm(v11, 112LL);
}
