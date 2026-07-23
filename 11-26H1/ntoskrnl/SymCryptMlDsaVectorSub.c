/*
 * XREFs of SymCryptMlDsaVectorSub @ 0x1405739F4
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 * Callees:
 *     SymCryptMlDsaPolyElementSub @ 0x14057282C (SymCryptMlDsaPolyElementSub.c)
 */

__int64 __fastcall SymCryptMlDsaVectorSub(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax

  v3 = 0;
  if ( *a1 )
  {
    do
    {
      SymCryptMlDsaPolyElementSub(
        &a1[1024 * (unsigned __int64)v3 + 8],
        ((unsigned __int64)v3 << 10) + a2 + 8,
        ((unsigned __int64)v3 << 10) + a3 + 8);
      result = (unsigned __int8)*a1;
      ++v3;
    }
    while ( v3 < (unsigned int)result );
  }
  return result;
}
