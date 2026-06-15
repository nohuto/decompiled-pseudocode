/*
 * XREFs of ??1CComBSTR@ATL@@QEAA@XZ @ 0x180075740
 * Callers:
 *     _CAppAudioSessionId::CalculateStaticId_::_1_::dtor$1 @ 0x180163390 (_CAppAudioSessionId--CalculateStaticId_--_1_--dtor$1.c)
 *     _CKsNotificationsMonitor::GetDeviceId_::_1_::dtor$7 @ 0x18016B14B (_CKsNotificationsMonitor--GetDeviceId_--_1_--dtor$7.c)
 *     _CKsNotificationsMonitor::GetDeviceId_::_1_::dtor$9 @ 0x18016B16F (_CKsNotificationsMonitor--GetDeviceId_--_1_--dtor$9.c)
 *     _CKsNotificationsMonitor::GetDeviceId_::_1_::dtor$19 @ 0x18016B181 (_CKsNotificationsMonitor--GetDeviceId_--_1_--dtor$19.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComBSTR::~CComBSTR(BSTR *this)
{
  SysFreeString(*this);
}
