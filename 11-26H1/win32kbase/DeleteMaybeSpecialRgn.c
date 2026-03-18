/*
 * XREFs of DeleteMaybeSpecialRgn @ 0x140082160
 * Callers:
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 * Callees:
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 */

__int64 __fastcall DeleteMaybeSpecialRgn(HRGN a1)
{
  __int64 result; // rax

  if ( (unsigned __int64)a1 > 2 )
    return GreDeleteObject(a1);
  return result;
}
