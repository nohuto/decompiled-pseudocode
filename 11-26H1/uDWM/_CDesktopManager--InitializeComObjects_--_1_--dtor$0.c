/*
 * XREFs of _CDesktopManager::InitializeComObjects_::_1_::dtor$0 @ 0x1800E8FBD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::InitializeComObjects_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CDisplayBroker>::~unique_ptr<CDisplayBroker>((_QWORD *)(a2 + 72));
}
