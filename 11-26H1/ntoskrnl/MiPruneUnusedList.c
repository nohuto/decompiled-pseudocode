/*
 * XREFs of MiPruneUnusedList @ 0x140488FD0
 * Callers:
 *     MiPruneUnusedList @ 0x140488FD0 (MiPruneUnusedList.c)
 *     MiDeleteCachedEntries @ 0x14049D020 (MiDeleteCachedEntries.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x1402EDDD4 (MiUnlinkUnusedControlArea.c)
 *     MiUnlinkUnusedSubsection @ 0x1402EE29C (MiUnlinkUnusedSubsection.c)
 *     MiRemoveEntryNotifySentinel @ 0x1402EE30C (MiRemoveEntryNotifySentinel.c)
 *     MiRemoveListSentinel @ 0x1402EE518 (MiRemoveListSentinel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertListSentinel @ 0x140445440 (MiInsertListSentinel.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140450590 (MiUpdateSystemProtoPtesTree.c)
 *     MiMarkControlAreaDeleted @ 0x140486A28 (MiMarkControlAreaDeleted.c)
 *     MiPruneUnusedList @ 0x140488FD0 (MiPruneUnusedList.c)
 *     MiDeleteCachedSubsections @ 0x1404A05EC (MiDeleteCachedSubsections.c)
 *     MiDeleteMoreUnusedSegments @ 0x1404C3538 (MiDeleteMoreUnusedSegments.c)
 */

__int64 __fastcall MiPruneUnusedList(__int64 a1, __int64 a2, KIRQL a3)
{
  __int64 v3; // r12
  KIRQL v4; // di
  int v5; // ebx
  __int64 v7; // r13
  __int64 v8; // r14
  unsigned int v10; // r15d
  unsigned __int64 **v11; // rbx
  unsigned __int64 *v12; // r14
  __int64 v13; // rbx
  __int64 v14; // r15
  unsigned __int64 *v15; // rdi
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned int v18; // r14d
  __int64 v19; // rdx
  unsigned __int64 *v20; // rdx
  unsigned __int64 *v21; // r14
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  BOOL v24; // ecx
  __int64 v25; // rax
  unsigned __int64 *v26; // r14
  volatile LONG *v27; // rcx
  unsigned __int64 v28; // [rsp+20h] [rbp-59h]
  __int64 v29; // [rsp+28h] [rbp-51h]
  unsigned __int64 **v30; // [rsp+30h] [rbp-49h]
  __int128 v31; // [rsp+38h] [rbp-41h]
  unsigned __int64 v32; // [rsp+48h] [rbp-31h]
  __int64 v33; // [rsp+50h] [rbp-29h]
  _OWORD v34[7]; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v35; // [rsp+E8h] [rbp+6Fh]
  unsigned __int64 *v37; // [rsp+F8h] [rbp+7Fh]

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 56);
  v7 = (int)a2;
  v31 = 0uLL;
  v8 = *(_QWORD *)(v3 + 2432) + 8LL;
  v32 = 0LL;
  v29 = v3;
  v37 = (unsigned __int64 *)(v3 + 2352);
  v33 = v8;
  if ( (_DWORD)a2 == 1 )
  {
    MiPruneUnusedList(a1, 0LL);
  }
  else if ( !(_DWORD)a2 )
  {
    goto LABEL_7;
  }
  if ( !(unsigned int)MiDeleteMoreUnusedSegments(v3, v8) && v5 )
    return 1LL;
LABEL_7:
  v10 = 0;
  v11 = (unsigned __int64 **)(v3 + 16 * (v7 + 153));
  v30 = v11;
  v12 = *v11;
  if ( *v11 != (unsigned __int64 *)v11 )
  {
    while ( 1 )
    {
      v13 = (__int64)(v12 - 1);
      v28 = *v12;
      v35 = v10 + 1;
      v14 = 0LL;
      if ( (*(v12 - 1) & 0x8000000000000000uLL) == 0LL )
      {
        v15 = v12 - 11;
        v13 = *(v12 - 11);
      }
      else
      {
        v15 = 0LL;
        if ( *(_QWORD *)(v13 + 32) && (*(_DWORD *)(v13 + 56) & 0x20) == 0 )
          v12 = 0LL;
      }
      if ( !v12 )
        goto LABEL_44;
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v13 + 72)) )
        break;
LABEL_43:
      v3 = v29;
LABEL_44:
      if ( v35 < 0x40 || (v35 & 0xF) != 0 )
        goto LABEL_23;
      if ( (*(_DWORD *)(v3 + 2112) & 0x40000000) != 0 )
      {
        v23 = v28;
        goto LABEL_52;
      }
      if ( !KeShouldYieldProcessor() )
        goto LABEL_23;
      v23 = v28;
      v24 = 1;
LABEL_49:
      if ( !v24 )
        goto LABEL_23;
LABEL_52:
      v10 = 0;
      memset(v34, 0, 48);
      if ( *(_DWORD *)(a1 + 1504) )
      {
        v4 = a3;
        LOBYTE(a2) = a3;
        v25 = MiDeleteCachedSubsections(a1, a2);
        v26 = (unsigned __int64 *)(v3 + 2352);
      }
      else
      {
        v26 = (unsigned __int64 *)(v3 + 2352);
        MiInsertListSentinel((unsigned __int64 *)(v3 + 2352), v34, v23);
        v4 = a3;
        v27 = (volatile LONG *)(v3 + 2112);
        if ( a3 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v27);
        else
          ExReleaseSpinLockExclusive(v27, a3);
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 2112));
        v25 = MiRemoveListSentinel((_QWORD *)(v3 + 2352), v34);
      }
      v28 = v25;
      if ( (_DWORD)v7 == 1 )
      {
        MiInsertListSentinel(v26, v34, v25);
        MiPruneUnusedList(a1, 0LL);
        v28 = MiRemoveListSentinel(v26, v34);
      }
      if ( !(unsigned int)MiDeleteMoreUnusedSegments(v3, v33) && *(_DWORD *)(a1 + 56) )
      {
        v11 = v30;
        v18 = 1;
        goto LABEL_64;
      }
LABEL_24:
      v12 = (unsigned __int64 *)v28;
      v11 = v30;
      v3 = v29;
      if ( (unsigned __int64 **)v28 == v30 )
      {
        v4 = a3;
        v18 = 0;
        goto LABEL_64;
      }
    }
    if ( (_DWORD)v7 == 1 )
    {
      v16 = *(_DWORD *)(v13 + 56);
      if ( !v15 )
      {
        if ( (v16 & 0x20) != 0 || !*(_QWORD *)(v13 + 32) )
        {
          if ( *(_DWORD *)(v13 + 76) )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v13 + 72));
LABEL_23:
            v10 = v35;
            goto LABEL_24;
          }
          MiUnlinkUnusedControlArea(v13);
          if ( (*(_DWORD *)(v13 + 56) & 0x20) != 0 )
            *(_QWORD *)(a1 + 80) += *(_QWORD *)(v13 + 32);
          LOBYTE(v19) = 17;
          MiMarkControlAreaDeleted(v13, v19);
          v14 = v13;
        }
        goto LABEL_37;
      }
      if ( (v16 & 1) == 0 )
      {
        MiUnlinkUnusedSubsection(v15);
        v17 = *v15;
        v15[10] = 1LL;
        *((_DWORD *)v15 + 8) &= ~1u;
        ++*(_DWORD *)(v17 + 76);
LABEL_36:
        v14 = (__int64)v15;
      }
    }
    else if ( !(_DWORD)v7 )
    {
      if ( !v15 )
      {
        v20 = v12;
        v21 = v37;
        MiRemoveEntryNotifySentinel(v37, v20);
        v14 = v13;
        *(_DWORD *)(v13 + 56) &= ~0x40000000u;
        *(_QWORD *)(v13 + 16) = v13 + 8;
        *(_QWORD *)(v13 + 8) = v13 + 8;
        goto LABEL_38;
      }
      *(_QWORD *)&v31 = v15[1];
      *((_QWORD *)&v31 + 1) = 8LL * *((unsigned int *)v15 + 11);
      v32 = 0LL;
      if ( *(_QWORD *)(v13 + 64) && (*(_DWORD *)(v13 + 56) & 0x30000000) == 0x20000000 )
      {
        v32 = v15[14];
        v15[14] = 0LL;
      }
      MiUpdateSystemProtoPtesTree(v15 + 15, 2);
      v15[1] = 0LL;
      MiUnlinkUnusedSubsection(v15);
      goto LABEL_36;
    }
LABEL_37:
    v21 = v37;
LABEL_38:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v13 + 72));
    if ( v14 )
    {
      v22 = 88LL * *(unsigned int *)(a1 + 1504);
      *(_QWORD *)(v22 + a1 + 96) = v14;
      *(_DWORD *)(v22 + a1 + 104) = v7;
      *(_BYTE *)(v22 + a1 + 108) = v15 == 0LL;
      if ( !(_DWORD)v7 && v15 )
      {
        *(_OWORD *)(v22 + a1 + 160) = v31;
        *(_QWORD *)(v22 + a1 + 176) = v32;
      }
      v23 = v28;
      MiInsertListSentinel(v21, (_QWORD *)(v22 + a1 + 112), v28);
      ++*(_DWORD *)(a1 + 1504);
      v3 = v29;
      v24 = *(_DWORD *)(a1 + 1504) == 16;
      goto LABEL_49;
    }
    goto LABEL_43;
  }
  v18 = 0;
LABEL_64:
  if ( *(_DWORD *)(a1 + 1504) )
  {
    LOBYTE(a2) = v4;
    MiDeleteCachedSubsections(a1, a2);
  }
  if ( !(_DWORD)v7 && *v11 == (unsigned __int64 *)v11 )
    *(_QWORD *)(v3 + 2192) = 0LL;
  return v18;
}
