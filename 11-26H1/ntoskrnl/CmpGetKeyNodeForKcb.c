/*
 * XREFs of CmpGetKeyNodeForKcb @ 0x1408D4900
 * Callers:
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpAssignKeySecurity @ 0x14085AB60 (CmpAssignKeySecurity.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1409806EC (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140982A88 (CmpEnumerateLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140B0F764 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x140B53BB0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D0EE0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpGetKeyNodeForKcb(__int64 a1, unsigned int *a2, char a3)
{
  unsigned int v5; // edx
  ULONG_PTR v7; // rcx
  __int64 CellFlat; // rax
  ULONG_PTR v9; // rcx
  __int64 v10; // rsi
  struct _KLOCK_ENTRIES *v11; // r9
  signed __int64 *v12; // rdi
  void *v13; // rdx
  LegacyAutoBoost *v14; // rsi
  ULONG_PTR v15; // rcx
  __int64 CellPaged; // rax
  ULONG_PTR v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rbx

  v5 = *(_DWORD *)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v7, v5, a2);
  else
    CellFlat = HvpGetCellPaged(v7);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = CellFlat;
  if ( a3 )
  {
    CmpUpdateKeyNodeAccessBits(v9, CellFlat, *(_DWORD *)(a1 + 40));
    return v10;
  }
  if ( (*(_DWORD *)(v9 + 160) & 0x8001) != 0 || (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) != 0 )
    return v10;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v9, a2);
  else
    HvpReleaseCellPaged(v9, a2);
  v12 = (signed __int64 *)(*(_QWORD *)(a1 + 32) + 72LL);
  v14 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v12, 0LL, 0LL, v11);
  if ( _InterlockedCompareExchange64(v12, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v12, 0, v14, (struct _KTHREAD *)v12);
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v14, v13);
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  v15 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v15, *(_DWORD *)(a1 + 40), a2);
  else
    CellPaged = HvpGetCellPaged(v15);
  v17 = *(_QWORD *)(a1 + 32);
  v18 = CellPaged;
  if ( (*(_DWORD *)(v17 + 160) & 0x8001) == 0
    && (*(_BYTE *)(CellPaged + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
    && (int)HvpMarkCellDirty(v17, *(unsigned int *)(a1 + 40)) >= 0 )
  {
    *(_BYTE *)(v18 + 12) |= CmpAccessBitForPhase;
  }
  v19 = *(_QWORD *)(a1 + 32);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v19 + 72));
  KeAbPostRelease(v19 + 72);
  return v18;
}
