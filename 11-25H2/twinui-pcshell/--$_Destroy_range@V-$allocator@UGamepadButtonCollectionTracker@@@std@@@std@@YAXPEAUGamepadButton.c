/*
 * XREFs of ??$_Destroy_range@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButtonCollectionTracker@@QEAU1@AEAV?$allocator@UGamepadButtonCollectionTracker@@@0@@Z @ 0x18033D624
 * Callers:
 *     ??$_Uninitialized_move@PEAUGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAPEAUGamepadButtonCollectionTracker@@QEAU1@0PEAU1@AEAV?$allocator@UGamepadButtonCollectionTracker@@@0@@Z @ 0x18033ECF0 (--$_Uninitialized_move@PEAUGamepadButtonCollectionTracker@@V-$allocator@UGamepadButtonCollection.c)
 *     ??1?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@QEAA@XZ @ 0x18034142C (--1-$vector@UGamepadButtonCollectionTracker@@V-$allocator@UGamepadButtonCollectionTracker@@@std@.c)
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x1803415EC (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 *     ?StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1803507BC (-StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?_Change_array@?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@AEAAXQEAUGamepadButtonCollectionTracker@@_K1@Z @ 0x180351C34 (-_Change_array@-$vector@UGamepadButtonCollectionTracker@@V-$allocator@UGamepadButtonCollectionTr.c)
 *     _std::vector_GamepadButtonCollectionTracker_std::allocator_GamepadButtonCollectionTracker___::_Emplace_reallocate_GamepadButtonCollectionTracker_const_&__::_1_::catch$0 @ 0x1806BC4A7 (_std--vector_GamepadButtonCollectionTracker_std--allocator_GamepadButtonCollectionTracker___--_E.c)
 * Callees:
 *     ??1GamepadButtonCollectionTracker@@QEAA@XZ @ 0x1803415B8 (--1GamepadButtonCollectionTracker@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<GamepadButtonCollectionTracker>>(
        GamepadButtonCollectionTracker *this,
        GamepadButtonCollectionTracker *a2)
{
  GamepadButtonCollectionTracker *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      GamepadButtonCollectionTracker::~GamepadButtonCollectionTracker(v3);
      v3 = (GamepadButtonCollectionTracker *)((char *)v3 + 64);
    }
    while ( v3 != a2 );
  }
}
