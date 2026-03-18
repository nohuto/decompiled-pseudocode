/*
 * XREFs of ReadObject @ 0x140011B40
 * Callers:
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 *     IncDec @ 0x140011A50 (IncDec.c)
 *     DerefOf @ 0x140011F60 (DerefOf.c)
 *     LoadFieldUnitDDB @ 0x14006CF10 (LoadFieldUnitDDB.c)
 *     AMLIReadNamespaceOverrideObject @ 0x14006DFE8 (AMLIReadNamespaceOverrideObject.c)
 *     NestAsyncEvalObject @ 0x1400704D4 (NestAsyncEvalObject.c)
 * Callees:
 *     NewLocalHeap @ 0x140002E5C (NewLocalHeap.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     ReadField @ 0x14000CB30 (ReadField.c)
 *     HeapInsertFreeList @ 0x1400106A0 (HeapInsertFreeList.c)
 *     PrintObject @ 0x1400553E8 (PrintObject.c)
 *     NewGlobalHeap @ 0x14006F800 (NewGlobalHeap.c)
 */

__int64 __fastcall ReadObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebp
  __int16 v7; // ax
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // r15
  KIRQL v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(_WORD *)(a2 + 2);
      if ( v7 != 128 )
        break;
      a2 = *(_QWORD *)(a2 + 16) + 64LL;
    }
    if ( v7 != 129 )
      break;
    a2 = *(_QWORD *)(a2 + 16);
  }
  if ( v7 == 5 )
  {
    v9 = 0LL;
    v10 = a1 + 480;
    v11 = 0LL;
    v12 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v15 = a1 + 480;
    v28 = a1 + 480;
    byte_14008EB20 = v12;
    v16 = a1 + 480;
    v17 = a1 + 480;
    v18 = a1 + 480;
    while ( 2 )
    {
      if ( v17 )
      {
        v19 = *(_QWORD *)(v18 + 40);
        v11 = v16;
        while ( 1 )
        {
          v9 = v19 - 16;
          if ( v18 + 40 == v9 + 16 )
          {
            v9 = 0LL;
            goto LABEL_19;
          }
          if ( *(_DWORD *)(v9 + 4) >= 0x40u )
            break;
          v19 = *(_QWORD *)(v9 + 16);
        }
        if ( v9 )
        {
          v25 = *(_QWORD *)(v9 + 16);
          if ( *(_QWORD *)(v25 + 8) != v9 + 16 || (v26 = *(_QWORD **)(v9 + 24), *v26 != v9 + 16) )
            __fastfail(3u);
          *v26 = v25;
          *(_QWORD *)(v25 + 8) = v26;
          v27 = *(_DWORD *)(v9 + 4);
          if ( v27 >= 0x60 )
          {
            *(_DWORD *)(v9 + 64) = 0;
            *(_DWORD *)(v9 + 68) = v27 - 64;
            *(_QWORD *)(v9 + 72) = v15;
            *(_DWORD *)(v9 + 4) = 64;
            HeapInsertFreeList(v15, (unsigned int *)(v9 + 64));
          }
          goto LABEL_24;
        }
LABEL_19:
        if ( (unsigned int)(*(_DWORD *)(v15 + 8) - *(_DWORD *)(v15 + 32)) < 0x40 )
        {
          v17 = *(_QWORD *)(v15 + 24);
          v15 = v17;
          v28 = v17;
          v16 = v17;
          v18 = v17;
          continue;
        }
        v9 = *(_QWORD *)(v15 + 32);
        *(_QWORD *)(v15 + 32) = v9 + 64;
        *(_DWORD *)(v9 + 4) = 64;
        if ( v9 )
          goto LABEL_24;
      }
      break;
    }
    if ( v10 == gpheapGlobal )
    {
      if ( (unsigned int)gdwGlobalHeapBlkSize < 0x78 )
      {
        v16 = 0x40 % (unsigned int)gdwGlobalHeapBlkSize;
        LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x40 / (unsigned int)gdwGlobalHeapBlkSize + 1);
        if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
          LODWORD(gdwGlobalHeapBlkSize) = 64;
      }
      v24 = NewGlobalHeap(&v28, v16, v13, v14);
    }
    else
    {
      v24 = NewLocalHeap(&v28);
    }
    if ( !v24 )
    {
      v15 = v28;
      *(_QWORD *)(v28 + 16) = v10;
      *(_QWORD *)(v11 + 24) = v15;
      v9 = *(_QWORD *)(v15 + 32);
      *(_QWORD *)(v15 + 32) = v9 + 64;
      *(_DWORD *)(v9 + 4) = 64;
      if ( v9 )
      {
LABEL_24:
        *(_DWORD *)v9 = 1297237576;
        *(_QWORD *)(v9 + 8) = v15;
        *(_OWORD *)(v9 + 16) = 0LL;
        *(_OWORD *)(v9 + 32) = 0LL;
        *(_OWORD *)(v9 + 48) = 0LL;
      }
    }
    KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
    v20 = v9 + 16;
    if ( !v9 )
      v20 = 0LL;
    if ( v20 )
    {
      *(_QWORD *)(v20 + 8) = *(_QWORD *)(a1 + 416);
      *(_QWORD *)(a1 + 416) = v20;
      *(_QWORD *)(v20 + 24) = AccFieldUnit;
      v21 = v9 + 48;
      *(_DWORD *)v20 = 1430668097;
      if ( !v9 )
        v21 = 32LL;
      *(_QWORD *)v21 = a2;
      v22 = v9 + 32;
      if ( !v9 )
        v22 = 16LL;
      *(_DWORD *)v22 = 0x10000;
      v23 = v9 + 56;
      if ( !v9 )
        v23 = 40LL;
      *(_QWORD *)v23 = a3;
    }
    else
    {
      LogError(-1072431102);
      AcpiDiagTraceAmlError(a1, -1072431102);
      PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
      return (unsigned int)-1072431102;
    }
  }
  else if ( v7 == 14 )
  {
    return (unsigned int)ReadField(a1, a2, (_DWORD *)(*(_QWORD *)(a2 + 32) + 12LL), a3);
  }
  else
  {
    if ( a3 != a2 )
    {
      *(_OWORD *)a3 = *(_OWORD *)a2;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(a2 + 16);
      *(_QWORD *)(a3 + 32) = *(_QWORD *)(a2 + 32);
      if ( (*(_BYTE *)a2 & 1) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 8) + 8LL));
      }
      else if ( *(_QWORD *)(a2 + 32) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
        *(_WORD *)a3 |= 1u;
        *(_QWORD *)(a3 + 8) = a2;
      }
    }
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("=", 129LL);
      PrintObject(a3);
    }
  }
  return v6;
}
