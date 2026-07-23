/*
 * XREFs of tolower @ 0x14053A1A0
 * Callers:
 *     <none>
 * Callees:
 *     __pctype_func @ 0x14053C74C (__pctype_func.c)
 */

int __cdecl tolower(int C)
{
  const unsigned __int16 *v2; // rax
  int v3; // edx

  v2 = _pctype_func();
  v3 = (unsigned __int8)C;
  if ( C == -1 )
    v3 = -1;
  if ( (v2[v3] & 1) != 0 )
    C += 32;
  return C;
}
