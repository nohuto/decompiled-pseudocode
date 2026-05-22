/*
 * XREFs of ??1InputReportEventArgs@ConsumerControlNexusDevice@@QEAA@XZ @ 0x1800E7844
 * Callers:
 *     ??R?$default_delete@UInputReportEventArgs@ConsumerControlNexusDevice@@@std@@QEBAXPEAUInputReportEventArgs@ConsumerControlNexusDevice@@@Z @ 0x1800E78BC (--R-$default_delete@UInputReportEventArgs@ConsumerControlNexusDevice@@@std@@QEBAXPEAUInputReport.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 */

void __fastcall ConsumerControlNexusDevice::InputReportEventArgs::~InputReportEventArgs(
        void **this,
        const struct std::nothrow_t *a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(this + 1, a2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
}
