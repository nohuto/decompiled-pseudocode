/*
 * XREFs of GetUTF32 @ 0x1800AF3B0
 * Callers:
 *     punycode_encode @ 0x1800AEE44 (punycode_encode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetUTF32(unsigned __int16 *a1)
{
  if ( *a1 < 0xD800u || *a1 > 0xDFFFu )
    return *a1;
  else
    return a1[1] + (((unsigned int)*a1 - 55287) << 10);
}
