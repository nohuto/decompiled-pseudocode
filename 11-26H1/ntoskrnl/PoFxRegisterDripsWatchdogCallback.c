/*
 * XREFs of PoFxRegisterDripsWatchdogCallback @ 0x140607050
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 */

void __fastcall PoFxRegisterDripsWatchdogCallback(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // rdi
  KIRQL v9; // al

  v4 = *(_QWORD *)(BugCheckParameter2 + 48);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 88));
  if ( *(_QWORD *)(BugCheckParameter2 + 168) )
    PopFxBugCheck(0x622uLL, BugCheckParameter2, 0LL, 0LL);
  if ( a3 )
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 864), 8u);
  *(_QWORD *)(BugCheckParameter2 + 904) = a4;
  *(_QWORD *)(BugCheckParameter2 + 168) = a2;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 88), v9);
}
