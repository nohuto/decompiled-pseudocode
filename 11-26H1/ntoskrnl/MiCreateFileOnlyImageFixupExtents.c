/*
 * XREFs of MiCreateFileOnlyImageFixupExtents @ 0x140500CE0
 * Callers:
 *     MiRelocateImage @ 0x14099B784 (MiRelocateImage.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140200820 (RtlNumberOfSetBitsEx.c)
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 *     MiPageHasRelocations @ 0x1409A0720 (MiPageHasRelocations.c)
 *     MiGetMaximumRelocationVpn @ 0x140A837D0 (MiGetMaximumRelocationVpn.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  _QWORD *v20; // r8
  bool v21; // cf
  _QWORD *v22; // r14
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  __int64 j; // r9
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  ULONG_PTR v30; // rbx
  __int64 v31; // rax
  ULONG_PTR v32; // rax
  ULONG_PTR v33; // rbp
  __int64 v34; // rbx
  KIRQL v35; // al
  volatile LONG *v36; // rcx
  __int64 v38; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+28h] [rbp-60h]
  __int64 *v40; // [rsp+30h] [rbp-58h]
  __int64 v41; // [rsp+38h] [rbp-50h]
  unsigned __int64 v42; // [rsp+40h] [rbp-48h]
  unsigned __int8 v44; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v45; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)a1;
  v42 = *((_QWORD *)a1 + 12) & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = 0LL;
  v6 = *(unsigned int *)(*(_QWORD *)a1 + 8LL);
  PoolMm = (__int64 *)ExAllocatePoolMm(
                        64LL,
                        8 * ((v6 >> 6) + ((v6 & 0x3F) != 0) + 2LL),
                        1833068877,
                        KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v40 = PoolMm;
  v8 = PoolMm;
  if ( !PoolMm )
    return (unsigned int)-1073741670;
  *PoolMm = v6;
  PoolMm[1] = (__int64)(PoolMm + 2);
  v38 = *(_QWORD *)(v3 + 64);
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
        v9 = v38;
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
  v41 = RtlNumberOfSetBitsEx(v8);
  if ( !v41 )
    goto LABEL_51;
  v5 = (_DWORD *)ExAllocatePoolMm(
                   64LL,
                   8 * v41 + 8,
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
  v44 = 0;
  v18 = 0LL;
LABEL_19:
  do
  {
    v19 = *v8;
    v20 = (_QWORD *)v8[1];
    v21 = v18 < *v8;
    v39 = (__int64)v20;
    v22 = v20;
    v23 = v18 & -(__int64)v21;
    v24 = v19 - 1;
    while ( 1 )
    {
      LODWORD(v45) = 0;
      if ( v24 - v23 == -1LL )
        goto LABEL_21;
      v20 = &v22[v23 >> 6];
      for ( j = ~*v20 | ((1LL << v23) - 1); j == -1; j = ~*v20 )
      {
        if ( ++v20 > &v22[v24 >> 6] )
          goto LABEL_21;
      }
      _BitScanForward64(&v27, ~j);
      v20 = (_QWORD *)((v20 - v22) << 6);
      v25 = (unsigned __int64)v20 + v27;
      if ( v25 > v24 )
      {
LABEL_21:
        v25 = -1LL;
      }
      else
      {
        v45 = v25;
        if ( v25 != -1LL )
          break;
      }
      if ( !v23 )
        break;
      v28 = v18 + 1;
      if ( v18 + 1 > v19 )
        v28 = v19;
      v24 = v28 - 1;
      v23 = 0LL;
    }
    v8 = v40;
    if ( v25 < v18 || v25 == 0xFFFFFFFF )
      break;
    v29 = v25 >> 3;
    *(_BYTE *)((v25 >> 3) + v39) &= ~(1 << (v25 & 7));
    v45 = v25 + 1;
    v30 = v38 + 8 * v25;
    if ( v17 )
    {
      if ( v16 == (v30 & 0xFFFFFFFFFFFFF000uLL) )
        goto LABEL_39;
      LOBYTE(v29) = v15;
      MiUnlockProtoPoolPage(v17, v29, v39);
      v16 = v30 & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
      v16 = v30 & 0xFFFFFFFFFFFFF000uLL;
    }
    v31 = MiLockProtoPoolPageForce(v30, &v44);
    v15 = v44;
    v17 = v31;
LABEL_39:
    v32 = MiLockLeafPage((unsigned __int64 *)v30, 0);
    v33 = v32;
    if ( v32 )
    {
      v34 = v32;
      MiRestoreTransitionPte(v32, 0, (__int64)v20);
      *(_DWORD *)(v33 + 32) |= 0x70000u;
      *(_DWORD *)(v33 + 32) = *(_DWORD *)(v33 + 32) & 0xFFFF0000 | 1;
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v18 = v45;
      if ( (*(_QWORD *)v30 & 0x400LL) == 0 )
        goto LABEL_19;
      v34 = v30 | 1;
    }
    v18 = v45;
    v24 = v25 >> 3;
    *(_QWORD *)&v5[2 * (*v5)++ + 2] = v34;
    *(_BYTE *)((v25 >> 3) + v40[1]) |= 1 << (v25 & 7);
  }
  while ( *v5 != v41 );
  if ( v17 )
  {
    LOBYTE(v24) = v15;
    MiUnlockProtoPoolPage(v17, v24, (__int64)v20);
  }
  if ( *v5 )
  {
    v35 = ExAcquireSpinLockExclusive(a1 + 18);
    *(_QWORD *)(v42 + 48) = v5;
    v36 = a1 + 18;
    if ( v35 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v36);
    else
      ExReleaseSpinLockExclusive(v36, v35);
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
