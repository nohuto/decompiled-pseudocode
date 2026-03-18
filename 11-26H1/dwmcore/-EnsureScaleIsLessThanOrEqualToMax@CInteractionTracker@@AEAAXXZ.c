/*
 * XREFs of ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18018E5C4
 * Callers:
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x180138ECC (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::EnsureScaleIsLessThanOrEqualToMax(CInteractionTracker *this, __int64 a2)
{
  if ( !*((_DWORD *)this + 22) && (*((_BYTE *)this + 596) & 0x10) == 0 )
    (*(void (__fastcall **)(CInteractionTracker *, __int64, _QWORD))(*(_QWORD *)this + 496LL))(this, a2, 0LL);
}
