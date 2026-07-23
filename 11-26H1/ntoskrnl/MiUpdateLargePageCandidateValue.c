/*
 * XREFs of MiUpdateLargePageCandidateValue @ 0x1402BF650
 * Callers:
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiUnlinkSingleBatchPage @ 0x1402DA130 (MiUnlinkSingleBatchPage.c)
 *     MiUnlinkStandbyPage @ 0x1402DBCA0 (MiUnlinkStandbyPage.c)
 *     MiReplaceTransitionPageInList @ 0x1402DE8B0 (MiReplaceTransitionPageInList.c)
 *     MiUpdateLargePageCandidates @ 0x1404406E0 (MiUpdateLargePageCandidates.c)
 *     MiMirrorZeroFreeListsCallback @ 0x14049AC50 (MiMirrorZeroFreeListsCallback.c)
 *     MiWalkPagesOnLists @ 0x140C0B898 (MiWalkPagesOnLists.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiRecordLargePageCandidate @ 0x1404409A0 (MiRecordLargePageCandidate.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiUpdateLargePageCandidateValue(__int64 a1, ULONG_PTR a2, int a3, char a4, volatile signed __int16 *a5)
{
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // r15
  __int64 v11; // rax
  int v12; // r8d
  char *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  ULONG_PTR v16; // rdx
  unsigned __int64 v17; // r10
  __int64 v18; // r8
  volatile signed __int32 *v19; // r9
  unsigned int v20; // eax
  unsigned int v21; // ecx
  volatile signed __int16 *v22; // r8
  volatile signed __int16 v23; // ax
  volatile signed __int32 *v24; // rdx
  volatile signed __int32 v25; // eax
  int i; // r10d
  int v27; // edx
  unsigned __int64 v28; // rcx

  if ( a5 )
    *a5 = 0;
  if ( *(_BYTE *)(a1 + 16486) )
  {
    if ( a3 != 3 )
    {
      if ( a3 == 2 )
      {
        v21 = 16;
        v10 = 1040;
      }
      else if ( a3 == 1 )
      {
        v21 = 524800;
        v10 = 512;
      }
      else
      {
        v10 = 0;
        v21 = 0x40000;
      }
      goto LABEL_18;
    }
    v9 = 33 - ((a4 & 2) != 0);
    if ( (a4 & 1) == 0 )
      v9 = ((a4 & 2) != 0) - 33;
    v10 = 1;
    v11 = ((_BYTE)v9
         + (unsigned __int8)_InterlockedExchangeAdd16((volatile signed __int16 *)(qword_140E3BFB8 + 2 * (a2 >> 4)), v9)) & 0x1F;
    if ( v11 != 16 )
    {
      if ( v11 == 15 && (a4 & 1) == 0 && (a4 & 2) == 0 )
        MiRecordLargePageCandidate(a1, a2, 2LL, 1LL);
      goto LABEL_17;
    }
    v12 = dword_140E2D804;
    if ( dword_140E2D800 > (unsigned int)dword_140E2D804
      || (v13 = (char *)qword_140E2D860 + 16 * dword_140E2D800, a2 < *(_QWORD *)v13)
      || dword_140E2D800 != dword_140E2D804 && a2 >= *((_QWORD *)v13 + 2) )
    {
      for ( i = 0; ; i = v27 + 1 )
      {
        while ( 1 )
        {
          if ( v12 < i )
            KeBugCheckEx(0x1Au, 0x5180uLL, a2, 0LL, 0LL);
          v27 = (i + v12) >> 1;
          v13 = (char *)qword_140E2D860 + 16 * v27;
          if ( a2 >= *(_QWORD *)v13 )
            break;
          if ( !v27 )
            KeBugCheckEx(0x1Au, 0x5180uLL, a2, (ULONG_PTR)v13, 0LL);
          v12 = v27 - 1;
        }
        if ( v27 == dword_140E2D804 || a2 < *((_QWORD *)v13 + 2) )
          break;
      }
      dword_140E2D800 = (i + v12) >> 1;
    }
    v14 = qword_140E37E50;
    v15 = 56320LL * *((unsigned int *)v13 + 2);
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + v15 + 56256));
    _InterlockedIncrement64((volatile signed __int64 *)(v14 + v15 + 56232));
    v16 = a2 >> 13;
    LOBYTE(v17) = 1;
    v18 = (a2 >> 13) & 0x1F;
    v19 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 16816) + 4 * (a2 >> 18));
    if ( (unsigned __int64)(v18 + 1) > 0x20 )
    {
      if ( v18 )
      {
        _InterlockedOr(v19, ((1 << (32 - (v16 & 0x1F))) - 1) << v18);
        v17 = 1LL - (32 - (unsigned int)(v16 & 0x1F));
        ++v19;
        if ( v17 >= 0x20 )
        {
          v28 = v17 >> 5;
          v17 += -32LL * (v17 >> 5);
          do
          {
            *v19++ = -1;
            --v28;
          }
          while ( v28 );
        }
        if ( !v17 )
          goto LABEL_14;
      }
      v20 = (1 << v17) - 1;
    }
    else
    {
      v20 = 1 << v18;
    }
    _InterlockedOr(v19, v20);
LABEL_14:
    if ( !*(_DWORD *)(a1 + 16964) )
      KeSetEvent((PRKEVENT)(a1 + 16960), 0, 0);
LABEL_17:
    v21 = 1;
LABEL_18:
    if ( (a4 & 1) == 0 )
    {
      v10 = -v10;
      v21 = -v21;
    }
    v22 = (volatile signed __int16 *)(*(_QWORD *)(a1 + 16768) + 2 * (a2 >> 9));
    if ( *(_BYTE *)(a1 + 16486) == 1 )
    {
      *v22 += v10;
      v23 = *v22;
    }
    else
    {
      v23 = v10 + _InterlockedExchangeAdd16(v22, v10);
    }
    if ( a3 == 2 )
      *a5 = v23;
    v24 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 16824) + 4 * (a2 >> 18));
    if ( *(_BYTE *)(a1 + 16486) == 1 )
    {
      *v24 += v21;
      v25 = *v24;
    }
    else
    {
      v25 = v21 + _InterlockedExchangeAdd(v24, v21);
    }
    if ( a3 == 1 )
      *(_DWORD *)a5 = v25;
  }
}
