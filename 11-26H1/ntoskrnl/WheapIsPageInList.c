/*
 * XREFs of WheapIsPageInList @ 0x14084F08C
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1406D9F4C (WheaPersistBadPageToBcd.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapIsPageInList(__int64 a1, unsigned int a2, __int64 a3)
{
  char v3; // r10
  unsigned int i; // r9d

  v3 = 0;
  for ( i = 0; i < a2; ++i )
  {
    if ( *(_QWORD *)(a1 + 8LL * i) == a3 )
      return 1;
  }
  return v3;
}
