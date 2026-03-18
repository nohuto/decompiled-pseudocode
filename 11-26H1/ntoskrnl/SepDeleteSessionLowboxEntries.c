/*
 * XREFs of SepDeleteSessionLowboxEntries @ 0x1404B8718
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140AFE360 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x140B7CDEC (SepDeReferenceLogonSession.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlDeleteHashTable @ 0x1404B8B10 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteSessionLowboxEntries(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  struct _KLOCK_ENTRIES *v7; // r9
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi
  struct _LIST_ENTRY *i; // rsi
  struct _KTHREAD *v11; // rax
  volatile signed __int64 *p_Blink; // rdi
  struct _LIST_ENTRY *Flink; // r14
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // rbp
  int v17; // edx
  __int64 v18; // rcx
  int v19; // r10d
  _QWORD *v20; // r9
  unsigned int v21; // ebp
  _QWORD *v22; // rdx
  __int64 j; // r8
  unsigned __int64 v24; // rcx
  unsigned int v25; // ecx
  struct _LIST_ENTRY *v26; // rcx
  struct _LIST_ENTRY *Blink; // rax

  if ( SepRmCapTableLock.MutantListHead.Flink )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (AutoBoost *)KeAbPreAcquire((__int64)&SepRmCapTableLock.ThreadListEntry.Blink, 0LL, 0LL, a4);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&SepRmCapTableLock.ThreadListEntry.Blink, 0LL);
    v9 = v5;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&SepRmCapTableLock.ThreadListEntry.Blink,
        v5,
        (__int64)&SepRmCapTableLock.ThreadListEntry.Blink);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v6);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    for ( i = SepRmCapTableLock.MutantListHead.Flink->Flink; i != SepRmCapTableLock.MutantListHead.Flink; i = Flink )
    {
      v11 = KeGetCurrentThread();
      p_Blink = (volatile signed __int64 *)&i[1].Blink;
      Flink = i->Flink;
      --v11->KernelApcDisable;
      v14 = (AutoBoost *)KeAbPreAcquire((__int64)&i[1].Blink, 0LL, 0LL, v7);
      v16 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&i[1].Blink, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&i[1].Blink, v14, (__int64)&i[1].Blink);
      if ( v16 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v16, v15);
        else
          *((_BYTE *)v16 + 10) = 1;
      }
      v17 = (int)i[2].Flink;
      v18 = (__int64)i[2].Blink & 4;
      v19 = (unsigned int)v18 != 0LL ? 0x20 : 0;
      v20 = (struct _LIST_ENTRY **)((char *)&i[2].Blink->Flink - (v18 != 0 ? 4 : 0));
      if ( !v17 )
        goto LABEL_29;
      v21 = v17 + v19 - 1;
      v22 = (struct _LIST_ENTRY **)((char *)&i[2].Blink->Flink - (v18 != 0 ? 4 : 0));
      for ( j = ~*v20 | ((1LL << ((unsigned int)v18 != 0LL ? 0x20 : 0)) - 1); j == -1; j = ~*v22 )
      {
        if ( ++v22 > &v20[(unsigned __int64)v21 >> 6] )
          goto LABEL_29;
      }
      _BitScanForward64(&v24, ~j);
      v25 = ((unsigned int)(v22 - v20) << 6) + v24;
      if ( v25 > v21 || v25 == -1 || v25 - v19 == -1 )
      {
LABEL_29:
        RtlDeleteHashTable((PRTL_DYNAMIC_HASH_TABLE)i[3].Flink);
        ExFreePoolWithTag(i[2].Blink, 0);
        v26 = i->Flink;
        if ( i->Flink->Blink != i || (Blink = i->Blink, Blink->Flink != i) )
          __fastfail(3u);
        Blink->Flink = v26;
        v26->Blink = Blink;
        if ( (_InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&i[1].Blink);
        KeAbPostRelease((unsigned __int64)&i[1].Blink);
        KeLeaveCriticalRegion();
        ExFreePoolWithTag(i, 0);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&i[1].Blink);
        KeAbPostRelease((unsigned __int64)&i[1].Blink);
        KeLeaveCriticalRegion();
      }
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&SepRmCapTableLock.ThreadListEntry.Blink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock.ThreadListEntry.Blink);
    KeAbPostRelease((unsigned __int64)&SepRmCapTableLock.ThreadListEntry.Blink);
    KeLeaveCriticalRegion();
  }
}
