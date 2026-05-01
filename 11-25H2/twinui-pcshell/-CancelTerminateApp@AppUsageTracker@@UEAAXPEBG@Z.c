/*
 * XREFs of ?CancelTerminateApp@AppUsageTracker@@UEAAXPEBG@Z @ 0x18054D1C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AppUsageTracker::CancelTerminateApp(AppUsageTracker *this, const unsigned __int16 *a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10));
  (*(void (__fastcall **)(_QWORD, const unsigned __int16 *))(**((_QWORD **)this + 11) + 64LL))(
    *((_QWORD *)this + 11),
    a2);
}
