/*
 * XREFs of ??1VirtualTouchpadContextMessage@@QEAA@XZ @ 0x1800A975C
 * Callers:
 *     _SystemContextEndpoint::OnInputConfigChanged_::_1_::dtor$0 @ 0x1801D8B1B (_SystemContextEndpoint--OnInputConfigChanged_--_1_--dtor$0.c)
 *     _VirtualTouchpadContextProvider::GetCurrentContext_::_1_::dtor$2 @ 0x1801DCBC6 (_VirtualTouchpadContextProvider--GetCurrentContext_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VirtualTouchpadContextMessage::~VirtualTouchpadContextMessage(__int64 *this)
{
  std::vector<INPUT_SPACE_PAYLOAD>::_Tidy(this);
}
