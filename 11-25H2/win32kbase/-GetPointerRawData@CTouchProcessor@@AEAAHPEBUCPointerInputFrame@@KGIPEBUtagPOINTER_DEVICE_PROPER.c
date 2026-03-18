/*
 * XREFs of ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x140203DC0
 * Callers:
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1400D4560 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 * Callees:
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x140186234 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMExtractPointerPropertyValues @ 0x1401E37E0 (RIMExtractPointerPropertyValues.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawData(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        USHORT a4,
        unsigned int a5,
        const struct tagPOINTER_DEVICE_PROPERTY *a6,
        int *a7)
{
  __int64 i; // r8

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14350);
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14385);
  if ( !a3 || a3 > *((_DWORD *)a2 + 14) )
    return 0LL;
  for ( i = *((_QWORD *)a2 + 29); i && *(_DWORD *)(i + 4) != a3; i = *(_QWORD *)(i + 24) )
    ;
  if ( i )
    return RIMExtractPointerPropertyValues(
             *((_QWORD *)a2 + 32),
             a4,
             *(_DWORD *)(i + 8),
             *(CHAR **)(i + 16),
             a5,
             (__int64)a6,
             (__int64)a7);
  else
    return 0LL;
}
