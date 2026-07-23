/*
 * XREFs of RawInitiateDeleteVolume @ 0x1404B6C14
 * Callers:
 *     RawCompletionRoutine @ 0x140258EB0 (RawCompletionRoutine.c)
 *     RawVerifyVolume @ 0x14061A588 (RawVerifyVolume.c)
 *     RawCleanup @ 0x14091A0A4 (RawCleanup.c)
 *     RawClose @ 0x14091A23C (RawClose.c)
 *     RawReadWriteDeviceControl @ 0x14091A2C4 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x14091A3DC (RawCreate.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RawCleanupVcb @ 0x140919A0C (RawCleanupVcb.c)
 *     RawDeleteVcb @ 0x140B0BD54 (RawDeleteVcb.c)
 */

char __fastcall RawInitiateDeleteVolume(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, int a2, int a3)
{
  char v3; // si
  void ***p_FileContextSupportPointer; // r14
  KIRQL v8; // r15
  KIRQL v9; // dl
  char *p_FilterContexts; // rdi
  struct _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *v13; // rax
  void **v14; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // rax
  struct _LIST_ENTRY *v17; // rax
  KIRQL v18; // al
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx

  v3 = 0;
  if ( (*(_DWORD *)&AdvancedHeader[1].NodeTypeCode & 4) != 0 )
  {
    if ( LODWORD(AdvancedHeader[1].Resource) )
      return v3;
    v18 = KeAcquireQueuedSpinLock(9uLL);
    v9 = v18;
    if ( *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) )
      goto LABEL_5;
    KeReleaseQueuedSpinLock(9uLL, v18);
    ExAcquireFastMutex((PKGUARDED_MUTEX)&NormalizationListLock.Timer.Header.WaitListHead);
    Flink = AdvancedHeader[1].FilterContexts.Flink;
    if ( Flink->Blink == &AdvancedHeader[1].FilterContexts )
    {
      Blink = AdvancedHeader[1].FilterContexts.Blink;
      if ( Blink->Flink == &AdvancedHeader[1].FilterContexts )
      {
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&NormalizationListLock.Timer.Header.WaitListHead);
        goto LABEL_11;
      }
    }
LABEL_17:
    __fastfail(3u);
  }
  p_FileContextSupportPointer = &AdvancedHeader[1].FileContextSupportPointer;
  v8 = KeAcquireQueuedSpinLock(9uLL);
  if ( a2 || *(_DWORD *)&AdvancedHeader[1].Flags + *((_DWORD *)*p_FileContextSupportPointer + 7) == a3 )
  {
    p_FilterContexts = (char *)&AdvancedHeader[1].FilterContexts;
    if ( LODWORD(AdvancedHeader[1].Resource) + *((_DWORD *)*p_FileContextSupportPointer + 7) )
    {
      memset_0(AdvancedHeader[1].Oplock, 0, 0x60uLL);
      *(_WORD *)AdvancedHeader[1].Oplock = 10;
      *((_WORD *)AdvancedHeader[1].Oplock + 1) = 96;
      *((_QWORD *)AdvancedHeader[1].Oplock + 2) = (*p_FileContextSupportPointer)[2];
      *((_QWORD *)AdvancedHeader[1].Oplock + 1) = 0LL;
      *((_WORD *)AdvancedHeader[1].Oplock + 2) = *((_WORD *)*p_FileContextSupportPointer + 2) & 8;
      *((_QWORD *)(*p_FileContextSupportPointer)[2] + 7) = AdvancedHeader[1].Oplock;
      v14 = *p_FileContextSupportPointer;
      AdvancedHeader[1].Oplock = 0LL;
      *((_WORD *)v14 + 2) |= 4u;
      *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 8u;
      KeReleaseQueuedSpinLock(9uLL, v8);
      ExAcquireFastMutex((PKGUARDED_MUTEX)&NormalizationListLock.Timer.Header.WaitListHead);
      v15 = *(struct _LIST_ENTRY **)p_FilterContexts;
      if ( *(char **)(*(_QWORD *)p_FilterContexts + 8LL) == p_FilterContexts )
      {
        v16 = AdvancedHeader[1].FilterContexts.Blink;
        if ( (char *)v16->Flink == p_FilterContexts )
        {
          v16->Flink = v15;
          v15->Blink = v16;
          *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 6u;
          v17 = *(struct _LIST_ENTRY **)&NormalizationListLock.Timer.Header.Lock;
          if ( **(struct _KTHREAD ***)&NormalizationListLock.Timer.Header.Lock == (struct _KTHREAD *)&NormalizationListLock.RelativeTimerBias )
          {
            *(_QWORD *)p_FilterContexts = &NormalizationListLock.RelativeTimerBias;
            AdvancedHeader[1].FilterContexts.Blink = v17;
            v17->Flink = (struct _LIST_ENTRY *)p_FilterContexts;
            *(_QWORD *)&NormalizationListLock.Timer.Header.Lock = (char *)AdvancedHeader + 176;
            KeReleaseGuardedMutex((PKGUARDED_MUTEX)&NormalizationListLock.Timer.Header.WaitListHead);
            return v3;
          }
        }
      }
    }
    else
    {
      *((_WORD *)*p_FileContextSupportPointer + 2) &= ~1u;
      (*p_FileContextSupportPointer)[1] = 0LL;
      KeReleaseQueuedSpinLock(9uLL, v8);
      ExAcquireFastMutex((PKGUARDED_MUTEX)&NormalizationListLock.Timer.Header.WaitListHead);
      v12 = *(struct _LIST_ENTRY **)p_FilterContexts;
      if ( *(char **)(*(_QWORD *)p_FilterContexts + 8LL) == p_FilterContexts )
      {
        v13 = AdvancedHeader[1].FilterContexts.Blink;
        if ( (char *)v13->Flink == p_FilterContexts )
        {
          v13->Flink = v12;
          v12->Blink = v13;
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)&NormalizationListLock.Timer.Header.WaitListHead);
          *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 2u;
LABEL_11:
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2]);
          RawCleanupVcb(AdvancedHeader);
          RawDeleteVcb(AdvancedHeader);
          return 1;
        }
      }
    }
    goto LABEL_17;
  }
  v9 = v8;
LABEL_5:
  KeReleaseQueuedSpinLock(9uLL, v9);
  return v3;
}
