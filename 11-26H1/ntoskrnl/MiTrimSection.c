/*
 * XREFs of MiTrimSection @ 0x14045E1A0
 * Callers:
 *     MmTrimSection @ 0x14045DEB0 (MmTrimSection.c)
 *     MiTrimSharedPage @ 0x1404723B4 (MiTrimSharedPage.c)
 *     MiLocateSharedPageViews @ 0x1406FCFF0 (MiLocateSharedPageViews.c)
 *     MiResetVirtualMemory @ 0x140AAF5F0 (MiResetVirtualMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     MiReferenceSubsection @ 0x1402EE060 (MiReferenceSubsection.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiDecrementSubsection @ 0x14046D4A0 (MiDecrementSubsection.c)
 *     MiUnlockControlAreaFileObjectShared @ 0x14048A07C (MiUnlockControlAreaFileObjectShared.c)
 *     MiAnyProtosAreMapped @ 0x1404B66A0 (MiAnyProtosAreMapped.c)
 *     MiViewMayContainPage @ 0x1404C09A8 (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x140A89498 (MiTrimSharedPageFromViews.c)
 */

__int64 __fastcall MiTrimSection(_QWORD *a1, __int64 a2, int a3)
{
  ULONG_PTR v3; // r14
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 *v9; // rcx
  unsigned __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // rcx
  void *v12; // r13
  int MayContainPage; // esi
  struct _KLOCK_ENTRIES *v14; // r9
  LegacyAutoBoost *v15; // rbp
  volatile LONG *v16; // rbp
  KIRQL v17; // al
  volatile LONG *v18; // rcx
  _QWORD *v20; // r15
  _QWORD *v21; // r12
  _QWORD *v22; // rcx
  __int64 v23; // rax
  int v24; // r15d
  KIRQL v25; // r13
  _QWORD *v26; // r13
  _QWORD *v27; // r15
  _QWORD *v28; // rbp
  __int64 v29; // r14
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  unsigned int v32; // eax
  _QWORD *v33; // [rsp+40h] [rbp-78h] BYREF
  _QWORD *v34; // [rsp+48h] [rbp-70h]
  ULONG_PTR v35; // [rsp+50h] [rbp-68h]
  __int64 v36; // [rsp+58h] [rbp-60h]
  unsigned __int64 v37; // [rsp+60h] [rbp-58h]
  _QWORD *v38; // [rsp+68h] [rbp-50h]
  unsigned __int64 v39; // [rsp+70h] [rbp-48h]
  int v42; // [rsp+D8h] [rbp+20h]

  v3 = a1[3];
  v33 = 0LL;
  v39 = a1[1];
  v6 = *(_QWORD *)v3;
  v35 = v3;
  v7 = MiStartingOffset((__int64 *)v3, v39, 0xFFFFFFFF);
  v8 = a1[2];
  v9 = (__int64 *)a1[4];
  v37 = v7;
  v10 = MiStartingOffset(v9, v8, 0xFFFFFFFF);
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  v36 = v10 + 4096;
  v34 = 0LL;
  --CurrentThread->SpecialApcDisable;
  MayContainPage = 0;
  v15 = (LegacyAutoBoost *)KeAbPreAcquire(v6 + 104, 0LL, 0LL, v14);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 104), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 104), 0, v15, (struct _KTHREAD *)(v6 + 104));
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v15 + 33) |= 2u;
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  v16 = (volatile LONG *)(v6 + 72);
  v17 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v6 + 72));
  v18 = (volatile LONG *)(v6 + 72);
  if ( !*(_QWORD *)(v6 + 40) )
  {
    if ( v17 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(v18);
    else
      ExReleaseSpinLockShared(v18, v17);
    MiUnlockControlAreaFileObjectShared(v6);
    return 0LL;
  }
  v20 = (_QWORD *)(v6 + 8);
  v21 = *(_QWORD **)(v6 + 8);
  v38 = v21;
  if ( v17 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(v18);
  else
    ExReleaseSpinLockShared(v18, v17);
  if ( (*(_DWORD *)(v6 + 56) & 0x20) == 0 && *(_QWORD *)(v6 + 64) )
  {
    v22 = a1;
    v42 = 0;
    v23 = a1[4];
    while ( 1 )
    {
      v24 = 1;
      if ( v3 != v22[3] && v3 != v23 )
      {
        v25 = ExAcquireSpinLockExclusive(v16);
        if ( *(_DWORD *)(v3 + 104) && (int)MiReferenceSubsection((__int64 *)v3, 0) > 1 )
          v42 = 1;
        else
          v24 = 0;
        if ( v25 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v16);
        else
          ExReleaseSpinLockExclusive(v16, v25);
        if ( !v24 )
          goto LABEL_39;
        v22 = a1;
      }
      if ( (a3 & 1) == 0 && (a3 & 0x20) == 0 || (unsigned int)MiAnyProtosAreMapped(v3, v22) )
      {
        v26 = (_QWORD *)(v3 + 88);
        v27 = *(_QWORD **)(v3 + 88);
        if ( v27 != (_QWORD *)(v3 + 88) )
        {
          v28 = v34;
          v29 = v36;
          do
          {
            MayContainPage = MiViewMayContainPage(v6, a2, a3, (_DWORD)v27, v37, v29, (__int64)&v33);
            if ( MayContainPage < 0 )
              break;
            v30 = v33;
            if ( v33 )
            {
              *v33 = v28;
              v28 = v30;
            }
            v27 = (_QWORD *)*v27;
          }
          while ( v27 != v26 );
          v3 = v35;
          v21 = v38;
          v34 = v28;
          v16 = (volatile LONG *)(v6 + 72);
        }
      }
LABEL_39:
      if ( v42 )
      {
        MiDecrementSubsection(v3);
        v42 = 0;
      }
      v22 = a1;
      v23 = a1[4];
      if ( MayContainPage < 0 )
      {
        v12 = v34;
        goto LABEL_52;
      }
      if ( v3 == v23 )
      {
        v12 = v34;
        v20 = (_QWORD *)(v6 + 8);
        break;
      }
      v3 = *(_QWORD *)(v3 + 16);
      v35 = v3;
    }
  }
  while ( v21 != v20 )
  {
    MayContainPage = MiViewMayContainPage(v6, a2, a3, (_DWORD)v21, v37, v36, (__int64)&v33);
    if ( MayContainPage < 0 )
      break;
    v31 = v33;
    if ( v33 )
    {
      *v33 = v12;
      v12 = v31;
    }
    v21 = (_QWORD *)*v21;
  }
LABEL_52:
  MiUnlockControlAreaFileObjectShared(v6);
  if ( !a2 || *(_QWORD *)(a2 + 16) == -1LL )
  {
    v32 = MiTrimSharedPageFromViews(v12);
    if ( MayContainPage >= 0 )
      return v32;
  }
  else
  {
    *(_QWORD *)(a2 + 16) = v12;
  }
  return (unsigned int)MayContainPage;
}
