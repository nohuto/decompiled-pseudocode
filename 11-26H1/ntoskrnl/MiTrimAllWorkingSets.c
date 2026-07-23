/*
 * XREFs of MiTrimAllWorkingSets @ 0x14045F5B0
 * Callers:
 *     MiWorkingSetManager @ 0x1404B7850 (MiWorkingSetManager.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiPruneProcessLargePageCaches @ 0x1402A83C4 (MiPruneProcessLargePageCaches.c)
 *     MiOrderTrimList @ 0x1403C3390 (MiOrderTrimList.c)
 *     MiPeriodicTrimWorkingSet @ 0x1403C3C80 (MiPeriodicTrimWorkingSet.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiDrainZeroLookasides @ 0x140457D20 (MiDrainZeroLookasides.c)
 *     MiPartitionTrimmedEnough @ 0x1404BB97C (MiPartitionTrimmedEnough.c)
 *     MiAskKeToOutswapProcess @ 0x1404D1920 (MiAskKeToOutswapProcess.c)
 *     MiLogProcessWorkingSetsStart @ 0x1404DAE84 (MiLogProcessWorkingSetsStart.c)
 *     MiLogProcessWorkingSetsStop @ 0x14053095C (MiLogProcessWorkingSetsStop.c)
 */

char __fastcall MiTrimAllWorkingSets(unsigned __int64 a1, __int64 a2)
{
  int v2; // esi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v6; // rcx
  char v7; // cl
  __int16 v8; // ax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 **v11; // rdi
  volatile LONG *v12; // r15
  KIRQL v13; // si
  int v14; // r13d
  unsigned int v15; // edx
  __int64 v16; // r8
  bool v17; // zf
  unsigned __int16 v18; // dx
  int v19; // r9d
  __int64 *v20; // rdi
  __int64 *v21; // rcx
  __int64 **v22; // rax
  __int64 v23; // rcx
  KIRQL v24; // al
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 i; // rcx
  __int64 v29; // rax
  __int64 v31; // [rsp+20h] [rbp-48h]
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v34; // [rsp+70h] [rbp+8h] BYREF
  int v35; // [rsp+78h] [rbp+10h]
  unsigned __int64 QpcTimeStamp; // [rsp+80h] [rbp+18h] BYREF
  __int64 *v37; // [rsp+88h] [rbp+20h]

  v34 = a1;
  v2 = *(_DWORD *)(a2 + 4);
  v3 = a1 + 18672;
  v4 = a1;
  v35 = v2;
  v31 = a1 + 18672;
  if ( stru_140E366D8.FirstArgument )
  {
    if ( *(_DWORD *)stru_140E366D8.FirstArgument )
    {
      if ( (*((_BYTE *)stru_140E366D8.FirstArgument + 16) & 1) != 0 )
      {
        v6 = *((_QWORD *)stru_140E366D8.FirstArgument + 3);
        if ( (v6 & 1) == v6 )
          MiLogProcessWorkingSetsStart(v6, v4, a2);
      }
    }
  }
  if ( v2 == 1 )
  {
    MiDrainZeroLookasides(v4, 0LL, 0LL, 0);
    MiPruneProcessLargePageCaches(v4, 0);
    v7 = *(_BYTE *)(v3 + 104);
    *(_BYTE *)(v3 + 2584) = 1;
    v8 = *(_WORD *)v3;
    *(_BYTE *)(v3 + 104) = v7 + 1;
    v32 = v3 + 152LL * (v7 & 0xF) + 112;
    *(_WORD *)(v32 + 146) = v8 + 1;
    *(_QWORD *)v32 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    *(_QWORD *)(v32 + 8) = 0LL;
    *(_QWORD *)(v32 + 16) = *(_QWORD *)(v4 + 22464);
    *(_QWORD *)(v32 + 24) = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(v32 + 148) = *(_DWORD *)(a2 + 8);
    *(_QWORD *)(v32 + 48) = *(_QWORD *)(a2 + 40);
    *(_OWORD *)(v32 + 64) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(v32 + 80) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(v32 + 96) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)(v32 + 112) = *(_OWORD *)(a2 + 128);
    *(_OWORD *)(v32 + 128) = *(_OWORD *)(a2 + 144);
LABEL_14:
    v11 = (__int64 **)(v4 + 18336);
    v12 = (volatile LONG *)(v4 + 21384);
    v37 = (__int64 *)(v4 + 18336);
    v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 21384));
    v14 = 0;
    if ( v35 == 1 )
LABEL_16:
      v15 = *((unsigned __int8 *)&MiTrimPassToAge + *(unsigned __int8 *)(a2 + 24));
    else
      v15 = 7;
    v9 = (_QWORD *)MiOrderTrimList(v4, v15);
    v16 = v4 + 18672;
    *(_QWORD *)(a2 + 72) = v9;
    v17 = (*(_WORD *)(v4 + 18672))++ == 0xFFFF;
    v18 = *(_WORD *)(v4 + 18672);
    LODWORD(QpcTimeStamp) = v18;
    if ( v17 )
    {
      v18 = 1;
      *(_WORD *)v16 = 1;
      LODWORD(QpcTimeStamp) = 1;
    }
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) - *(_QWORD *)(a2 + 16);
LABEL_20:
    v19 = v35;
    while ( 1 )
    {
      v20 = *v11;
      if ( v20 == v37 )
        break;
      if ( v14 == 1 || *((_WORD *)v20 + 66) == v18 )
      {
        if ( v19 == 1 )
        {
          v4 = v34;
          LODWORD(v9) = MiPartitionTrimmedEnough(v34, a2, 1LL, v13);
          if ( !(_DWORD)v9 )
          {
            v14 = 0;
            v11 = (__int64 **)(v4 + 18336);
            goto LABEL_16;
          }
          goto LABEL_62;
        }
        break;
      }
      v21 = (__int64 *)*v20;
      if ( *(__int64 **)(*v20 + 8) != v20 || (v22 = (__int64 **)v20[1], *v22 != v20) )
        __fastfail(3u);
      *v22 = v21;
      v21[1] = (__int64)v22;
      *v20 = 0LL;
      *((_WORD *)v20 + 66) = v18;
      if ( v19 != 2 || (unsigned __int64)v20[9] >= *(_QWORD *)(v16 + 2544) )
      {
        if ( (unsigned __int64)v20[14] <= 1 && (v20[18] & 0xF) == 0 )
        {
          LOBYTE(v9) = MiAskKeToOutswapProcess(v20 - 5, v13);
          v18 = QpcTimeStamp;
          v16 = v31;
          v11 = (__int64 **)v37;
          goto LABEL_20;
        }
        ++*(_DWORD *)(*(v20 - 3) + 56);
        if ( *(_DWORD *)(a2 + 8) != 2
          || v20[14] > (unsigned __int64)v20[10] && (unsigned __int64)(v20[14] - v20[10]) >= 0x40000 )
        {
          if ( v13 == 17 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
              *v12 = 0;
            else
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
          }
          else
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
              *v12 = 0;
            else
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
            __writecr8(v13);
          }
          MiPeriodicTrimWorkingSet((__int64)(v20 - 5), a2, v16);
          v24 = ExAcquireSpinLockExclusive(v12);
          v13 = v24;
          if ( *(_QWORD *)(a2 + 16) >= *(_QWORD *)(a2 + 56) )
            v14 = ((unsigned int)MiPartitionTrimmedEnough(v34, a2, 0LL, v24) != 0) + 1;
        }
        --*(_DWORD *)(*(v20 - 3) + 56);
        v25 = *(_QWORD *)(*(v20 - 3) + 72);
        if ( v25 )
          KeSignalGate(v25, 1LL, v16);
        v26 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *((unsigned __int16 *)v20 + 67)) + 18336LL;
        v9 = *(_QWORD **)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *((unsigned __int16 *)v20 + 67)) + 18344LL);
        if ( *v9 != v26 )
          __fastfail(3u);
        *v20 = v26;
        v20[1] = (__int64)v9;
        *v9 = v20;
        *(_QWORD *)(v26 + 8) = v20;
        if ( v14 != 2 )
        {
          v18 = QpcTimeStamp;
          v16 = v31;
          v11 = (__int64 **)v37;
          goto LABEL_20;
        }
        break;
      }
      v23 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *((unsigned __int16 *)v20 + 67)) + 18336LL;
      v9 = *(_QWORD **)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *((unsigned __int16 *)v20 + 67)) + 18344LL);
      if ( *v9 != v23 )
        __fastfail(3u);
      *v20 = v23;
      v20[1] = (__int64)v9;
      *v9 = v20;
      *(_QWORD *)(v23 + 8) = v20;
      v11 = (__int64 **)v37;
    }
    v4 = v34;
    if ( v35 != 1 )
      goto LABEL_63;
LABEL_62:
    *(_BYTE *)(v4 + 21256) = 0;
LABEL_63:
    if ( v13 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (LOBYTE(v9) = PopHibernateInProgress, PopHibernateInProgress) )
        *v12 = 0;
      else
        LOBYTE(v9) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *v12 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      LOBYTE(v9) = v13;
      __writecr8(v13);
    }
    if ( v32 )
    {
      *(_QWORD *)(v32 + 8) = KeQueryUnbiasedInterruptTimePrecise(&v34) - *(_QWORD *)v32;
      *(_QWORD *)(v32 + 32) = *(_QWORD *)(v4 + 22464);
      v27 = *(_QWORD *)(v4 + 3408) + *(_QWORD *)(v4 + 3280);
      for ( i = v4 + 3648; i < v4 + 4176; v27 += v29 )
      {
        v29 = *(_QWORD *)(i + 16);
        i += 88LL;
      }
      *(_QWORD *)(v32 + 40) = v27;
      *(_QWORD *)(v32 + 56) = *(_QWORD *)(a2 + 16);
      LOWORD(v9) = *(unsigned __int8 *)(a2 + 24);
      *(_WORD *)(v32 + 144) = (_WORD)v9;
    }
    if ( stru_140E366D8.FirstArgument )
    {
      if ( *(_DWORD *)stru_140E366D8.FirstArgument )
      {
        if ( (*((_BYTE *)stru_140E366D8.FirstArgument + 16) & 1) != 0 )
        {
          v10 = *((_QWORD *)stru_140E366D8.FirstArgument + 3);
          LOBYTE(v9) = v10 & 1;
          if ( (v10 & 1) == v10 )
            goto LABEL_83;
        }
      }
    }
    return (char)v9;
  }
  LODWORD(v9) = _InterlockedExchange((volatile __int32 *)(v3 + 2580), 0);
  if ( (_DWORD)v9 )
  {
    v32 = 0LL;
    goto LABEL_14;
  }
  if ( stru_140E366D8.FirstArgument )
  {
    if ( *(_DWORD *)stru_140E366D8.FirstArgument )
    {
      LOBYTE(v9) = tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 1LL);
      if ( (_BYTE)v9 )
LABEL_83:
        LOBYTE(v9) = MiLogProcessWorkingSetsStop(v10, v4);
    }
  }
  return (char)v9;
}
