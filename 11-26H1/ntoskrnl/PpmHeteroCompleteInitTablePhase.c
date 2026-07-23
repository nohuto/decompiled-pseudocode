/*
 * XREFs of PpmHeteroCompleteInitTablePhase @ 0x1407DA80C
 * Callers:
 *     PpmHeteroCheckInitTableBitIntel @ 0x1407E8890 (PpmHeteroCheckInitTableBitIntel.c)
 * Callees:
 *     PpmEventHeteroCapabilityInitTable @ 0x1407E0BEC (PpmEventHeteroCapabilityInitTable.c)
 *     PpmEventWpsInitTableSnapshots @ 0x1407E15E4 (PpmEventWpsInitTableSnapshots.c)
 */

void __fastcall PpmHeteroCompleteInitTablePhase(unsigned int *a1)
{
  __int64 v1; // rdx
  unsigned int v3; // r8d
  int v4; // r15d
  unsigned int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // r11
  unsigned int v8; // ecx
  unsigned __int8 v9; // r9
  unsigned __int8 v10; // r10
  __int64 *v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // cl

  v1 = PpmHeteroInitTableCollection;
  if ( PpmHeteroInitTableCollection && !*(_BYTE *)(PpmHeteroInitTableCollection + 16) )
  {
    v3 = *(_DWORD *)PpmHeteroInitTableCollection;
    v4 = *(_DWORD *)(PpmHeteroInitTableCollection + 4);
    *(_BYTE *)(PpmHeteroInitTableCollection + 16) = 1;
    v5 = *a1;
    PpmHeteroInitTableState = 2;
    if ( v3 >= v5 )
      v3 = v5;
    v6 = 0;
    if ( v3 )
    {
      v7 = 0LL;
      do
      {
        v8 = *(_DWORD *)(v1 + 8);
        v9 = 0;
        v10 = 0;
        if ( v8 )
        {
          v11 = (__int64 *)(v1 + 24);
          v12 = v6 * v4;
          v13 = v8;
          do
          {
            v14 = *v11;
            v11 += 3;
            v15 = *(_BYTE *)(v14 + v12);
            if ( v15 <= v9 )
              v15 = v9;
            v9 = v15;
            v16 = *(_BYTE *)(*(v11 - 2) + v12);
            if ( v16 <= v10 )
              v16 = v10;
            v10 = v16;
            --v13;
          }
          while ( v13 );
        }
        ++v6;
        *(_DWORD *)(v7 + *((_QWORD *)a1 + 4)) = v9;
        *(_DWORD *)(v7 + *((_QWORD *)a1 + 5)) = v10;
        v7 += 4LL;
      }
      while ( v6 < v3 );
    }
    *((_BYTE *)a1 + 8) = 1;
    PpmEventWpsInitTableSnapshots(0LL);
    PpmEventHeteroCapabilityInitTable(a1, 0LL);
  }
}
