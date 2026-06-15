/*
 * XREFs of _CPlaybackManager::QueueStreamStartedWorkItem_::_1_::dtor$10 @ 0x18004C240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPlaybackManager::QueueStreamStartedWorkItem_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 176));
}
