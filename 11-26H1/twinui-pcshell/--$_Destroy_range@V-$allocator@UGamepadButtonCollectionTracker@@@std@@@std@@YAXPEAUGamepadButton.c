/*
 * XREFs of ??$_Destroy_range@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButtonCollectionTracker@@QEAU1@AEAV?$allocator@UGamepadButtonCollectionTracker@@@0@@Z @ 0x18033D35C
 * Callers:
 *     ??$_Uninitialized_move@PEAUGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAPEAUGamepadButtonCollectionTracker@@QEAU1@0PEAU1@AEAV?$allocator@UGamepadButtonCollectionTracker@@@0@@Z @ 0x18033EA6C (--$_Uninitialized_move@PEAUGamepadButtonCollectionTracker@@V-$allocator@UGamepadButtonCollection.c)
 *     ??1?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@QEAA@XZ @ 0x180342448 (--1-$vector@UGamepadButtonCollectionTracker@@V-$allocator@UGamepadButtonCollectionTracker@@@std@.c)
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x180342624 (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@QEAA@XZ @ 0x180342D3C (--1_Reallocation_guard@-$vector@UGamepadButtonCollectionTracker@@V-$allocator@UGamepadButtonColl.c)
 *     ?StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18035562C (-StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?_Change_array@?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@AEAAXQEAUGamepadButtonCollectionTracker@@_K1@Z @ 0x180357B0C (-_Change_array@-$vector@UGamepadButtonCollectionTracker@@V-$allocator@UGamepadButtonCollectionTr.c)
 * Callees:
 *     ??1GamepadButtonCollectionTracker@@QEAA@XZ @ 0x1803425F0 (--1GamepadButtonCollectionTracker@@QEAA@XZ.c)
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
