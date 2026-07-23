/*
 * XREFs of MiReservePageFileSpace @ 0x140368E88
 * Callers:
 *     MiFillNoReservationCluster @ 0x1402D4A24 (MiFillNoReservationCluster.c)
 *     MiWsleFlush @ 0x14032C540 (MiWsleFlush.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiReservePageFileSpaceForPage @ 0x14036944C (MiReservePageFileSpaceForPage.c)
 *     MiFindFreePageFileSpace @ 0x1403FEF30 (MiFindFreePageFileSpace.c)
 *     MiDecrementModifiedWriteCount @ 0x140462920 (MiDecrementModifiedWriteCount.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14046BF10 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiGetPageFileSectionForReservation @ 0x1404CB260 (MiGetPageFileSectionForReservation.c)
 */

void __fastcall MiReservePageFileSpace(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v3; // r12
  signed __int32 v5; // esi
  struct _LIST_ENTRY *Address; // r13
  int Flink; // ebx
  __int64 Blink_low; // rcx
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  __int64 Blink_high; // rcx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r14
  unsigned int v15; // ecx
  unsigned int v16; // edi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r13
  __int64 v19; // rbx
  unsigned int v20; // esi
  unsigned __int64 v21; // r13
  __int64 v22; // rcx
  unsigned int v23; // r15d
  int v24; // r13d
  unsigned int v25; // r14d
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned int FreePageFileSpace; // eax
  unsigned int v30; // edi
  ULONG_PTR v31; // rsi
  ULONG_PTR i; // r12
  int v33; // eax
  unsigned __int64 v34; // rbx
  unsigned int v35; // eax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  int v42; // rdx^4
  unsigned int v43; // edx
  unsigned int v44; // r14d
  unsigned int v45; // r14d
  unsigned int v46; // rax^4
  int v47; // rdx^4
  __int64 v48; // r14
  __int64 v49; // rdx
  unsigned int v50; // ecx
  __int64 v51; // rax
  unsigned __int64 updated; // [rsp+20h] [rbp-88h] BYREF
  int v53; // [rsp+28h] [rbp-80h]
  unsigned __int64 v54; // [rsp+30h] [rbp-78h]
  unsigned __int64 v55; // [rsp+38h] [rbp-70h] BYREF
  __int64 v56; // [rsp+40h] [rbp-68h]
  __int128 v57; // [rsp+48h] [rbp-60h]
  __int128 v58; // [rsp+58h] [rbp-50h]
  __int64 v59; // [rsp+68h] [rbp-40h]
  unsigned int v62; // [rsp+C8h] [rbp+20h]
  unsigned int v63; // [rsp+C8h] [rbp+20h]

  v3 = a2;
  v56 = 0LL;
  v5 = *(_DWORD *)(a1 + 1000);
  v57 = 0LL;
  v59 = 0LL;
  v58 = 0LL;
  LODWORD(updated) = v5;
  v62 = v5 & 0x3FF;
  if ( v62 < 0x10 )
    return;
  v53 = 0;
  Address = 0LL;
  Flink = 0;
  if ( a3 )
  {
    if ( (*(_DWORD *)(a3 + 184) & 0xF) != 0 )
    {
      v12 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v14 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    }
    else
    {
      MiLockVadTree(1u, 0LL, a3);
      Address = MiLocateAddress((__int64)(v3 << 25) >> 16);
      MiUnlockVadTree(1, 0x11u);
      if ( !Address )
        return;
      Flink = (int)Address[3].Flink;
      if ( (Flink & 0x8001D) != 0x80000
        || (Flink & 0x80000) != 0 && ((Flink & 0x200000) != 0 || (Flink & 0x60000u) >= 0x40000) )
      {
        return;
      }
      Blink_low = LODWORD(Address[1].Blink);
      v9 = ((__int64)(v3 << 25) >> 16) & 0xFFFFFFFFFFE00000uLL;
      if ( v9 < (Blink_low | ((unsigned __int64)LOBYTE(Address[2].Flink) << 32)) << 12 )
        v10 = 8 * ((Blink_low | ((unsigned __int64)LOBYTE(Address[2].Flink) << 32)) & 0xFFFFFFFFFLL);
      else
        v10 = (v9 >> 9) & 0x7FFFFFFFF8LL;
      Blink_high = HIDWORD(Address[1].Blink);
      v12 = v10 - 0x98000000000LL;
      v13 = v9 + 2093056;
      if ( v13 > (Blink_high | ((unsigned __int64)BYTE1(Address[2].Flink) << 32)) << 12 )
        v14 = 8 * ((Blink_high | ((unsigned __int64)BYTE1(Address[2].Flink) << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
      else
        v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
  }
  else
  {
    if ( !(unsigned int)MiGetPageFileSectionForReservation(a2) )
      return;
    v14 = *((_QWORD *)&v58 + 1);
    v53 = 1;
    v12 = v58;
    v56 = v59;
  }
  v54 = v14;
  v15 = ((__int64)(v14 - v12) >> 3) + 1;
  if ( v15 > v62 )
  {
    v48 = (__int64)(v14 - v3) >> 3;
    v49 = (__int64)(v3 - v12) >> 3;
    v50 = v15 - v62;
    if ( (unsigned int)v48 < v50 )
      LODWORD(v49) = v48 - v50 + v49;
    v12 = v3 - 8LL * (unsigned int)v49;
    v51 = (unsigned int)v48 - v50;
    if ( (unsigned int)v48 < v50 )
      v51 = 0LL;
    v14 = v3 + 8 * v51;
    v54 = v14;
  }
  v16 = a3 != 0 ? 129 : 1;
  if ( Address && (Flink & 0x400000) != 0 )
    v16 |= (Flink & 0x3E0 | 0x10u) >> 3;
  v17 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v18 = v3 - 8;
  v63 = 0;
  v19 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v55 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( v3 - 8 >= v12 )
  {
    v20 = 0;
    do
    {
      if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v18, v16, &v55) )
        break;
      ++v20;
      v18 -= 8LL;
    }
    while ( v18 >= v12 );
    v19 = v55;
    v17 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v14 = v54;
    v3 = a2;
    v63 = v20;
    v5 = updated;
  }
  v21 = v3 + 8;
  v22 = v17;
  v55 = v17;
  v23 = 0;
  if ( v3 + 8 <= v14 )
  {
    do
    {
      if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v21, v16, &v55) )
        break;
      ++v23;
      v21 += 8LL;
    }
    while ( v21 <= v14 );
    v22 = v55;
    v17 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v5 = updated;
    v3 = a2;
  }
  v24 = 0;
  v25 = v23 + v63 + 1;
  if ( v19 )
  {
    v42 = HIDWORD(v19);
    if ( qword_140E2D8C0 && (v19 & 0x10) == 0 )
      v42 = HIDWORD(qword_140E2D8C8) & HIDWORD(v19);
    v22 = v19;
    v43 = v42 + 1;
  }
  else
  {
    if ( !v22 )
      goto LABEL_29;
    v46 = HIDWORD(v22);
    v47 = HIDWORD(v22);
    if ( qword_140E2D8C0 && (v22 & 0x10) == 0 )
      v46 = HIDWORD(qword_140E2D8C8) & HIDWORD(v22);
    if ( v25 >= v46 )
    {
LABEL_29:
      updated = v17;
      v24 = 16;
      goto LABEL_30;
    }
    if ( qword_140E2D8C0 && (v22 & 0x10) == 0 )
      v47 = HIDWORD(v22) & HIDWORD(qword_140E2D8C8);
    v43 = v47 - v25;
  }
  updated = MiUpdatePageFileHighInPte(v22, v43);
LABEL_30:
  v26 = a1;
  if ( (unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(a1, &updated) )
  {
    v24 = 16;
    updated = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  if ( v25 == 1 )
  {
    if ( v24 )
      goto LABEL_55;
    v24 = 64;
  }
  FreePageFileSpace = MiFindFreePageFileSpace(a1, &updated, v25, v24 | 1u);
  v27 = FreePageFileSpace;
  if ( FreePageFileSpace != v25 )
  {
    _InterlockedCompareExchange(
      (volatile signed __int32 *)(a1 + 1000),
      FreePageFileSpace ^ (FreePageFileSpace ^ v5) & 0xFFFFFC00,
      v5);
    if ( !FreePageFileSpace )
      goto LABEL_55;
    v44 = v25 - FreePageFileSpace;
    if ( v23 >= v44 )
    {
      v23 -= v44;
    }
    else
    {
      v45 = v44 - v23;
      v23 = 0;
      v63 -= v45;
    }
  }
  v30 = v16 & 0xFFFFFFFE;
  v31 = v3 + 8LL * v23;
  for ( i = v3 - 8LL * v63; i <= v31; i += 8LL )
  {
    v33 = MiReservePageFileSpaceForPage(v26, i, v30, &updated);
    v34 = updated;
    if ( !v33 )
      MiReleasePageFileInfo((struct _KEVENT *)a1, updated, 1LL);
    v27 = qword_140E2D8C0;
    v35 = v34;
    v36 = v34;
    if ( qword_140E2D8C0 && (v34 & 0x10) == 0 )
      v34 &= qword_140E2D8C8;
    v37 = HIDWORD(v34);
    if ( v36 )
    {
      if ( qword_140E2D8C0 )
      {
        if ( (v35 & 0x10) != 0 )
          v35 &= ~0x10u;
        else
          v35 &= qword_140E2D8C8;
      }
    }
    else
    {
      v35 = 0;
    }
    v28 = v35;
    v38 = v35 | ((unsigned __int64)(unsigned int)(v37 + 1) << 32);
    if ( qword_140E2D8C0 )
    {
      if ( (qword_140E2D8C0 & v38) != 0 )
        v38 |= 0x10uLL;
      else
        v38 |= qword_140E2D8C0;
    }
    v26 = a1;
    updated = v38;
  }
LABEL_55:
  if ( v53 )
  {
    if ( *((_QWORD *)&v57 + 1) )
    {
      LOBYTE(v27) = v56;
      MiUnlockProtoPoolPage(*((__int64 *)&v57 + 1), v27, v28);
    }
    v39 = (_QWORD *)MiDecrementModifiedWriteCount(v57, 0LL);
    if ( v39 )
      MiReleaseControlAreaWaiters(v39, v40, v41);
  }
}
