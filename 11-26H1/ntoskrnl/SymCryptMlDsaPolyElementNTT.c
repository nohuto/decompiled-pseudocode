/*
 * XREFs of SymCryptMlDsaPolyElementNTT @ 0x1405726AC
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsaVectorNTT @ 0x1405738A0 (SymCryptMlDsaVectorNTT.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SymCryptMlDsaPolyElementNTT(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rbx
  unsigned int v4; // r11d
  __int64 v5; // r10
  unsigned int v6; // r15d
  unsigned int v7; // ecx
  _DWORD *v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // r8d
  _UNKNOWN *retaddr; // [rsp+18h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  LODWORD(v3) = 0;
  v4 = 128;
  do
  {
    v5 = 0LL;
    do
    {
      v3 = (unsigned int)(v3 + 1);
      v6 = v5;
      v7 = *((_DWORD *)MLDSA_ZETA_BITREV_TIMES_R + v3);
      if ( (unsigned int)v5 < (unsigned int)v5 + v4 )
      {
        v8 = (_DWORD *)(a1 + 4 * v5);
        do
        {
          v9 = v6 + v4;
          ++v6;
          v10 = v7 * (unsigned __int64)*(unsigned int *)(a1 + 4 * v9);
          v11 = HIDWORD(v10)
              - ((8380417 * (unsigned __int64)(unsigned int)(58728449 * v10)) >> 32)
              + (((HIDWORD(v10) - ((8380417 * (unsigned __int64)(unsigned int)(58728449 * v10)) >> 32)) >> 32) & 0x7FE001);
          *(_DWORD *)(a1 + 4LL * (unsigned int)v9) = *v8
                                                   + ((((unsigned int)*v8 - (unsigned __int64)v11) >> 32) & 0x7FE001)
                                                   - v11;
          result = v11 + *v8;
          *v8++ = result - (((8380416 - result) >> 32) & 0x7FE001);
        }
        while ( v6 < (unsigned int)v5 + v4 );
      }
      v5 = 2 * v4 + (unsigned int)v5;
    }
    while ( (unsigned int)v5 < 0x100 );
    v4 >>= 1;
  }
  while ( v4 );
  return result;
}
