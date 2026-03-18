/*
 * XREFs of PoDeviceAcquireIrp @ 0x140486D1C
 * Callers:
 *     PoHandleIrp @ 0x140486AFC (PoHandleIrp.c)
 *     PopIrpWorker @ 0x14060BD70 (PopIrpWorker.c)
 * Callees:
 *     PopDiagTraceDeviceAcquireIrp @ 0x140486D58 (PopDiagTraceDeviceAcquireIrp.c)
 */

__int64 __fastcall PoDeviceAcquireIrp(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)(a2 - 2) <= 1u )
  {
    if ( a3 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200) + 40LL) = a3;
      return PopDiagTraceDeviceAcquireIrp(a1, a3);
    }
  }
  return result;
}
