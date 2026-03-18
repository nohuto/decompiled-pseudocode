/*
 * XREFs of SymCryptShake256 @ 0x1405749AC
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055D64C (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsaSkDecode @ 0x140573AF4 (SymCryptMlDsaSkDecode.c)
 * Callees:
 *     SymCryptKeccakAppend @ 0x1405757DC (SymCryptKeccakAppend.c)
 *     SymCryptKeccakExtract @ 0x1405759D4 (SymCryptKeccakExtract.c)
 *     SymCryptKeccakInit @ 0x140575B9C (SymCryptKeccakInit.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall SymCryptShake256(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v11[240]; // [rsp+20h] [rbp-128h] BYREF

  memset_0(v11, 0, sizeof(v11));
  LOBYTE(v8) = 31;
  SymCryptKeccakInit(v11, 136LL, v8);
  SymCryptKeccakAppend(v11, a1, a2);
  LOBYTE(v9) = 1;
  return SymCryptKeccakExtract(v11, a3, a4, v9);
}
