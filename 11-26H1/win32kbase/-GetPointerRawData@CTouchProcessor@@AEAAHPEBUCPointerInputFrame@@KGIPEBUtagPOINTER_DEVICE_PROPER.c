/*
 * XREFs of ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x140051CC4
 * Callers:
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x14015CD20 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 * Callees:
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x140050ED0 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     ?GetPointerRawDataBlock@CTouchProcessor@@AEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@K@Z @ 0x140051D8C (-GetPointerRawDataBlock@CTouchProcessor@@AEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@K@Z.c)
 *     RIMExtractPointerPropertyValues @ 0x140051E10 (RIMExtractPointerPropertyValues.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CPointerRawData *__fastcall CTouchProcessor::GetPointerRawData(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned int a5,
        const struct tagPOINTER_DEVICE_PROPERTY *a6,
        int *a7)
{
  struct CPointerRawData *result; // rax

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 14277LL);
  result = CTouchProcessor::GetPointerRawDataBlock((CTouchProcessor *)this, a2, a3);
  if ( result )
    return (struct CPointerRawData *)RIMExtractPointerPropertyValues(
                                       *((_QWORD *)a2 + 32),
                                       a4,
                                       *((_DWORD *)result + 2),
                                       *((_QWORD *)result + 2),
                                       a5,
                                       (__int64)a6,
                                       (__int64)a7);
  return result;
}
