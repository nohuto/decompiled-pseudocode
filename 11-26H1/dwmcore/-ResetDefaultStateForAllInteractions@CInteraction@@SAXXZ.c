/*
 * XREFs of ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x1801D0A00
 * Callers:
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800A7AF0 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 * Callees:
 *     ?ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801D0A50 (-ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 */

void __fastcall CInteraction::ResetDefaultStateForAllInteractions(__int64 a1, bool a2)
{
  int v2; // ebx
  __int64 v3; // rdi

  v2 = 0;
  if ( dword_1803DE4F0 > 0 )
  {
    v3 = 0LL;
    do
    {
      CInteraction::ResetDefaultInteractionForCurrentMC(
        *(CInteraction **)((char *)CInteraction::s_DefaultStateLockedInteractions + v3),
        a2);
      ++v2;
      v3 += 8LL;
    }
    while ( v2 < dword_1803DE4F0 );
  }
  CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::RemoveAll(&CInteraction::s_DefaultStateLockedInteractions);
}
