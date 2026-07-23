/*
 * XREFs of SymCryptMlDsaMakeHint @ 0x140571DEC
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 * Callees:
 *     SymCryptMlDsaVectorHighBits @ 0x14057365C (SymCryptMlDsaVectorHighBits.c)
 */

__int64 __fastcall SymCryptMlDsaMakeHint(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, _DWORD *a5)
{
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int *v11; // rdx
  __int64 v12; // r10
  int v13; // ecx

  v6 = 0;
  *a5 = 0;
  SymCryptMlDsaVectorHighBits(a1, a2, a2);
  result = SymCryptMlDsaVectorHighBits(a1, a3, a3);
  if ( *a4 )
  {
    do
    {
      v11 = (unsigned int *)(((unsigned __int64)v6 << 10) + a3 + 8);
      v12 = 256LL;
      do
      {
        v13 = ((unsigned __int64)-(__int64)(*v11 ^ (unsigned __int64)*(unsigned int *)((char *)v11 + a2 - a3)) >> 32) & 1;
        *(_DWORD *)&a4[(_QWORD)v11++ - a3] = v13;
        *a5 += v13;
        --v12;
      }
      while ( v12 );
      result = (unsigned __int8)*a4;
      ++v6;
    }
    while ( v6 < (unsigned int)result );
  }
  return result;
}
