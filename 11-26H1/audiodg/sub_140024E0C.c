/*
 * XREFs of sub_140024E0C @ 0x140024E0C
 * Callers:
 *     sub_1400240A0 @ 0x1400240A0 (sub_1400240A0.c)
 *     sub_140024C80 @ 0x140024C80 (sub_140024C80.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_140024E0C(__int64 a1)
{
  BOOL result; // eax

  if ( !*(_BYTE *)a1 )
  {
    result = QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 16));
    *(_BYTE *)a1 = 1;
  }
  return result;
}
