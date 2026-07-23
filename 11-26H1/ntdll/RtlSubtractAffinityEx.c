/*
 * XREFs of RtlSubtractAffinityEx @ 0x18013FAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x18013F3B8 (-RtlpSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 */

__int64 __fastcall RtlSubtractAffinityEx(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, struct _KAFFINITY_EX *a3)
{
  unsigned int v5; // r8d
  unsigned __int16 Count; // r9
  unsigned __int16 i; // dx

  if ( a3 )
    return RtlpSubtractAffinityEx(a1, a2, a3, a3->Size);
  v5 = 1;
  Count = a1->Count;
  if ( a1->Count >= a2->Count )
    Count = a2->Count;
  for ( i = 0; i < Count; ++i )
  {
    if ( (~a2->Bitmap[i] & a1->Bitmap[i]) != 0 )
      return v5;
  }
  while ( i < a1->Count )
  {
    if ( a1->Bitmap[i] )
      return v5;
    ++i;
  }
  return 0;
}
