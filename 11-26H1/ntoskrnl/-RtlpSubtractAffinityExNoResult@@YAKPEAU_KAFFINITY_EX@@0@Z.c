/*
 * XREFs of ?RtlpSubtractAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140622BA4
 * Callers:
 *     RtlSubtractAffinityEx @ 0x14025B408 (RtlSubtractAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x1405EC970 (KeSubtractAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpSubtractAffinityExNoResult(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
{
  unsigned __int16 Count; // r9
  unsigned __int16 i; // dx

  Count = a1->Count;
  if ( a1->Count >= a2->Count )
    Count = a2->Count;
  for ( i = 0; i < Count; ++i )
  {
    if ( (~a2->Bitmap[i] & a1->Bitmap[i]) != 0 )
      return 1LL;
  }
  while ( i < a1->Count )
  {
    if ( a1->Bitmap[i] )
      return 1LL;
    ++i;
  }
  return 0LL;
}
