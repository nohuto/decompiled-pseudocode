/*
 * XREFs of WriteField @ 0x14000D02C
 * Callers:
 *     ExprOp2_64 @ 0x140012500 (ExprOp2_64.c)
 *     Store @ 0x140013D20 (Store.c)
 * Callees:
 *     NewLocalHeap @ 0x140002E5C (NewLocalHeap.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     SupportsOnlyRawAccess @ 0x14000CA74 (SupportsOnlyRawAccess.c)
 *     HeapInsertFreeList @ 0x1400106A0 (HeapInsertFreeList.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     RawFieldAccess @ 0x140036EEC (RawFieldAccess.c)
 *     NewGlobalHeap @ 0x14006F800 (NewGlobalHeap.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall WriteField(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r14d
  __int64 v8; // rbp
  int v9; // esi
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rcx
  __int64 i; // rbx
  _DWORD *v20; // rdx
  unsigned int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v28; // eax
  __int64 ObjectTypeName; // rdx
  unsigned int v30; // ecx
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // [rsp+30h] [rbp-48h] BYREF
  __int64 v35; // [rsp+38h] [rbp-40h]

  v4 = a4;
  v5 = (unsigned int)(*(_DWORD *)(a3 + 8) + 7) >> 3;
  v8 = a1;
  if ( (*(_DWORD *)(a3 + 12) & 0xFu) > 4 )
  {
    if ( *(_WORD *)(a2 + 2) != 5 )
    {
      v21 = -1072431087;
      LogError(-1072431087);
      AcpiDiagTraceAmlError(v8, -1072431087);
      ObjectTypeName = *(unsigned int *)(a3 + 12);
      v30 = 213;
      goto LABEL_41;
    }
    return (unsigned int)RawFieldAccess(a1, 1LL, a2, a4);
  }
  if ( *(_WORD *)(a4 + 2) == 1 )
  {
    v9 = 8;
    v35 = a4 + 16;
    if ( v5 < 8 )
      v9 = v5;
  }
  else
  {
    if ( *(_WORD *)(a4 + 2) == 2 )
    {
      v9 = *(_DWORD *)(a4 + 24) - 1;
    }
    else
    {
      if ( *(_WORD *)(a4 + 2) != 3 )
      {
        v21 = -1072431095;
        LogError(-1072431095);
        AcpiDiagTraceAmlError(v8, -1072431095);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v4 + 2));
        v30 = 214;
        goto LABEL_41;
      }
      v9 = *(_DWORD *)(a4 + 24);
    }
    v35 = *(_QWORD *)(a4 + 32);
  }
  if ( SupportsOnlyRawAccess(a2) )
  {
    a4 = v4;
    a1 = v8;
    return (unsigned int)RawFieldAccess(a1, 1LL, a2, a4);
  }
  v10 = 0LL;
  v11 = 0LL;
  v12 = v8 + 480;
  v13 = v8 + 480;
  v34 = v8 + 480;
  byte_14008EB20 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v15 = v8 + 480;
  v16 = v8 + 480;
  v17 = v8 + 480;
  while ( 2 )
  {
    if ( v15 )
    {
      v18 = (__int64 *)(v17 + 40);
      v11 = v16;
      for ( i = *v18; ; i = *(_QWORD *)(v10 + 16) )
      {
        v10 = i - 16;
        if ( v18 == (__int64 *)(v10 + 16) )
        {
          v10 = 0LL;
          goto LABEL_11;
        }
        if ( *(_DWORD *)(v10 + 4) >= 0x50u )
          break;
      }
      if ( v10 )
      {
        v31 = *(_QWORD *)(v10 + 16);
        if ( *(_QWORD *)(v31 + 8) != v10 + 16 || (v32 = *(_QWORD **)(v10 + 24), *v32 != v10 + 16) )
          __fastfail(3u);
        *v32 = v31;
        *(_QWORD *)(v31 + 8) = v32;
        v33 = *(_DWORD *)(v10 + 4);
        if ( v33 >= 0x70 )
        {
          *(_DWORD *)(v10 + 80) = 0;
          *(_DWORD *)(v10 + 84) = v33 - 80;
          *(_QWORD *)(v10 + 88) = v13;
          *(_DWORD *)(v10 + 4) = 80;
          HeapInsertFreeList(v13);
        }
        goto LABEL_16;
      }
LABEL_11:
      if ( (unsigned int)(*(_DWORD *)(v13 + 8) - *(_DWORD *)(v13 + 32)) < 0x50 )
      {
        v15 = *(_QWORD *)(v13 + 24);
        v13 = v15;
        v34 = v15;
        v16 = v15;
        v17 = v15;
        continue;
      }
      v10 = *(_QWORD *)(v13 + 32);
      *(_QWORD *)(v13 + 32) = v10 + 80;
      *(_DWORD *)(v10 + 4) = 80;
      if ( v10 )
        goto LABEL_16;
    }
    break;
  }
  if ( v12 == gpheapGlobal )
  {
    if ( (unsigned int)gdwGlobalHeapBlkSize < 0x88 )
    {
      v16 = 0x50 % (unsigned int)gdwGlobalHeapBlkSize;
      LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x50 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
        LODWORD(gdwGlobalHeapBlkSize) = 80;
    }
    v28 = NewGlobalHeap(&v34, v16, 80LL, v14);
  }
  else
  {
    v28 = NewLocalHeap(&v34);
  }
  if ( v28 )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = v34;
    *(_QWORD *)(v34 + 16) = v12;
    *(_QWORD *)(v11 + 24) = v13;
    v10 = *(_QWORD *)(v13 + 32);
    *(_QWORD *)(v13 + 32) = v10 + 80;
    *(_DWORD *)(v10 + 4) = 80;
  }
  if ( v10 )
  {
LABEL_16:
    *(_DWORD *)v10 = 1297237576;
    *(_QWORD *)(v10 + 8) = v13;
    memset((void *)(v10 + 16), 0, 0x40uLL);
  }
  KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
  v20 = (_DWORD *)((v10 + 16) & ((unsigned __int128)-(__int128)v10 >> 64));
  if ( !v20 )
  {
    v21 = -1072431102;
    LogError(-1072431102);
    AcpiDiagTraceAmlError(v8, -1072431102);
    ObjectTypeName = 0LL;
    v30 = 153;
LABEL_41:
    PrintDebugMessage(v30, (const void *)ObjectTypeName, 0LL, 0LL, 0LL);
    return v21;
  }
  v21 = 0;
  *(_QWORD *)(((v10 + 16) & ((unsigned __int128)-(__int128)v10 >> 64)) + 8) = *(_QWORD *)(v8 + 416);
  *(_QWORD *)(v8 + 416) = v20;
  *(_QWORD *)(((v10 + 16) & ((unsigned __int128)-(__int128)v10 >> 64)) + 0x18) = WriteFieldLoop;
  v22 = v10 + 48;
  *v20 = 1279677015;
  if ( !v10 )
    v22 = 32LL;
  *(_QWORD *)v22 = a2;
  v23 = v10 + 56;
  if ( !v10 )
    v23 = 40LL;
  *(_QWORD *)v23 = a3;
  v24 = v10 + 64;
  if ( !v10 )
    v24 = 48LL;
  *(_QWORD *)v24 = v35;
  v25 = v10 + 72;
  if ( !v10 )
    v25 = 56LL;
  *(_DWORD *)v25 = v9;
  v26 = v10 + 76;
  if ( !v10 )
    v26 = 60LL;
  *(_DWORD *)v26 = v5;
  return v21;
}
