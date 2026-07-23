/*
 * XREFs of PfpPrefetchSharedConflictNotifyStart @ 0x140B4DE20
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 */

__int64 __fastcall PfpPrefetchSharedConflictNotifyStart(struct _KLOCK_ENTRIES *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  struct _KLOCK_ENTRIES *v4; // r9
  AutoBoost *v6; // rdi
  AutoBoost *v7; // rax
  struct _KLOCK_ENTRY *v8; // rdx

  v3 = 0;
  v4 = a1;
  v6 = 0LL;
  ++HIDWORD(stru_140E67200.SListFaultAddress);
  if ( a1 )
  {
    LODWORD(a1->Entries[0].WaiterTree.Root) = 1;
    _InterlockedAdd((volatile signed __int32 *)&a1[1].AvailableEntryBitmap, 1u);
    *((_DWORD *)&a1->Entries[0].CpuPriorityKey + 1) = 0;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1[1].Entries) <= 1 )
      __fastfail(0xEu);
    if ( !*(_QWORD *)&a1[1].Entries[0].EntryFlags )
      goto LABEL_6;
  }
  else
  {
    a1 = (struct _KLOCK_ENTRIES *)&stru_140E66D40.WaitBlockFill11[48];
  }
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, v4);
  v6 = v7;
  if ( v7 )
  {
    KeAbPreWait(v7, v8);
    goto LABEL_9;
  }
LABEL_6:
  v3 = -1073741670;
LABEL_9:
  a3[1] = v6;
  *a3 = PfpPrefetchSharedConflictNotifyEnd;
  return v3;
}
