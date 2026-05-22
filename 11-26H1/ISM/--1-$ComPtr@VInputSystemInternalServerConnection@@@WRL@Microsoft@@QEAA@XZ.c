/*
 * XREFs of ??1?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x180097778
 * Callers:
 *     _ForegroundManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1801D644F (_ForegroundManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _InputSystemServerConnection::Create_::_1_::dtor$0 @ 0x1801D660D (_InputSystemServerConnection--Create_--_1_--dtor$0.c)
 *     _InputSystemInternalServerConnection::Create_::_1_::dtor$2 @ 0x1801D6716 (_InputSystemInternalServerConnection--Create_--_1_--dtor$2.c)
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$6 @ 0x1801D7340 (_DeviceInputHost--DeviceInputHost_--_1_--dtor$6.c)
 *     _InputSystemInternalClientConnection::Create_::_1_::dtor$0 @ 0x1801D7C83 (_InputSystemInternalClientConnection--Create_--_1_--dtor$0.c)
 *     _InputProcess::InputProcess_::_1_::dtor$2 @ 0x1801D949A (_InputProcess--InputProcess_--_1_--dtor$2.c)
 *     _DWMCursor::DWMCursor_::_1_::dtor$6 @ 0x1801DD6CD (_DWMCursor--DWMCursor_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::~ComPtr<InputSystemInternalServerConnection>(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  return Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::InternalRelease(a1);
}
