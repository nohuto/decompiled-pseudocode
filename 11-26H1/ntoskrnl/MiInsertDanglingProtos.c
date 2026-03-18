/*
 * XREFs of MiInsertDanglingProtos @ 0x140458AC8
 * Callers:
 *     MiFreeProtoPool @ 0x140458808 (MiFreeProtoPool.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiInsertDanglingProtos(__int64 a1, __int64 a2)
{
  KIRQL v3; // di
  _XSAVE_FORMAT *StateSaveArea; // rax

  *(_QWORD *)(a1 + 16) = a2;
  if ( KeGetCurrentIrql() == 2 )
  {
    v3 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&stru_140E2D150.CurrentRunTime);
  }
  else
  {
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2D150.CurrentRunTime);
  }
  StateSaveArea = stru_140E2D150.StateSaveArea;
  if ( *(struct _KTHREAD **)stru_140E2D150.StateSaveArea != (struct _KTHREAD *)&stru_140E2D150.KernelStack )
    __fastfail(3u);
  *(_QWORD *)a1 = &stru_140E2D150.KernelStack;
  *(_QWORD *)(a1 + 8) = StateSaveArea;
  *(_QWORD *)&StateSaveArea->ControlWord = a1;
  stru_140E2D150.StateSaveArea = (_XSAVE_FORMAT *)a1;
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2D150.CurrentRunTime);
  else
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2D150.CurrentRunTime, v3);
}
