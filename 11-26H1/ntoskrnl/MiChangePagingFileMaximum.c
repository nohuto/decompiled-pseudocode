/*
 * XREFs of MiChangePagingFileMaximum @ 0x1406F88B0
 * Callers:
 *     MiAttemptChangePagingFileMaximum @ 0x1406F866C (MiAttemptChangePagingFileMaximum.c)
 *     MiTargetedPageFileReductionApc @ 0x14070D818 (MiTargetedPageFileReductionApc.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSetPfnContainingFrame @ 0x14033BC10 (MiSetPfnContainingFrame.c)
 *     RtlSetAllBits @ 0x1403F4780 (RtlSetAllBits.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14040A44C (MiDerefPageFileSpaceBitmaps.c)
 *     RtlCopyBitMap @ 0x140492FF0 (RtlCopyBitMap.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiChangePagingFileMaximum(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  volatile LONG *v6; // r12
  KIRQL v7; // al
  __int64 v8; // rbx
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // rdi
  unsigned int v11; // edx
  unsigned __int64 v12; // r15
  unsigned int v13; // eax
  unsigned __int64 v14; // rsi
  _QWORD *v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 i; // rcx
  __int128 v18; // xmm1
  int *v19; // rbx
  volatile LONG *v20; // rcx
  int v21; // edx
  __int64 v22; // rbx
  unsigned __int8 CurrentIrql; // bp
  int *v24[2]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v25; // [rsp+30h] [rbp-68h]
  __int64 v26; // [rsp+40h] [rbp-58h]
  KIRQL OldIrql; // [rsp+A0h] [rbp+8h]
  unsigned __int64 *v28; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v29; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v30; // [rsp+B8h] [rbp+20h]

  v29 = a3;
  RtlSetAllBits((PRTL_BITMAP)(a2 + 8));
  RtlSetAllBits((PRTL_BITMAP)(a2 + 24));
  v6 = (volatile LONG *)(a1 + 200);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v8 = *(_QWORD *)(a1 + 80);
  OldIrql = v7;
  if ( a3 )
  {
    v9 = (unsigned __int64 *)(((*(_QWORD *)(a1 + 184) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v28 = v9;
    v10 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = *(_DWORD *)(v8 + 8);
    v12 = (((unsigned int)dword_140E35F4C * (unsigned __int64)v11) >> 12)
        + ((((unsigned int)dword_140E35F4C * (unsigned __int64)v11) & 0xFFF) != 0);
    v13 = *(_DWORD *)(a2 + 8);
    v30 = v12;
    if ( v11 >= v13 )
      v14 = (((unsigned int)dword_140E35F4C * (unsigned __int64)v13) >> 12)
          + ((((unsigned int)dword_140E35F4C * (unsigned __int64)v13) & 0xFFF) != 0);
    else
      v14 = (((unsigned int)dword_140E35F4C * (unsigned __int64)v11) >> 12)
          + ((((unsigned int)dword_140E35F4C * (unsigned __int64)v11) & 0xFFF) != 0);
    if ( v14 )
    {
      v15 = (_QWORD *)v10;
      v16 = v14;
      do
      {
        *v15 = *(_QWORD *)((char *)v15 + (_QWORD)v9 - v10);
        ++v15;
        --v16;
      }
      while ( v16 );
    }
    for ( i = 0LL; i < v12; ++i )
      v9[i] = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  else
  {
    v9 = 0LL;
    LODWORD(v12) = 0;
    v10 = 0LL;
    v28 = 0LL;
    v30 = 0LL;
    v14 = 0LL;
  }
  RtlCopyBitMap((unsigned int *)(v8 + 8), a2 + 8, 0);
  RtlCopyBitMap((unsigned int *)(v8 + 24), a2 + 24, 0);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 8);
  v18 = *(_OWORD *)(v8 + 16);
  v24[1] = *(int **)(v8 + 8);
  v24[0] = (int *)v8;
  v26 = *(_QWORD *)(v8 + 32);
  v25 = v18;
  v19 = MiDerefPageFileSpaceBitmaps(a1, v24, 1);
  *(_QWORD *)(a1 + 80) = a2;
  v20 = (volatile LONG *)(a1 + 200);
  *(_QWORD *)(a1 + 184) = v29;
  if ( OldIrql == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v20);
  else
    ExReleaseSpinLockExclusive(v20, OldIrql);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v9 )
  {
    if ( v14 )
    {
      v21 = 0;
      do
      {
        if ( (*(_QWORD *)v10 & 1) != 0 )
        {
          v22 = 48 * ((*(_QWORD *)v10 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          if ( (*(_QWORD *)(v22 + 8) | 0x8000000000000000uLL) != v10 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql != 2 )
              __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v21) = 2;
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v21);
            }
            LODWORD(v29) = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v29);
              while ( *(__int64 *)(v22 + 24) < 0 );
            }
            ExAcquireSpinLockExclusiveAtDpcLevel(v6);
            if ( (*(_QWORD *)v10 & 1) != 0
              && v22 == 48 * ((*(_QWORD *)v10 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL
              && (*(_QWORD *)(v22 + 8) | 0x8000000000000000uLL) != v10 )
            {
              MiSetPfnContainingFrame(
                v22,
                (*(_QWORD *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL);
              *(_QWORD *)(v22 + 8) = v10;
            }
            ExReleaseSpinLockExclusiveFromDpcLevel(v6);
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( CurrentIrql < 2u )
            {
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
              __writecr8(CurrentIrql);
            }
            v21 = 0;
          }
        }
        v10 += 8LL;
        --v14;
      }
      while ( v14 );
      v9 = v28;
      LODWORD(v12) = v30;
    }
    MiReleasePtes((__int64)&stru_140E36558.WaitBlockList, v9, v12);
  }
}
