/*
 * XREFs of MiAllocateBadPagesForMdl @ 0x140526C24
 * Callers:
 *     MiFindPagesForMdl @ 0x140339E68 (MiFindPagesForMdl.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUnlinkPageFromBadList @ 0x1402A9E2C (MiUnlinkPageFromBadList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiSetPfnRemovalRequested @ 0x1406F6A08 (MiSetPfnRemovalRequested.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall MiAllocateBadPagesForMdl(__int64 *a1, char a2)
{
  unsigned __int64 v2; // rbx
  PVOID *PoolMm; // rax
  PVOID *v5; // rcx
  PVOID *result; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  KIRQL v10; // al
  ULONG_PTR v11; // r15
  KIRQL v12; // r12
  __int64 v13; // r14
  __int64 v14; // r13
  volatile LONG *v15; // rcx
  __int64 v16; // rax
  unsigned __int64 DemandZeroPte; // rax
  PVOID **v18; // r8
  PVOID *v19; // rax
  volatile LONG *v20; // rcx
  PVOID v21; // rcx
  PVOID *v22; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]
  ULONG_PTR *v25; // [rsp+70h] [rbp+40h]
  __int64 v27; // [rsp+80h] [rbp+50h]

  v2 = 0LL;
  p_P = &P;
  P = &P;
  if ( a1[4] )
  {
    while ( 1 )
    {
      PoolMm = (PVOID *)ExAllocatePoolMm(
                          64LL,
                          0x20uLL,
                          1816291661,
                          KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
      if ( !PoolMm )
        break;
      v5 = p_P;
      if ( *p_P != &P )
        __fastfail(3u);
      PoolMm[1] = p_P;
      *PoolMm = &P;
      ++v2;
      *v5 = PoolMm;
      p_P = PoolMm;
      if ( v2 >= a1[4] )
        goto LABEL_8;
    }
    result = &P;
    if ( P == &P )
      return result;
  }
LABEL_8:
  v7 = a1[8];
  v8 = 0LL;
  v9 = *a1;
  v27 = v7;
  v25 = (ULONG_PTR *)(v7 + 8 * (((unsigned __int64)*(unsigned int *)(v7 + 40) >> 12) + 6));
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*a1 + 7456));
  v11 = *(_QWORD *)(v9 + 7424);
  v12 = v10;
  if ( v11 == 0x3FFFFFFFFFLL )
    goto LABEL_26;
  while ( 1 )
  {
    v13 = 48 * v11 - 0x220000000000LL;
    v14 = *(_QWORD *)v13 & 0xFFFFFFFFFFLL;
    if ( v11 >= a1[1] && v11 <= a1[2] && ((a2 & 2) == 0 || (unsigned int)MiPageToNode(v11) == *((_DWORD *)a1 + 15)) )
      break;
LABEL_24:
    v11 = v14;
    if ( v14 == 0x3FFFFFFFFFLL )
      goto LABEL_25;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    v15 = (volatile LONG *)(v9 + 7456);
    if ( v12 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v15);
    else
      ExReleaseSpinLockExclusive(v15, v12);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 7456));
    v14 = *(_QWORD *)(v9 + 7424);
    goto LABEL_24;
  }
  MiUnlinkPageFromBadList((__int64 *)(48 * v11 - 0x220000000000LL), 128);
  v16 = *(_QWORD *)(v13 + 16);
  if ( v16 )
    DemandZeroPte = v16 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
  else
    DemandZeroPte = MiMakeDemandZeroPte(4);
  v18 = (PVOID **)P;
  *(_QWORD *)(v13 + 16) = DemandZeroPte;
  *(_DWORD *)(v13 + 36) = 0;
  v19 = *v18;
  if ( v18[1] != &P || v19[1] != v18 )
LABEL_33:
    __fastfail(3u);
  P = *v18;
  v19[1] = &P;
  MiSetPfnRemovalRequested(48 * v11 - 0x220000000000LL, 1LL, v18);
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  ++v8;
  *v25++ = v11;
  if ( P == &P )
    goto LABEL_24;
LABEL_25:
  v7 = v27;
LABEL_26:
  v20 = (volatile LONG *)(v9 + 7456);
  if ( v12 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v20);
  else
    ExReleaseSpinLockExclusive(v20, v12);
  while ( 1 )
  {
    v21 = P;
    result = &P;
    if ( P == &P )
      break;
    v22 = *(PVOID **)P;
    if ( *((PVOID **)P + 1) != &P || v22[1] != P )
      goto LABEL_33;
    P = *(PVOID *)P;
    v22[1] = &P;
    ExFreePoolWithTag(v21, 0);
  }
  if ( v8 )
    _InterlockedAdd64((volatile signed __int64 *)(v9 + 17096), v8);
  *(_DWORD *)(v7 + 40) += (_DWORD)v8 << 12;
  return result;
}
