/*
 * XREFs of MiInsertVad @ 0x140318030
 * Callers:
 *     MiInsertViewOfPhysicalSection @ 0x140317984 (MiInsertViewOfPhysicalSection.c)
 *     MiPerformVadSplitting @ 0x140317B74 (MiPerformVadSplitting.c)
 *     MiRemoveVad @ 0x14044DF80 (MiRemoveVad.c)
 *     MiMapViewOfDataSection @ 0x140995790 (MiMapViewOfDataSection.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14099B400 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x14099E35C (MiMapViewOfImageSection.c)
 *     MiReserveUserMemoryInsertVad @ 0x140A0146C (MiReserveUserMemoryInsertVad.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MiInsertProcessVads @ 0x140A085A8 (MiInsertProcessVads.c)
 *     MiInsertChildVads @ 0x140B22D0C (MiInsertChildVads.c)
 *     MiAllocateEnclaveVad @ 0x140B6C330 (MiAllocateEnclaveVad.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027EC6C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiPostInsertVad @ 0x140318774 (MiPostInsertVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     RtlpTreeDoubleRotateNodes @ 0x140445700 (RtlpTreeDoubleRotateNodes.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlpRbReportFatalError @ 0x14061CC2C (RtlpRbReportFatalError.c)
 */

void __fastcall MiInsertVad(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v3; // r11
  char v4; // r10
  unsigned __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // r9
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r8
  int v12; // r8d
  __int64 LockedVadEvent; // rax
  int v14; // eax
  __int64 v15; // r9
  _RTL_BITMAP *v16; // r9
  unsigned __int64 v17; // r8
  unsigned int v18; // r12d
  unsigned __int64 v19; // rbp
  unsigned int v20; // edi
  struct _KTHREAD *CurrentThread; // r12
  unsigned int *Buffer; // rcx
  unsigned __int64 v23; // rax
  unsigned int v24; // r10d
  unsigned int *v25; // rdx
  unsigned __int64 v26; // rax
  unsigned int v27; // r10d
  unsigned int *v28; // r8
  unsigned int *v29; // r9
  unsigned int *v30; // r8
  bool v31; // r8
  unsigned __int64 v32; // rdi
  ULONG_PTR v33; // r14
  unsigned __int8 v34; // si
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rbp
  _QWORD *v39; // rsi
  __int64 v40; // rcx
  unsigned __int64 *v41; // rbp
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r8
  char v46; // al
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  __int64 v48; // rcx
  bool v49; // zf
  unsigned int v50; // [rsp+30h] [rbp-58h]
  PRTL_BITMAP BitMapHeader; // [rsp+38h] [rbp-50h]
  ULONG StartingIndex; // [rsp+40h] [rbp-48h]
  __int64 v53; // [rsp+48h] [rbp-40h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int8 v55; // [rsp+90h] [rbp+8h]
  struct _KTHREAD *v57; // [rsp+A8h] [rbp+20h]

  v3 = 0LL;
  v53 = 0LL;
  v4 = a3;
  StartingIndex = 0;
  v50 = 0;
  BitMapHeader = 0LL;
  if ( *(_DWORD *)(BugCheckParameter2 + 36) )
  {
    if ( !_InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 36)) )
      KeBugCheckEx(0x1Au, 0x41203uLL, BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 36) = 1;
  }
  v7 = *(unsigned int *)(BugCheckParameter2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 33) << 32);
  v8 = *(_DWORD *)(BugCheckParameter2 + 48);
  v9 = *(_QWORD *)(a2 + 1040) + 896LL;
  v10 = *(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32);
  v57 = 0LL;
  if ( (v8 & 0x60000) == 0x20000 )
  {
    if ( (v8 & 0x80000) != 0 )
      ++*(_QWORD *)(*(_QWORD *)(a2 + 1040) + 1368LL);
    else
      ++*(_QWORD *)(*(_QWORD *)(a2 + 1040) + 1376LL);
  }
  if ( v7 <= *(_QWORD *)(a2 + 872) >> 12 && (a3 & 2) == 0 )
  {
    v7 = (v7 - v10) << 12;
    v11 = v7 + *(_QWORD *)(a2 + 552) + 4096LL;
    *(_QWORD *)(a2 + 552) = v11;
    if ( *(_QWORD *)(a2 + 544) < v11 )
      *(_QWORD *)(a2 + 544) = v11;
  }
  v12 = v8 & 0x1C;
  if ( v12 == 12 && (v8 & 0x880000) != 0x880000 )
  {
    LockedVadEvent = MiLocateLockedVadEvent(BugCheckParameter2, 256LL);
    v4 = a3;
    v53 = LockedVadEvent + 24;
  }
  v14 = *(_DWORD *)(BugCheckParameter2 + 48);
  if ( (v14 & 0x80000) != 0 && ((v14 & 0x200000) != 0 || (v14 & 0x60000u) >= 0x40000)
    || (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1C) == 8 && (*(_DWORD *)(BugCheckParameter2 + 72) & 1) != 0 )
  {
    ++*(_DWORD *)(a2 + 1500);
  }
  if ( v12 == 4 )
    ++*(_QWORD *)(v9 + 248);
  ++*(_QWORD *)(a2 + 1384);
  if ( (v4 & 1) != 0 )
  {
    v55 = 17;
    goto LABEL_55;
  }
  if ( !(unsigned int)MiVadPureReserve(BugCheckParameter2, v7) )
  {
    v16 = (_RTL_BITMAP *)(v15 + 712);
    v17 = (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 28) >> 27;
    v18 = v17 | (32 * *(unsigned __int8 *)(BugCheckParameter2 + 33));
    v19 = ((unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 24) >> 27) | (32LL
                                                                                * *(unsigned __int8 *)(BugCheckParameter2 + 32));
    BitMapHeader = v16;
    StartingIndex = v19;
    v20 = v18 - v19 + 1;
    v50 = v18;
    if ( (unsigned int)v19 < v16->SizeOfBitMap )
    {
      if ( v20 > 1 )
      {
        if ( v16->SizeOfBitMap - (int)v19 >= v20 )
        {
          Buffer = v16->Buffer;
          v23 = (unsigned __int64)(unsigned int)v19 >> 5;
          v24 = Buffer[v23];
          v17 = (unsigned __int64)&Buffer[v23];
          v16 = (_RTL_BITMAP *)&Buffer[(unsigned __int64)v18 >> 5];
          if ( (_RTL_BITMAP *)v17 == v16 )
          {
            if ( (v24 & (0xFFFFFFFF >> (32 - v20) << v19)) == 0xFFFFFFFF >> (32 - v20) << v19 )
              goto LABEL_54;
          }
          else if ( (v24 & (-1 << v19)) == -1 << v19 )
          {
            v17 += 4LL;
            if ( (_RTL_BITMAP *)v17 == v16 )
              goto LABEL_54;
            while ( *(_DWORD *)v17 == -1 )
            {
              v17 += 4LL;
              if ( (_RTL_BITMAP *)v17 == v16 )
                goto LABEL_54;
            }
          }
        }
      }
      else if ( ((unsigned int)v17 | (32 * *(unsigned __int8 *)(BugCheckParameter2 + 33))) == (_DWORD)v19
             && _bittest((const signed __int32 *)&v16->Buffer[(unsigned __int64)(unsigned int)v19 >> 5], v19 & 0x1F) )
      {
        goto LABEL_54;
      }
    }
    CurrentThread = KeGetCurrentThread();
    v57 = CurrentThread;
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a2, v17, (struct _KLOCK_ENTRIES *)v16);
    if ( (unsigned int)v19 < BitMapHeader->SizeOfBitMap )
    {
      if ( v20 <= 1 )
      {
        if ( v20 != 1
          || !_bittest(
                (const signed __int32 *)&BitMapHeader->Buffer[(unsigned __int64)(unsigned int)v19 >> 5],
                v19 & 0x1F) )
        {
          goto LABEL_54;
        }
        goto LABEL_53;
      }
      if ( BitMapHeader->SizeOfBitMap - (int)v19 >= v20 )
      {
        v25 = BitMapHeader->Buffer;
        v26 = (unsigned __int64)(unsigned int)v19 >> 5;
        v27 = v25[v26];
        v28 = &v25[v26];
        v29 = &v25[(unsigned __int64)v50 >> 5];
        if ( v28 == v29 )
        {
          if ( (v27 & (0xFFFFFFFF >> (32 - v20) << v19)) != 0xFFFFFFFF >> (32 - v20) << v19 )
            goto LABEL_54;
          goto LABEL_53;
        }
        if ( (v27 & (-1 << v19)) == -1 << v19 )
        {
          v30 = v28 + 1;
          if ( v30 != v29 )
          {
            while ( *v30 == -1 )
            {
              if ( ++v30 == v29 )
                goto LABEL_53;
            }
            goto LABEL_54;
          }
LABEL_53:
          UNLOCK_PAGE_TABLE_COMMITMENT(CurrentThread, a2);
          v57 = 0LL;
        }
      }
    }
  }
LABEL_54:
  v55 = MiLockVadTree(2LL);
  v3 = 0LL;
LABEL_55:
  *(_QWORD *)(a2 + 1376) = BugCheckParameter2;
  v31 = 0;
  v32 = *(_QWORD *)(a2 + 1368);
  if ( v32 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *(unsigned int *)(v32 + 28);
        if ( v10 > (v7 | ((unsigned __int64)*(unsigned __int8 *)(v32 + 33) << 32)) )
          break;
        v7 = *(unsigned int *)(v32 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v32 + 32) << 32);
        if ( v10 >= v7 )
          break;
        if ( !*(_QWORD *)v32 )
          goto LABEL_63;
        v32 = *(_QWORD *)v32;
      }
      if ( !*(_QWORD *)(v32 + 8) )
        break;
      v32 = *(_QWORD *)(v32 + 8);
    }
    v31 = 1;
  }
LABEL_63:
  *(_QWORD *)BugCheckParameter2 = v3;
  v33 = BugCheckParameter2;
  *(_QWORD *)(BugCheckParameter2 + 8) = v3;
  *(_QWORD *)(BugCheckParameter2 + 16) = v32;
  if ( v32 )
  {
    v7 = 0xFFFFFFFFLL;
    *(_QWORD *)(v32 + 8LL * v31) = BugCheckParameter2;
    LOBYTE(v7) = (-1 - 2 * v31) & 3;
    v34 = *(_BYTE *)(v32 + 16) & 3;
    if ( v34 )
    {
LABEL_68:
      if ( v34 == (_BYTE)v7 )
      {
        if ( (*(_BYTE *)(v33 + 16) & 3) == v34 )
        {
          v36 = *(_QWORD *)(v33 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v36 != v32 )
            RtlpRbReportFatalError(v36, v32, v33);
          v37 = *(_QWORD *)(v32 + 8LL * v31);
          if ( v37 != v33 )
            RtlpRbReportFatalError(v37, v33, v32);
          v38 = *(_QWORD *)(v32 + 16);
          v39 = (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( (v38 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          {
            if ( v39[1] == v32 )
            {
              v39[1] = v33;
            }
            else
            {
              if ( *v39 != v32 )
                RtlpRbReportFatalError(*v39, v32, *(_QWORD *)(v32 + 16) & 0xFFFFFFFFFFFFFFFCuLL);
              *v39 = v33;
            }
          }
          else
          {
            v40 = *(_QWORD *)(a2 + 1368);
            if ( v40 != v32 )
              RtlpRbReportFatalError(v40, v32, a2 + 1368);
            *(_QWORD *)(a2 + 1368) = v33;
          }
          *(_QWORD *)(v33 + 16) ^= (*(_QWORD *)(v33 + 16) ^ v38) & 0xFFFFFFFFFFFFFFFCuLL;
          v41 = (unsigned __int64 *)(v33 + 8LL * !v31);
          v42 = *v41;
          if ( *v41 )
          {
            v43 = *(_QWORD *)(v42 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v43 != v33 )
              RtlpRbReportFatalError(v43, v33, *v41);
            *(_QWORD *)(v42 + 16) = v32 | *(_DWORD *)(v42 + 16) & 3;
          }
          *(_QWORD *)(v32 + 8LL * v31) = v42;
          *v41 = v32;
          *(_QWORD *)(v32 + 16) = v33 | *(_DWORD *)(v32 + 16) & 3;
          *(_BYTE *)(v33 + 16) &= 0xFCu;
          *(_BYTE *)(v32 + 16) &= 0xFCu;
        }
        else
        {
          v44 = RtlpTreeDoubleRotateNodes(a2 + 1368, v32, v33, v31);
          *(_BYTE *)(v32 + 16) &= 0xFCu;
          v45 = v44;
          v46 = *(_BYTE *)(v33 + 16) & 0xFC;
          *(_BYTE *)(v33 + 16) = v46;
          v7 = *(unsigned __int8 *)(v45 + 16);
          if ( v34 == (*(_BYTE *)(v45 + 16) & 3) )
          {
            *(_BYTE *)(v32 + 16) ^= (*(_BYTE *)(v32 + 16) ^ v34 ^ 0xFE) & 3;
          }
          else
          {
            v7 = ((unsigned __int8)v7 ^ 0xFE) & 3;
            if ( v34 == (_DWORD)v7 )
              *(_BYTE *)(v33 + 16) = v46 | v34;
          }
          *(_BYTE *)(v45 + 16) &= 0xFCu;
        }
        LODWORD(v3) = 0;
      }
      else
      {
        *(_BYTE *)(v32 + 16) &= 0xFCu;
      }
    }
    else
    {
      while ( 1 )
      {
        v33 = v32;
        LOBYTE(v7) = *(_BYTE *)(v32 + 16) ^ (*(_BYTE *)(v32 + 16) ^ v7) & 3;
        v35 = v32;
        *(_BYTE *)(v32 + 16) = v7;
        v32 = *(_QWORD *)(v32 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v32 )
          break;
        v7 = 0xFFFFFFFFLL;
        v31 = *(_QWORD *)v32 != v35;
        LOBYTE(v7) = (-1 - 2 * v31) & 3;
        v34 = *(_BYTE *)(v32 + 16) & 3;
        if ( v34 )
          goto LABEL_68;
      }
    }
  }
  else
  {
    *(_QWORD *)(a2 + 1368) = BugCheckParameter2;
  }
  if ( v55 != 17 )
  {
    ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      HIDWORD(ActiveProcessors[4].StaticBitmap[8]) = v3;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)&ActiveProcessors[4].StaticBitmap[8] + 1, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v55);
    __writecr8(v55);
  }
  if ( v57 )
  {
    RtlSetBits(BitMapHeader, StartingIndex, v50 - StartingIndex + 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 608), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2 + 608);
    KeAbPostRelease(a2 + 608);
    v49 = v57->SpecialApcDisable++ == -1;
    if ( v49 && ($241382875694CED3D471BC5892DE3337 *)v57->ApcState.ApcListHead[0].Flink != &v57->152 )
      KiCheckForKernelApcDelivery(v48, v7);
  }
  if ( (a3 & 1) == 0 )
    MiPostInsertVad(BugCheckParameter2, v7, v53);
}
