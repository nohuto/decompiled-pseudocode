/*
 * XREFs of ?Thunk_UpdateHoverPointer_138@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x180226530
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_UpdateHoverPointer_138(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rbx

  v2 = a2[1];
  v3 = **a2;
  if ( *(float *)(v3 + 88) != *(float *)v2 || *(float *)(v3 + 92) != *((float *)v2 + 1) )
    *(_QWORD *)(v3 + 88) = *v2;
  if ( *(_QWORD *)(v3 + 56) )
    CResource::InvalidateConsumingAnimationsInternal(v3 + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 16LL))(v3 + 8);
  return 0LL;
}
