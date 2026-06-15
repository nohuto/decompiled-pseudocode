/*
 * XREFs of ?CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ @ 0x1800158A0
 * Callers:
 *     ?EnsureBamExemption@CProcess@@IEAAXXZ @ 0x18001580C (-EnsureBamExemption@CProcess@@IEAAXXZ.c)
 *     ??1CProcess@@MEAA@XZ @ 0x18001ADE4 (--1CProcess@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcess::CancelDeferredBamExemptionRelease(CProcess *this)
{
  struct _TP_TIMER *v2; // rcx

  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 73);
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 73), 1);
  }
}
