/*
 * XREFs of ?RtlpAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025BF70
 * Callers:
 *     PpmParkReportParkedCores @ 0x14025BAD0 (PpmParkReportParkedCores.c)
 *     KiSetLegacyAffinityThread @ 0x14025BD0C (KiSetLegacyAffinityThread.c)
 *     KeAndAffinityEx @ 0x140532190 (KeAndAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAndAffinityEx(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        struct _KAFFINITY_EX *a3,
        unsigned __int16 a4)
{
  unsigned __int16 Count; // r8
  unsigned int v7; // edi
  unsigned __int16 v8; // cx
  __int64 v9; // r8
  bool v10; // zf
  __int64 v11; // rdx

  a3->Size = a4;
  Count = a1->Count;
  v7 = 0;
  if ( a1->Count >= a2->Count )
    Count = a2->Count;
  a3->Count = Count;
  if ( Count > a4 )
  {
    a3->Count = a4;
    Count = a4;
  }
  v8 = 0;
  if ( Count )
  {
    do
    {
      v9 = v8;
      v10 = (a2->Bitmap[v9] & a1->Bitmap[v9]) == 0;
      a3->Bitmap[v9] = a2->Bitmap[v9] & a1->Bitmap[v9];
      if ( !v10 )
        v7 = 1;
      ++v8;
    }
    while ( v8 < a3->Count );
  }
  for ( a3->Reserved = 0; v8 < a3->Size; a3->Bitmap[v11] = 0LL )
    v11 = v8++;
  return v7;
}
