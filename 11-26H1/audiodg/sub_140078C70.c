/*
 * XREFs of sub_140078C70 @ 0x140078C70
 * Callers:
 *     sub_140019E50 @ 0x140019E50 (sub_140019E50.c)
 * Callees:
 *     <none>
 */

signed int sub_140078C70()
{
  signed int result; // eax

  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
