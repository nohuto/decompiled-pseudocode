/*
 * XREFs of NvmeAdapterAssignControllerQueueSlot @ 0x1400E4BF4
 * Callers:
 *     NvmeAdapterProcessControllerQueueRequestAsync @ 0x1400EC344 (NvmeAdapterProcessControllerQueueRequestAsync.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 */

char __fastcall NvmeAdapterAssignControllerQueueSlot(__int64 a1, char a2, _WORD *a3, _WORD *a4)
{
  char v4; // di
  int v8; // r10d
  _DWORD *v9; // rdx
  int v10; // ecx
  unsigned __int16 v11; // r9
  unsigned __int16 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r10d
  int v15; // ecx
  unsigned __int16 i; // ax
  unsigned int v17; // edx
  unsigned __int16 v18; // r8
  bool v19; // zf
  __int64 v20; // rax
  __int16 v21; // ax

  v4 = 0;
  if ( !a2
    && ((v8 = *(unsigned __int16 *)(a1 + 140),
         v9 = (_DWORD *)(a1 + 124),
         v10 = *(unsigned __int16 *)(a1 + 142),
         !(_WORD)v8)
     && v10 == *v9 - 1
     || v8 == v10 + 1
     || (v11 = *(_WORD *)(a1 + 150)) != 0
     && ((unsigned __int16)v10 < (unsigned __int16)v8 ? (v12 = v8 - v10 - 1) : (v12 = *(_WORD *)v9 - v10 + v8 - 1),
         v12 <= v11)) )
  {
    StorEtwNvmeControllerEvent(
      *(_QWORD *)(a1 + 88),
      1,
      3LL,
      (__int64)L"Queue full",
      L"QueueId",
      *(_WORD *)(a1 + 136),
      L"QueueSize",
      *v9,
      L"QueueHead",
      v8,
      L"QueueTail",
      v10,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
  }
  else
  {
    v13 = *(unsigned __int16 *)(a1 + 142);
    v14 = *(_DWORD *)(a1 + 124);
    v15 = (unsigned __int16)(v13 + 1);
    *(_WORD *)(a1 + 142) = v15;
    if ( v15 == v14 )
      *(_WORD *)(a1 + 142) = 0;
    for ( i = *(_WORD *)(a1 + 144); ; ++i )
    {
      v17 = i;
      if ( i >= v14 )
        break;
      v18 = i + 1;
      if ( !*(_QWORD *)(((unsigned __int64)i << 7) + *(_QWORD *)(a1 + 32) + 24) )
      {
        v19 = v18 == v14;
LABEL_23:
        *(_WORD *)(a1 + 144) = v18;
        if ( v19 )
          *(_WORD *)(a1 + 144) = 0;
        v20 = *(_QWORD *)(a1 + 24);
        *a3 = v13;
        *a4 = v17;
        v4 = 1;
        *(_WORD *)(v20 + 16 * v13 + 8) = v17;
        *(_QWORD *)(((unsigned __int64)v17 << 7) + *(_QWORD *)(a1 + 32) + 24) = -1LL;
        return v4;
      }
    }
    LOWORD(v17) = 0;
    while ( (unsigned __int16)v17 < *(_WORD *)(a1 + 144) )
    {
      v18 = v17 + 1;
      if ( !*(_QWORD *)(((unsigned __int64)(unsigned __int16)v17 << 7) + *(_QWORD *)(a1 + 32) + 24) )
      {
        v19 = v18 == *(_DWORD *)(a1 + 124);
        v17 = (unsigned __int16)v17;
        goto LABEL_23;
      }
      LOWORD(v17) = v17 + 1;
    }
    StorEtwNvmeControllerEvent(
      *(_QWORD *)(a1 + 88),
      1,
      3LL,
      (__int64)L"No available CmdId",
      L"QueueId",
      *(_WORD *)(a1 + 136),
      L"QueueSize",
      *(_DWORD *)(a1 + 124),
      L"QueueHead",
      *(_WORD *)(a1 + 140),
      L"QueueTail",
      *(_WORD *)(a1 + 142),
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
    v21 = *(_WORD *)(a1 + 142);
    if ( !v21 )
      v21 = *(_WORD *)(a1 + 124);
    *(_WORD *)(a1 + 142) = v21 - 1;
  }
  return v4;
}
