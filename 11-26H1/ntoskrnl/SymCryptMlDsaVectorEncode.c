/*
 * XREFs of SymCryptMlDsaVectorEncode @ 0x1405735E4
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 *     SymCryptMlDsaPkEncode @ 0x1405721EC (SymCryptMlDsaPkEncode.c)
 *     SymCryptMlDsaSigEncode @ 0x140572CC0 (SymCryptMlDsaSigEncode.c)
 *     SymCryptMlDsaSkEncode @ 0x140573034 (SymCryptMlDsaSkEncode.c)
 * Callees:
 *     SymCryptMlDsaPolyElementEncode @ 0x1405723E8 (SymCryptMlDsaPolyElementEncode.c)
 */

__int64 __fastcall SymCryptMlDsaVectorEncode(_BYTE *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 result; // rax

  v4 = 0;
  v5 = 32 * a2;
  if ( *a1 )
  {
    do
    {
      SymCryptMlDsaPolyElementEncode((int *)&a1[1024 * (unsigned __int64)v4 + 8], a2, a3, a4);
      result = (unsigned __int8)*a1;
      a4 += v5;
      ++v4;
    }
    while ( v4 < (unsigned int)result );
  }
  return result;
}
