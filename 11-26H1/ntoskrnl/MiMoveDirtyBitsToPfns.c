/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x14031B4A0
 * Callers:
 *     MiBeginHoldingDirtyFaults @ 0x140700C08 (MiBeginHoldingDirtyFaults.c)
 *     NtResetWriteWatch @ 0x140AB8910 (NtResetWriteWatch.c)
 *     MiProcessVaRangesInfoClass @ 0x140B6E518 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiGetVadMandatoryPageSize @ 0x140319EC0 (MiGetVadMandatoryPageSize.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiMakePteClean @ 0x14031C2D0 (MiMakePteClean.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 */

void __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  char v4; // r14
  __int64 v5; // r9
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r12
  _KPROCESS *Process; // rcx
  volatile _KAFFINITY_EX *ActiveProcessors; // r13
  __int64 p_Blink; // rbp
  __int64 ProcessorFlushList; // rbx
  __int64 v15; // rdx
  char v16; // r15
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r14
  unsigned int v22; // r9d
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r11
  unsigned int v28; // r8d
  __int64 v29; // r9
  unsigned __int64 v30; // rsi
  int v31; // r12d
  __int64 v32; // rax
  int v33; // r14d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  BOOL v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rdx
  _QWORD *v45; // r14
  int v46; // [rsp+30h] [rbp-78h]
  int v47; // [rsp+34h] [rbp-74h] BYREF
  int v48; // [rsp+38h] [rbp-70h]
  __int64 LockedVadEvent; // [rsp+40h] [rbp-68h]
  _QWORD *v50; // [rsp+48h] [rbp-60h]
  unsigned __int64 v51; // [rsp+50h] [rbp-58h]
  volatile _KAFFINITY_EX *v52; // [rsp+58h] [rbp-50h]
  char v53; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v54; // [rsp+B8h] [rbp+10h]
  int v57; // [rsp+C8h] [rbp+20h]

  v4 = a4;
  v5 = 0LL;
  v47 = 0;
  v7 = 0x7FFFFFFFF8LL;
  v46 = 0;
  v8 = 0LL;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v54 = v10;
  Process = KeGetCurrentThread()->ApcState.Process;
  v48 = v4 & 1;
  ActiveProcessors = Process[2].ActiveProcessors;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v52 = ActiveProcessors;
  if ( (v4 & 1) != 0 )
  {
    v4 = a4;
    LockedVadEvent = MiLocateLockedVadEvent(a3, 4LL);
    v50 = (_QWORD *)(LockedVadEvent + 24);
    ActiveProcessors = v52;
  }
  else
  {
    v50 = 0LL;
    LockedVadEvent = 0LL;
  }
  ProcessorFlushList = v5;
  v53 = MiLockWorkingSetShared(p_Blink, v7, a3);
  v16 = v53;
  if ( v9 <= v10 )
  {
    v33 = v4 & 2;
    v57 = v33;
    do
    {
      if ( v8 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList(ProcessorFlushList);
          MiReleaseProcessorFlushList(v39, v38, v40);
          ProcessorFlushList = 0LL;
        }
        MiUnlockPageTableInternal(p_Blink, v8);
        v8 = 0LL;
        if ( MiWorkingSetIsContended(p_Blink, 0) || KeShouldYieldProcessor() )
        {
          LOBYTE(v41) = v16;
          MiUnlockWorkingSetShared(p_Blink, v41);
          MiLockWorkingSetShared(p_Blink, v42, v43);
        }
      }
      if ( v33 )
        _InterlockedIncrement64((volatile signed __int64 *)&ActiveProcessors[6].8);
      NextPageTable = MiGetNextPageTable(v9, v10, v16, 1, &v47);
      v19 = NextPageTable;
      v20 = NextPageTable;
      if ( NextPageTable )
      {
        v15 = (unsigned int)v47;
        v8 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v47 )
        {
          v20 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v18 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v47 > 1 )
          {
            v44 = (unsigned int)(v47 - 1);
            do
            {
              v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v44;
            }
            while ( v44 );
          }
          v8 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v45 = (_QWORD *)(v20 + 8);
          v15 = 4095LL;
          while ( ((unsigned __int16)v45 & 0xFFF) != 0 && (unsigned __int64)v45 <= v18 && (*v45 & 0x81) == 0x81 )
            ++v45;
          v21 = (unsigned __int64)(v45 - 1);
        }
        else
        {
          v21 = v10;
          if ( (NextPageTable & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v10 )
            v21 = (NextPageTable & 0xFFFFFFFFFFFFF000uLL) + 4088;
        }
      }
      else
      {
        v21 = v10;
      }
      if ( v48 )
      {
        MiGetLeafVa(v9);
        VadMandatoryPageSize = MiGetVadMandatoryPageSize(v22);
        v51 = v24 / VadMandatoryPageSize;
        if ( MiGetLeafVa(v21 + 8) > (((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF) )
        {
          v30 = *v50 - v25;
        }
        else
        {
          v26 = MiGetVadMandatoryPageSize(*(_DWORD *)(a3 + 48));
          v30 = ((v27 >> 12) - (v29 | ((unsigned __int64)v28 << 32))) / v26 - v51;
        }
        v46 = 1;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 40));
        RtlClearBitsEx((__int64)v50, v51, v30);
      }
      if ( !v19 )
        break;
      if ( v20 <= v21 )
      {
        v31 = v48;
        do
        {
          v32 = *(_QWORD *)v20;
          if ( (*(_QWORD *)v20 & 1) != 0 && (v32 & 0x42) != 0 && (v31 || !v57 || v32 >= 0) )
          {
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList(v18, v15);
              *(_DWORD *)(ProcessorFlushList + 16) = 0;
              *(_DWORD *)(ProcessorFlushList + 20) = 10;
              *(_QWORD *)ProcessorFlushList = p_Blink;
              *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(p_Blink + 184) & 0x40) != 0;
              if ( (*(_DWORD *)(p_Blink + 184) & 0xF) != 0
                || (v18 = (unsigned __int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
                    p_Blink == v18) )
              {
                v37 = (*(_DWORD *)(p_Blink + 184) & 0xF) == 0;
              }
              else
              {
                *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
                v37 = 0;
              }
              *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
              *(_DWORD *)(ProcessorFlushList + 8) = v37;
              *(_WORD *)(ProcessorFlushList + 25) = 0;
              *(_DWORD *)(ProcessorFlushList + 28) = 0;
              *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
              *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
            }
            MiMakePteClean(v18, v20, ProcessorFlushList);
          }
          v20 += 8LL;
        }
        while ( v20 <= v21 );
        v10 = v54;
      }
      if ( v46 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 40));
        v46 = 0;
      }
      v33 = v57;
      v9 = (((unsigned __int64)MiGetLeafVa(v20) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v16 = v53;
      ActiveProcessors = v52;
    }
    while ( v9 <= v10 );
    if ( ProcessorFlushList )
    {
      MiFlushTbList(ProcessorFlushList);
      MiReleaseProcessorFlushList(v35, v34, v36);
    }
    if ( v46 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 40));
    if ( v8 )
      MiUnlockPageTableInternal(p_Blink, v8);
    v16 = v53;
  }
  LOBYTE(v15) = v16;
  MiUnlockWorkingSetShared(p_Blink, v15);
}
