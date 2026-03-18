/*
 * XREFs of ?load@?$_Atomic_storage@U_LUID@@$07@std@@QEBA?AU_LUID@@W4memory_order@2@@Z @ 0x18021F63C
 * Callers:
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1800A72E0 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1800A7C6C (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Atomic_storage<_LUID,8>::load(_QWORD *a1, _QWORD *a2)
{
  *a2 = *a1;
  return a2;
}
