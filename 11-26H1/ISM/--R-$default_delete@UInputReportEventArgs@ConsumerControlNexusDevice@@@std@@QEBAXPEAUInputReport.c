/*
 * XREFs of ??R?$default_delete@UInputReportEventArgs@ConsumerControlNexusDevice@@@std@@QEBAXPEAUInputReportEventArgs@ConsumerControlNexusDevice@@@Z @ 0x1800E78BC
 * Callers:
 *     ??1?$unique_ptr@UInputReportEventArgs@ConsumerControlNexusDevice@@U?$default_delete@UInputReportEventArgs@ConsumerControlNexusDevice@@@std@@@std@@QEAA@XZ @ 0x1800E76E8 (--1-$unique_ptr@UInputReportEventArgs@ConsumerControlNexusDevice@@U-$default_delete@UInputReport.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputReportEventArgs@ConsumerControlNexusDevice@@QEAA@XZ @ 0x1800E7844 (--1InputReportEventArgs@ConsumerControlNexusDevice@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<ConsumerControlNexusDevice::InputReportEventArgs>::operator()(
        __int64 a1,
        void **a2)
{
  if ( a2 )
  {
    ConsumerControlNexusDevice::InputReportEventArgs::~InputReportEventArgs(a2, (const struct std::nothrow_t *)a2);
    operator delete(a2, (const struct std::nothrow_t *)0x18);
  }
}
