/*
 * XREFs of HalpTimerCalculateMaximumAllowableDrift @ 0x1405819AC
 * Callers:
 *     HalpInitializeTimers @ 0x140576C98 (HalpInitializeTimers.c)
 *     HalpTscFallback @ 0x140583C10 (HalpTscFallback.c)
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
