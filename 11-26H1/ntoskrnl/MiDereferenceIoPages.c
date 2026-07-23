/*
 * XREFs of MiDereferenceIoPages @ 0x1403152FC
 * Callers:
 *     MiClearMappingAndDereferenceIoSpace @ 0x140281FA4 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiMapContiguousMemoryLarge @ 0x1402A1EFC (MiMapContiguousMemoryLarge.c)
 *     MiDecommitFreePagesTail @ 0x1402BC510 (MiDecommitFreePagesTail.c)
 *     MiReferenceIoPages @ 0x1402D2018 (MiReferenceIoPages.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403146B4 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MiUnmapMdlCommon @ 0x14051F5C4 (MiUnmapMdlCommon.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0228C (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140AEF51C (MiRotateToFrameBufferNoCopy.c)
 *     MiRotateToFrameBuffer @ 0x140AEF750 (MiRotateToFrameBuffer.c)
 *     MiReplaceRotateWithDemandZero @ 0x140AEFA48 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIoSpaceGetBounds @ 0x140315778 (MiIoSpaceGetBounds.c)
 *     MiIsPageInIoHugeRangeTransition @ 0x1403158BC (MiIsPageInIoHugeRangeTransition.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiLockIoPfnTree @ 0x1406F92D4 (MiLockIoPfnTree.c)
 *     MiUnlockIoPfnTree @ 0x1406F9AFC (MiUnlockIoPfnTree.c)
 */

void __fastcall MiDereferenceIoPages(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  __int64 v4; // r14
  ULONG_PTR *v5; // r15
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v7; // r13
  ULONG_PTR v8; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v10; // bp
  int v11; // r10d
  unsigned __int8 v12; // r11
  ULONG_PTR v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // edi
  ULONG_PTR v18; // rax
  unsigned __int64 v19; // rdi
  ULONG_PTR v20; // rax
  _QWORD *v21; // rcx
  __int64 i; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r14
  ULONG_PTR *v26; // r11
  _WORD *v27; // r10
  __int16 v28; // ax
  unsigned int v29; // eax
  int v30; // ecx
  unsigned int v31; // eax
  bool v32; // zf
  unsigned __int64 v33; // rax
  ULONG_PTR v34; // rax
  unsigned __int64 v35; // r9
  int v36; // eax
  signed __int32 v37[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v38; // [rsp+30h] [rbp-78h]
  ULONG_PTR *v39; // [rsp+38h] [rbp-70h]
  unsigned __int64 v40; // [rsp+40h] [rbp-68h]
  __int128 v41; // [rsp+48h] [rbp-60h] BYREF
  __int64 v42; // [rsp+58h] [rbp-50h]
  int v43; // [rsp+B0h] [rbp+8h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp+10h]
  int v46; // [rsp+C8h] [rbp+20h]

  v43 = a1;
  v42 = 0LL;
  v38 = 0;
  v46 = 1;
  v40 = 1024LL;
  v4 = ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1) & a2;
  BugCheckParameter2 = v4;
  v5 = (ULONG_PTR *)&qword_140E35FC0[8 * (__int64)(int)a1];
  BugCheckParameter4 = v4;
  v39 = v5;
  v7 = a3;
  v41 = 0LL;
  v8 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  v10 = CurrentIrql;
  if ( CurrentIrql == 2 )
    v10 = 17;
  MiIoSpaceGetBounds(&v41, v4);
  if ( HIDWORD(v42) == 3 || v43 != 1 )
  {
    v13 = *((_QWORD *)&v41 + 1);
  }
  else
  {
    v34 = v4 + a3 - 1;
    v13 = *((_QWORD *)&v41 + 1);
    if ( v34 <= *((_QWORD *)&v41 + 1) )
    {
      if ( v10 >= v12 )
        return;
      v32 = KiIrqlFlags == v11;
      goto LABEL_49;
    }
  }
  MiLockIoPfnTree(5LL);
  v17 = 1;
  while ( v7 )
  {
    if ( BugCheckParameter4 < (unsigned __int64)v41 || BugCheckParameter4 > v13 )
    {
      MiIoSpaceGetBounds(&v41, BugCheckParameter4);
      v13 = *((_QWORD *)&v41 + 1);
    }
    if ( v43 != 1 || HIDWORD(v42) == 3 )
    {
      if ( v17 )
      {
        v8 = *v5;
        while ( v8 )
        {
          v18 = *(_QWORD *)(v8 + 24);
          if ( BugCheckParameter4 < v18 )
          {
            v8 = *(_QWORD *)v8;
          }
          else
          {
            if ( BugCheckParameter4 < v18 + 512 )
              break;
            v8 = *(_QWORD *)(v8 + 8);
          }
        }
        v46 = 0;
      }
      if ( !v8 )
        KeBugCheckEx(0x1Au, 0x61948uLL, BugCheckParameter2, a3, BugCheckParameter4);
      v19 = *(_QWORD *)(v8 + 8);
      v20 = v8;
      if ( v19 )
      {
        v21 = *(_QWORD **)v19;
        if ( *(_QWORD *)v19 )
        {
          do
          {
            v19 = (unsigned __int64)v21;
            v21 = (_QWORD *)*v21;
          }
          while ( v21 );
        }
      }
      else
      {
        for ( i = *(_QWORD *)(v8 + 16); ; i = *(_QWORD *)(v19 + 16) )
        {
          v19 = i & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v19 || *(_QWORD *)v19 == v20 )
            break;
          v20 = v19;
        }
      }
      v23 = *(_QWORD *)(v8 + 24);
      v24 = 512LL;
      v25 = (BugCheckParameter4 & ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1)) - v23;
      if ( BugCheckParameter4 + v7 <= v23 + 512 )
        v24 = v25 + v7;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v8 + 172));
      v26 = v39;
      v27 = (_WORD *)(v8 + 2 * (v25 + 88));
      while ( v25 < v24 )
      {
        if ( !*v27 )
          KeBugCheckEx(0x1Au, 0x6194AuLL, BugCheckParameter2, a3, BugCheckParameter4);
        v28 = *v27 - 1;
        *v27 = v28;
        if ( !v28 )
        {
          v29 = *(_DWORD *)(v8 + 32);
          if ( v29 )
          {
            v30 = 0;
            if ( v29 > 0x200 )
LABEL_42:
              KeBugCheckEx(0x1Au, 0x6194BuLL, v8, *(unsigned int *)(v8 + 32), BugCheckParameter4);
          }
          else
          {
            v30 = 1;
          }
          if ( v30 )
            goto LABEL_42;
          v31 = v29 - 1;
          *(_DWORD *)(v8 + 32) = v31;
          if ( !v31 )
          {
            if ( *(_BYTE *)(v8 + 40) )
            {
              _InterlockedOr(v37, 0);
              *(_DWORD *)(v8 + 36) = KiCacheFlushTimeStamp;
            }
            _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 1, 1uLL);
            if ( (unsigned int)MiIsPageInIoHugeRangeTransition(*(_QWORD *)(v8 + 24)) )
            {
              _InterlockedAdd64((volatile signed __int64 *)v26 + 2, 1uLL);
              v40 = 1LL;
            }
            v36 = v38;
            if ( v35 >= v40 )
              v36 = 1;
            v38 = v36;
          }
        }
        ++BugCheckParameter4;
        ++v27;
        ++v25;
        --v7;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 172));
      if ( v7
        && ((v14 = *(unsigned int *)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 41) + 640LL), (v14 & 0x40000000) != 0)
         || v10 != 17 && KeShouldYieldProcessor()) )
      {
        LOBYTE(v14) = v10;
        MiUnlockIoPfnTree(v14, 1LL, v15, v16);
        v46 = 1;
        v17 = 1;
        MiLockIoPfnTree(1LL);
        v5 = v39;
        v13 = *((_QWORD *)&v41 + 1);
      }
      else
      {
        v5 = v39;
        v8 = v19;
        v17 = v46;
        v13 = *((_QWORD *)&v41 + 1);
      }
    }
    else
    {
      v46 = 1;
      v17 = 1;
      v33 = v13 - BugCheckParameter4 + 1;
      if ( v33 > v7 )
        v33 = v7;
      BugCheckParameter4 += v33;
      v7 -= v33;
    }
  }
  LOBYTE(v14) = 17;
  MiUnlockIoPfnTree(v14, 5LL, v15, v16);
  if ( v38 && (MiFlags & 0x30) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E36050);
    if ( !stru_140E36058.Parameter )
    {
      stru_140E36058.List.Flink = 0LL;
      stru_140E36058.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteStaleCacheMaps;
      stru_140E36058.Parameter = &stru_140E36058;
      ExQueueWorkItem(&stru_140E36058, DelayedWorkQueue);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36050);
  }
  if ( v10 != 17 )
  {
    v32 = KiIrqlFlags == 0;
LABEL_49:
    if ( !v32 )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    __writecr8(v10);
  }
}
