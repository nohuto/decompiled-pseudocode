/*
 * XREFs of ?s_OnIdleAtFrameBegin@CInteractionTracker@@CAJPEAX@Z @ 0x1801D0170
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::s_OnIdleAtFrameBegin(_QWORD *a1)
{
  if ( a1[7] && a1[6] )
    CResource::InvalidateConsumingAnimationsInternal((__int64)a1);
  *((_BYTE *)a1 + 596) &= ~0x40u;
  (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  return 0LL;
}
