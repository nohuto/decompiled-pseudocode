/*
 * XREFs of ?GetPointerRawDataBlock@CTouchProcessor@@AEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@K@Z @ 0x140051D8C
 * Callers:
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x140051CC4 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 * Callees:
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x140050ED0 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CPointerRawData *__fastcall CTouchProcessor::GetPointerRawDataBlock(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  struct CPointerRawData *result; // rax

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 14312LL);
  if ( !a3 || a3 > *((_DWORD *)a2 + 14) )
    return 0LL;
  for ( result = (struct CPointerRawData *)*((_QWORD *)a2 + 29);
        result && *((_DWORD *)result + 1) != a3;
        result = (struct CPointerRawData *)*((_QWORD *)result + 3) )
  {
    ;
  }
  return result;
}
