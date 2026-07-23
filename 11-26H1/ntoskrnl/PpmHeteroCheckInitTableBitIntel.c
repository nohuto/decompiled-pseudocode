/*
 * XREFs of PpmHeteroCheckInitTableBitIntel @ 0x1407E8890
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     PpmHeteroInitializeInitTableCollection @ 0x14060E5BC (PpmHeteroInitializeInitTableCollection.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PpmHeteroCompleteInitTablePhase @ 0x1407DA80C (PpmHeteroCompleteInitTablePhase.c)
 *     PpmEventWpsInitTableSnapshots @ 0x1407E15E4 (PpmEventWpsInitTableSnapshots.c)
 */

void __fastcall PpmHeteroCheckInitTableBitIntel(int a1, _BYTE *a2, __int64 a3)
{
  int v3; // esi
  bool v4; // zf
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r14
  void *v11; // rcx
  unsigned int v12; // ebx
  __int64 Prcb; // rax
  unsigned int *v14; // r8
  int v15; // ecx
  unsigned int i; // edx
  __int64 v17; // r9
  char v18; // al
  __int64 v19; // rbx
  unsigned __int16 *v20[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v21; // [rsp+30h] [rbp-28h]
  int v22; // [rsp+32h] [rbp-26h]
  __int16 v23; // [rsp+36h] [rbp-22h]
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 )
    return;
  v3 = *(_DWORD *)a3;
  v4 = (*a2 & 4) == 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( !v4 )
  {
    if ( PpmHeteroInitTableState != 1 )
    {
      if ( PpmHeteroInitTableCollection && *(_BYTE *)(PpmHeteroInitTableCollection + 16) )
        return;
      PpmHeteroInitializeInitTableCollection(v3);
      if ( !PpmHeteroInitTableCollection )
        goto LABEL_24;
      PpmHeteroInitTableState = 1;
      *(_BYTE *)(a3 + 8) = 0;
    }
    v6 = PpmHeteroInitTableCollection;
    v7 = *(unsigned int *)(PpmHeteroInitTableCollection + 8);
    if ( (unsigned int)v7 < *(_DWORD *)(PpmHeteroInitTableCollection + 12) )
    {
      v8 = v7 + 1;
      v9 = *(_QWORD *)(PpmHeteroInitTableCollection + 24 * v8);
      v10 = *(_QWORD *)(PpmHeteroInitTableCollection + 24 * v8 + 8);
      if ( v9 )
      {
        if ( v10 )
        {
          v11 = *(void **)(PpmHeteroInitTableCollection + 24 * v8 + 16);
          if ( v11 )
          {
            memset_0(v11, 0, (unsigned int)(PpmHeteroWorkloadClasses * v3));
            v20[1] = (unsigned __int16 *)PpmCheckRegistered.Bitmap[0];
            v20[0] = (unsigned __int16 *)&PpmCheckRegistered;
            v21 = 0;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v24, v20) )
            {
              v12 = v24;
              Prcb = KeGetPrcb(v24);
              if ( Prcb && (v14 = *(unsigned int **)(Prcb + 35424)) != 0LL )
              {
                v15 = PpmHeteroWorkloadClasses;
                for ( i = 0; i < (unsigned int)PpmHeteroWorkloadClasses; v15 = PpmHeteroWorkloadClasses )
                {
                  v17 = i + v15 * v12;
                  if ( i >= *v14 )
                  {
                    *(_BYTE *)(i + v15 * v12 + v9) = 0;
                    v18 = 0;
                  }
                  else
                  {
                    *(_BYTE *)(v17 + v9) = BYTE2(v14[i + 1]);
                    v18 = HIBYTE(v14[i + 1]);
                  }
                  *(_BYTE *)(v17 + v10) = v18;
                  ++i;
                }
              }
              else
              {
                v19 = (unsigned int)PpmHeteroWorkloadClasses * v12;
                memset_0((void *)(v19 + v9), 0, (unsigned int)PpmHeteroWorkloadClasses);
                memset_0((void *)(v19 + v10), 0, (unsigned int)PpmHeteroWorkloadClasses);
              }
            }
            ++*(_DWORD *)(v6 + 8);
            return;
          }
        }
      }
    }
LABEL_24:
    PpmHeteroInitTableWindowTainted = 1;
    return;
  }
  if ( PpmHeteroInitTableState == 1 && PpmHeteroInitTableCollection && *(_DWORD *)(PpmHeteroInitTableCollection + 8) )
  {
    if ( !PpmHeteroInitTableWindowTainted )
    {
      PpmHeteroCompleteInitTablePhase((unsigned int *)a3);
      return;
    }
    PpmEventWpsInitTableSnapshots(0);
  }
  else if ( PpmHeteroInitTableState )
  {
    return;
  }
  PpmHeteroInitTableState = 2;
}
