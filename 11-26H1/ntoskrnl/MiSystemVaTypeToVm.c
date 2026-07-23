/*
 * XREFs of MiSystemVaTypeToVm @ 0x14028521C
 * Callers:
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiGetPteFromCopyList @ 0x1402849F0 (MiGetPteFromCopyList.c)
 *     MiDecommitSystemPageTables @ 0x1402A3C08 (MiDecommitSystemPageTables.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A46AC (MiMakeZeroedPageTablesEx.c)
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 *     MiTrimViewLockSystemPte @ 0x1403A8480 (MiTrimViewLockSystemPte.c)
 *     MiLockStealSystemVm @ 0x14044D760 (MiLockStealSystemVm.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x1406ED820 (MiFreedUnusedPfnPagesDpc.c)
 *     MiGetFileOnlyRanges @ 0x1406EDB28 (MiGetFileOnlyRanges.c)
 *     MiGetNextNonGapPfnPage @ 0x1406EDDA8 (MiGetNextNonGapPfnPage.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 *     MiInitializeDynamicVa @ 0x140CFFB64 (MiInitializeDynamicVa.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 */

void *volatile *__fastcall MiSystemVaTypeToVm(int a1)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx

  v1 = 0LL;
  if ( a1 > 11 )
  {
    v8 = a1 - 12;
    if ( !v8 )
      return (void *volatile *)&unk_140E37340;
    v9 = v8 - 1;
    if ( !v9 )
      return (void *volatile *)&unk_140E37480;
    v12 = v9 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
        return (void *volatile *)&unk_140E37840;
      v14 = v13 - 1;
      if ( !v14 )
        return &stru_140E2DAB0.AbWaitObject;
      v15 = v14 - 1;
      if ( !v15 )
      {
        v17 = 2LL;
        return (void *volatile *)MiGetAnyMultiplexedVm(v17, 0LL);
      }
      v16 = v15 - 1;
      if ( !v16 )
        return (void *volatile *)&unk_140E37840;
      if ( (unsigned int)(v16 - 1) > 1 )
        return (void *volatile *)v1;
    }
    goto LABEL_29;
  }
  if ( a1 == 11 )
    goto LABEL_30;
  if ( a1 > 6 )
  {
    v2 = a1 - 7;
    if ( !v2 )
      return (void *volatile *)&unk_140E3D680;
    v10 = v2 - 1;
    if ( !v10 )
      return (void *volatile *)&unk_140E37340;
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        return (void *volatile *)v1;
      return (void *volatile *)&unk_140E37340;
    }
    goto LABEL_29;
  }
  if ( a1 == 6 )
    return (void *volatile *)&unk_140E37340;
  v4 = a1 - 1;
  if ( !v4 )
    return (void *volatile *)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v5 = v4 - 1;
  if ( !v5 )
  {
LABEL_30:
    v17 = 1LL;
    return (void *volatile *)MiGetAnyMultiplexedVm(v17, 0LL);
  }
  v6 = v5 - 1;
  if ( !v6 )
    return (void *volatile *)&unk_140E370C0;
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_29:
    v17 = 6LL;
    return (void *volatile *)MiGetAnyMultiplexedVm(v17, 0LL);
  }
  if ( v7 == 1 )
    return (void *volatile *)&unk_140E37200;
  return (void *volatile *)v1;
}
