/*
 * XREFs of ?EnumerateAppStateData@AppUsageTracker@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18054D210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AppUsageTracker::EnumerateAppStateData(
        AppUsageTracker *this,
        struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 72LL))(*((_QWORD *)this + 10));
  (*(void (__fastcall **)(_QWORD, struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *))(**((_QWORD **)this + 11) + 72LL))(
    *((_QWORD *)this + 11),
    a2);
}
