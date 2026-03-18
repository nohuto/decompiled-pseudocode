/*
 * XREFs of SymCryptMlDsaVectorNTT @ 0x14057463C
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055D64C (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x14055DDF0 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsaExpandMask @ 0x140572830 (SymCryptMlDsaExpandMask.c)
 *     SymCryptMlDsaPkDecode @ 0x140572D9C (SymCryptMlDsaPkDecode.c)
 *     SymCryptMlDsaSkDecode @ 0x140573AF4 (SymCryptMlDsaSkDecode.c)
 * Callees:
 *     SymCryptMlDsaPolyElementNTT @ 0x1405734A0 (SymCryptMlDsaPolyElementNTT.c)
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
