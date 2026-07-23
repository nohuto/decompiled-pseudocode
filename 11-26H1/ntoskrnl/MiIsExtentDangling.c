/*
 * XREFs of MiIsExtentDangling @ 0x1406FF400
 * Callers:
 *     FsRtlIsExtentDangling @ 0x140792A30 (FsRtlIsExtentDangling.c)
 *     MiAddPhysicalMemory @ 0x14086B3FC (MiAddPhysicalMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiIsFileOnlyPfnImpendingRemoval @ 0x1406FF600 (MiIsFileOnlyPfnImpendingRemoval.c)
 *     MiLockFileExtentsShared @ 0x14087380C (MiLockFileExtentsShared.c)
 *     MiUnlockFileExtentsShared @ 0x14087388C (MiUnlockFileExtentsShared.c)
 */

ULONG_PTR __fastcall MiIsExtentDangling(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rbp
  int v4; // r13d
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  ULONG_PTR v7; // rdi
  _QWORD *v8; // r12
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  unsigned __int64 v11; // r14
  int IsFileOnlyPfnImpendingRemoval; // r15d
  __int64 v13; // r14
  __int64 v14; // r15
  _QWORD *v15; // rcx
  unsigned __int8 *p_WaitType; // r8
  _QWORD *v17; // rdx
  unsigned __int64 v18; // r10
  _QWORD *v19; // rax
  __int64 i; // rcx

  v3 = a1 + a2;
  v4 = a3;
  v5 = a1;
  v6 = 48 * a1 - 0x220000000000LL;
  v7 = a1;
  v8 = (_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL);
  v9 = 0x20000000000000LL;
  while ( v7 < v3 )
  {
    if ( v7 <= qword_140E2D920 && ((*v8 >> 54) & 1) != 0 && (*(_QWORD *)(v6 + 40) & 0x20000000000000LL) != 0 )
    {
      if ( v4 )
        goto LABEL_17;
      v10 = MiSafeLockPage(v7, a2, a3);
      v11 = v10;
      if ( v10 != 17 )
      {
        IsFileOnlyPfnImpendingRemoval = 1;
        if ( _bittest64((const signed __int64 *)(v6 + 40), 0x35u) )
          IsFileOnlyPfnImpendingRemoval = MiIsFileOnlyPfnImpendingRemoval(v6);
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned __int8)v11 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
          __writecr8(v11);
        }
        if ( !IsFileOnlyPfnImpendingRemoval )
        {
LABEL_17:
          v3 = v7;
          v13 = v7 - v5;
          goto LABEL_19;
        }
      }
      v9 = 0x20000000000000LL;
    }
    ++v7;
    v8 += 6;
    v6 += 48LL;
  }
  v13 = a2;
LABEL_19:
  v14 = 2LL;
  if ( (v4 & 2) == 0 )
  {
    MiLockFileExtentsShared(v9);
    p_WaitType = &stru_140E2D2D0.WaitBlock[3].WaitType;
    do
    {
      v17 = *(_QWORD **)p_WaitType;
      v18 = v5;
      if ( *(_QWORD *)p_WaitType )
      {
        do
        {
          v15 = (_QWORD *)v17[4];
          if ( v13 + v5 <= (unsigned __int64)v15 )
          {
            v17 = (_QWORD *)*v17;
          }
          else
          {
            v15 = (_QWORD *)((char *)v15 + v17[5]);
            if ( v5 < (unsigned __int64)v15 )
              break;
            v17 = (_QWORD *)v17[1];
          }
        }
        while ( v17 );
        if ( v17 )
        {
          while ( 1 )
          {
            v15 = (_QWORD *)*v17;
            v19 = v17;
            if ( *v17 )
            {
              for ( ; v15[1]; v15 = (_QWORD *)v15[1] )
                ;
            }
            else
            {
              for ( i = v17[2]; ; i = v15[2] )
              {
                v15 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !v15 || (_QWORD *)v15[1] == v19 )
                  break;
                v19 = v15;
              }
            }
            if ( !v15 || v15[4] + v15[5] <= v5 )
              break;
            v17 = v15;
          }
          v5 = v17[4];
          if ( v18 >= v5 )
            v5 = v18;
          if ( v3 > v5 )
            v3 = v5;
        }
      }
      p_WaitType += 8;
      --v14;
    }
    while ( v14 );
    MiUnlockFileExtentsShared(v15, v17, p_WaitType);
  }
  return v3;
}
