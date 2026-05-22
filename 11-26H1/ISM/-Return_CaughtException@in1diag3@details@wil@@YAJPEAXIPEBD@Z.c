/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D771C
 * Callers:
 *     _HotkeyRegistrationForwarder::ForwardHotkeyRegistration_::_1_::catch$0 @ 0x1801D5FE9 (_HotkeyRegistrationForwarder--ForwardHotkeyRegistration_--_1_--catch$0.c)
 *     _HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::catch$4 @ 0x1801D7B45 (_HidLampArrayDevice--ExtractReportDescriptorsFromPreparsedData_--_1_--catch$4.c)
 *     _SpatialRimDeviceCollection::Initialize_::_1_::catch$1 @ 0x1801D99E0 (_SpatialRimDeviceCollection--Initialize_--_1_--catch$1.c)
 *     _SpatialRimDeviceCollection::OnDdiDeviceAdded_::_1_::catch$3 @ 0x1801D9A34 (_SpatialRimDeviceCollection--OnDdiDeviceAdded_--_1_--catch$3.c)
 *     _SpatialRimDeviceCollection::OnDdiDeviceUpdated_::_1_::catch$0 @ 0x1801D9A73 (_SpatialRimDeviceCollection--OnDdiDeviceUpdated_--_1_--catch$0.c)
 *     _LampArrayDevice::Initialize_::_1_::catch$0 @ 0x1801DA1A7 (_LampArrayDevice--Initialize_--_1_--catch$0.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::catch$43 @ 0x1801DA23D (_LampArrayDevice--ProcessLampState_--_1_--catch$43.c)
 *     _HidLampMultiUpdateReportParser::TryCreateAndInitialize_::_1_::catch$4 @ 0x1801DA2E8 (_HidLampMultiUpdateReportParser--TryCreateAndInitialize_--_1_--catch$4.c)
 *     _InputDestTarget::DeliverInput_::_1_::catch$3 @ 0x1801DA5D8 (_InputDestTarget--DeliverInput_--_1_--catch$3.c)
 *     _RotationWatcher::Initialize_::_1_::catch$1 @ 0x1801DAED4 (_RotationWatcher--Initialize_--_1_--catch$1.c)
 *     _RotationWatcher::RotationWnfCallback_::_1_::catch$0 @ 0x1801DAF10 (_RotationWatcher--RotationWnfCallback_--_1_--catch$0.c)
 *     _Details::GetDeviceStringProperty_::_1_::catch$1 @ 0x1801DAF73 (_Details--GetDeviceStringProperty_--_1_--catch$1.c)
 *     _Details::GetDeviceStringProperty_::_1_::catch$1_0 @ 0x1801DAFAF (_Details--GetDeviceStringProperty_--_1_--catch$1_0.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800D3900 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3);
}
