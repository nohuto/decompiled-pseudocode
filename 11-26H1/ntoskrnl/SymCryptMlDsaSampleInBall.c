/*
 * XREFs of SymCryptMlDsaSampleInBall @ 0x14057389C
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055D89C (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x14055DDF0 (SymCryptMlDsaVerifyEx.c)
 * Callees:
 *     SymCryptWipe @ 0x140556458 (SymCryptWipe.c)
 *     SymCryptShake128Append @ 0x14057495C (SymCryptShake128Append.c)
 *     SymCryptShake256Extract @ 0x140574974 (SymCryptShake256Extract.c)
 *     SymCryptShake256Init @ 0x140574A40 (SymCryptShake256Init.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall SymCryptMlDsaSampleInBall(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx
  char *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rcx
  char v14[16]; // [rsp+20h] [rbp-138h] BYREF
  _BYTE v15[240]; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 v16; // [rsp+120h] [rbp-38h] BYREF

  memset_0(a4, 0, 0x400uLL);
  memset_0(v15, 0, sizeof(v15));
  SymCryptShake256Init(v15);
  SymCryptShake128Append(v15, a2, a3);
  SymCryptShake256Extract(v15, &v16, 8LL);
  v8 = v16;
  v9 = 256 - (unsigned int)*(unsigned __int8 *)(a1 + 24);
  v10 = &a4[4 * v9];
  do
  {
    v14[0] = 0;
    do
      SymCryptShake256Extract(v15, v14, 1LL);
    while ( (unsigned __int8)v14[0] > (unsigned int)v9 );
    v11 = (unsigned __int8)v14[0];
    v12 = v8 & 1;
    v8 >>= 1;
    LODWORD(v9) = v9 + 1;
    *(_DWORD *)v10 = *(_DWORD *)&a4[4 * (unsigned __int8)v14[0]];
    v10 += 4;
    *(_DWORD *)&a4[4 * v11] = ((unsigned __int64)-v12 >> 32) & 0x7FE000 | ((-v12 & 0x100000000LL) == 0);
  }
  while ( (unsigned int)v9 < 0x100 );
  return SymCryptWipe((__int64)v15, 0xF0uLL);
}
