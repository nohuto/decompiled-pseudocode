/*
 * XREFs of MiUnlinkStandbyPfn @ 0x140456458
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlinkStandbyPfn(unsigned __int64 *a1, char a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // r8
  int v8; // r8d
  unsigned __int64 ValidPte; // rdi
  int v10; // ebx
  int v11; // r8d
  int v13; // r8d
  unsigned int v14; // r9d
  _DWORD *v15; // rax
  _DWORD *SubsectionFromPte; // rax
  int v17; // r10d

  v2 = *a1;
  if ( qword_140E2D8C0 )
  {
    if ( (v2 & 0x10) != 0 )
      v2 &= ~0x10uLL;
    else
      v2 &= qword_140E2D8C8;
  }
  v5 = (v2 >> 12) & 0xFFFFFFFFFFLL;
  v6 = 48 * v5 - 0x220000000000LL;
  if ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 )
    return 2LL;
  if ( (MiUnlinkPageFromListEx(48 * v5 - 0x220000000000LL, 0) & 3) != 0 )
  {
    MiDiscardTransitionPfnEx(48 * v5 - 0x220000000000LL, 0LL, v7);
    return 1LL;
  }
  else
  {
    *(_DWORD *)(v6 + 32) = (*(_DWORD *)(v6 + 32) + 1) ^ (*(_DWORD *)(v6 + 32) ^ (*(_DWORD *)(v6 + 32) + 1)) & 0xFFFF0000;
    *(_DWORD *)(v6 + 32) = *(_DWORD *)(v6 + 32) & 0xFFF8FFFF | 0x60000;
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(v6 + 24) & 0xC000000000000000uLL | 1;
    if ( (a2 & 2) != 0 )
    {
      if ( (v13 = *(_DWORD *)(v6 + 32), v14 = 0x2000000, (*(_QWORD *)(v6 + 40) & 0x20000000000000LL) != 0)
        || (*(_DWORD *)(v6 + 32) & 0x8000000) != 0
        && (v6 < 0xFFFFDE0000000000uLL
         || v6 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
         || MiIsDecayPfn(48 * v5 / 48)
         || (v13 & 0x70000) != v17 && (unsigned int)MiGetPfnSlabType(48 * v5 - 0x220000000000LL) == 9)
        || (v13 & 0x7000000u) > v14 )
      {
        if ( (*(_QWORD *)(v6 + 40) & 0x20000000000000LL) == 0 )
          *(_DWORD *)(v6 + 32) = v14 | *(_DWORD *)(v6 + 32) & 0xFAFFFFFF;
      }
    }
    v8 = (*(_DWORD *)(v6 + 16) >> 5) & 7;
    if ( (*(_DWORD *)(v6 + 32) & 0xC00000) != 0 )
    {
      if ( (*(_DWORD *)(v6 + 32) & 0xC00000) == 0x800000 )
        v8 |= 0x18u;
    }
    else
    {
      v8 |= 8u;
    }
    ValidPte = MiMakeValidPte(0LL, v5, v8);
    if ( (a2 & 4) == 0 || (*(_QWORD *)(v6 + 40) & 0x20000000000000LL) == 0 )
    {
      v10 = *(_DWORD *)(v6 + 32);
      v11 = 1024;
      if ( *(__int64 *)(v6 + 40) < 0 && (*(_QWORD *)(v6 + 16) & 0x400000000000400LL) == 0x400 )
      {
        SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v6 + 16));
        if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
          KeBugCheckEx(0x1Au, 0x8840uLL, v6, 0LL, 1uLL);
      }
      if ( *(__int64 *)(v6 + 40) < 0
        && (*(_DWORD *)(v6 + 16) & v11) != 0
        && (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) == 0 )
      {
        v15 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v6 + 16));
        if ( (*(_DWORD *)(*(_QWORD *)v15 + 56LL) & 0x20) == 0 && (v15[38] & 1) == 0 )
          MiSetSubsectionModified(v15, 0LL);
      }
      if ( (v10 & 0x80000) != 0
        && MiCanPfnOriginalPteBeLost(v6)
        && (v10 & 0x100000) == 0
        && (*(_BYTE *)(v6 + 16) & 8) != 0 )
      {
        *(_QWORD *)(v6 + 16) &= ~8uLL;
      }
      *(_DWORD *)(v6 + 32) = v10 | 0x100000;
      ValidPte |= 0x42uLL;
    }
    *a1 = ValidPte;
    return 0LL;
  }
}
