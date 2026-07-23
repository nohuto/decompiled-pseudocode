/*
 * XREFs of RtlOrAffinityEx @ 0x18013FA00
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x18013F29C (-RtlpOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 */

__int64 __fastcall RtlOrAffinityEx(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, struct _KAFFINITY_EX *a3)
{
  unsigned __int16 Count; // ax
  struct _KAFFINITY_EX *v6; // rdi
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // r9
  unsigned __int16 v9; // dx
  unsigned int v10; // r8d

  if ( a3 )
    return RtlpOrAffinityEx(a1, a2, a3, a3->Size);
  Count = a2->Count;
  v6 = a2;
  v7 = Count;
  v8 = a1->Count;
  v9 = 0;
  if ( a1->Count >= Count )
    v7 = a1->Count;
  v10 = 1;
  if ( v8 >= Count )
  {
    v8 = Count;
    v6 = a1;
  }
  while ( v9 < v8 )
  {
    if ( a2->Bitmap[v9] | a1->Bitmap[v9] )
      return v10;
    ++v9;
  }
  while ( v9 < v7 )
  {
    if ( v6->Bitmap[v9] )
      return v10;
    ++v9;
  }
  return 0;
}
