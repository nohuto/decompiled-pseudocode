/*
 * XREFs of CmpPrepareForSubtreeInvalidation @ 0x1408B5EAC
 * Callers:
 *     CmpSaveBootControlSet @ 0x140852EC8 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback @ 0x140865270 (CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408C2CA0 (CmpTransMgrFreeVolatileData.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 * Callees:
 *     CmpPrepareForSubtreeInvalidationWorker @ 0x1408B5FCC (CmpPrepareForSubtreeInvalidationWorker.c)
 *     CmpCleanUpKCBCacheTable @ 0x1408B6020 (CmpCleanUpKCBCacheTable.c)
 */

__int64 __fastcall CmpPrepareForSubtreeInvalidation(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 i; // rbx
  __int64 v6; // rsi
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  __int64 v11; // r9
  int v12; // eax
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 result; // rax
  int v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+24h] [rbp-24h]
  int v19; // [rsp+2Ch] [rbp-1Ch]
  __int64 v20; // [rsp+30h] [rbp-18h]
  int v21; // [rsp+38h] [rbp-10h]
  int v22; // [rsp+3Ch] [rbp-Ch]

  v3 = *(_QWORD *)(a1 + 32);
  v18 = 0LL;
  v19 = 0;
  v22 = 0;
  v17 = 0;
  v20 = a3;
  v21 = a2;
  CmpCleanUpKCBCacheTable(v3);
  if ( *(_QWORD *)a1 == 1LL || (*(_DWORD *)(a1 + 184) & 0x40000) != 0 && *(_QWORD *)a1 == 2LL )
    goto LABEL_21;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 1656); i = (unsigned int)(v9 + 1) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v3 + 1648) + 24 * i + 16);
    while ( 1 )
    {
      if ( !v6 )
      {
        v7 = 0;
        goto LABEL_11;
      }
      v10 = *(unsigned __int16 *)(a1 + 12);
      v11 = v6 - 16;
      v12 = *(unsigned __int16 *)(v6 - 16 + 12);
      v6 = *(_QWORD *)(v6 + 8);
      if ( (unsigned __int16)v10 < (unsigned __int16)v12 )
      {
        v13 = v12;
        v14 = v11;
        if ( v13 != v10 )
        {
          v15 = (unsigned int)(v13 - v10);
          do
          {
            v14 = *(_QWORD *)(v14 + 72);
            --v15;
          }
          while ( v15 );
        }
        if ( v14 == a1 )
        {
          v8 = CmpPrepareForSubtreeInvalidationWorker(v11, &v17);
          v7 = v8;
          if ( v8 )
            break;
        }
      }
    }
    if ( v8 == 1 )
      break;
LABEL_11:
    v9 = i - 1;
    if ( v7 != 2 )
      v9 = i;
  }
  result = (unsigned int)v17;
  if ( v17 >= 0 )
  {
LABEL_21:
    if ( (_DWORD)v18 )
      return 3221225761LL;
    else
      return HIDWORD(v18) != 0 ? 0xC000022D : 0;
  }
  return result;
}
