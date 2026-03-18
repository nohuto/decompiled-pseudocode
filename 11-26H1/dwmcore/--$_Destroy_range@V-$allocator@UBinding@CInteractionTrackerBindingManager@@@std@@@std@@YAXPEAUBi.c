/*
 * XREFs of ??$_Destroy_range@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@YAXPEAUBinding@CInteractionTrackerBindingManager@@QEAU12@AEAV?$allocator@UBinding@CInteractionTrackerBindingManager@@@0@@Z @ 0x180277B18
 * Callers:
 *     ??1CInteractionTrackerBindingManager@@UEAA@XZ @ 0x18020453C (--1CInteractionTrackerBindingManager@@UEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAUBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@YAPEAUBinding@CInteractionTrackerBindingManager@@QEAU12@0PEAU12@AEAV?$allocator@UBinding@CInteractionTrackerBindingManager@@@0@@Z @ 0x180277E0C (--$_Uninitialized_move@PEAUBinding@CInteractionTrackerBindingManager@@V-$allocator@UBinding@CInt.c)
 *     ??1_Reallocation_guard@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@QEAA@XZ @ 0x18027853C (--1_Reallocation_guard@-$vector@UBinding@CInteractionTrackerBindingManager@@V-$allocator@UBindin.c)
 *     ?UpdateBindings@CInteractionTrackerBindingManager@@AEAAXXZ @ 0x1802792AC (-UpdateBindings@CInteractionTrackerBindingManager@@AEAAXXZ.c)
 *     ?_Change_array@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@AEAAXQEAUBinding@CInteractionTrackerBindingManager@@_K1@Z @ 0x1802794E4 (-_Change_array@-$vector@UBinding@CInteractionTrackerBindingManager@@V-$allocator@UBinding@CInter.c)
 * Callees:
 *     ??1Binding@CInteractionTrackerBindingManager@@QEAA@XZ @ 0x18027846C (--1Binding@CInteractionTrackerBindingManager@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CInteractionTrackerBindingManager::Binding>>(
        CInteractionTrackerBindingManager::Binding *this,
        CInteractionTrackerBindingManager::Binding *a2)
{
  CInteractionTrackerBindingManager::Binding *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CInteractionTrackerBindingManager::Binding::~Binding(v3);
      v3 = (CInteractionTrackerBindingManager::Binding *)((char *)v3 + 24);
    }
    while ( v3 != a2 );
  }
}
