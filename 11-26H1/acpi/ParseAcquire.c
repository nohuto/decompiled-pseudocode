/*
 * XREFs of ParseAcquire @ 0x14000D400
 * Callers:
 *     <none>
 * Callees:
 *     NewLocalHeap @ 0x140002E5C (NewLocalHeap.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     AcquireGL @ 0x14000CF90 (AcquireGL.c)
 *     ReleaseASLMutex @ 0x14000DF90 (ReleaseASLMutex.c)
 *     QueueContext @ 0x14000F2B4 (QueueContext.c)
 *     HeapInsertFreeList @ 0x1400106A0 (HeapInsertFreeList.c)
 *     IsCompatableDSDTRevision @ 0x140014C60 (IsCompatableDSDTRevision.c)
 *     ReleaseGL @ 0x14003930C (ReleaseGL.c)
 *     PerformMutexDriverCallbacks @ 0x14004A31C (PerformMutexDriverCallbacks.c)
 *     NewGlobalHeap @ 0x14006F800 (NewGlobalHeap.c)
 */

__int64 __fastcall ParseAcquire(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v5; // r13
  int v6; // edx
  const void *v7; // rdi
  __int64 v9; // r9
  __int64 v10; // rdi
  int v11; // eax
  int v12; // eax
  int v13; // r15d
  unsigned __int16 v14; // di
  KSPIN_LOCK *v15; // rsi
  KIRQL v16; // r14
  int v17; // ecx
  __int64 v18; // r12
  __int64 v19; // rdi
  KIRQL v20; // al
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rcx
  KSPIN_LOCK v29; // rax
  _QWORD *v30; // r8
  _QWORD *v31; // rdx
  __int64 v32; // r9
  int v33; // eax
  int v34; // eax
  _QWORD *v35; // rcx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rdx
  _QWORD *v41; // rcx
  unsigned int v42; // eax
  int v43; // edx
  int v44; // edx
  int v45; // edx
  int v46; // edx
  __int64 v47; // rdx
  int v48; // eax
  unsigned int v49; // esi
  char v50; // al
  __int64 v51; // rcx
  KIRQL v52; // [rsp+88h] [rbp+10h]
  __int64 v53; // [rsp+98h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a2 + 16);
  v5 = 0LL;
  v6 = v3 & 0xF;
  LODWORD(v7) = a3;
  if ( v6 == 3 )
    goto LABEL_29;
  if ( a3 )
    goto LABEL_33;
  if ( (v3 & 0xF) == 0 )
  {
    v9 = *(_QWORD *)(a2 + 56);
    v10 = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 16) = v3 + 1;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 32), 0, 0) == 2
      && (int)PerformMutexDriverCallbacks(4, v10, a1, v9, 0) >= 0 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 32), 3, 2);
    }
LABEL_5:
    if ( (++*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
    {
      LODWORD(v7) = AcquireGL(a1);
      if ( (_DWORD)v7 )
        return (unsigned int)v7;
    }
    goto LABEL_6;
  }
  if ( v6 == 1 )
    goto LABEL_5;
  v43 = v6 - 2;
  if ( v43 )
  {
    v44 = v43 - 1;
    if ( !v44 )
      goto LABEL_30;
    v45 = v44 - 1;
    if ( v45 )
    {
      v46 = v45 - 1;
      if ( v46 )
      {
        if ( v46 != 1 )
          return (unsigned int)v7;
        goto LABEL_35;
      }
LABEL_33:
      if ( (v3 & 0x40000) != 0 )
      {
        *(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL) = 1;
        if ( (_DWORD)v7 )
        {
          v50 = IsCompatableDSDTRevision();
          v51 = -1LL;
          if ( !v50 )
            v51 = 0xFFFFFFFFLL;
          LODWORD(v7) = 0;
          *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = v51;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
        }
      }
      ++*(_DWORD *)(a2 + 16);
LABEL_35:
      v35 = *(_QWORD **)(a1 + 416);
      *(_QWORD *)(a1 + 416) = v35[1];
      HeapFree(v35);
      return (unsigned int)v7;
    }
LABEL_32:
    v3 = *(_DWORD *)(a2 + 16) + 1;
    *(_DWORD *)(a2 + 16) = v3;
    goto LABEL_33;
  }
LABEL_6:
  v11 = *(_DWORD *)(a2 + 16);
  if ( (v11 & 0x10000) != 0 )
    *(_DWORD *)(a2 + 16) = v11 | 0x20000;
  v12 = *(_DWORD *)(a1 + 64);
  v13 = 0;
  v14 = *(_WORD *)(a2 + 40);
  v15 = *(KSPIN_LOCK **)(a2 + 32);
  if ( (v12 & 4) != 0 )
  {
    LODWORD(v7) = 32773;
    *(_DWORD *)(a1 + 64) = v12 & 0xFFFFFFFB;
    goto LABEL_28;
  }
  v16 = KeAcquireSpinLockRaiseToDpc(v15 + 23);
  v52 = v16;
  if ( *(_DWORD *)v15 < *(_DWORD *)(a1 + 112) )
  {
    LODWORD(v7) = -1072431083;
    LogError(-1072431083);
    AcpiDiagTraceAmlError(a1, -1072431083);
    PrintDebugMessage(5u, 0LL, 0LL, 0LL, 0LL);
    v13 = -1072431083;
    KeReleaseSpinLock(v15 + 23, v16);
    goto LABEL_26;
  }
  v17 = *((_DWORD *)v15 + 1);
  if ( v17 )
  {
    if ( *(_QWORD *)(v15[1] + 8) == a1 )
    {
      *((_DWORD *)v15 + 1) = v17 + 1;
      KeReleaseSpinLock(v15 + 23, v16);
      LODWORD(v7) = 0;
      goto LABEL_26;
    }
    QueueContext(a1, v14, v15 + 2);
    KeReleaseSpinLock(v15 + 23, v16);
    v38 = *(_DWORD *)(a2 + 16);
    LODWORD(v7) = 32772;
    if ( (v38 & 0x20000) != 0 )
    {
      *(_DWORD *)(a2 + 16) = v38 & 0xFFFDFFFF;
      v7 = (const void *)(int)ReleaseGL(a1);
      v39 = *(_DWORD *)(a2 + 16);
      if ( (_DWORD)v7 )
      {
        *(_DWORD *)(a2 + 16) = v39 + 3;
        LogError(-1072431101);
        AcpiDiagTraceAmlError(a1, -1072431101);
        PrintDebugMessage(0x77u, v7, 0LL, 0LL, 0LL);
        LODWORD(v7) = -1072431101;
      }
      else
      {
        *(_DWORD *)(a2 + 16) = v39 - 1;
      }
    }
    return (unsigned int)v7;
  }
  v18 = *(_QWORD *)(a1 + 320);
  v19 = 0LL;
  v20 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v23 = v18;
  v53 = v18;
  byte_14008EB20 = v20;
  v24 = v18;
  v25 = v18;
  v26 = v18;
LABEL_12:
  if ( !v25 )
    goto LABEL_42;
  v27 = *(_QWORD *)(v26 + 40);
  v28 = v26 + 40;
  v5 = v24;
  while ( 1 )
  {
    v19 = v27 - 16;
    if ( v28 == v19 + 16 )
    {
      v19 = 0LL;
LABEL_16:
      if ( (unsigned int)(*(_DWORD *)(v23 + 8) - *(_DWORD *)(v23 + 32)) >= 0x38 )
      {
        v19 = *(_QWORD *)(v23 + 32);
        *(_QWORD *)(v23 + 32) = v19 + 56;
        *(_DWORD *)(v19 + 4) = 56;
        if ( v19 )
          goto LABEL_19;
LABEL_42:
        if ( v18 == gpheapGlobal )
        {
          if ( (unsigned int)gdwGlobalHeapBlkSize < 0x70 )
          {
            v24 = 0x38 % (unsigned int)gdwGlobalHeapBlkSize;
            LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x38 / (unsigned int)gdwGlobalHeapBlkSize + 1);
            if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
              LODWORD(gdwGlobalHeapBlkSize) = 56;
          }
          v37 = NewGlobalHeap(&v53, v24, v21, v22);
        }
        else
        {
          v37 = NewLocalHeap(&v53);
        }
        if ( !v37 )
        {
          v23 = v53;
          *(_QWORD *)(v53 + 16) = v18;
          *(_QWORD *)(v5 + 24) = v23;
          v19 = *(_QWORD *)(v23 + 32);
          *(_QWORD *)(v23 + 32) = v19 + 56;
          *(_DWORD *)(v19 + 4) = 56;
          if ( v19 )
            goto LABEL_19;
        }
        goto LABEL_20;
      }
      v25 = *(_QWORD *)(v23 + 24);
      v23 = v25;
      v53 = v25;
      v24 = v25;
      v26 = v25;
      goto LABEL_12;
    }
    if ( *(_DWORD *)(v19 + 4) >= 0x38u )
      break;
    v27 = *(_QWORD *)(v19 + 16);
  }
  if ( !v19 )
    goto LABEL_16;
  v40 = *(_QWORD *)(v19 + 16);
  if ( *(_QWORD *)(v40 + 8) != v19 + 16 )
    goto LABEL_62;
  v41 = *(_QWORD **)(v19 + 24);
  if ( *v41 != v19 + 16 )
    goto LABEL_62;
  *v41 = v40;
  *(_QWORD *)(v40 + 8) = v41;
  v42 = *(_DWORD *)(v19 + 4);
  if ( v42 >= 0x58 )
  {
    *(_DWORD *)(v19 + 56) = 0;
    *(_DWORD *)(v19 + 60) = v42 - 56;
    *(_QWORD *)(v19 + 64) = v23;
    *(_DWORD *)(v19 + 4) = 56;
    HeapInsertFreeList(v23);
  }
LABEL_19:
  *(_DWORD *)v19 = 1380865871;
  *(_QWORD *)(v19 + 8) = v23;
  *(_OWORD *)(v19 + 16) = 0LL;
  *(_OWORD *)(v19 + 32) = 0LL;
  *(_QWORD *)(v19 + 48) = 0LL;
LABEL_20:
  KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
  v29 = v19 + 16;
  if ( !v19 )
    v29 = 0LL;
  if ( v29 )
  {
    v30 = (_QWORD *)(a1 + 48);
    *(_QWORD *)(v29 + 8) = a1;
    *(_QWORD *)(v29 + 16) = v15;
    v31 = (_QWORD *)(v29 + 24);
    *(_DWORD *)v29 = 1;
    v32 = *(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(v32 + 8) == a1 + 48 )
    {
      *v31 = v32;
      *(_QWORD *)(v29 + 32) = v30;
      *(_QWORD *)(v32 + 8) = v31;
      *v30 = v31;
      v15[1] = v29;
      v33 = *(_DWORD *)v15;
      *((_DWORD *)v15 + 1) = 1;
      *(_DWORD *)(a1 + 112) = v33;
      goto LABEL_25;
    }
LABEL_62:
    __fastfail(3u);
  }
  v13 = -1073741670;
  LogError(-1073741670);
  AcpiDiagTraceAmlError(a1, -1073741670);
  PrintDebugMessage(4u, 0LL, 0LL, 0LL, 0LL);
LABEL_25:
  LODWORD(v7) = v13;
  KeReleaseSpinLock(v15 + 23, v52);
LABEL_26:
  if ( !v13 )
    *(_DWORD *)(a2 + 16) |= 0x80000u;
LABEL_28:
  ++*(_DWORD *)(a2 + 16);
LABEL_29:
  if ( (_DWORD)v7 == 32773 )
  {
LABEL_31:
    v34 = *(_DWORD *)(a2 + 16) + 1;
    *(_DWORD *)(a2 + 16) = v34;
    if ( (_DWORD)v7 )
    {
      if ( (v34 & 0x80000) != 0 )
      {
        v47 = *(_QWORD *)(a2 + 32);
        *(_DWORD *)(a2 + 16) = v34 & 0xFFF7FFFF;
        ReleaseASLMutex(a1, v47, 0LL);
      }
      v48 = *(_DWORD *)(a2 + 16);
      if ( (v48 & 0x20000) != 0 )
      {
        *(_DWORD *)(a2 + 16) = v48 & 0xFFFDFFFF;
        v49 = ReleaseGL(a1);
        if ( v49 )
        {
          LogError(-1072431101);
          AcpiDiagTraceAmlError(a1, -1072431101);
          PrintDebugMessage(0xACu, (const void *)v49, 0LL, 0LL, 0LL);
          LODWORD(v7) = -1072431101;
        }
      }
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) == 3 )
      {
        if ( *(_WORD *)(a2 + 40) == 0xFFFF )
        {
          *(_DWORD *)(a2 + 16) = 1;
          return (unsigned int)v7;
        }
        LODWORD(v7) = 32773;
      }
    }
    goto LABEL_32;
  }
LABEL_30:
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) != 3 )
    goto LABEL_31;
  LODWORD(v7) = PerformMutexDriverCallbacks(2, *(_QWORD *)(a2 + 32), a1, *(_QWORD *)(a1 + 80), *(_WORD *)(a2 + 40));
  if ( (_DWORD)v7 != 32772 )
    goto LABEL_31;
  return (unsigned int)v7;
}
