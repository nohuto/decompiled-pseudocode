/*
 * XREFs of MiCreateFileOnlyImageFixupExtents @ 0x140507310
 * Callers:
 *     MiRelocateImage @ 0x1409CA7A4 (MiRelocateImage.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140200820 (RtlNumberOfSetBitsEx.c)
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiLockLeafPage @ 0x140298E10 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     RtlSetBitsEx @ 0x14036F510 (RtlSetBitsEx.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 *     MiPageHasRelocations @ 0x1409CF740 (MiPageHasRelocations.c)
 *     MiGetMaximumRelocationVpn @ 0x140A7D960 (MiGetMaximumRelocationVpn.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateFileOnlyImageFixupExtents(volatile LONG *a1, __int64 a2)
{
  __int64 v3; // rbx
  _DWORD *v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 *PoolMm; // rax
  __int64 *v8; // r14
  __int64 v9; // r8
  unsigned __int64 MaximumRelocationVpn; // r12
  __int64 *i; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbp
  unsigned int v14; // ebx
  unsigned __int8 v15; // r13
  unsigned __int64 v16; // r12
  __int64 v17; // r15
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  _QWORD *v23; // r8
  __int64 j; // r9
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  ULONG_PTR v27; // rbx
  __int64 v28; // rax
  ULONG_PTR v29; // rax
  __int64 v30; // r8
  ULONG_PTR v31; // rbp
  __int64 v32; // rbx
  KIRQL v33; // al
  volatile LONG *v34; // rcx
  __int64 v36; // [rsp+20h] [rbp-68h]
  __int64 v37; // [rsp+28h] [rbp-60h]
  __int64 *v38; // [rsp+30h] [rbp-58h]
  __int64 v39; // [rsp+38h] [rbp-50h]
  unsigned __int64 v40; // [rsp+40h] [rbp-48h]
  unsigned __int8 v42; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v43; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)a1;
  v40 = *((_QWORD *)a1 + 12) & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = 0LL;
  v6 = *(unsigned int *)(*(_QWORD *)a1 + 8LL);
  PoolMm = (__int64 *)ExAllocatePoolMm(
                        64LL,
                        8 * ((v6 >> 6) + ((v6 & 0x3F) != 0) + 2LL),
                        1833068877,
                        KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v38 = PoolMm;
  v8 = PoolMm;
  if ( !PoolMm )
    return (unsigned int)-1073741670;
  *PoolMm = v6;
  PoolMm[1] = (__int64)(PoolMm + 2);
  v36 = *(_QWORD *)(v3 + 64);
  MaximumRelocationVpn = (unsigned int)MiGetMaximumRelocationVpn(a2, 1LL);
  for ( i = (__int64 *)(a1 + 32); i; i = (__int64 *)i[2] )
  {
    v12 = (i[1] - v9) >> 3;
    v13 = v12 + *((unsigned int *)i + 11);
    if ( (i[4] & 0x20000) != 0 )
    {
      if ( (a1[14] & 8) == 0 || (a1[14] & 0x20) == 0 )
      {
        RtlSetBitsEx((__int64)v8, v12, *((unsigned int *)i + 11));
LABEL_12:
        v9 = v36;
        continue;
      }
    }
    else if ( v12 < MaximumRelocationVpn && v12 < v13 )
    {
      do
      {
        if ( (unsigned int)MiPageHasRelocations(a2, v12, 1LL) )
          *(_BYTE *)((v12 >> 3) + v8[1]) |= 1 << (v12 & 7);
        ++v12;
      }
      while ( v12 < v13 );
      goto LABEL_12;
    }
  }
  v39 = RtlNumberOfSetBitsEx(v8);
  if ( !v39 )
    goto LABEL_51;
  v5 = (_DWORD *)ExAllocatePoolMm(
                   64LL,
                   8 * v39 + 8,
                   1884449101,
                   KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  if ( !v5 )
  {
    v14 = -1073741670;
    goto LABEL_52;
  }
  v15 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v42 = 0;
  v18 = 0LL;
LABEL_19:
  do
  {
    v19 = *v8;
    v37 = v8[1];
    v20 = v18 & -(__int64)(v18 < *v8);
    v21 = *v8 - 1;
    while ( 1 )
    {
      LODWORD(v43) = 0;
      if ( v21 - v20 == -1LL )
        goto LABEL_21;
      v23 = (_QWORD *)(v37 + 8 * (v20 >> 6));
      for ( j = ~*v23 | ((1LL << v20) - 1); j == -1; j = ~*v23 )
      {
        if ( (unsigned __int64)++v23 > v37 + 8 * (v21 >> 6) )
          goto LABEL_21;
      }
      _BitScanForward64(&v25, ~j);
      v22 = (((__int64)v23 - v37) >> 3 << 6) + v25;
      if ( v22 > v21 )
      {
LABEL_21:
        v22 = -1LL;
      }
      else
      {
        v43 = v22;
        if ( v22 != -1LL )
          break;
      }
      if ( !v20 )
        break;
      v26 = v18 + 1;
      if ( v18 + 1 > v19 )
        v26 = v19;
      v21 = v26 - 1;
      v20 = 0LL;
    }
    v8 = v38;
    if ( v22 < v18 || v22 == 0xFFFFFFFF )
      break;
    *(_BYTE *)((v22 >> 3) + v37) &= ~(1 << (v22 & 7));
    v43 = v22 + 1;
    v27 = v36 + 8 * v22;
    if ( v17 )
    {
      if ( v16 == (v27 & 0xFFFFFFFFFFFFF000uLL) )
        goto LABEL_39;
      MiUnlockProtoPoolPage(v17, v15);
      v16 = v27 & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
      v16 = v27 & 0xFFFFFFFFFFFFF000uLL;
    }
    v28 = MiLockProtoPoolPageForce(v27, &v42);
    v15 = v42;
    v17 = v28;
LABEL_39:
    v29 = MiLockLeafPage((unsigned __int64 *)v27, 0);
    v31 = v29;
    if ( v29 )
    {
      v32 = v29;
      MiRestoreTransitionPte(v29, 0, v30);
      *(_DWORD *)(v31 + 32) |= 0x70000u;
      *(_DWORD *)(v31 + 32) = *(_DWORD *)(v31 + 32) & 0xFFFF0000 | 1;
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v18 = v43;
      if ( (*(_QWORD *)v27 & 0x400LL) == 0 )
        goto LABEL_19;
      v32 = v27 | 1;
    }
    v18 = v43;
    *(_QWORD *)&v5[2 * (*v5)++ + 2] = v32;
    *(_BYTE *)((v22 >> 3) + v38[1]) |= 1 << (v22 & 7);
  }
  while ( *v5 != v39 );
  if ( v17 )
    MiUnlockProtoPoolPage(v17, v15);
  if ( *v5 )
  {
    v33 = ExAcquireSpinLockExclusive(a1 + 18);
    *(_QWORD *)(v40 + 48) = v5;
    v34 = a1 + 18;
    if ( v33 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v34);
    else
      ExReleaseSpinLockExclusive(v34, v33);
    v5 = 0LL;
  }
LABEL_51:
  v14 = 0;
LABEL_52:
  ExFreePoolWithTag(v8, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v14;
}
