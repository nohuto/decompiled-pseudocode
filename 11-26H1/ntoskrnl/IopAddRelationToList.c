/*
 * XREFs of IopAddRelationToList @ 0x1409B66AC
 * Callers:
 *     IopMergeRelationLists @ 0x1407B56A4 (IopMergeRelationLists.c)
 *     PnpInvalidateRelationsInList @ 0x1409B372C (PnpInvalidateRelationsInList.c)
 *     PnpProcessRelation @ 0x1409B6374 (PnpProcessRelation.c)
 * Callees:
 *     PipDeviceObjectListAdd @ 0x1409B674C (PipDeviceObjectListAdd.c)
 */

__int64 __fastcall IopAddRelationToList(_BYTE *a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  _DWORD *v7; // r10
  int v8; // r8d
  int v9; // ecx
  _QWORD *i; // rax
  int v11; // eax

  if ( !a2 || !*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) )
    return 3221225486LL;
  v7 = *(_DWORD **)a1;
  v8 = 0;
  v9 = **(_DWORD **)a1;
  for ( i = v7 + 4; ; i += 3 )
  {
    if ( v8 >= v9 )
      goto LABEL_10;
    if ( a2 == *i )
      break;
    ++v8;
  }
  if ( v8 == -1 )
  {
LABEL_10:
    result = PipDeviceObjectListAdd(a1, a2, a3);
    if ( (int)result >= 0 )
      a1[8] = 0;
    return result;
  }
  v11 = v7[6 * v8 + 6];
  if ( (int)a3 > v11 )
    v11 = a3;
  v7[6 * v8 + 6] = v11;
  if ( a4 == 1 )
  {
    ++*(_DWORD *)(*(_QWORD *)a1 + 8LL);
    v7[6 * v8 + 8] |= 1u;
  }
  return 3221225525LL;
}
