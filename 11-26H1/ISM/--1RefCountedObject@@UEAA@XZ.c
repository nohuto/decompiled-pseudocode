/*
 * XREFs of ??1RefCountedObject@@UEAA@XZ @ 0x1800994C0
 * Callers:
 *     _PenInterface::PenInterface_::_1_::dtor$0 @ 0x1801D42F0 (_PenInterface--PenInterface_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$8 @ 0x1801D4414 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$8.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$11 @ 0x1801D4690 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$11.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$0 @ 0x1801D4FBF (_DWMInputRouter--DWMInputRouter_--_1_--dtor$0.c)
 *     _DWMLegacyInputTarget::DWMLegacyInputTarget_::_1_::dtor$0 @ 0x1801D5C5E (_DWMLegacyInputTarget--DWMLegacyInputTarget_--_1_--dtor$0.c)
 *     _DWMFocusedInputTarget::DWMFocusedInputTarget_::_1_::dtor$0 @ 0x1801D5CB2 (_DWMFocusedInputTarget--DWMFocusedInputTarget_--_1_--dtor$0.c)
 *     _Win32kInterop::DoConvergedHitTestCallback_::_1_::dtor$7 @ 0x1801D6150 (_Win32kInterop--DoConvergedHitTestCallback_--_1_--dtor$7.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$0 @ 0x1801D6D08 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$0.c)
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$0 @ 0x1801D70DC (_ButtonProcessor--ButtonProcessor_--_1_--dtor$0.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$0 @ 0x1801D72C0 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$0.c)
 *     _GameInputProcessor::GameInputProcessor_::_1_::dtor$0 @ 0x1801D810A (_GameInputProcessor--GameInputProcessor_--_1_--dtor$0.c)
 *     _InputProcess::InputProcess_::_1_::dtor$0 @ 0x1801D946E (_InputProcess--InputProcess_--_1_--dtor$0.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$0 @ 0x1801DA0BB (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$0.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$0 @ 0x1801DA388 (_Win32kInterop--Win32kInterop_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$0 @ 0x1801DC860 (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$0.c)
 *     _ButtonRecognizer::ButtonRecognizer_::_1_::dtor$0 @ 0x1801DCA24 (_ButtonRecognizer--ButtonRecognizer_--_1_--dtor$0.c)
 *     _DWMCursor::DWMCursor_::_1_::dtor$0 @ 0x1801DD672 (_DWMCursor--DWMCursor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall RefCountedObject::~RefCountedObject(RefCountedObject *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
