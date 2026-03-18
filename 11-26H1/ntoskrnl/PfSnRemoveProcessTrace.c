/*
 * XREFs of PfSnRemoveProcessTrace @ 0x1404637EC
 * Callers:
 *     PfSnDeactivateTrace @ 0x140463740 (PfSnDeactivateTrace.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpReleaseRundownProtection @ 0x140463F50 (ExpReleaseRundownProtection.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnRemoveProcessTrace(__int64 a1)
{
  __int64 v1; // rdx
  struct _EX_RUNDOWN_REF *v2; // rbx
  ULONG v3; // edx
  KIRQL v4; // al

  v1 = _InterlockedExchange64((volatile __int64 *)(a1 + 912), 0LL);
  v2 = (struct _EX_RUNDOWN_REF *)(v1 & 0xFFFFFFFFFFFFFFF0uLL);
  v3 = v1 & 0xF;
  if ( v3 )
    ExpReleaseRundownProtection(v2 + 45, v3);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140E66FF0.StateSaveArea);
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140E66FF0.StateSaveArea, v4);
  return v2;
}
