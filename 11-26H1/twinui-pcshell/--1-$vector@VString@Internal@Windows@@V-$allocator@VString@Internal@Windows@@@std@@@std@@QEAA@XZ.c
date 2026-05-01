/*
 * XREFs of ??1?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAA@XZ @ 0x180232FA8
 * Callers:
 *     _BroadcastDVRComponent::GetSortedUniqueProcessList_::_1_::dtor$0 @ 0x1806CF257 (_BroadcastDVRComponent--GetSortedUniqueProcessList_--_1_--dtor$0.c)
 *     _BroadcastDVRComponent::EvaluateAppForGameMode_::_1_::dtor$1 @ 0x1806CF2CD (_BroadcastDVRComponent--EvaluateAppForGameMode_--_1_--dtor$1.c)
 *     _BroadcastDVRComponent::BroadcastDVRComponent_::_1_::dtor$7 @ 0x1806E076F (_BroadcastDVRComponent--BroadcastDVRComponent_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<Windows::Internal::String>::~vector<Windows::Internal::String>(
        Windows::Internal::String **a1)
{
  return std::vector<Windows::Internal::String>::_Tidy(a1);
}
