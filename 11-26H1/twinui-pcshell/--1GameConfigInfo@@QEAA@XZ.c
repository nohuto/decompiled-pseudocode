/*
 * XREFs of ??1GameConfigInfo@@QEAA@XZ @ 0x1800F0890
 * Callers:
 *     _BroadcastDVRComponent::OnApplicationViewChangedTask_::_1_::dtor$2 @ 0x1806CE430 (_BroadcastDVRComponent--OnApplicationViewChangedTask_--_1_--dtor$2.c)
 *     _BroadcastDVRComponent::OnGameModeEnableChangeTask_::_1_::dtor$2 @ 0x1806E13CD (_BroadcastDVRComponent--OnGameModeEnableChangeTask_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall GameConfigInfo::~GameConfigInfo(GameConfigInfo *this)
{
  Windows::Internal::String::~String((GameConfigInfo *)((char *)this + 32));
}
