/*
 * XREFs of PfSnDeactivateTrace @ 0x14045C700
 * Callers:
 *     PfSnEndTrace @ 0x140AA6328 (PfSnEndTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PfSnRemoveProcessTrace @ 0x14045C7AC (PfSnRemoveProcessTrace.c)
 *     PfSnCancelTraceTimer @ 0x14045C800 (PfSnCancelTraceTimer.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 */

__int64 __fastcall PfSnDeactivateTrace(struct _EX_RUNDOWN_REF *a1)
{
  KIRQL v2; // al
  KIRQL v3; // al
  struct _EX_RUNDOWN_REF *v4; // rdi
  unsigned __int64 Count; // r8
  struct _EX_RUNDOWN_REF **v6; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140E67200.StateSaveArea);
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140E67200.StateSaveArea, v2);
  PfSnRemoveProcessTrace(a1[44].Count);
  ExReleaseRundownProtection_0(a1 + 45);
  PfSnCancelTraceTimer(a1);
  ExWaitForRundownProtectionRelease(a1 + 45);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140E67200.StateSaveArea);
  v4 = a1 + 1;
  Count = v4->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(v4->Count + 8) != v4 || (v6 = (struct _EX_RUNDOWN_REF **)v4[1].Count, *v6 != v4) )
    __fastfail(3u);
  --LODWORD(stru_140E67200.ThreadLock);
  *v6 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v6;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140E67200.StateSaveArea, v3);
  return 0LL;
}
