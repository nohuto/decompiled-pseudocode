/*
 * XREFs of MiAddPrivateFixupEntryForSystemImage @ 0x1406EB858
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140AC89E4 (MiGetSystemAddressForImage.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiInitializePrivateFixupBitmap @ 0x14099F814 (MiInitializePrivateFixupBitmap.c)
 */

__int64 __fastcall MiAddPrivateFixupEntryForSystemImage(unsigned __int64 a1, struct _LIST_ENTRY *a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  _KPROCESS *v6; // rbx
  KIRQL v7; // al
  _KPROCESS *Process; // rcx

  v4 = *(unsigned int *)(*(_QWORD *)a1 + 8LL);
  result = ExAllocatePoolMm(
             64LL,
             8 * (((unsigned __int64)(unsigned int)v4 >> 6) + ((v4 & 0x3F) != 0) + 8LL),
             1767075149,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v6 = (_KPROCESS *)result;
  if ( result )
  {
    *(_QWORD *)(result + 48) = v4;
    *(_QWORD *)(result + 56) = result + 64;
    MiInitializePrivateFixupBitmap(result + 48, a1, 1LL);
    v6->DirectoryTableBase = a1;
    v6->Header.WaitListHead.Blink = a2;
    v6->ProfileListHead.Flink = (struct _LIST_ENTRY *)((char *)&a2[256 * v4 - 1].Blink + 7);
    v6->ProfileListHead.Blink = *(struct _LIST_ENTRY **)(*(_QWORD *)a1 + 32LL);
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2D2D0.SchedulerApc.SpareLong0);
    Process = stru_140E2D2D0.SavedApcState.Process;
    if ( *(struct _KTHREAD **)stru_140E2D2D0.SavedApcState.Process != (struct _KTHREAD *)&stru_140E2D2D0.SavedApcStateFill[24] )
      __fastfail(3u);
    v6->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)stru_140E2D2D0.SavedApcState.Process;
    *(_QWORD *)&v6->Header.Lock = &stru_140E2D2D0.SavedApcState.ApcListHead[1].Blink;
    *(_QWORD *)&Process->Header.Lock = v6;
    stru_140E2D2D0.SavedApcState.Process = v6;
    if ( v7 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2D2D0.SchedulerApc.SpareLong0);
    else
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2D2D0.SchedulerApc.SpareLong0, v7);
    return 1LL;
  }
  return result;
}
