/*
 * XREFs of AslUnicodeStringFree @ 0x180099F48
 * Callers:
 *     SdbResolveDatabaseEx @ 0x18009127C (SdbResolveDatabaseEx.c)
 * Callees:
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

BOOLEAN __fastcall AslUnicodeStringFree(__int64 a1)
{
  void *v2; // rcx
  BOOLEAN result; // al

  if ( a1 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 )
    {
      memset_0(v2, 66, *(unsigned __int16 *)(a1 + 2));
      result = AslFree(NtCurrentPeb()->ProcessHeap, *(void **)(a1 + 8));
    }
    *(_OWORD *)a1 = 0LL;
  }
  return result;
}
