/*
 * XREFs of ??1GamepadButtonCollectionTracker@@QEAA@XZ @ 0x1803415B8
 * Callers:
 *     ??$_Destroy_range@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButtonCollectionTracker@@QEAU1@AEAV?$allocator@UGamepadButtonCollectionTracker@@@0@@Z @ 0x18033D624 (--$_Destroy_range@V-$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButton.c)
 *     ?OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4GameInputSystemButtons@@@Z @ 0x18034AC28 (-OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4.c)
 *     _GamingOverlayExperienceManager::OnGameInputSystemButtonCallback_::_1_::dtor$9 @ 0x1806BD673 (_GamingOverlayExperienceManager--OnGameInputSystemButtonCallback_--_1_--dtor$9.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall GamepadButtonCollectionTracker::~GamepadButtonCollectionTracker(GamepadButtonCollectionTracker *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 7);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
