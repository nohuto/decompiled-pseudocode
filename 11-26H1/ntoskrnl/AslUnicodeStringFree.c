/*
 * XREFs of AslUnicodeStringFree @ 0x14088E414
 * Callers:
 *     SdbResolveDatabaseEx @ 0x14088C954 (SdbResolveDatabaseEx.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 */

__int64 __fastcall AslUnicodeStringFree(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 )
    {
      memset_0(v2, 66, *(unsigned __int16 *)(a1 + 2));
      result = AslFree(v3, *(_QWORD *)(a1 + 8));
    }
    *(_OWORD *)a1 = 0LL;
  }
  return result;
}
