/*
 * XREFs of ?AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@WBA@EAAKXZ @ 0x1800174B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::AddRef(__int64 a1, volatile int *a2)
{
  return Windows::System::AppMemoryUsageLimitChangingEventArgs::AddRef(
           (Windows::System::AppMemoryUsageLimitChangingEventArgs *)(a1 - 16),
           a2);
}
