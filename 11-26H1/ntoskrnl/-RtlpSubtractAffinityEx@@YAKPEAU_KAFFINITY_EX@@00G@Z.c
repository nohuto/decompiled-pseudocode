/*
 * XREFs of ?RtlpSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025F780
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140255B30 (PpmParkSteerInterrupts.c)
 *     PpmParkFindSpecificTopologyMask @ 0x14025DB70 (PpmParkFindSpecificTopologyMask.c)
 *     KeSubtractAffinityEx @ 0x1405EF2E0 (KeSubtractAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpSubtractAffinityEx(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        struct _KAFFINITY_EX *a3,
        unsigned __int16 a4)
{
  unsigned __int16 Count; // ax
  unsigned __int16 v6; // r10
  unsigned __int16 v7; // ax
  unsigned int v8; // esi
  unsigned __int16 v9; // ax
  signed __int64 v10; // rbx
  __int64 v11; // rdi
  $B38C3B1372D6E954799962D5DD404846 *v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v17; // rdx

  Count = a2->Count;
  v6 = a1->Count;
  a3->Size = a4;
  if ( v6 >= Count )
    v6 = Count;
  v7 = a1->Count;
  a3->Count = a1->Count;
  v8 = 0;
  if ( v7 > a4 )
    a3->Count = a4;
  v9 = 0;
  if ( v6 > a4 )
    v6 = a4;
  if ( v6 )
  {
    v10 = (char *)a2 - (char *)a1;
    v11 = v6;
    v12 = &a1->8;
    v9 = v6;
    do
    {
      v13 = *(unsigned __int64 *)((char *)v12->Bitmap + v10);
      v12 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v12 + 8);
      v14 = v12[-1].StaticBitmap[31] & ~v13;
      *(unsigned __int64 *)((char *)&v12->Bitmap[-1] + (char *)a3 - (char *)a1) = v14;
      if ( v14 )
        v8 = 1;
      --v11;
    }
    while ( v11 );
  }
  for ( ; v9 < a3->Count; ++v9 )
  {
    v17 = a1->Bitmap[v9];
    a3->Bitmap[v9] = v17;
    if ( v17 )
      v8 = 1;
  }
  for ( a3->Reserved = 0; v9 < a3->Size; a3->Bitmap[v15] = 0LL )
    v15 = v9++;
  return v8;
}
