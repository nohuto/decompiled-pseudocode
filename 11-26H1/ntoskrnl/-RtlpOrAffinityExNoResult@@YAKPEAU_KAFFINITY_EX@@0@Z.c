/*
 * XREFs of ?RtlpOrAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140625B60
 * Callers:
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     KeOrAffinityEx @ 0x1405EF2B0 (KeOrAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpOrAffinityExNoResult(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
{
  struct _KAFFINITY_EX *v2; // r11
  unsigned __int16 Count; // r10
  unsigned __int16 v4; // r9
  unsigned __int16 i; // dx

  v2 = a2;
  Count = a2->Count;
  v4 = a1->Count;
  if ( a1->Count >= a2->Count )
  {
    v4 = a2->Count;
    Count = a1->Count;
    v2 = a1;
  }
  for ( i = 0; i < v4; ++i )
  {
    if ( a2->Bitmap[i] | a1->Bitmap[i] )
      return 1LL;
  }
  while ( i < Count )
  {
    if ( v2->Bitmap[i] )
      return 1LL;
    ++i;
  }
  return 0LL;
}
