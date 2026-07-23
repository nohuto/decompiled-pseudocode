/*
 * XREFs of SymCryptMlDsaVectorInfinityNorm @ 0x140573730
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMlDsaVectorInfinityNorm(_BYTE *a1)
{
  unsigned int v1; // r8d
  unsigned int *v2; // r9
  __int64 v3; // r11
  unsigned int v4; // r10d
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // edx

  v1 = 0;
  if ( *a1 )
  {
    v2 = (unsigned int *)(a1 + 8);
    v3 = (unsigned __int8)*a1;
    do
    {
      v4 = 0;
      v5 = 256LL;
      do
      {
        v6 = *v2++;
        v7 = (v6 - (((unsigned __int64)(4190208 - v6) >> 32) & 0x7FE001)) & ~((int)(v6
                                                                                  - (((unsigned __int64)(4190208 - v6) >> 32) & 0x7FE001)) >> 31) | ((int)(v6 - (((unsigned __int64)(4190208 - v6) >> 32) & 0x7FE001)) >> 31) & ((((unsigned __int64)(4190208 - v6) >> 32) & 0x7FE001) - v6);
        v4 = (((unsigned __int64)v4 - v7) >> 32) & v7 | ~(((unsigned __int64)v4 - v7) >> 32) & v4;
        --v5;
      }
      while ( v5 );
      v1 = v4 & ((v1 - (unsigned __int64)v4) >> 32) | ~((v1 - (unsigned __int64)v4) >> 32) & v1;
      --v3;
    }
    while ( v3 );
  }
  return v1;
}
