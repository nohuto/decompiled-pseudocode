/*
 * XREFs of ??1GameConfigInfo@@QEAA@XZ @ 0x180220EBC
 * Callers:
 *     _BroadcastDVRComponent::OnApplicationViewChangedTask_::_1_::dtor$2 @ 0x1806AA76D (_BroadcastDVRComponent--OnApplicationViewChangedTask_--_1_--dtor$2.c)
 *     _BroadcastDVRComponent::OnGameModeEnableChangeTask_::_1_::dtor$2 @ 0x1806BA3FC (_BroadcastDVRComponent--OnGameModeEnableChangeTask_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall GameConfigInfo::~GameConfigInfo(HSTRING *this)
{
  Windows::Internal::String::~String(this + 4);
}
