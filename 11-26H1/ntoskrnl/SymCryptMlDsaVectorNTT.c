/*
 * XREFs of SymCryptMlDsaVectorNTT @ 0x1405738A0
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055FB34 (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsaExpandMask @ 0x140571A18 (SymCryptMlDsaExpandMask.c)
 *     SymCryptMlDsaPkDecode @ 0x140571FA8 (SymCryptMlDsaPkDecode.c)
 *     SymCryptMlDsaSkDecode @ 0x140572D4C (SymCryptMlDsaSkDecode.c)
 * Callees:
 *     SymCryptMlDsaPolyElementNTT @ 0x1405726AC (SymCryptMlDsaPolyElementNTT.c)
 */

__int64 __fastcall SymCryptMlDsaVectorNTT(_BYTE *a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax

  v1 = 0;
  if ( *a1 )
  {
    do
    {
      SymCryptMlDsaPolyElementNTT((__int64)&a1[1024 * (unsigned __int64)v1 + 8]);
      result = (unsigned __int8)*a1;
      ++v1;
    }
    while ( v1 < (unsigned int)result );
  }
  return result;
}
