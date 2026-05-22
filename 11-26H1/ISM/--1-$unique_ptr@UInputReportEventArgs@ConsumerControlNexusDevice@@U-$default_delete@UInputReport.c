/*
 * XREFs of ??1?$unique_ptr@UInputReportEventArgs@ConsumerControlNexusDevice@@U?$default_delete@UInputReportEventArgs@ConsumerControlNexusDevice@@@std@@@std@@QEAA@XZ @ 0x1800E76E8
 * Callers:
 *     ?NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z @ 0x1800E823C (-NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?NotifyInputReportCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x1800E8340 (-NotifyInputReportCallback@ConsumerControlNexusDevice@@CAJPEAX@Z.c)
 * Callees:
 *     ??R?$default_delete@UInputReportEventArgs@ConsumerControlNexusDevice@@@std@@QEBAXPEAUInputReportEventArgs@ConsumerControlNexusDevice@@@Z @ 0x1800E78BC (--R-$default_delete@UInputReportEventArgs@ConsumerControlNexusDevice@@@std@@QEBAXPEAUInputReport.c)
 */

__int64 __fastcall std::unique_ptr<ConsumerControlNexusDevice::InputReportEventArgs>::~unique_ptr<ConsumerControlNexusDevice::InputReportEventArgs>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<ConsumerControlNexusDevice::InputReportEventArgs>::operator()();
  return result;
}
