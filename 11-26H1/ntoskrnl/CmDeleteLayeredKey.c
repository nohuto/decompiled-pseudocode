/*
 * XREFs of CmDeleteLayeredKey @ 0x140446A10
 * Callers:
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpCreateTombstone @ 0x1406E2950 (CmpCreateTombstone.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14085EDB4 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPromoteKey @ 0x1408B0E74 (CmpPromoteKey.c)
 *     CmpDiscardKcb @ 0x1408B9D6C (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1408BA08C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408BA114 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockKcbStackExclusive @ 0x1408BA310 (CmpLockKcbStackExclusive.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408BC470 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1408BC550 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpFreeKeyByCell @ 0x1408BCC94 (CmpFreeKeyByCell.c)
 *     CmpMarkKeyDirty @ 0x1408BCEC4 (CmpMarkKeyDirty.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     CmpUnlockHashEntryByKcb @ 0x1408C6254 (CmpUnlockHashEntryByKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x1408D03E8 (CmpReportNotifyForKcbStack.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D0B78 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpHashUnicodeComponent @ 0x1408D1470 (CmpHashUnicodeComponent.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmpFindSubKeyByNumber @ 0x1408DEDA0 (CmpFindSubKeyByNumber.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1408E0760 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanupKcbStack @ 0x140982520 (CmpCleanupKcbStack.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A2E3E0 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140A2EE10 (CmpCleanupDiscardReplaceContext.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A2EE88 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpHashCompressedComponent @ 0x140A319F0 (CmpHashCompressedComponent.c)
 *     CmpInitializeKcbStack @ 0x140A52E70 (CmpInitializeKcbStack.c)
 *     CmpIncrementKcbSequenceNumber @ 0x140ABFF70 (CmpIncrementKcbSequenceNumber.c)
 *     CmpInitializeDiscardReplaceContext @ 0x140AE11D4 (CmpInitializeDiscardReplaceContext.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140AE4934 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpFreeKeyValues @ 0x140B1CFA8 (CmpFreeKeyValues.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x140B53F68 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C58750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmDeleteLayeredKey(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // si
  ULONG_PTR v6; // rdi
  __int64 v7; // r15
  int started; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  ULONG_PTR v13; // rcx
  __int64 CellFlat; // rax
  __int64 v15; // rsi
  unsigned int i; // r15d
  ULONG_PTR v17; // rcx
  ULONG_PTR v18; // rcx
  __int64 v19; // rcx
  __int64 CellPaged; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // ebx
  __int64 KcbInHashEntryByCellIndex; // rax
  int v29; // [rsp+20h] [rbp-69h] BYREF
  __int64 v30; // [rsp+28h] [rbp-61h] BYREF
  __int64 v31; // [rsp+30h] [rbp-59h] BYREF
  _OWORD v32[2]; // [rsp+38h] [rbp-51h] BYREF
  _OWORD v33[2]; // [rsp+58h] [rbp-31h] BYREF
  __int128 v34; // [rsp+78h] [rbp-11h] BYREF
  _OWORD v35[5]; // [rsp+88h] [rbp-1h] BYREF
  char v36; // [rsp+F0h] [rbp+67h]

  v29 = 0;
  memset(v33, 0, sizeof(v33));
  v30 = 0LL;
  memset(v32, 0, sizeof(v32));
  v31 = 0LL;
  v34 = 0LL;
  memset(v35, 0, 32);
  CmpInitializeKcbStack(v33);
  CmpInitializeKcbStack(v32);
  v5 = 0;
  HvpGetCellContextInitialize(&v31);
  HvpGetCellContextInitialize(&v30);
  CmpInitializeDiscardReplaceContext(v35);
  v36 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      v7 = *(_QWORD *)(v6 + 72);
      if ( (*(_DWORD *)(v6 + 184) & 0x80000) != 0 )
      {
        started = -1073741535;
        goto LABEL_21;
      }
      started = CmpStartKcbStackForTopLayerKcb(v33, *(_QWORD *)(a1 + 8));
      if ( started < 0 )
        goto LABEL_21;
      started = CmpStartKcbStackForTopLayerKcb(v32, v7);
      if ( started < 0 )
        goto LABEL_21;
      CmpLockHashEntryExclusiveByKcb(v6);
      CmpLockKcbStackTopExclusiveRestShared(v32);
      CmpLockKcbStackExclusive(v33);
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
        goto LABEL_49;
      started = CmpGetSubKeyCountForKcbStack(v33, v9, &v29);
      if ( started < 0 )
        goto LABEL_20;
      if ( v29 )
      {
        started = -1073741535;
        goto LABEL_20;
      }
      v11 = *(_QWORD *)(v6 + 192);
      if ( !v11 || *(_QWORD *)(v11 + 32) == v11 + 32 )
        break;
      if ( v5 )
      {
        v36 = 1;
        started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v6, v35);
        if ( started < 0 )
          goto LABEL_20;
        break;
      }
      CmpUnlockKcbStack(v33);
      CmpUnlockKcbStack(v32);
      CmpUnlockHashEntryByKcb(v6);
LABEL_23:
      CmpUnlockRegistry();
      CmpCleanupKcbStack(v32);
      CmpInitializeKcbStack(v32);
      CmpCleanupKcbStack(v33);
      CmpInitializeKcbStack(v33);
      CmpLockRegistryExclusive();
      v5 = 1;
    }
    v12 = *(unsigned int *)(v6 + 40);
    if ( (_DWORD)v12 != -1 )
    {
      if ( !v5 )
      {
        CmpUnlockKcbStack(v33);
        CmpUnlockKcbStack(v32);
        CmpUnlockHashEntryByKcb(v6);
        CmpCleanupDiscardReplaceContext(v35, a3);
        CmpDrainDelayDerefContext(a3, 0LL);
        goto LABEL_23;
      }
      v13 = *(_QWORD *)(v6 + 32);
      if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v13, v12, &v31);
      else
        CellFlat = HvpGetCellPaged(v13);
      v15 = CellFlat;
      for ( i = 0; ; ++i )
      {
        v17 = *(_QWORD *)(v6 + 32);
        if ( i >= *(_DWORD *)(v15 + 20) + *(_DWORD *)(v15 + 24) )
          break;
        started = CmpFindSubKeyByNumber(v17);
        if ( started < 0 )
          goto LABEL_17;
        started = CmpMarkKeyDirty(*(_QWORD *)(v6 + 32));
        if ( started < 0 )
          goto LABEL_17;
      }
      started = CmpMarkKeyDirty(v17);
      if ( started >= 0 )
      {
        while ( 1 )
        {
          CmpFindSubKeyByNumber(*(_QWORD *)(v6 + 32));
          v18 = *(_QWORD *)(v6 + 32);
          if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
            CellPaged = HvpGetCellFlat(v18, 0LL, &v30);
          else
            CellPaged = HvpGetCellPaged(v18);
          v24 = *(unsigned __int16 *)(CellPaged + 72);
          if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
          {
            v25 = CmpHashCompressedComponent(CellPaged + 76, v24);
          }
          else
          {
            *((_QWORD *)&v34 + 1) = CellPaged + 76;
            LOWORD(v34) = v24;
            WORD1(v34) = v24;
            v25 = CmpHashUnicodeComponent(&v34);
          }
          v26 = *(_QWORD *)(v6 + 32);
          v27 = v25;
          if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v26, &v30);
          else
            HvpReleaseCellPaged(v26, &v30);
          KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(
                                        *(_QWORD *)(v6 + 32),
                                        (unsigned int)(v27 + 37 * *(_DWORD *)(v6 + 16)),
                                        0LL);
          if ( KcbInHashEntryByCellIndex )
            *(_DWORD *)(KcbInHashEntryByCellIndex + 40) = -1;
          CmpFreeKeyByCell(*(_QWORD *)(v6 + 32));
        }
      }
LABEL_17:
      if ( v15 )
      {
        v19 = *(_QWORD *)(v6 + 32);
        if ( (*(_BYTE *)(v19 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v19, &v31);
        else
          HvpReleaseCellPaged(v19, &v31);
      }
LABEL_20:
      CmpUnlockKcbStack(v33);
      CmpUnlockKcbStack(v32);
      goto LABEL_37;
    }
    if ( *(_DWORD *)(v7 + 40) != -1 )
      goto LABEL_46;
    CmpUnlockKcbStack(v33);
    CmpUnlockKcbStack(v32);
    v22 = CmpPromoteKey(v32, 0LL, 0LL);
    started = v22;
    if ( v22 == -1073741444 )
      break;
    if ( v22 < 0 )
      goto LABEL_37;
    if ( v5 )
    {
      CmpLockKcbStackTopExclusiveRestShared(v32);
      CmpLockKcbStackExclusive(v33);
LABEL_46:
      started = CmpCreateTombstone(v10, v33);
      if ( started >= 0 )
      {
        CmpReportNotifyForKcbStack(v32, 0LL, 1LL, a2);
        CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v6, v23, a3, 0LL);
        CmpFlushNotifiesOnKeyBodyList(v6, 8LL, a3, 0LL);
        if ( v36 )
        {
          CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v6);
        }
        else
        {
          CmpMarkKeyUnbacked(v6, a3);
          CmpDiscardKcb(v6);
        }
LABEL_49:
        started = 0;
      }
      goto LABEL_20;
    }
    CmpUnlockHashEntryByKcb(v6);
    CmpCleanupKcbStack(v32);
    CmpInitializeKcbStack(v32);
    CmpCleanupKcbStack(v33);
    CmpInitializeKcbStack(v33);
  }
  started = 0;
LABEL_37:
  CmpUnlockHashEntryByKcb(v6);
LABEL_21:
  CmpCleanupDiscardReplaceContext(v35, a3);
  CmpCleanupKcbStack(v33);
  CmpCleanupKcbStack(v32);
  return (unsigned int)started;
}
