/*
 * XREFs of CmpRmAnalysisPhase @ 0x1408645EC
 * Callers:
 *     CmpStartRMLog @ 0x1408B2784 (CmpStartRMLog.c)
 * Callees:
 *     CmpTransSearchAddTransFromRm @ 0x140ADE378 (CmpTransSearchAddTransFromRm.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x140C5EA70 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpRmAnalysisPhase(__int64 a1, CLFS_LSN a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // r15
  _QWORD *v6; // r12
  NTSTATUS v7; // eax
  int v8; // esi
  __int64 v9; // rax
  _DWORD *v10; // rcx
  __int64 NextElement; // rax
  void *v13; // rcx
  _QWORD *v14; // rdx
  void **v15; // rax
  PVOID pvReadContext; // [rsp+50h] [rbp-9h] BYREF
  __int64 v17; // [rsp+58h] [rbp-1h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+60h] [rbp+7h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+68h] [rbp+Fh] BYREF
  CLFS_LSN plsnRecord; // [rsp+70h] [rbp+17h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+C0h] [rbp+67h] BYREF
  CLFS_LSN plsnFirst; // [rsp+C8h] [rbp+6Fh] BYREF
  ULONG pcbBuffer; // [rsp+D0h] [rbp+77h] BYREF
  PVOID ppvReadBuffer; // [rsp+D8h] [rbp+7Fh] BYREF

  plsnFirst = a2;
  v2 = (_QWORD *)(a1 + 16);
  pvReadContext = 0LL;
  ppvReadBuffer = 0LL;
  v4 = *(_QWORD **)(a1 + 16);
  pcbBuffer = 0;
  plsnUndoNext.ullOffset = 0LL;
  plsnPrevious.ullOffset = 0LL;
  plsnRecord.ullOffset = 0LL;
  peRecordType = 0;
  v17 = 0LL;
  if ( v4 == v2 )
  {
    v5 = 0LL;
    v6 = 0LL;
  }
  else
  {
    v4[1] = *(_QWORD *)(a1 + 24);
    **(_QWORD **)(a1 + 24) = *v2;
    v5 = *v2;
    v6 = *(_QWORD **)(*v2 + 8LL);
    v2[1] = v2;
    *v2 = v2;
  }
  v7 = ClfsReadLogRecord(
         *(PVOID *)(a1 + 96),
         &plsnFirst,
         ClfsContextForward,
         &ppvReadBuffer,
         &pcbBuffer,
         &peRecordType,
         &plsnUndoNext,
         &plsnPrevious,
         &pvReadContext);
  v8 = v7;
  while ( v7 >= 0 )
  {
    if ( (peRecordType & 1) != 0 && pcbBuffer >= 0x30 )
    {
      v8 = CmpTransSearchAddTransFromRm(a1, 0, (int)ppvReadBuffer + 16, 1, (__int64)&v17);
      if ( v8 < 0 )
        break;
      v9 = v17;
      if ( !v17 )
      {
        v8 = -1072103422;
        break;
      }
      v10 = ppvReadBuffer;
      if ( *((_DWORD *)ppvReadBuffer + 2) == 16 )
      {
        *(_DWORD *)(v17 + 48) |= 4u;
        v10 = ppvReadBuffer;
      }
      if ( v10[2] == 8 )
      {
        *(_DWORD *)(v9 + 48) |= 2u;
        v10 = ppvReadBuffer;
      }
      if ( v10[2] == 4 )
        *(_DWORD *)(v9 + 48) |= 1u;
    }
    peRecordType = 1;
    v7 = ClfsReadNextLogRecord(
           pvReadContext,
           &ppvReadBuffer,
           &pcbBuffer,
           &peRecordType,
           0LL,
           &plsnUndoNext,
           &plsnPrevious,
           &plsnRecord);
    v8 = v7;
    if ( v7 == -1073741807 )
    {
      v8 = 0;
LABEL_24:
      v17 = 0LL;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v2, &v17, 0LL);
        v13 = (void *)NextElement;
        if ( !NextElement )
          goto LABEL_17;
        if ( (*(_DWORD *)(NextElement + 48) & 7) != 1 )
        {
          v14 = *(_QWORD **)NextElement;
          if ( *(_QWORD *)(*(_QWORD *)NextElement + 8LL) != NextElement
            || (v15 = *(void ***)(NextElement + 8), *v15 != v13) )
          {
            __fastfail(3u);
          }
          *v15 = v14;
          v14[1] = v15;
          ExFreePoolWithTag(v13, 0x72544D43u);
          goto LABEL_24;
        }
      }
    }
  }
LABEL_17:
  if ( pvReadContext )
    ClfsTerminateReadLog(pvReadContext);
  if ( v5 )
  {
    *v6 = v2;
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(a1 + 24);
    **(_QWORD **)(a1 + 24) = v5;
    *(_QWORD *)(a1 + 24) = v6;
  }
  return (unsigned int)v8;
}
