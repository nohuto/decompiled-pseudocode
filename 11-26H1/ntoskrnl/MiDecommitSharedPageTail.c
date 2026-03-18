/*
 * XREFs of MiDecommitSharedPageTail @ 0x1402DBF60
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1402DA750 (MiDecommitFreePagesTail.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x1402836C0 (MiGetSubsectionFromPte.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeCombineBlock @ 0x1402C67C4 (MiFreeCombineBlock.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiBadShareCount @ 0x1402DC710 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402DC770 (MiPfnShareCountIsZero.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiIsDecayPfn @ 0x1402F9850 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402FDC40 (MiGetPfnSlabType.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031AE30 (MiCaptureDirtyBitToPfn.c)
 *     MiGetLeafVa @ 0x140326060 (MiGetLeafVa.c)
 *     MiDecrementCloneBlock @ 0x14036A250 (MiDecrementCloneBlock.c)
 *     MiCreateDecayPfn @ 0x140461360 (MiCreateDecayPfn.c)
 *     MiBoostUnmapPfn @ 0x140497CE8 (MiBoostUnmapPfn.c)
 *     MiDecrementCloneBlockReference @ 0x1404AFB30 (MiDecrementCloneBlockReference.c)
 *     MiLogCombinedPteDelete @ 0x1407049B0 (MiLogCombinedPteDelete.c)
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
  unsigned __int64 v14; // rbx
  struct _KEVENT *v15; // r12
  __int64 v16; // r15
  unsigned __int64 v17; // r9
  int v18; // r8d
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v20; // r11
  __int64 v21; // rcx
  int IsZero; // edi
  unsigned int v23; // r10d
  unsigned __int64 v24; // rcx
  BOOL v25; // eax
  int v26; // edx
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  volatile signed __int32 *v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r11
  __int64 v34; // [rsp+30h] [rbp-68h]
  unsigned __int64 v35; // [rsp+38h] [rbp-60h]
  int v36; // [rsp+40h] [rbp-58h]
  __int64 v37; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v38; // [rsp+A8h] [rbp+10h]
  int v39; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v40; // [rsp+B8h] [rbp+20h]

  v38 = a2;
  v37 = a1;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = (*(_DWORD *)(a1 + 100) >> 4) & 0xF;
  v39 = v6;
  v36 = v5;
  v34 = 48 * ((a3 >> 12) & 0xFFFFFFFFFFLL);
  v7 = v34 - 0x220000000000LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = v5 - 1024;
  v35 = (__int64)(a2 << 25) >> 16;
  v12 = *(_QWORD *)(v34 - 0x220000000000LL + 8);
  if ( v6 )
    v11 = 0LL;
  if ( v12 <= 0 || (*(_QWORD *)(v7 + 40) & 0x10000000000LL) != 0 )
  {
    v40 = 0LL;
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
    v40 = v12 | 0x8000000000000000uLL;
  }
  v13 = *(_DWORD *)(a1 + 116);
  if ( (v13 & 4) != 0
    && !*(_QWORD *)(a1 + 104)
    && (v4 & 0x42) == 0
    && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && (unsigned int)MiBoostUnmapPfn(v7) )
  {
    *(_QWORD *)(a1 + 104) = MiCreateDecayPfn();
  }
  *(_DWORD *)(a1 + 100) &= ~1u;
  v14 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
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
    if ( (v18 = *(_DWORD *)(v7 + 32), (*(_QWORD *)(v7 + 40) & 0x20000000000000LL) != 0)
      || (*(_DWORD *)(v7 + 32) & 0x8000000) != 0
      && (v7 < 0xFFFFDE0000000000uLL
       || v7 >= 48 * qword_140E2D7A0 - 0x21FFFFFFFFD0LL
       || (unsigned int)MiIsDecayPfn(v34 / 48)
       || (v18 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v7) == 9)
      || (v18 & 0x7000000u) > 0x2000000 && (v18 & 0x7000000u) <= 0x5000000 )
    {
      if ( (*(_QWORD *)(v7 + 40) & 0x20000000000000LL) == 0 )
        *(_DWORD *)(v7 + 32) = *(_DWORD *)(v7 + 32) & 0xF8FFFFFF | 0x2000000;
    }
  }
  v15 = *(struct _KEVENT **)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
  if ( (v4 & 0x40) != 0 || (v4 & 2) != 0 )
    v14 = MiCaptureDirtyBitToPfn(v7);
  v16 = v37;
  v17 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( (*(_DWORD *)(v37 + 112) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(v7 + 34) & 7) != 6 )
      goto LABEL_25;
    if ( v35 >= 0xFFFFF68000000000uLL && v35 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( !v39 )
      {
        LeafVa = MiGetLeafVa(v35);
        if ( LeafVa < v20 && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
          *(_DWORD *)(v16 + 100) |= 1u;
      }
      goto LABEL_24;
    }
    if ( v39 != 3 )
      goto LABEL_24;
  }
  else
  {
    if ( !v39 )
      goto LABEL_24;
    if ( v39 != 3
      && *(__int64 *)(v7 + 40) < 0
      && (*(_QWORD *)(v7 + 16) & 0x400LL) != 0
      && (v4 & 0x200) == 0LL
      && (*(_DWORD *)(*(_QWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16)) + 56LL) & 0x820) != 0x820 )
    {
      goto LABEL_35;
    }
  }
  ++*(_QWORD *)(*(_QWORD *)(v16 + 24) + 24LL);
LABEL_35:
  if ( (*(_DWORD *)(v7 + 32) & 0x8000000) != 0 )
    *(_BYTE *)(v7 + 35) = HIBYTE(*(_DWORD *)(v7 + 32)) & 0xF7;
LABEL_24:
  if ( (*(_BYTE *)(v7 + 34) & 7) != 6 )
LABEL_25:
    MiBadShareCount(v7);
  v21 = (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v7 + 24) = v21 ^ (v21 ^ *(_QWORD *)(v7 + 24)) & 0xC000000000000000uLL;
  if ( v21 )
  {
    IsZero = 2;
  }
  else
  {
    IsZero = MiPfnShareCountIsZero(v7);
    v17 = 0xFFFFF6FFFFFFFFFFuLL;
  }
  v23 = 4;
  if ( (*(_DWORD *)(v16 + 112) & 0x20) != 0 )
  {
    v24 = (__int64)(v38 << 25) >> 16;
    v25 = v24 >= 0xFFFFF68000000000uLL && v24 <= v17;
    if ( IsZero == 2 )
    {
      if ( v25 )
        *(_QWORD *)v7 &= ~1uLL;
    }
    else if ( IsZero == 3 )
    {
      v17 = *(unsigned int *)(v16 + 100);
      if ( (v17 & 1) == 0 )
      {
        if ( v25 )
        {
          if ( (v17 & 0xF0) == 0 )
          {
            v31 = MiGetLeafVa(v24);
            if ( v31 < v32 )
            {
              v17 = (unsigned int)v17 | 1;
              *(_DWORD *)(v16 + 100) = v17;
            }
          }
        }
      }
      if ( *(__int64 *)(v7 + 40) < 0 )
        IsZero = v23;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v26 = v40;
  if ( v40 )
  {
    v28 = v40 - 32;
    LODWORD(v37) = 0;
    v29 = *(volatile signed __int32 **)(((v40 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
    v30 = *(_QWORD *)v29;
    _InterlockedDecrement(v29 + 98);
    IsZero = MiDecrementCloneBlock(v30, v36, v26, 0, (__int64)&v37);
    if ( (_DWORD)v37 )
    {
      if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
        MiLogCombinedPteDelete(v40);
      MiFreeCombineBlock(v28, 1);
    }
    v23 = 4;
  }
  else if ( v10 )
  {
    IsZero = MiDecrementCloneBlockReference((ULONG_PTR)v10, v9);
    v23 = 4;
  }
  else if ( v39 && (v39 == 3 || (*(_DWORD *)(v16 + 112) & 0x20) == 0) && IsZero == 3 )
  {
    IsZero = v23;
  }
  LODWORD(v27) = *(_DWORD *)(v16 + 100);
  if ( (v27 & 1) != 0 )
  {
    LOBYTE(v27) = MiChargeCommit(v15, 1LL, v23, v17);
  }
  else if ( IsZero == 3 )
  {
    ++*(_QWORD *)(*(_QWORD *)(v16 + 24) + 8LL);
  }
  if ( v14 )
    LOBYTE(v27) = MiReleasePageFileInfo(v15, v14, 1);
  if ( IsZero == 5 )
  {
    v27 = *(_QWORD *)(v16 + 24);
    ++*(_QWORD *)(v27 + 16);
  }
  return v27;
}
