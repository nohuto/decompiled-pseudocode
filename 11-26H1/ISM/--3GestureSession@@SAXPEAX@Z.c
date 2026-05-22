/*
 * XREFs of ??3GestureSession@@SAXPEAX@Z @ 0x180064904
 * Callers:
 *     _InputForwardProcessor::Create_::_1_::dtor$1 @ 0x1801D4212 (_InputForwardProcessor--Create_--_1_--dtor$1.c)
 *     _InputContext::Create_::_1_::dtor$0 @ 0x1801D42D0 (_InputContext--Create_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$7 @ 0x1801D4402 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$7.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$10 @ 0x1801D4670 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$10.c)
 *     _DWMLegacyInputTarget::Create_::_1_::dtor$0 @ 0x1801D5C4C (_DWMLegacyInputTarget--Create_--_1_--dtor$0.c)
 *     _DWMCursorBroker::Create_::_1_::dtor$1 @ 0x1801D6130 (_DWMCursorBroker--Create_--_1_--dtor$1.c)
 *     _InjectionRawInputProvider::Create_::_1_::dtor$1 @ 0x1801D65D7 (_InjectionRawInputProvider--Create_--_1_--dtor$1.c)
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$5 @ 0x1801D732E (_DeviceInputHost--DeviceInputHost_--_1_--dtor$5.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$0 @ 0x1801D73E2 (_TouchProcessor--Initialize_--_1_--dtor$0.c)
 *     _DWMCursor::Create_::_1_::dtor$0 @ 0x1801D7C05 (_DWMCursor--Create_--_1_--dtor$0.c)
 *     _MPCInputRouter::GetMPCTarget_::_1_::dtor$1 @ 0x1801DAA35 (_MPCInputRouter--GetMPCTarget_--_1_--dtor$1.c)
 *     _EdgyProcessorTarget::Initialize_::_1_::dtor$8 @ 0x1801DAADD (_EdgyProcessorTarget--Initialize_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl GestureSession::operator delete(void *Block)
{
  free(Block);
}
