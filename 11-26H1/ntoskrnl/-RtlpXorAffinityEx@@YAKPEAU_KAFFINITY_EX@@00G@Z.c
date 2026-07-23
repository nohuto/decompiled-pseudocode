/*
 * XREFs of ?RtlpXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025C98C
 * Callers:
 *     PpmHeteroDistributeUtility @ 0x14025B4D0 (PpmHeteroDistributeUtility.c)
 *     PpmParkReportParkedCores @ 0x14025BAD0 (PpmParkReportParkedCores.c)
 *     PpmParkComputeDiff @ 0x14025C028 (PpmParkComputeDiff.c)
 *     PpmParkDistributeUtility @ 0x14025C334 (PpmParkDistributeUtility.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpXorAffinityEx(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        struct _KAFFINITY_EX *a3,
        unsigned __int16 a4)
{
  unsigned __int16 Count; // r10
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // r11
  unsigned __int16 v8; // di
  struct _KAFFINITY_EX *v9; // rbp
  unsigned int v11; // r9d
  unsigned __int16 v12; // dx
  signed __int64 v13; // r14
  $B38C3B1372D6E954799962D5DD404846 *v14; // r10
  signed __int64 v15; // rbx
  __int64 v16; // rsi
  bool v17; // zf
  __int64 v18; // rcx
  unsigned __int16 v19; // ax
  __int64 v20; // r10
  unsigned __int64 v21; // rax
  __int64 v22; // rcx

  Count = a2->Count;
  v6 = a1->Count;
  v7 = Count;
  a3->Size = a4;
  v8 = v6;
  v9 = a2;
  if ( v6 >= Count )
  {
    v7 = v6;
    v8 = Count;
    v9 = a1;
  }
  a3->Count = v7;
  v11 = 0;
  if ( v7 > a4 )
    a3->Count = a4;
  v12 = 0;
  if ( v8 > a4 )
    v8 = a4;
  if ( v7 > a4 )
    v7 = a4;
  if ( v8 )
  {
    v13 = (char *)a1 - (char *)a2;
    v14 = &a2->8;
    v12 = v8;
    v15 = (char *)a3 - (char *)a2;
    v16 = v8;
    do
    {
      v17 = v14->Bitmap[0] == *(unsigned __int64 *)((char *)v14->Bitmap + v13);
      *(unsigned __int64 *)((char *)v14->Bitmap + v15) = v14->Bitmap[0] ^ *(unsigned __int64 *)((char *)v14->Bitmap + v13);
      v14 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v14 + 8);
      if ( !v17 )
        v11 = 1;
      --v16;
    }
    while ( v16 );
  }
  if ( v12 < v7 )
  {
    v18 = v12;
    v19 = v7 - v12;
    v12 = v7;
    v20 = v19;
    do
    {
      v21 = v9->Bitmap[v18];
      a3->Bitmap[v18++] = v21;
      if ( v21 )
        v11 = 1;
      --v20;
    }
    while ( v20 );
  }
  a3->Reserved = 0;
  while ( v12 < a3->Size )
  {
    v22 = v12++;
    a3->Bitmap[v22] = 0LL;
  }
  return v11;
}
