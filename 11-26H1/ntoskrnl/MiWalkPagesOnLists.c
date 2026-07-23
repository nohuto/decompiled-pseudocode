/*
 * XREFs of MiWalkPagesOnLists @ 0x140C0B898
 * Callers:
 *     MiMirrorBrownPhasePartition @ 0x14044341C (MiMirrorBrownPhasePartition.c)
 *     MiCreatePfnBitMaps @ 0x1408800DC (MiCreatePfnBitMaps.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402BF650 (MiUpdateLargePageCandidateValue.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiIsPfnFileOnly @ 0x1404595D0 (MiIsPfnFileOnly.c)
 *     MiMirrorAddPagesToBrownList @ 0x140485C4C (MiMirrorAddPagesToBrownList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiMirrorNodeFreeZeroPages @ 0x140BEF4D4 (MiMirrorNodeFreeZeroPages.c)
 */

__int64 __fastcall MiWalkPagesOnLists(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r14
  unsigned int v9; // ebp
  __int64 v10; // rsi
  volatile LONG *v11; // rdi
  unsigned __int8 v12; // si
  unsigned __int64 i; // rbx
  unsigned int j; // edi
  __int64 v15; // rbx
  unsigned __int8 v16; // si
  __int64 v17; // rbp
  unsigned __int64 k; // rbx
  __int64 result; // rax
  __int64 v20; // rsi
  unsigned __int8 CurrentIrql; // r12
  volatile LONG *v22; // r13
  unsigned __int64 v23; // rsi
  _QWORD *v24; // r14
  __int64 v25; // r8
  unsigned __int64 v26; // rdi
  unsigned int v27; // eax
  unsigned __int64 v28; // rdi
  volatile LONG *v29; // [rsp+40h] [rbp-38h]

  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = 16LL;
  if ( a3 <= 4LL )
  {
    v9 = a5;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(v6 + 8 * v5 + 7520);
          if ( v5 > 1 )
            break;
          MiMirrorNodeFreeZeroPages(v7, v6, 1);
          v5 = 2LL;
        }
        if ( v5 != 2 )
          break;
        v20 = 88LL * v9 + 3648;
LABEL_36:
        v10 = v6 + v20;
LABEL_37:
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(a2) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
        }
        v22 = (volatile LONG *)(v10 + 32);
        v29 = (volatile LONG *)(v10 + 32);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 32));
        v23 = *(_QWORD *)v10;
        if ( v23 != 0x3FFFFFFFFFLL )
        {
          do
          {
            v24 = (_QWORD *)(48 * v23 - 0x220000000000LL);
            if ( !(unsigned int)MiIsPfnFileOnly((__int64)v24) )
            {
              if ( v5 == 2 && MiIsDecayPfn(v23) )
              {
                v26 = v24[2];
                if ( qword_140E2D8C0 && (v26 & 0x10) == 0 )
                  v26 &= qword_140E2D8C8;
                v28 = (v26 >> 12) & 0xFFFFFFFFFFLL;
                if ( v28 != v23 )
                {
                  do
                  {
                    if ( a1 )
                      MiMirrorAddPagesToBrownList(0, v28, 1uLL);
                    else
                      MiUpdateLargePageCandidateValue(v6, v28, 3, 3, 0LL);
                    v28 = *(_QWORD *)(48 * v28 - 0x220000000000LL) & 0xFFFFFFFFFFLL;
                  }
                  while ( v28 != v23 );
                  v24 = (_QWORD *)(48 * v23 - 0x220000000000LL);
                  v25 = 0x3FFFFFFFFFLL;
                }
              }
              else
              {
                if ( a1 )
                  MiMirrorAddPagesToBrownList(0, v23, 1uLL);
                else
                  MiUpdateLargePageCandidateValue(v6, v23, 3, 3, 0LL);
                v25 = 0x3FFFFFFFFFLL;
              }
            }
            v23 = *v24 & 0xFFFFFFFFFFLL;
          }
          while ( v23 != v25 );
          v9 = a5;
          v8 = 16LL;
          v22 = v29;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v22);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        if ( v5 == 2 )
        {
          v27 = v9;
          v5 = (v9++ == 7) + 1LL;
          if ( v27 == 7 )
            v9 = 0;
          a5 = v9;
LABEL_53:
          v7 = a1;
          goto LABEL_7;
        }
        if ( v5 != 3 )
          goto LABEL_53;
        a5 = ++v9;
        if ( v9 == 16 )
          goto LABEL_53;
        v7 = a1;
        v5 = 3LL;
      }
      if ( v5 != 3 )
        goto LABEL_37;
      if ( *(_QWORD *)(v10 + 16) != *(_QWORD *)(v6 + 23456) )
      {
        v20 = 88LL * v9 + 6016;
        goto LABEL_36;
      }
LABEL_7:
      ++v5;
    }
    while ( v5 <= 4 );
  }
  v11 = (volatile LONG *)(v6 + 4640);
  do
  {
    v12 = KeGetCurrentIrql();
    if ( v12 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(v12, a2);
    }
    ExAcquireSpinLockExclusiveAtDpcLevel(v11);
    for ( i = *((_QWORD *)v11 - 4); i != 0x3FFFFFFFFFLL; i = *(_QWORD *)(48 * i - 0x220000000000LL) & 0xFFFFFFFFFFLL )
    {
      if ( v7 )
        MiMirrorAddPagesToBrownList(0, i, 1uLL);
      else
        MiUpdateLargePageCandidateValue(v6, i, 3, 3, 0LL);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    __writecr8(v12);
    v11 += 22;
    --v8;
  }
  while ( v8 );
  for ( j = 0; j < 2; ++j )
  {
    v15 = j != 0 ? 0x80 : 0;
    v16 = KeGetCurrentIrql();
    if ( v16 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(v16, a2);
    }
    v17 = v15 + v6;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + v6 + 4384));
    for ( k = *(_QWORD *)(v15 + v6 + 4352); k != 0x3FFFFFFFFFLL; k = *(_QWORD *)(48 * k - 0x220000000000LL) & 0xFFFFFFFFFFLL )
    {
      if ( v7 )
        MiMirrorAddPagesToBrownList(0, k, 1uLL);
      else
        MiUpdateLargePageCandidateValue(v6, k, 3, 3, 0LL);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 4384));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
    result = v16;
    __writecr8(v16);
  }
  return result;
}
