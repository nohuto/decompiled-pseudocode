/*
 * XREFs of CmDeleteLayeredKey @ 0x14043F510
 * Callers:
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpCreateTombstone @ 0x1406E6C30 (CmpCreateTombstone.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1408650A4 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPromoteKey @ 0x1408B7364 (CmpPromoteKey.c)
 *     CmpDiscardKcb @ 0x1408C033C (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1408C065C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408C06E4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockKcbStackExclusive @ 0x1408C08E0 (CmpLockKcbStackExclusive.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1408C2B20 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpFreeKeyByCell @ 0x1408C3264 (CmpFreeKeyByCell.c)
 *     CmpMarkKeyDirty @ 0x1408C3494 (CmpMarkKeyDirty.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     CmpUnlockHashEntryByKcb @ 0x1408CC824 (CmpUnlockHashEntryByKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x1408D69AC (CmpReportNotifyForKcbStack.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D7138 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpHashUnicodeComponent @ 0x1408D7A30 (CmpHashUnicodeComponent.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpFindSubKeyByNumber @ 0x1408E5360 (CmpFindSubKeyByNumber.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1408E6D20 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanupKcbStack @ 0x140944530 (CmpCleanupKcbStack.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A4026C (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140A40C9C (CmpCleanupDiscardReplaceContext.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A40D14 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpHashCompressedComponent @ 0x140A4C950 (CmpHashCompressedComponent.c)
 *     CmpInitializeKcbStack @ 0x140A5C160 (CmpInitializeKcbStack.c)
 *     CmpIncrementKcbSequenceNumber @ 0x140AC2010 (CmpIncrementKcbSequenceNumber.c)
 *     CmpInitializeDiscardReplaceContext @ 0x140ADE6C4 (CmpInitializeDiscardReplaceContext.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140AE2444 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpFreeKeyValues @ 0x140B1F1B8 (CmpFreeKeyValues.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x140B56808 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmDeleteLayeredKey(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // si
  char v6; // r12
  ULONG_PTR v7; // rdi
  __int64 v8; // r14
  int started; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  ULONG_PTR *v14; // rsi
  ULONG_PTR v15; // rcx
  __int64 CellFlat; // rax
  __int64 v17; // r14
  unsigned int i; // r12d
  ULONG_PTR v19; // rcx
  ULONG_PTR v20; // rcx
  ULONG_PTR v21; // rcx
  __int64 CellPaged; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rdx
  int v27; // eax
  ULONG_PTR v28; // rcx
  int v29; // ebx
  __int64 KcbInHashEntryByCellIndex; // rax
  int v31; // [rsp+20h] [rbp-69h] BYREF
  __int64 v32; // [rsp+28h] [rbp-61h] BYREF
  __int64 v33; // [rsp+30h] [rbp-59h] BYREF
  _OWORD v34[2]; // [rsp+38h] [rbp-51h] BYREF
  _OWORD v35[2]; // [rsp+58h] [rbp-31h] BYREF
  __int128 v36; // [rsp+78h] [rbp-11h] BYREF
  _OWORD v37[5]; // [rsp+88h] [rbp-1h] BYREF

  v31 = 0;
  memset(v35, 0, sizeof(v35));
  v32 = 0LL;
  memset(v34, 0, sizeof(v34));
  v33 = 0LL;
  v36 = 0LL;
  memset(v37, 0, 32);
  CmpInitializeKcbStack(v35);
  CmpInitializeKcbStack(v34);
  v5 = 0;
  HvpGetCellContextInitialize(&v33);
  HvpGetCellContextInitialize(&v32);
  CmpInitializeDiscardReplaceContext(v37);
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(v7 + 72);
    if ( (*(_DWORD *)(v7 + 184) & 0x80000) != 0 )
      break;
    started = CmpStartKcbStackForTopLayerKcb(v35, *(_QWORD *)(a1 + 8));
    if ( started < 0 )
      goto LABEL_22;
    started = CmpStartKcbStackForTopLayerKcb(v34, v8);
    if ( started < 0 )
      goto LABEL_22;
    CmpLockHashEntryExclusiveByKcb(v7);
    CmpLockKcbStackTopExclusiveRestShared(v34);
    CmpLockKcbStackExclusive(v35);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      started = 0;
      goto LABEL_20;
    }
    started = CmpGetSubKeyCountForKcbStack(v35, v10, &v31);
    if ( started < 0 )
      goto LABEL_20;
    if ( v31 )
    {
      started = -1073741535;
      goto LABEL_20;
    }
    v12 = *(_QWORD *)(v7 + 192);
    if ( v12 && *(_QWORD *)(v12 + 32) != v12 + 32 )
    {
      if ( !v5 )
      {
        CmpUnlockKcbStack(v35);
        CmpUnlockKcbStack(v34);
        CmpUnlockHashEntryByKcb(v7);
        goto LABEL_24;
      }
      v6 = 1;
      started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v7, v37);
      if ( started < 0 )
        goto LABEL_20;
    }
    v13 = *(unsigned int *)(v7 + 40);
    if ( (_DWORD)v13 == -1 )
    {
      if ( *(_DWORD *)(v8 + 40) != -1 )
        goto LABEL_47;
      CmpUnlockKcbStack(v35);
      CmpUnlockKcbStack(v34);
      v24 = CmpPromoteKey(v34, 0LL, 0LL);
      started = v24;
      if ( v24 == -1073741444 )
      {
        started = 0;
        goto LABEL_21;
      }
      if ( v24 < 0 )
        goto LABEL_21;
      if ( v5 )
      {
        CmpLockKcbStackTopExclusiveRestShared(v34);
        CmpLockKcbStackExclusive(v35);
LABEL_47:
        started = CmpCreateTombstone(v11, v35);
        if ( started >= 0 )
        {
          CmpReportNotifyForKcbStack(v34, 0LL, 1LL, a2);
          CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v7, v25, a3, 0LL);
          CmpFlushNotifiesOnKeyBodyList(v7, 8LL, a3);
          if ( v6 )
          {
            CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v7);
          }
          else
          {
            CmpMarkKeyUnbacked(v7, a3);
            CmpDiscardKcb(v7);
          }
          started = 0;
        }
LABEL_20:
        CmpUnlockKcbStack(v35);
        CmpUnlockKcbStack(v34);
LABEL_21:
        CmpUnlockHashEntryByKcb(v7);
        goto LABEL_22;
      }
      CmpUnlockHashEntryByKcb(v7);
      CmpCleanupKcbStack(v34);
      CmpInitializeKcbStack(v34);
      CmpCleanupKcbStack(v35);
      CmpInitializeKcbStack(v35);
    }
    else
    {
      if ( v5 )
      {
        v14 = (ULONG_PTR *)(v7 + 32);
        v15 = *(_QWORD *)(v7 + 32);
        if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v15, v13, &v33);
        else
          CellFlat = HvpGetCellPaged(v15);
        v17 = CellFlat;
        for ( i = 0; ; ++i )
        {
          v19 = *v14;
          if ( i >= *(_DWORD *)(v17 + 24) + *(_DWORD *)(v17 + 20) )
            break;
          started = CmpFindSubKeyByNumber(v19);
          if ( started < 0 )
            goto LABEL_17;
          started = CmpMarkKeyDirty(*v14);
          if ( started < 0 )
            goto LABEL_17;
        }
        started = CmpMarkKeyDirty(v19);
        if ( started >= 0 )
        {
          while ( 1 )
          {
            CmpFindSubKeyByNumber(*v14);
            v20 = *v14;
            if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
              CellPaged = HvpGetCellFlat(v20, 0LL, &v32);
            else
              CellPaged = HvpGetCellPaged(v20);
            v26 = *(unsigned __int16 *)(CellPaged + 72);
            if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
            {
              v27 = CmpHashCompressedComponent(CellPaged + 76, v26);
            }
            else
            {
              *((_QWORD *)&v36 + 1) = CellPaged + 76;
              LOWORD(v36) = v26;
              WORD1(v36) = v26;
              v27 = CmpHashUnicodeComponent(&v36);
            }
            v28 = *v14;
            v29 = v27;
            if ( (*(_BYTE *)(*v14 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v28, &v32);
            else
              HvpReleaseCellPaged(v28, &v32);
            KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(
                                          *v14,
                                          (unsigned int)(v29 + 37 * *(_DWORD *)(v7 + 16)),
                                          0LL);
            if ( KcbInHashEntryByCellIndex )
              *(_DWORD *)(KcbInHashEntryByCellIndex + 40) = -1;
            CmpFreeKeyByCell(*v14);
          }
        }
LABEL_17:
        if ( v17 )
        {
          v21 = *v14;
          if ( (*(_BYTE *)(*v14 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v21, &v33);
          else
            HvpReleaseCellPaged(v21, &v33);
        }
        goto LABEL_20;
      }
      CmpUnlockKcbStack(v35);
      CmpUnlockKcbStack(v34);
      CmpUnlockHashEntryByKcb(v7);
      CmpCleanupDiscardReplaceContext(v37, a3);
      CmpDrainDelayDerefContext(a3, 0LL);
LABEL_24:
      CmpUnlockRegistry();
      CmpCleanupKcbStack(v34);
      CmpInitializeKcbStack(v34);
      CmpCleanupKcbStack(v35);
      CmpInitializeKcbStack(v35);
      CmpLockRegistryExclusive();
      v5 = 1;
    }
  }
  started = -1073741535;
LABEL_22:
  CmpCleanupDiscardReplaceContext(v37, a3);
  CmpCleanupKcbStack(v35);
  CmpCleanupKcbStack(v34);
  return (unsigned int)started;
}
