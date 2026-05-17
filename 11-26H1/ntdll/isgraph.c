/*
 * XREFs of isgraph @ 0x180127BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl isgraph(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_1801C5150[v1] & 0x117;
}
