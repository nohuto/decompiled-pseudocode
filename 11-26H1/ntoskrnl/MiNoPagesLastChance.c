/*
 * XREFs of MiNoPagesLastChance @ 0x140708830
 * Callers:
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiPfnReferenceCountIsZero @ 0x14031E3A4 (MiPfnReferenceCountIsZero.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     ObFastReferenceObjectLocked @ 0x14048678C (ObFastReferenceObjectLocked.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiNoPagesLastChance(__int64 a1, unsigned int a2)
{
  const void *v2; // r12
  int v3; // eax
  int v5; // r8d
  unsigned int v6; // r9d
  int v7; // ecx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r10
  unsigned int v11; // eax
  int v12; // edx
  __int64 v13; // r9
  __int64 v14; // r11
  _DWORD *v15; // r8
  unsigned __int64 v16; // r14
  int v17; // r13d
  ULONG v18; // ebp
  __int64 v19; // rdi
  volatile LONG *v20; // rbx
  KIRQL v21; // al
  __int64 v22; // rdi
  int v23; // edx
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v28; // r12
  __int64 v29; // rdi
  __int64 SubsectionFromPte; // rax
  __int64 v31; // r15
  int v32; // edx
  bool v33; // zf
  struct _WORK_QUEUE_ITEM *v34; // rbx
  int v35; // r10d
  int v36; // edx
  int v37; // [rsp+40h] [rbp-68h]
  unsigned int BugCheckParameter3; // [rsp+44h] [rbp-64h]
  ULONG_PTR BugCheckParameter3_4; // [rsp+48h] [rbp-60h]
  unsigned __int64 v40; // [rsp+50h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-50h]
  ULONG_PTR v42; // [rsp+68h] [rbp-40h]
  unsigned __int64 QpcTimeStamp; // [rsp+C8h] [rbp+20h] BYREF

  v2 = *(const void **)(a1 + 23456);
  v3 = *(_DWORD *)(a1 + 808);
  v5 = *(_DWORD *)(a1 + 804);
  v6 = (unsigned int)v3 >> 31;
  v7 = v5;
  v8 = a2;
  BugCheckParameter2 = (ULONG_PTR)v2;
  if ( v3 >= 0 )
    v3 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( v5 >= 0 )
    v7 = v3;
  v11 = *(_DWORD *)(a1 + 22296);
  v12 = v6 | 2;
  v37 = v7;
  if ( v5 >= 0 )
    v12 = v6;
  if ( !v11 )
    goto LABEL_13;
  v13 = a1 + 22304;
  v14 = v11;
  do
  {
    v15 = *(_DWORD **)v13;
    if ( (*(_BYTE *)(*(_QWORD *)v13 + 172LL) & 0x50) == 0 )
    {
      v9 += (unsigned int)(v15[1] - *v15);
      v10 += (unsigned int)v15[3];
    }
    v13 += 8LL;
    --v14;
  }
  while ( v14 );
  if ( v10 < 0x400 )
LABEL_13:
    v12 |= 4u;
  v16 = *(_QWORD *)(a1 + 23248);
  v17 = v12 | 8;
  if ( v9 >= 0x400 )
    v17 = v12;
  BugCheckParameter3 = v17;
  if ( HIDWORD(stru_140E2ED08.RelativeTimerBias) )
  {
    v18 = 243;
  }
  else if ( *(_QWORD *)(a1 + 23376) < v16 >> 2 )
  {
    v18 = (unsigned __int64)v2 < v16 >> 2 ? 235 : 77;
  }
  else
  {
    v2 = *(const void **)(a1 + 23376);
    v18 = 253;
    BugCheckParameter2 = (ULONG_PTR)v2;
  }
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 256) + 120LL) + 672LL);
  if ( !v19
    || (v20 = (volatile LONG *)(v19 + 1688),
        v21 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v19 + 1688)),
        v22 = *(_QWORD *)(v19 + 1736),
        ExReleaseSpinLockShared(v20, v21),
        QpcTimeStamp = 0LL,
        KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp) - v22 >= -MiNoPagesTimeout) )
  {
    if ( KdPitchDebugger || (_BYTE)KdDebuggerNotPresent )
    {
      LODWORD(QpcTimeStamp) = 0;
    }
    else
    {
      DbgPrintEx(
        0x66u,
        0,
        "Without a debugger attached, the following bugcheck would have occurred.\n%4lx %p %p %x %x\n",
        v18,
        (const void *)v16,
        v2,
        v17,
        v37);
      if ( (MiFlags & 8) != 0 )
        __debugbreak();
      LODWORD(QpcTimeStamp) = 1;
    }
    if ( !(unsigned int)MiSufficientAvailablePages(a1, v8)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16540), 1, 0) )
    {
      v24 = a1 + 6016;
      v40 = 0LL;
      v25 = 0LL;
      v26 = 16LL;
      BugCheckParameter3_4 = 16LL;
      do
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v23) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v23);
        }
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v24 + 32));
        v28 = *(_QWORD *)v24;
        if ( *(_QWORD *)v24 != 0x3FFFFFFFFFLL )
        {
          do
          {
            v42 = v28;
            v29 = 48 * v28 - 0x220000000000LL;
            v28 = *(_QWORD *)v29 & 0xFFFFFFFFFFLL;
            SubsectionFromPte = MiGetSubsectionFromPte(*(_QWORD *)(v29 + 16));
            v31 = *(_QWORD *)SubsectionFromPte;
            if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x28) == 0
              && (!v25 || v25 == v31)
              && !_interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
            {
              ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v31 + 72));
              v32 = *(_DWORD *)(v31 + 56);
              if ( (v32 & 0x20) != 0 || (*(_DWORD *)(v31 + 56) & 8) == 0 )
              {
                if ( !v25 )
                {
                  v25 = v31;
                  if ( (v32 & 0x800) == 0 )
                  {
                    *(_DWORD *)(v31 + 56) = v32 | 0x800;
                    v40 = ObFastReferenceObjectLocked((_QWORD *)(v31 + 64), 0x644C6D4Du);
                  }
                }
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v31 + 72));
                MiUnlinkPageFromListEx(v29, 1);
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v24 + 32));
                *(_QWORD *)(v29 + 24) &= 0xC000000000000000uLL;
                v35 = *(_DWORD *)(v29 + 32);
                if ( (v35 & 0x80000) != 0
                  && MiCanPfnOriginalPteBeLost(v29)
                  && (*(_QWORD *)(v29 + 16) & 8LL) != 0
                  && (v35 & 0x100000) == 0 )
                {
                  *(_QWORD *)(v29 + 16) &= ~8uLL;
                }
                *(_DWORD *)(v29 + 32) = v35 & 0xFFEFFFFF;
                MiPfnReferenceCountIsZero(v29, v42);
                _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( CurrentIrql < 2u )
                {
                  if ( KiIrqlFlags )
                    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
                  __writecr8(CurrentIrql);
                }
                ++*(_DWORD *)&stru_140E2D2D0.WaitBlockFill6[4];
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql != 2 )
                  __writecr8(2uLL);
                if ( KiIrqlFlags )
                {
                  LOBYTE(v36) = 2;
                  KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v36);
                }
                ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v24 + 32));
                v28 = *(_QWORD *)v24;
              }
              else
              {
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v31 + 72));
                _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
            }
          }
          while ( v28 != 0x3FFFFFFFFFLL );
          v26 = BugCheckParameter3_4;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v24 + 32));
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v24 += 88LL;
        BugCheckParameter3_4 = --v26;
      }
      while ( v26 );
      v33 = v25 == 0;
      v34 = (struct _WORK_QUEUE_ITEM *)(a1 + 16496);
      if ( v33 )
      {
        _InterlockedAnd((volatile signed __int32 *)(a1 + 16540), 0);
        if ( !(_DWORD)QpcTimeStamp )
          KeBugCheckEx(v18, *(_QWORD *)(a1 + 23248), BugCheckParameter2, BugCheckParameter3, v37);
      }
      else if ( v40 )
      {
        *(_QWORD *)(a1 + 16528) = v40;
        *(_DWORD *)(a1 + 16536) = -1073741566;
        *(_QWORD *)(a1 + 16512) = MiLdwPopupWorker;
        *(_QWORD *)(a1 + 16520) = a1 + 16496;
        v34->List.Flink = 0LL;
        ExQueueWorkItem(v34, DelayedWorkQueue);
        ++LODWORD(stru_140E2D2D0.WaitBlock[0].WaitListEntry.Flink);
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)(a1 + 16540), 0);
      }
    }
  }
}
