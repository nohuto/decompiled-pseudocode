/*
 * XREFs of HalpTimerCalculateMaximumAllowableDrift @ 0x140583ECC
 * Callers:
 *     HalpInitializeTimers @ 0x1405791C8 (HalpInitializeTimers.c)
 *     HalpTscFallback @ 0x140586130 (HalpTscFallback.c)
 * Callees:
 *     <none>
 */

unsigned __int64 HalpTimerCalculateMaximumAllowableDrift()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // r8
  unsigned __int64 result; // rax

  v0 = *(_QWORD *)(HalpAlwaysOnCounter + 192);
  v1 = *(_QWORD *)(HalpPerformanceCounter + 192);
  if ( v1 <= v0 )
    result = 10 * v0 / v1;
  else
    result = 10 * v1 / v0;
  if ( result < 0xA )
    return 10LL;
  return result;
}
