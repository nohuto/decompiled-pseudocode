/*
 * XREFs of PfSnDeactivateTrace @ 0x140463740
 * Callers:
 *     PfSnEndTrace @ 0x140AA3588 (PfSnEndTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PfSnRemoveProcessTrace @ 0x1404637EC (PfSnRemoveProcessTrace.c)
 *     PfSnCancelTraceTimer @ 0x140463840 (PfSnCancelTraceTimer.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 */

__int64 __fastcall PfSnDeactivateTrace(struct _EX_RUNDOWN_REF *a1)
{
  KIRQL v2; // al
  KIRQL v3; // al
  struct _EX_RUNDOWN_REF *v4; // rdi
  unsigned __int64 Count; // r8
  struct _EX_RUNDOWN_REF **v6; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140E66FF0.StateSaveArea);
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140E66FF0.StateSaveArea, v2);
  PfSnRemoveProcessTrace(a1[44].Count);
  ExReleaseRundownProtection_0(a1 + 45);
  PfSnCancelTraceTimer(a1);
  ExWaitForRundownProtectionRelease(a1 + 45);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140E66FF0.StateSaveArea);
  v4 = a1 + 1;
  Count = v4->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(v4->Count + 8) != v4 || (v6 = (struct _EX_RUNDOWN_REF **)v4[1].Count, *v6 != v4) )
    __fastfail(3u);
  --LODWORD(stru_140E66FF0.ThreadLock);
  *v6 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v6;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140E66FF0.StateSaveArea, v3);
  return 0LL;
}
