/*
 * XREFs of ??_EAppUsageTracker@@UEAAPEAXI@Z @ 0x18054D180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AppUsageTracker@@UEAA@XZ @ 0x18054D12C (--1AppUsageTracker@@UEAA@XZ.c)
 */

AppUsageTracker *__fastcall AppUsageTracker::`vector deleting destructor'(AppUsageTracker *this, char a2)
{
  AppUsageTracker::~AppUsageTracker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
