/*
 * XREFs of CmpAddStringToMapping @ 0x140AFD41C
 * Callers:
 *     CmpVEAddHiveToSIDMappingTable @ 0x140AFD380 (CmpVEAddHiveToSIDMappingTable.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     CmpHashUnicodeComponent @ 0x1408D1470 (CmpHashUnicodeComponent.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpAddStringToMapping(const void **a1, struct _LIST_ENTRY *a2)
{
  unsigned int v4; // edi
  _KPROCESS *v6; // rdx
  __int64 v7; // r9
  struct _LIST_ENTRY *v8; // rax
  __int64 v9; // rbx
  _KPROCESS *v10; // rbp
  int v11; // eax
  _KPROCESS *Process; // rbx
  _KPROCESS *Pool2; // rax

  v4 = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.ApcStateFill[8]);
  if ( *(_DWORD *)&WheapPfaLock.ApcStateFill[24] != -1 )
  {
    if ( (unsigned int)(*(_DWORD *)&WheapPfaLock.ApcStateFill[24] + 1) >= *(_DWORD *)&WheapPfaLock.ApcStateFill[28] )
    {
      Process = WheapPfaLock.ApcState.Process;
      Pool2 = (_KPROCESS *)ExAllocatePool2(0x100uLL);
      WheapPfaLock.ApcState.Process = Pool2;
      if ( !Pool2 )
      {
        WheapPfaLock.ApcState.Process = Process;
        goto LABEL_9;
      }
      *(_DWORD *)&WheapPfaLock.ApcStateFill[28] += 4;
      if ( Process )
      {
        memmove(Pool2, Process, 32LL * *(unsigned int *)&WheapPfaLock.ApcStateFill[24]);
        ExFreePoolWithTag(Process, 0x65564D43u);
      }
    }
    v6 = WheapPfaLock.ApcState.Process;
    v7 = 32LL * *(unsigned int *)&WheapPfaLock.ApcStateFill[24];
    *(struct _LIST_ENTRY **)((char *)&WheapPfaLock.ApcState.Process->ProfileListHead.Flink + v7) = a2;
    *(_WORD *)((char *)&v6->Header.Lock + v7) = *(_WORD *)a1;
    *(_WORD *)(&v6->Header.Size + v7) = *(_WORD *)a1;
    v8 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
    v9 = *(unsigned int *)&WheapPfaLock.ApcStateFill[24];
    v10 = WheapPfaLock.ApcState.Process;
    (&WheapPfaLock.ApcState.Process->Header.WaitListHead.Flink)[4 * *(unsigned int *)&WheapPfaLock.ApcStateFill[24]] = v8;
    if ( v8 )
    {
      memmove(v8, a1[1], *(unsigned __int16 *)a1);
      v11 = CmpHashUnicodeComponent((__m128i *)a1);
      ++*(_DWORD *)&WheapPfaLock.ApcStateFill[24];
      LODWORD((&v10->Header.WaitListHead.Blink)[4 * v9]) = v11;
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
