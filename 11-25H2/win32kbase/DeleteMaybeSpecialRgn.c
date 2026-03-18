/*
 * XREFs of DeleteMaybeSpecialRgn @ 0x14008A8D0
 * Callers:
 *     DestroyCacheDC @ 0x14016CCA0 (DestroyCacheDC.c)
 * Callees:
 *     GreDeleteObject @ 0x14008B860 (GreDeleteObject.c)
 */

__int64 __fastcall DeleteMaybeSpecialRgn(HBRUSH a1)
{
  __int64 result; // rax

  if ( (unsigned __int64)a1 > 2 )
    return GreDeleteObject(a1);
  return result;
}
