/*
 * XREFs of MiGetPerfectColorHeadPage @ 0x140288F90
 * Callers:
 *     MiGetBestPageFromNode @ 0x140287CB0 (MiGetBestPageFromNode.c)
 *     MiRemovePageAnyColor @ 0x140289560 (MiRemovePageAnyColor.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAddPageToHeatRanges @ 0x14048AFA8 (MiAddPageToHeatRanges.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetPerfectColorHeadPage(__int64 *a1)
{
  unsigned int *v1; // rax
  __int64 v2; // rbp
  unsigned int v3; // ebx
  __int64 v5; // r13
  unsigned __int64 v6; // rsi
  unsigned int v7; // edi
  unsigned int Cache; // eax
  __int64 v9; // r11
  __int64 v10; // r10
  __int64 v11; // r14
  ULONG_PTR v12; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int8 CurrentIrql; // r12
  unsigned int v17; // ebp
  volatile LONG *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // [rsp+20h] [rbp-E8h]
  int v22; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+30h] [rbp-D8h]
  _OWORD v24[9]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 retaddr; // [rsp+108h] [rbp+0h]

  v1 = (unsigned int *)a1[2];
  v2 = *a1;
  v3 = *((_DWORD *)a1 + 8);
  memset(v24, 0, sizeof(v24));
  v23 = v2;
  v5 = (int)*v1;
  v6 = *((unsigned int *)a1 + 7);
  v21 = *v1;
  v7 = HIWORD(*((_DWORD *)a1 + 7)) & 3;
  Cache = MiColorGetCache(*((_DWORD *)a1 + 7));
  v11 = *(_QWORD *)(v2 + 8 * (((unsigned __int64)v7 << 7) + ((v6 >> 18) & 3) + 3 * (v10 + 2 * (v5 + 2 * v9))) + 800)
      + 88LL * Cache;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 == 0x3FFFFFFFFFLL )
          return 0LL;
        v14 = 48 * v12 - 0x220000000000LL;
        v15 = v3 & 2;
        if ( (v3 & 2) != 0 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
            return 0LL;
          CurrentIrql = 17;
          v17 = v3 >> 4;
          goto LABEL_15;
        }
        if ( (v3 & 1) != 0 )
        {
          CurrentIrql = 17;
          break;
        }
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v15) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v15);
          LODWORD(v15) = v3 & 2;
        }
        if ( v12 <= qword_140E2D920 && (*(_QWORD *)(v14 + 40) & 0x40000000000000LL) != 0 )
          break;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
LABEL_54:
        __writecr8(CurrentIrql);
      }
      v17 = v3 >> 4;
      if ( (v3 & 0x440) != 0 )
      {
        v22 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v22);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
        LODWORD(v15) = v3 & 2;
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        if ( CurrentIrql != 17 )
          goto LABEL_10;
        return 0LL;
      }
LABEL_15:
      if ( (*(_BYTE *)(v14 + 34) & 7) == (_DWORD)v5
        && ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FF) == **(_WORD **)(v23 + 13896) )
      {
        break;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !(_DWORD)v15 && CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        goto LABEL_54;
      }
    }
    v18 = (volatile LONG *)(v11 + 32);
    if ( (((unsigned __int8)v3 | (unsigned __int8)v17) & 0x40) != 0 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v18);
    }
    else if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v18) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u && (v3 & 2) == 0 )
      {
LABEL_10:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      return 0LL;
    }
    if ( v12 == *(_QWORD *)v11 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 32));
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LODWORD(v5) = v21;
    if ( (v3 & 2) == 0 && CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      goto LABEL_54;
    }
  }
  if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v12) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v3 & 2) == 0 )
    {
      v19 = *((_DWORD *)a1 + 7);
      if ( (v19 & 0x30000) == 0x30000 && (v19 & 0xC0000) == 0x40000 && *(_QWORD *)v11 != 0x3FFFFFFFFFLL )
      {
        LODWORD(v24[0]) = 129;
        if ( (stru_140E366D8.WaitRegister.Flags & 1) != 0 )
        {
          v20 = *(_QWORD *)(v14 + 16);
          if ( qword_140E2D8C0 && (v20 & 0x10) == 0 )
            HIDWORD(v20) &= HIDWORD(qword_140E2D8C8);
          if ( HIDWORD(v20) == -3 && (unsigned int)MiAddPageToHeatRanges(v24, v12, 3LL) )
            MiIssuePageHeatList(v24);
        }
        MiReplenishPageSlist(v23, v21, *((unsigned int *)a1 + 7), v24);
        if ( DWORD1(v24[0]) )
          MiIssuePageHeatList(v24);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)(v11 + 32) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v11 + 32), retaddr);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return 48 * v12 - 0x220000000000LL;
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 32));
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v3 & 2) == 0 && CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return 2LL;
  }
}
