/*
 * XREFs of MiFlushSection @ 0x1404A70A8
 * Callers:
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     MiFlushSection @ 0x1404A70A8 (MiFlushSection.c)
 *     MiCleanSection @ 0x1404D9074 (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x14050A360 (MiDeleteCachedSubsection.c)
 *     MmFlushVirtualMemory @ 0x140A69F30 (MmFlushVirtualMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     IoDiskIoAttributionDereference @ 0x14021EF64 (IoDiskIoAttributionDereference.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIncrementSubsectionViewCount @ 0x1402EDF10 (MiIncrementSubsectionViewCount.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     MiEndingOffset @ 0x14036E8D0 (MiEndingOffset.c)
 *     MiDecrementSubsectionViewCount @ 0x140370370 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsectionInternal @ 0x1403704C4 (MiInsertUnusedSubsectionInternal.c)
 *     MiInitializeFlushPacket @ 0x14038EAB4 (MiInitializeFlushPacket.c)
 *     MiFlushSubsection @ 0x1403CB290 (MiFlushSubsection.c)
 *     MiFlushSection @ 0x1404A70A8 (MiFlushSection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     MiWaitForAsynchronousFlushes @ 0x140506F20 (MiWaitForAsynchronousFlushes.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 MiFlushSection(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, ...)
{
  ULONG_PTR v5; // rdi
  _DWORD *v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // r13
  __int64 v10; // r12
  __int64 v11; // r8
  unsigned int v12; // ecx
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // r9d
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // r15
  KIRQL v19; // al
  KIRQL v20; // r14
  volatile LONG *v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  char v24; // si
  __int64 v25; // r10
  __int64 *v26; // rdx
  int v27; // r12d
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  int v31; // edx
  volatile LONG *v32; // r14
  KIRQL v33; // dl
  __int64 v34; // r15
  int v35; // eax
  int v36; // eax
  volatile LONG *v37; // rcx
  KIRQL v38; // al
  int v39; // eax
  volatile LONG *v40; // rcx
  PVOID v41; // r14
  __int64 v42; // rdx
  unsigned int *v43; // rcx
  _DWORD *v44; // [rsp+28h] [rbp-C1h]
  __int64 v45; // [rsp+48h] [rbp-A1h]
  __int64 v46; // [rsp+50h] [rbp-99h]
  __int64 v47; // [rsp+58h] [rbp-91h]
  __int64 v48; // [rsp+60h] [rbp-89h]
  __int64 v49; // [rsp+68h] [rbp-81h]
  __int64 v50; // [rsp+70h] [rbp-79h]
  int v51; // [rsp+78h] [rbp-71h]
  _QWORD v52[2]; // [rsp+88h] [rbp-61h] BYREF
  ULONG_PTR v53; // [rsp+98h] [rbp-51h]
  PVOID P; // [rsp+A0h] [rbp-49h]
  ULONG_PTR v55; // [rsp+A8h] [rbp-41h]
  unsigned __int64 v56; // [rsp+B8h] [rbp-31h]
  __int64 v57; // [rsp+C8h] [rbp-21h]
  int v58; // [rsp+D8h] [rbp-11h]
  int v59; // [rsp+138h] [rbp+4Fh]
  __int64 v60; // [rsp+140h] [rbp+57h]
  int BugCheckParameter2; // [rsp+148h] [rbp+5Fh]
  __int64 v63; // [rsp+158h] [rbp+6Fh] BYREF
  va_list va; // [rsp+158h] [rbp+6Fh]
  __int64 v65; // [rsp+160h] [rbp+77h]
  _QWORD *v66; // [rsp+168h] [rbp+7Fh]
  _DWORD *v67; // [rsp+170h] [rbp+87h]
  va_list va1; // [rsp+178h] [rbp+8Fh] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v63 = va_arg(va1, _QWORD);
  v65 = va_arg(va1, _QWORD);
  v66 = va_arg(va1, _QWORD *);
  v67 = va_arg(va1, _DWORD *);
  BugCheckParameter2 = a3;
  v59 = a1;
  v51 = a2;
  v5 = a3;
  memset_0(v52, 0, 0x58uLL);
  v7 = v67;
  v8 = 0LL;
  v9 = v66;
  *v67 = 0;
  *((_QWORD *)v7 + 1) = 0LL;
  if ( v9 )
    *v9 = 0LL;
  v10 = *(_QWORD *)v5;
  v11 = 0LL;
  v12 = v65 | 4;
  v44 = v7;
  v13 = *(_QWORD *)v5;
  v14 = *(_DWORD *)(*(_QWORD *)v5 + 56LL);
  if ( !v63 )
    v12 = v65;
  v46 = *(_QWORD *)v5;
  if ( (v14 & 0x30000000) == 0 )
    v11 = v63;
  v15 = v12 & 0xFFFFFFFB;
  v49 = v11;
  if ( (v14 & 0x30000000) == 0 )
    v15 = v12;
  LODWORD(v66) = v15;
  result = MiInitializeFlushPacket((__int64)v52, v13, v11, v15, v44);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v60 = a2 + 8;
    v18 = a1;
    v45 = 0LL;
    v47 = 0LL;
    --CurrentThread->KernelApcDisable;
    LODWORD(v63) = 0;
    v50 = (__int64)CurrentThread;
    v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72));
    v20 = v19;
    if ( *(_QWORD *)(v10 + 32) )
    {
      v23 = *(_QWORD *)(v10 + 120) & 0xFFFFFFFFFFFFFFF8uLL;
      v56 = v23;
      if ( v23 && _InterlockedIncrement64((volatile signed __int64 *)(v23 + 32)) <= 1 )
        __fastfail(0xEu);
      v24 = v58;
      v25 = a4;
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = (__int64 *)(v5 + 8);
          v27 = 0;
          if ( !v18 )
            v18 = *v26;
          v28 = *v26;
          v29 = *v26 + 8LL * (unsigned int)(*(_DWORD *)(v5 + 44) - *(_DWORD *)(v5 + 52));
          v48 = v29;
          if ( v5 == v25 )
          {
            v48 = v60;
            v29 = v60;
            if ( v18 == v28 && v60 == *v26 + 8LL * (unsigned int)(*(_DWORD *)(v5 + 44) - *(_DWORD *)(v5 + 52)) )
              v27 = 1;
            v25 = a4;
          }
          else
          {
            LOBYTE(v27) = v18 == v28;
          }
          v30 = *(_DWORD *)(v5 + 152);
          v31 = 0;
          if ( (v30 & 1) != 0 )
          {
            if ( (v30 & 2) == 0 && v27 )
            {
              v27 = 2;
              *(_DWORD *)(v5 + 152) = v30 & 0xFFFFFFFC | 2;
            }
          }
          else
          {
            LOBYTE(v31) = (v30 & 2) == 0;
          }
          if ( !*(_DWORD *)(v5 + 104) || !*(_QWORD *)(v5 + 8) || v31 )
            break;
          LODWORD(v63) = 0;
          MiIncrementSubsectionViewCount((__int64 *)v5, 0);
          if ( v20 == 17 )
          {
            v32 = (volatile LONG *)(v46 + 72);
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v46 + 72));
          }
          else
          {
            v33 = v20;
            v32 = (volatile LONG *)(v46 + 72);
            ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v46 + 72), v33);
          }
          v52[1] = v48;
          v55 = v5;
          v52[0] = v18;
          MiFlushSubsection((__int64)v52);
          v34 = ((v52[0] - v18) >> 3 << 12) + v45;
          v45 = v34;
          if ( v27 == 2 && P && (int)((__int64 (*)(void))MiWaitForAsynchronousFlushes)() < 0 )
          {
            v24 = v58 | 0x10;
            v58 |= 0x10u;
          }
          else
          {
            v24 = v58;
          }
          v20 = ExAcquireSpinLockExclusive(v32);
          if ( !*(_QWORD *)(v5 + 16)
            && v52[0] == *(_QWORD *)(v5 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v5 + 44) - *(_DWORD *)(v5 + 52)) )
          {
            v35 = MiEndingOffset((_DWORD *)v5) & 0xFFF;
            if ( v35 )
            {
              v34 -= (unsigned int)(4096 - v35);
              v45 = v34;
            }
          }
          v47 += MiDecrementSubsectionViewCount(v5, 0);
          if ( !*(_QWORD *)(v5 + 80) && (*(_DWORD *)(v5 + 32) & 0x10000) == 0 )
            v47 += MiInsertUnusedSubsectionInternal(v5, 0LL);
          if ( v27 == 2 )
          {
            v36 = *(_DWORD *)(v5 + 152);
            if ( (v24 & 0x10) != 0 || (v24 & 0x40) == 0 )
              v36 |= 1u;
            *(_DWORD *)(v5 + 152) = v36 & 0xFFFFFFFD;
          }
          if ( (v24 & 0x10) != 0 )
            goto LABEL_77;
          if ( (v24 & 0x40) == 0 )
            goto LABEL_77;
          v25 = a4;
          if ( v5 == a4 )
            goto LABEL_77;
          v5 = *(_QWORD *)(v5 + 16);
          if ( !v5 )
            goto LABEL_77;
          v18 = *(_QWORD *)(v5 + 8);
        }
        if ( v27 == 2 )
          *(_DWORD *)(v5 + 152) &= ~2u;
        v45 += (v29 - v18) >> 3 << 12;
        if ( !*(_QWORD *)(v5 + 16) )
          break;
        if ( v25 == v5 )
          goto LABEL_76;
        LODWORD(v63) = v63 + 1;
        if ( (unsigned int)v63 >= 0x80 )
        {
          v37 = (volatile LONG *)(v46 + 72);
          if ( v20 == 17 )
            ExReleaseSpinLockExclusiveFromDpcLevel(v37);
          else
            ExReleaseSpinLockExclusive(v37, v20);
          LODWORD(v63) = 0;
          v38 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v46 + 72));
          v25 = a4;
          v20 = v38;
        }
        v5 = *(_QWORD *)(v5 + 16);
        v18 = *(_QWORD *)(v5 + 8);
      }
      if ( v29 != *(_QWORD *)(v5 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v5 + 44) - *(_DWORD *)(v5 + 52)) )
      {
LABEL_76:
        v34 = v45;
        goto LABEL_77;
      }
      v34 = v45;
      v39 = MiEndingOffset((_DWORD *)v5) & 0xFFF;
      if ( v39 )
        v34 = v45 - (unsigned int)(4096 - v39);
LABEL_77:
      v40 = (volatile LONG *)(v46 + 72);
      if ( v20 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v40);
      else
        ExReleaseSpinLockExclusive(v40, v20);
      v41 = P;
      if ( P && !v49 )
      {
        if ( (int)MiWaitForAsynchronousFlushes(P) < 0 )
          v24 |= 0x20u;
        ExFreePoolWithTag(v41, 0);
      }
      ObFastDereferenceObjectDeferDelete((signed __int64 *)(v46 + 64), v53, 0x63536D4Du);
      if ( v47 )
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v46 + 60) & 0x3FF)),
          1LL,
          v47);
      if ( v56 )
        IoDiskIoAttributionDereference(v56);
      KiLeaveCriticalRegionUnsafe(v50, v42);
      if ( v9 )
        *v9 = v57;
      v43 = v67;
      if ( (v24 & 0x20) != 0 )
      {
        v63 = 0LL;
        result = MiFlushSection(
                   v59,
                   v51,
                   BugCheckParameter2,
                   a4,
                   0LL,
                   (unsigned int)v66 & 0xFFFFFFFB,
                   (__int64)va,
                   (__int64)v67);
        if ( v9 )
          *v9 += v63;
      }
      else
      {
        if ( (v24 & 0x10) != 0 )
          *v67 = -1073740749;
        result = *v43;
        if ( (int)result < 0 )
          v8 = v34;
        *((_QWORD *)v43 + 1) = v8;
      }
    }
    else
    {
      v21 = (volatile LONG *)(v10 + 72);
      if ( v19 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v21);
      else
        ExReleaseSpinLockExclusive(v21, v19);
      if ( P )
      {
        ExFreePoolWithTag(P, 0);
        if ( v49 )
          *(_QWORD *)(v49 + 40) = 0LL;
      }
      ObFastDereferenceObjectDeferDelete((signed __int64 *)(v10 + 64), v53, 0x63536D4Du);
      KiLeaveCriticalRegionUnsafe(v50, v22);
      return 0LL;
    }
  }
  return result;
}
