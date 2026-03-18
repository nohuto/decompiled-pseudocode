/*
 * XREFs of ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker2@@AEAAXXZ @ 0x18018F68C
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker2@@UEAAXXZ @ 0x1802744C0 (-NotifyExpressionProcessingComplete@CInteractionTracker2@@UEAAXXZ.c)
 *     ?SetMaxScaleInternal@CInteractionTracker2@@AEAAXM@Z @ 0x1802763A4 (-SetMaxScaleInternal@CInteractionTracker2@@AEAAXM@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::EnsureScaleIsLessThanOrEqualToMax(CInteractionTracker2 *this, __int64 a2)
{
  if ( !*((_DWORD *)this + 22) && (*((_BYTE *)this + 828) & 0x20) == 0 )
    (*(void (__fastcall **)(CInteractionTracker2 *, __int64, _QWORD))(*(_QWORD *)this + 496LL))(this, a2, 0LL);
}
