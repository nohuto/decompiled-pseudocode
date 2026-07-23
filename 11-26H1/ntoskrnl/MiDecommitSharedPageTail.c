/*
 * XREFs of MiDecommitSharedPageTail @ 0x1402BDD20
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1402BC510 (MiDecommitFreePagesTail.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeCombineBlock @ 0x140311464 (MiFreeCombineBlock.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiDecrementCloneBlock @ 0x14036BFF0 (MiDecrementCloneBlock.c)
 *     MiCreateDecayPfn @ 0x14045A320 (MiCreateDecayPfn.c)
 *     MiBoostUnmapPfn @ 0x140491838 (MiBoostUnmapPfn.c)
 *     MiDecrementCloneBlockReference @ 0x1404A91C0 (MiDecrementCloneBlockReference.c)
 *     MiLogCombinedPteDelete @ 0x140709680 (MiLogCombinedPteDelete.c)
 */

char __fastcall MiDecommitSharedPageTail(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int16 v4; // di
  __int64 v5; // r9
  int v6; // ecx
  ULONG_PTR v7; // rsi
  unsigned int v8; // r12d
  ULONG_PTR v9; // r13
  _QWORD *v10; // r14
  __int64 v11; // rbp
  __int64 v12; // r8
  int v13; // r15d
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  struct _KEVENT *v16; // r12
  __int64 v17; // r15
  unsigned __int64 v18; // r9
  int v19; // r8d
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v21; // r11
  __int64 v22; // rcx
  int IsZero; // edi
  unsigned int v24; // r10d
  unsigned __int64 v25; // rcx
  BOOL v26; // eax
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rsi
  volatile signed __int32 *v30; // r8
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r11
  __int64 v35; // [rsp+30h] [rbp-68h]
  unsigned __int64 v36; // [rsp+38h] [rbp-60h]
  int v37; // [rsp+40h] [rbp-58h]
  __int64 v38; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v39; // [rsp+A8h] [rbp+10h]
  int v40; // [rsp+B0h] [rbp+18h]
  __int64 v41; // [rsp+B8h] [rbp+20h]

  v39 = a2;
  v38 = a1;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = (*(_DWORD *)(a1 + 100) >> 4) & 0xF;
  v40 = v6;
  v37 = v5;
  v35 = 48 * ((a3 >> 12) & 0xFFFFFFFFFFLL);
  v7 = v35 - 0x220000000000LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = v5 - 1024;
  v36 = (__int64)(a2 << 25) >> 16;
  v12 = *(_QWORD *)(v35 - 0x220000000000LL + 8);
  if ( v6 )
    v11 = 0LL;
  if ( v12 <= 0 || (*(_QWORD *)(v7 + 40) & 0x10000000000LL) != 0 )
  {
    v41 = 0LL;
    if ( !v6 && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL && *(_QWORD *)(v11 + 640) )
    {
      v9 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v11 + 1040) + 1280LL));
      v10 = *(_QWORD **)(v11 + 640);
      while ( v10 )
      {
        if ( v9 > v10[4] )
        {
          v10 = (_QWORD *)v10[1];
        }
        else
        {
          if ( v9 >= v10[3] )
            break;
          v10 = (_QWORD *)*v10;
        }
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v11 + 1040) + 1280LL));
    }
  }
  else
  {
    v12 |= 0x8000000000000000uLL;
    v41 = v12;
  }
  v13 = *(_DWORD *)(a1 + 116);
  v14 = 0x3FFFFFFFFFFFFFFFLL;
  if ( (v13 & 4) != 0
    && !*(_QWORD *)(a1 + 104)
    && (v4 & 0x42) == 0
    && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && (unsigned int)MiBoostUnmapPfn(v7) )
  {
    *(_QWORD *)(a1 + 104) = MiCreateDecayPfn();
  }
  *(_DWORD *)(a1 + 100) &= ~1u;
  v15 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14, a2, v12) )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  if ( (v13 & 0x91) == 0x81 && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
    if ( (v19 = *(_DWORD *)(v7 + 32), (*(_QWORD *)(v7 + 40) & 0x20000000000000LL) != 0)
      || (*(_DWORD *)(v7 + 32) & 0x8000000) != 0
      && (v7 < 0xFFFFDE0000000000uLL
       || v7 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
       || (unsigned int)MiIsDecayPfn(v35 / 48)
       || (v19 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v7) == 9)
      || (v19 & 0x7000000u) > 0x2000000 && (v19 & 0x7000000u) <= 0x5000000 )
    {
      if ( (*(_QWORD *)(v7 + 40) & 0x20000000000000LL) == 0 )
        *(_DWORD *)(v7 + 32) = *(_DWORD *)(v7 + 32) & 0xF8FFFFFF | 0x2000000;
    }
  }
  v16 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
  if ( (v4 & 0x40) != 0 || (v4 & 2) != 0 )
    v15 = MiCaptureDirtyBitToPfn(v7);
  v17 = v38;
  v18 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( (*(_DWORD *)(v38 + 112) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(v7 + 34) & 7) != 6 )
      goto LABEL_25;
    if ( v36 >= 0xFFFFF68000000000uLL && v36 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( !v40 )
      {
        LeafVa = MiGetLeafVa(v36);
        if ( LeafVa < v21 && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
          *(_DWORD *)(v17 + 100) |= 1u;
      }
      goto LABEL_24;
    }
    if ( v40 != 3 )
      goto LABEL_24;
  }
  else
  {
    if ( !v40 )
      goto LABEL_24;
    if ( v40 != 3
      && *(__int64 *)(v7 + 40) < 0
      && (*(_QWORD *)(v7 + 16) & 0x400LL) != 0
      && (v4 & 0x200) == 0LL
      && (*(_DWORD *)(*(_QWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16)) + 56LL) & 0x820) != 0x820 )
    {
      goto LABEL_35;
    }
  }
  ++*(_QWORD *)(*(_QWORD *)(v17 + 24) + 24LL);
LABEL_35:
  if ( (*(_DWORD *)(v7 + 32) & 0x8000000) != 0 )
    *(_BYTE *)(v7 + 35) = HIBYTE(*(_DWORD *)(v7 + 32)) & 0xF7;
LABEL_24:
  if ( (*(_BYTE *)(v7 + 34) & 7) != 6 )
LABEL_25:
    MiBadShareCount(v7);
  v22 = (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v7 + 24) = v22 ^ (v22 ^ *(_QWORD *)(v7 + 24)) & 0xC000000000000000uLL;
  if ( v22 )
  {
    IsZero = 2;
  }
  else
  {
    IsZero = MiPfnShareCountIsZero(v7);
    v18 = 0xFFFFF6FFFFFFFFFFuLL;
  }
  v24 = 4;
  if ( (*(_DWORD *)(v17 + 112) & 0x20) != 0 )
  {
    v25 = (__int64)(v39 << 25) >> 16;
    v26 = v25 >= 0xFFFFF68000000000uLL && v25 <= v18;
    if ( IsZero == 2 )
    {
      if ( v26 )
        *(_QWORD *)v7 &= ~1uLL;
    }
    else if ( IsZero == 3 )
    {
      v18 = *(unsigned int *)(v17 + 100);
      if ( (v18 & 1) == 0 )
      {
        if ( v26 )
        {
          if ( (v18 & 0xF0) == 0 )
          {
            v32 = MiGetLeafVa(v25);
            if ( v32 < v33 )
            {
              v18 = (unsigned int)v18 | 1;
              *(_DWORD *)(v17 + 100) = v18;
            }
          }
        }
      }
      if ( *(__int64 *)(v7 + 40) < 0 )
        IsZero = v24;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v27 = v41;
  if ( v41 )
  {
    v29 = v41 - 32;
    LODWORD(v38) = 0;
    v30 = *(volatile signed __int32 **)(((v41 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
    v31 = *(_QWORD *)v30;
    _InterlockedDecrement(v30 + 98);
    IsZero = MiDecrementCloneBlock(v31, v37, v27, 0, (__int64)&v38);
    if ( (_DWORD)v38 )
    {
      if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
        MiLogCombinedPteDelete(v41);
      MiFreeCombineBlock(v29, 1LL);
    }
    v24 = 4;
  }
  else if ( v10 )
  {
    IsZero = MiDecrementCloneBlockReference((ULONG_PTR)v10, v9);
    v24 = 4;
  }
  else if ( v40 && (v40 == 3 || (*(_DWORD *)(v17 + 112) & 0x20) == 0) && IsZero == 3 )
  {
    IsZero = v24;
  }
  LODWORD(v28) = *(_DWORD *)(v17 + 100);
  if ( (v28 & 1) != 0 )
  {
    LOBYTE(v28) = MiChargeCommit(v16, 1LL, v24, v18);
  }
  else if ( IsZero == 3 )
  {
    ++*(_QWORD *)(*(_QWORD *)(v17 + 24) + 8LL);
  }
  if ( v15 )
    LOBYTE(v28) = MiReleasePageFileInfo(v16, v15, 1LL);
  if ( IsZero == 5 )
  {
    v28 = *(_QWORD *)(v17 + 24);
    ++*(_QWORD *)(v28 + 16);
  }
  return v28;
}
