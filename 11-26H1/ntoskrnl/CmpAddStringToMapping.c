/*
 * XREFs of CmpAddStringToMapping @ 0x140AFEF8C
 * Callers:
 *     CmpVEAddHiveToSIDMappingTable @ 0x140AFEEF0 (CmpVEAddHiveToSIDMappingTable.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     CmpHashUnicodeComponent @ 0x1408D7A30 (CmpHashUnicodeComponent.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpAddStringToMapping(const void **a1, __int64 a2)
{
  unsigned int v4; // edi
  _DISPATCHER_HEADER *volatile v6; // rdx
  __int64 v7; // r9
  struct _LIST_ENTRY *v8; // rax
  __int64 Teb_high; // rbx
  _DISPATCHER_HEADER *volatile v10; // rbp
  int v11; // eax
  _DISPATCHER_HEADER *Queue; // rbx
  _DISPATCHER_HEADER *Pool2; // rax

  v4 = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.ApcStateFill[8]);
  if ( HIDWORD(WheapPfaLock.Teb) != -1 )
  {
    if ( (unsigned int)(HIDWORD(WheapPfaLock.Teb) + 1) >= LODWORD(WheapPfaLock.Teb) )
    {
      Queue = WheapPfaLock.Queue;
      Pool2 = (_DISPATCHER_HEADER *)ExAllocatePool2(0x100uLL);
      WheapPfaLock.Queue = Pool2;
      if ( !Pool2 )
      {
        WheapPfaLock.Queue = Queue;
        goto LABEL_9;
      }
      LODWORD(WheapPfaLock.Teb) += 4;
      if ( Queue )
      {
        memmove(Pool2, Queue, 32LL * HIDWORD(WheapPfaLock.Teb));
        ExFreePoolWithTag(Queue, 0x65564D43u);
      }
    }
    v6 = WheapPfaLock.Queue;
    v7 = 32LL * HIDWORD(WheapPfaLock.Teb);
    *(_QWORD *)((char *)&WheapPfaLock.Queue[1].Lock + v7) = a2;
    *(_WORD *)((char *)&v6->Lock + v7) = *(_WORD *)a1;
    *(_WORD *)(&v6->Size + v7) = *(_WORD *)a1;
    v8 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
    Teb_high = HIDWORD(WheapPfaLock.Teb);
    v10 = WheapPfaLock.Queue;
    (&WheapPfaLock.Queue->WaitListHead.Flink)[4 * HIDWORD(WheapPfaLock.Teb)] = v8;
    if ( v8 )
    {
      memmove(v8, a1[1], *(unsigned __int16 *)a1);
      v11 = CmpHashUnicodeComponent((__m128i *)a1);
      ++HIDWORD(WheapPfaLock.Teb);
      LODWORD((&v10->WaitListHead.Blink)[4 * Teb_high]) = v11;
      goto LABEL_3;
    }
LABEL_9:
    v4 = -1073741670;
    goto LABEL_3;
  }
  v4 = -1073741675;
LABEL_3:
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.ApcStateFill[8]);
  return v4;
}
