/*
 * XREFs of ExpAllocateHandleTableEntrySlow @ 0x1409BD784
 * Callers:
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ExCreateHandleEx @ 0x140907CD0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ExDupHandleTable @ 0x1409BD030 (ExDupHandleTable.c)
 * Callees:
 *     ExpAllocateTablePagedPool @ 0x140906A9C (ExpAllocateTablePagedPool.c)
 *     ExpFreeTablePagedPool @ 0x140908540 (ExpFreeTablePagedPool.c)
 *     ExpInsertLowLevelTableIntoFreeList @ 0x1409BD8EC (ExpInsertLowLevelTableIntoFreeList.c)
 *     ExpAllocateLowLevelTable @ 0x1409BDA50 (ExpAllocateLowLevelTable.c)
 *     ExpAllocateMidLevelTable @ 0x1409BDB3C (ExpAllocateMidLevelTable.c)
 */

char __fastcall ExpAllocateHandleTableEntrySlow(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v4; // rbx
  char v6; // al
  unsigned __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rsi
  __int64 LowLevelTable; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 TablePagedPool; // rsi
  __int64 v21; // rax
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  v4 = *a1;
  v22 = 0LL;
  v6 = v2;
  v7 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
  v8 = v6 & 3;
  if ( !v8 )
  {
    v18 = ExpAllocateMidLevelTable(a1, &v22, v4);
    if ( !v18 )
      return 0;
    *(_QWORD *)(v18 + 8) = *(_QWORD *)v18;
    *(_QWORD *)v18 = v7;
    _InterlockedExchange64((volatile __int64 *)a1 + 1, v18 | 1);
    goto LABEL_13;
  }
  if ( v8 == 1 )
  {
    v9 = (unsigned int)v4 >> 10;
    if ( (unsigned int)v9 < 0x200 )
    {
      LowLevelTable = ExpAllocateLowLevelTable(a1, (unsigned int)v4);
      v12 = LowLevelTable;
      if ( LowLevelTable )
      {
        *(_QWORD *)(v7 + 8 * v9) = LowLevelTable;
LABEL_6:
        LOBYTE(v11) = a2 != 0;
        ExpInsertLowLevelTableIntoFreeList(a1, v12, a2, v11);
        return 1;
      }
      return 0;
    }
    TablePagedPool = (unsigned __int64)ExpAllocateTablePagedPool(*((_QWORD *)a1 + 2), 0x400uLL);
    if ( !TablePagedPool )
      return 0;
    v21 = ExpAllocateMidLevelTable(a1, &v22, v4);
    if ( !v21 )
    {
      ExpFreeTablePagedPool(*((_QWORD *)a1 + 2), (PVOID)TablePagedPool, 0x400uLL);
      return 0;
    }
    *(_QWORD *)TablePagedPool = v7;
    *(_QWORD *)(TablePagedPool + 8) = v21;
    _InterlockedExchange64((volatile __int64 *)a1 + 1, TablePagedPool | 2);
LABEL_13:
    v12 = v22;
    goto LABEL_6;
  }
  v14 = (unsigned int)v4 >> 19;
  if ( (unsigned int)v14 >= 0x80 )
    return 0;
  v15 = *(_QWORD *)(v7 + 8 * v14);
  v16 = (unsigned int)v14;
  if ( !v15 )
  {
    v19 = ExpAllocateMidLevelTable(a1, &v22, v4);
    if ( !v19 )
      return 0;
    *(_QWORD *)(v7 + 8 * v16) = v19;
    goto LABEL_13;
  }
  v17 = ExpAllocateLowLevelTable(a1, v4);
  v12 = v17;
  if ( v17 )
  {
    *(_QWORD *)(v15 + 8 * ((v4 >> 10) & 0x1FF)) = v17;
    goto LABEL_6;
  }
  return 0;
}
