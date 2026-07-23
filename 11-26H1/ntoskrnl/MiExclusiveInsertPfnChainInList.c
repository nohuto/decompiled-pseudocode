/*
 * XREFs of MiExclusiveInsertPfnChainInList @ 0x1402AE1C8
 * Callers:
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 * Callees:
 *     MiSetPfnNodeFlinkHigh @ 0x1402AC310 (MiSetPfnNodeFlinkHigh.c)
 *     MiMarkLockedChainAsProtected @ 0x1402AD0B0 (MiMarkLockedChainAsProtected.c)
 *     MiSetPreviousStandbyPageSecondaryNoLockAsserts @ 0x1402AD100 (MiSetPreviousStandbyPageSecondaryNoLockAsserts.c)
 *     MiPfnToStandbyLookaside @ 0x1402ADD70 (MiPfnToStandbyLookaside.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 */

__int64 __fastcall MiExclusiveInsertPfnChainInList(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbp
  unsigned __int64 *v5; // r15
  __int64 v6; // r14
  __int64 result; // rax
  ULONG_PTR v8; // rcx
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-58h] BYREF
  __int128 v19; // [rsp+30h] [rbp-48h]
  __int128 v20; // [rsp+40h] [rbp-38h]
  unsigned __int64 v21; // [rsp+80h] [rbp+8h] BYREF

  v2 = a1[11];
  v4 = 48 * *a1 - 0x220000000000LL;
  v5 = (unsigned __int64 *)(48 * a1[1] - 0x220000000000LL);
  if ( v2 )
  {
    MiMarkLockedChainAsProtected(a1);
    v6 = 0x3FFFFFFFFFLL;
    v13 = *(_QWORD *)(v2 + 16);
    v14 = (v2 - v11) / 48;
    if ( qword_140E2D8C0 && (v13 & 0x10) == 0 )
      v13 &= qword_140E2D8C8;
    v15 = *(_QWORD *)(v2 + 40);
    *v5 = v14 ^ (v14 ^ *v5) & 0xFFFFFF0000000000uLL;
    *(_QWORD *)(v4 + 24) = v15 ^ (v15 ^ *(_QWORD *)(v4 + 24)) & 0xFFFFFF0000000000uLL;
    if ( (v12 & (v13 >> 12)) == v14 )
      *(_QWORD *)(v2 + 16) = MiMakeTransitionPte(*a1, 4LL);
    else
      *(_QWORD *)(v11 + 48 * (v12 & v15)) = *a1 ^ (*a1 ^ *(_QWORD *)(v11 + 48 * (v12 & v15))) & 0xFFFFFF0000000000uLL;
    result = MiSetPfnContainingFrame(v2, a1[1]);
  }
  else
  {
    v6 = a2[1];
    if ( v6 == 0x3FFFFFFFFFLL )
      *a2 = *a1;
    else
      *(_QWORD *)(48 * v6 - 0x220000000000LL) = *a1 ^ (*a1 ^ *(_QWORD *)(48 * v6 - 0x220000000000LL)) & 0xFFFFFF0000000000uLL;
    result = a1[1];
    a2[1] = result;
  }
  if ( *((_DWORD *)a1 + 7) == 2 )
  {
    v8 = *a1;
    LODWORD(v21) = 9;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    MiPfnToStandbyLookaside(v8, (int *)&v21, v2, (__int64 *)&v18);
    v9 = v19;
    v10 = *(_QWORD *)(v19 + 8);
    v21 = v10;
    if ( v10 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)v19 = *a1;
    }
    else
    {
      v16 = *a1;
      v17 = 48 * v10 - 0x220000000000LL;
      *(_QWORD *)v17 = *(_QWORD *)v17 & 0xFFFFFFFFFFLL | (*a1 << 40);
      *(_DWORD *)(v17 + 36) = *(_DWORD *)(v17 + 36) & 0x1FFFFF | ((unsigned int)(v16 >> 24) << 21);
      MiSetPfnNodeFlinkHigh(v17, v16 >> 35);
    }
    MiSetPreviousStandbyPageSecondaryNoLockAsserts(v4, v21, 0);
    *(_QWORD *)(v9 + 8) = a1[1];
    result = a1[2];
    if ( result == 1 )
      _InterlockedIncrement64((volatile signed __int64 *)(v9 + 16));
    else
      _InterlockedAdd64((volatile signed __int64 *)(v9 + 16), result);
  }
  if ( !v2 )
  {
    *v5 = *v5 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    result = v6 ^ (v6 ^ *(_QWORD *)(v4 + 24)) & 0xFFFFFF0000000000uLL;
    *(_QWORD *)(v4 + 24) = result;
  }
  return result;
}
