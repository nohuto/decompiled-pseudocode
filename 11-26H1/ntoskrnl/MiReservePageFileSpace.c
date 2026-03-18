/*
 * XREFs of MiReservePageFileSpace @ 0x1403670E8
 * Callers:
 *     MiFillNoReservationCluster @ 0x1402F29A4 (MiFillNoReservationCluster.c)
 *     MiWsleFlush @ 0x14032A510 (MiWsleFlush.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x1402733E0 (MiReleaseControlAreaWaiters.c)
 *     MiUpdatePageFileHighInPte @ 0x14028C010 (MiUpdatePageFileHighInPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiUnlockVadTree @ 0x140326440 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403265D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140326730 (MiLocateAddress.c)
 *     MiReservePageFileSpaceForPage @ 0x1403676AC (MiReservePageFileSpaceForPage.c)
 *     MiFindFreePageFileSpace @ 0x140405E3C (MiFindFreePageFileSpace.c)
 *     MiDecrementModifiedWriteCount @ 0x140469350 (MiDecrementModifiedWriteCount.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x140472790 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiGetPageFileSectionForReservation @ 0x1404D16B4 (MiGetPageFileSectionForReservation.c)
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
  int FreePageFileSpace; // edx
  unsigned int v28; // edi
  ULONG_PTR v29; // rsi
  ULONG_PTR i; // r12
  int v31; // eax
  unsigned __int64 v32; // rbx
  unsigned int v33; // eax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // rdx^4
  unsigned int v41; // edx
  unsigned int v42; // r14d
  unsigned int v43; // r14d
  unsigned int v44; // rax^4
  int v45; // rdx^4
  __int64 v46; // r14
  __int64 v47; // rdx
  unsigned int v48; // ecx
  __int64 v49; // rax
  unsigned __int64 updated; // [rsp+20h] [rbp-88h] BYREF
  int v51; // [rsp+28h] [rbp-80h]
  unsigned __int64 v52; // [rsp+30h] [rbp-78h]
  unsigned __int64 v53; // [rsp+38h] [rbp-70h] BYREF
  __int64 v54; // [rsp+40h] [rbp-68h]
  __int128 v55; // [rsp+48h] [rbp-60h]
  __int128 v56; // [rsp+58h] [rbp-50h]
  __int64 v57; // [rsp+68h] [rbp-40h]
  unsigned int v60; // [rsp+C8h] [rbp+20h]
  unsigned int v61; // [rsp+C8h] [rbp+20h]

  v3 = a2;
  v54 = 0LL;
  v5 = *(_DWORD *)(a1 + 1000);
  v55 = 0LL;
  v57 = 0LL;
  v56 = 0LL;
  LODWORD(updated) = v5;
  v60 = v5 & 0x3FF;
  if ( v60 < 0x10 )
    return;
  v51 = 0;
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
    v14 = *((_QWORD *)&v56 + 1);
    v51 = 1;
    v12 = v56;
    v54 = v57;
  }
  v52 = v14;
  v15 = ((__int64)(v14 - v12) >> 3) + 1;
  if ( v15 > v60 )
  {
    v46 = (__int64)(v14 - v3) >> 3;
    v47 = (__int64)(v3 - v12) >> 3;
    v48 = v15 - v60;
    if ( (unsigned int)v46 < v48 )
      LODWORD(v47) = v46 - v48 + v47;
    v12 = v3 - 8LL * (unsigned int)v47;
    v49 = (unsigned int)v46 - v48;
    if ( (unsigned int)v46 < v48 )
      v49 = 0LL;
    v14 = v3 + 8 * v49;
    v52 = v14;
  }
  v16 = a3 != 0 ? 129 : 1;
  if ( Address && (Flink & 0x400000) != 0 )
    v16 |= (Flink & 0x3E0 | 0x10u) >> 3;
  v17 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v18 = v3 - 8;
  v61 = 0;
  v19 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v53 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( v3 - 8 >= v12 )
  {
    v20 = 0;
    do
    {
      if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v18, v16, &v53) )
        break;
      ++v20;
      v18 -= 8LL;
    }
    while ( v18 >= v12 );
    v19 = v53;
    v17 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v14 = v52;
    v3 = a2;
    v61 = v20;
    v5 = updated;
  }
  v21 = v3 + 8;
  v22 = v17;
  v53 = v17;
  v23 = 0;
  if ( v3 + 8 <= v14 )
  {
    do
    {
      if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v21, v16, &v53) )
        break;
      ++v23;
      v21 += 8LL;
    }
    while ( v21 <= v14 );
    v22 = v53;
    v17 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v5 = updated;
    v3 = a2;
  }
  v24 = 0;
  v25 = v23 + v61 + 1;
  if ( v19 )
  {
    v40 = HIDWORD(v19);
    if ( qword_140E2D740 && (v19 & 0x10) == 0 )
      v40 = HIDWORD(qword_140E2D748) & HIDWORD(v19);
    v22 = v19;
    v41 = v40 + 1;
  }
  else
  {
    if ( !v22 )
      goto LABEL_29;
    v44 = HIDWORD(v22);
    v45 = HIDWORD(v22);
    if ( qword_140E2D740 && (v22 & 0x10) == 0 )
      v44 = HIDWORD(qword_140E2D748) & HIDWORD(v22);
    if ( v25 >= v44 )
    {
LABEL_29:
      updated = v17;
      v24 = 16;
      goto LABEL_30;
    }
    if ( qword_140E2D740 && (v22 & 0x10) == 0 )
      v45 = HIDWORD(v22) & HIDWORD(qword_140E2D748);
    v41 = v45 - v25;
  }
  updated = MiUpdatePageFileHighInPte(v22, v41);
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
  if ( FreePageFileSpace != v25 )
  {
    _InterlockedCompareExchange(
      (volatile signed __int32 *)(a1 + 1000),
      FreePageFileSpace ^ (FreePageFileSpace ^ v5) & 0xFFFFFC00,
      v5);
    if ( !FreePageFileSpace )
      goto LABEL_55;
    v42 = v25 - FreePageFileSpace;
    if ( v23 >= v42 )
    {
      v23 -= v42;
    }
    else
    {
      v43 = v42 - v23;
      v23 = 0;
      v61 -= v43;
    }
  }
  v28 = v16 & 0xFFFFFFFE;
  v29 = v3 + 8LL * v23;
  for ( i = v3 - 8LL * v61; i <= v29; i += 8LL )
  {
    v31 = MiReservePageFileSpaceForPage(v26, i, v28, &updated);
    v32 = updated;
    if ( !v31 )
      MiReleasePageFileInfo((struct _KEVENT *)a1, updated, 1);
    v33 = v32;
    v34 = v32;
    if ( qword_140E2D740 && (v32 & 0x10) == 0 )
      v32 &= qword_140E2D748;
    v35 = HIDWORD(v32);
    if ( v34 )
    {
      if ( qword_140E2D740 )
      {
        if ( (v33 & 0x10) != 0 )
          v33 &= ~0x10u;
        else
          v33 &= qword_140E2D748;
      }
    }
    else
    {
      v33 = 0;
    }
    v36 = v33 | ((unsigned __int64)(unsigned int)(v35 + 1) << 32);
    if ( qword_140E2D740 )
    {
      if ( (qword_140E2D740 & v36) != 0 )
        v36 |= 0x10uLL;
      else
        v36 |= qword_140E2D740;
    }
    v26 = a1;
    updated = v36;
  }
LABEL_55:
  if ( v51 )
  {
    if ( *((_QWORD *)&v55 + 1) )
      MiUnlockProtoPoolPage(*((__int64 *)&v55 + 1), v54);
    v37 = (_QWORD *)MiDecrementModifiedWriteCount(v55, 0LL);
    if ( v37 )
      MiReleaseControlAreaWaiters(v37, v38, v39);
  }
}
