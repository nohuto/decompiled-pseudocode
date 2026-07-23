/*
 * XREFs of PnpInvalidateRelationsInList @ 0x1409B372C
 * Callers:
 *     PnpProcessCompletedEject @ 0x1407A7890 (PnpProcessCompletedEject.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 *     PiInvalidateSpeculativeRelations @ 0x1409B4C90 (PiInvalidateSpeculativeRelations.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     PipClearDevNodeFlags @ 0x1409B01B0 (PipClearDevNodeFlags.c)
 *     IopAllocateRelationList @ 0x1409B38E8 (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x1409B5B30 (IopFreeRelationList.c)
 *     IopAddRelationToList @ 0x1409B66AC (IopAddRelationToList.c)
 *     IopSetRelationsTag @ 0x1409B6B4C (IopSetRelationsTag.c)
 */

__int64 __fastcall PnpInvalidateRelationsInList(_QWORD *a1, unsigned int a2, char a3, char a4)
{
  _QWORD *RelationList; // rsi
  _DWORD *v9; // rdx
  unsigned int i; // r8d
  __int64 v11; // rax
  unsigned int v12; // ebp
  _DWORD *v13; // rdx
  _QWORD *v14; // rbx
  int v15; // eax
  __int64 v16; // r8
  char v17; // cl
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbx
  unsigned int j; // ebx
  _DWORD *v22; // r10
  int v24; // eax
  unsigned int v25; // edx

  RelationList = (_QWORD *)IopAllocateRelationList(a2);
  if ( !RelationList )
    return 3221225626LL;
  v9 = (_DWORD *)*a1;
  for ( i = 0; i < *(_DWORD *)*a1; v9 = (_DWORD *)*a1 )
  {
    v11 = i++;
    v9[6 * v11 + 8] &= ~1u;
  }
  v9[2] = 0;
  v12 = 0;
LABEL_5:
  while ( 2 )
  {
    v13 = (_DWORD *)*a1;
    v14 = 0LL;
    v15 = 0;
    if ( v12 < *(_DWORD *)*a1 )
    {
      if ( v13 )
      {
        _mm_lfence();
        v14 = *(_QWORD **)&v13[6 * v12 + 4];
        v15 = v13[6 * v12 + 8] & 1;
        v16 = (unsigned int)v13[6 * v12 + 6];
        v17 = 1;
      }
      else
      {
        v16 = 0LL;
        v17 = 0;
      }
      ++v12;
      if ( v17 )
      {
        if ( a3 && (_DWORD)v16 || v15 )
          continue;
        while ( 1 )
        {
          if ( (unsigned int)IopSetRelationsTag(a1, v14, v16) )
          {
            if ( v14 )
              IopAddRelationToList(RelationList, v14, 2LL, 0LL);
            goto LABEL_5;
          }
          v18 = v14[39];
          v19 = *(_QWORD *)(v18 + 40);
          if ( a4 )
          {
            PipClearDevNodeFlags(*(_QWORD *)(v18 + 40), 0x80000);
            v24 = *(_DWORD *)(v19 + 396);
            if ( (v24 & 0x10) != 0 )
            {
              if ( (v24 & 0x2000) != 0 && *(_DWORD *)(v19 + 404) == 47 )
              {
                v25 = 3;
              }
              else
              {
                if ( a2 != 4 )
                  goto LABEL_14;
                v25 = 12;
              }
              PnpRequestDeviceAction(v14, v25, 1, 0LL, 0LL, 0LL, 0LL);
            }
          }
LABEL_14:
          v20 = *(_QWORD *)(v19 + 16);
          if ( !v20 )
            goto LABEL_5;
          v14 = *(_QWORD **)(v20 + 32);
        }
      }
    }
    break;
  }
  for ( j = 0; ; ++j )
  {
    v22 = (_DWORD *)*RelationList;
    if ( j >= *(_DWORD *)*RelationList || !v22 )
      break;
    PnpRequestDeviceAction(*(PVOID *)&v22[6 * j + 4], 9u, 0, 0LL, 0LL, 0LL, 0LL);
  }
  IopFreeRelationList(RelationList);
  return 0LL;
}
