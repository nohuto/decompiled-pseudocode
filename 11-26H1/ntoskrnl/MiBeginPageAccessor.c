/*
 * XREFs of MiBeginPageAccessor @ 0x1403C4E34
 * Callers:
 *     MiSetPageZeroInProgress @ 0x1403C4C00 (MiSetPageZeroInProgress.c)
 *     MiGetSingleHugeRangeToZero @ 0x1404F2E34 (MiGetSingleHugeRangeToZero.c)
 *     MiAcquireScrubProtection @ 0x14070BC8C (MiAcquireScrubProtection.c)
 * Callees:
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiGetPfnPageSizeIndex @ 0x14028B290 (MiGetPfnPageSizeIndex.c)
 *     MiFreeListPageContentsChanged @ 0x14028DB50 (MiFreeListPageContentsChanged.c)
 *     MiFreeZeroPageToColorHead @ 0x14028DDE0 (MiFreeZeroPageToColorHead.c)
 *     MiSimpleUnlinkPageEx @ 0x14028E170 (MiSimpleUnlinkPageEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x14030CA60 (RtlAvlInsertNodeEx.c)
 *     MiSimpleInsertPage @ 0x1403C5100 (MiSimpleInsertPage.c)
 *     MiHugePfnPartition @ 0x14048E180 (MiHugePfnPartition.c)
 *     MiCanBeginHugeIoPageAccessor @ 0x14052EEFC (MiCanBeginHugeIoPageAccessor.c)
 */

__int64 __fastcall MiBeginPageAccessor(unsigned __int64 a1, unsigned int a2, __int64 a3, int a4)
{
  bool v4; // si
  __int64 v5; // r12
  ULONG_PTR v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int PfnPageSizeIndex; // edi
  __int64 v15; // r8
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // r8
  signed __int64 v19; // rax
  unsigned __int64 v20; // rcx
  signed __int64 v21; // rtt
  struct _KTHREAD *CurrentThread; // rdi
  __int64 CanBeginHugeIoPageAccessor; // rax
  __int64 v25; // rdi
  __int64 v26; // r8
  volatile LONG *v27; // rbx
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  __int64 *v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // [rsp+50h] [rbp+8h]

  v4 = 0;
  v5 = a2;
  if ( a4 != 1 )
  {
    if ( (*(_BYTE *)(a3 + 34) & 8) == 0 )
    {
      v9 = (a3 + 0x220000000000LL) / 48;
      v32 = v9;
      v10 = 56320LL * (unsigned int)MiPageToNode(v9)
          + *(_QWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(a3 + 40) >> 43) & 0x3FFLL)) + 16LL);
      v11 = MiFreeZeroPageToColorHead(v9);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 32));
      MiFreeListPageContentsChanged(v9, v11);
      v12 = *(_QWORD *)(a3 + 16);
      v13 = ((v9 & 0x3FFFFFFFFFLL) << 12) | 0x18;
      if ( qword_140E2D740 && (v12 & 0x10) == 0 )
        HIDWORD(v12) &= HIDWORD(qword_140E2D748);
      if ( HIDWORD(v12) == -3 )
        v13 |= 4uLL;
      *(_DWORD *)(a3 + 32) |= 0x80000u;
      *(_QWORD *)(a3 + 16) = a1;
      if ( (*(_QWORD *)a3 & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFFLL )
      {
        PfnPageSizeIndex = MiGetPfnPageSizeIndex(a3);
        if ( PfnPageSizeIndex == 3 )
        {
          v15 = 14104LL;
        }
        else
        {
          PfnPageSizeIndex = 1;
          v15 = 14112LL;
        }
        v16 = *(_QWORD *)(v15 + v10);
        do
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v15 + v10),
                  (v16 + 1) ^ (v16 ^ (v16 + 1)) & 0xFFFFFFFFFFFF0000uLL,
                  v16);
        }
        while ( v17 != v16 );
        MiSimpleUnlinkPageEx(v11, v32);
        MiSimpleInsertPage(v11, v32, 0LL);
        v18 = PfnPageSizeIndex < 2 ? 8 : 0;
        v19 = *(_QWORD *)(v18 + v10 + 14104);
        do
        {
          v20 = (v19 - 1) ^ (v19 ^ (v19 - 1)) & 0xFFFFFFFFFFFF0000uLL;
          if ( (_WORD)v19 == 1 )
            v20 ^= (v20 ^ (v20 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
          v21 = v19;
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + v10 + 14104), v20, v19);
        }
        while ( v21 != v19 );
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 32));
      goto LABEL_18;
    }
    return 0LL;
  }
  CanBeginHugeIoPageAccessor = MiCanBeginHugeIoPageAccessor(a3);
  if ( (CanBeginHugeIoPageAccessor & 0x3FFFFF) == 0 )
    return 0LL;
  *(_BYTE *)(a1 + 68) = 1;
  v13 = ((unsigned __int64)(CanBeginHugeIoPageAccessor & 0x3FFFFF) << 12) | 0x18;
  v25 = MiHugePfnPartition(a3);
  v10 = *(_QWORD *)(v25 + 16) + 56320LL * (unsigned int)MiPageToNode(v26 << 18);
LABEL_18:
  _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(v10 + 14192) + 80LL), MiPageSizes[v5]);
  *(_DWORD *)(a1 + 64) = v5;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = CurrentThread;
  *(_QWORD *)(a1 + 24) = v13;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( *(_BYTE *)(a1 + 69) )
    return 1LL;
  if ( *(_BYTE *)(a1 + 70) )
  {
    v27 = &dword_140E2EA60;
  }
  else
  {
    if ( !a4 )
      return 1LL;
    v27 = &dword_140E2EA70;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(v27);
  *(_BYTE *)(a1 + 69) = 1;
  if ( *(_BYTE *)(a1 + 70) )
  {
    v28 = (_QWORD *)qword_140E2EA68;
    if ( qword_140E2EA68 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)CurrentThread >= v28[7] )
        {
          v31 = (_QWORD *)v28[1];
          if ( !v31 )
          {
            v4 = 1;
            break;
          }
        }
        else
        {
          v31 = (_QWORD *)*v28;
          if ( !*v28 )
            break;
        }
        v28 = v31;
      }
    }
    v30 = &qword_140E2EA68;
    goto LABEL_41;
  }
  v28 = (_QWORD *)qword_140E2EA78;
  if ( !qword_140E2EA78 )
    goto LABEL_33;
  while ( a1 < (unsigned __int64)v28 )
  {
    v29 = (_QWORD *)*v28;
    if ( !*v28 )
      goto LABEL_33;
LABEL_36:
    v28 = v29;
  }
  v29 = (_QWORD *)v28[1];
  if ( v29 )
    goto LABEL_36;
  v4 = 1;
LABEL_33:
  v30 = &qword_140E2EA78;
LABEL_41:
  RtlAvlInsertNodeEx((unsigned __int64 *)v30, (unsigned __int64)v28, v4, (_QWORD *)a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v27);
  return 1LL;
}
