/*
 * XREFs of PfSnStartTraceTimer @ 0x1404C7858
 * Callers:
 *     PfSnBeginScenario @ 0x1409D16A0 (PfSnBeginScenario.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 */

__int64 __fastcall PfSnStartTraceTimer(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rsi
  struct _EX_RUNDOWN_REF *v2; // rdi
  KSPIN_LOCK *p_Count; // rbp
  KIRQL v4; // r14
  unsigned int v5; // ebx

  v1 = a1 + 45;
  v2 = a1;
  if ( ExAcquireRundownProtection_0(a1 + 45) )
  {
    p_Count = &v2[34].Count;
    v4 = KeAcquireSpinLockRaiseToDpc(&v2[34].Count);
    if ( (v2[35].Count & 2) != 0 )
    {
      v5 = -1073741431;
    }
    else if ( (unsigned __int8)KiSetTimerEx((__int64)&v2[17], v2[25].Count, 0, 0, (__int64)&v2[26]) )
    {
      v5 = -1073741595;
    }
    else
    {
      LODWORD(v2[35].Count) |= 1u;
      v2 = 0LL;
      v5 = 0;
    }
    KeReleaseSpinLock(p_Count, v4);
    if ( v2 )
      ExReleaseRundownProtection_0(v1);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v5;
}
