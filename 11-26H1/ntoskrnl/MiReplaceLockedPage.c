/*
 * XREFs of MiReplaceLockedPage @ 0x140294BC4
 * Callers:
 *     MiTrimViewLeafPte @ 0x1404658E4 (MiTrimViewLeafPte.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiPageToChannel @ 0x140294DD0 (MiPageToChannel.c)
 *     MiTradeActivePage @ 0x140294DF8 (MiTradeActivePage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295200 (MiReleaseFreshPageAtDpc.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiCanPageMove @ 0x1402DFD1C (MiCanPageMove.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // ebx
  char v9; // si
  char v10; // al
  __int64 Page; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 DemandZeroPte; // rax

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  if ( (unsigned __int16)*(_DWORD *)(a1 + 32) != 1 )
    return 0LL;
  if ( !(unsigned int)MiCanPageMove(a1) )
    return 0LL;
  v8 = *(_DWORD *)(a1 + 32);
  v9 = MiPageToChannel((a1 + 0x220000000000LL) / 48);
  v10 = MiPageToNode((a1 + 0x220000000000LL) / 48);
  Page = MiGetPage(
           *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)),
           (unsigned __int8)((a1 + 0x220000000000LL) / 48) | (v8 >> 4) & 0xC0000 | ((v9 & 1 | (2 * (v10 & 0x3F | 0x180))) << 8),
           a3);
  if ( Page == -1 )
    return 0LL;
  v12 = 48 * Page - 0x220000000000LL;
  v14 = MiLockProtoPoolPage(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  if ( !v14 )
  {
LABEL_14:
    MiReleaseFreshPage(v12, v13, v15);
    return 0LL;
  }
  if ( (unsigned int)MiGetPfnSlabType(a1) != 9 || !(unsigned int)MiTradeActivePage(a1, v12, a2, a4, 0) )
  {
    LOBYTE(v16) = 17;
    MiUnlockProtoPoolPage(v14, v16);
    goto LABEL_14;
  }
  LOBYTE(v16) = 17;
  MiUnlockProtoPoolPage(v14, v16);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v17 = *(_QWORD *)(a1 + 16);
  if ( v17 )
    DemandZeroPte = v17 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
  else
    DemandZeroPte = MiMakeDemandZeroPte(4);
  *(_QWORD *)(a1 + 16) = DemandZeroPte;
  MiReleaseFreshPageAtDpc(a1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0x11u);
  __writecr8(0x11uLL);
  return 1LL;
}
