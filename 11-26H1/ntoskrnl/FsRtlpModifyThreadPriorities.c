/*
 * XREFs of FsRtlpModifyThreadPriorities @ 0x1403FB0D4
 * Callers:
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F49E4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F5200 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1403F959C (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1403FAC10 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToII @ 0x14050E330 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1405297A0 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14052CC9C (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1405B8984 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B8BC0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14079171C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14079186C (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x140248200 (PsBoostThreadIoEx.c)
 *     FsRtlpDoBoost @ 0x1404DC574 (FsRtlpDoBoost.c)
 */

void __fastcall FsRtlpModifyThreadPriorities(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  LegacyAutoBoost *v5; // rcx
  unsigned int CurrentThread; // ebp
  __int64 v7; // rcx
  int v8; // r9d
  _QWORD *i; // rdi

  v3 = a2;
  if ( a3 )
  {
    CurrentThread = (unsigned int)KeGetCurrentThread();
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
    {
      v8 = a1 + 144;
    }
    else if ( !a2 || (v7 = *(_QWORD *)(a2 + 40), v8 = a2 + 48, !v7) )
    {
      for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
        FsRtlpDoBoost(i[5], CurrentThread, a1 + 32, (_DWORD)i + 48, a1);
      return;
    }
    FsRtlpDoBoost(v7, CurrentThread, a1 + 32, v8, a1);
    return;
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 0x20) != 0 )
    {
      v5 = *(LegacyAutoBoost **)(a2 + 40);
      LOBYTE(a2) = 1;
      PsBoostThreadIoEx(v5, a2, 1, (struct _SINGLE_LIST_ENTRY *)a1);
      *(_DWORD *)(v3 + 48) &= ~0x20u;
    }
  }
  else if ( (*(_DWORD *)(a1 + 144) & 0x20) != 0 )
  {
    LOBYTE(a2) = 1;
    PsBoostThreadIoEx(*(LegacyAutoBoost **)(a1 + 24), a2, 1, (struct _SINGLE_LIST_ENTRY *)a1);
    *(_DWORD *)(a1 + 144) &= ~0x20u;
  }
}
