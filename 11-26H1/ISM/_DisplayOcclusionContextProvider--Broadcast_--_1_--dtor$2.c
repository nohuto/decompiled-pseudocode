/*
 * XREFs of _DisplayOcclusionContextProvider::Broadcast_::_1_::dtor$2 @ 0x1801DCBD8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayOcclusionContextProvider::Broadcast_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::~variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>(a2 + 56);
}
