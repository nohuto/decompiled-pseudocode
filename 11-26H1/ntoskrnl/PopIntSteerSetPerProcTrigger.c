/*
 * XREFs of PopIntSteerSetPerProcTrigger @ 0x140614E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopIntSteerSetPerProcTrigger(__int64 a1, int *a2, int a3)
{
  if ( a3 != 4 )
    return 3221225485LL;
  PpmIntSteerLoadMax = *a2;
  return 0LL;
}
