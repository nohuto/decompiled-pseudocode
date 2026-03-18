/*
 * XREFs of PopFxNotifyPendingSIrpReady @ 0x140605358
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x1403B46F0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x1404DAFA0 (PopFxHandleReportDevicePoweredOn.c)
 * Callees:
 *     PopSystemIrpCompletion @ 0x140C0DBB0 (PopSystemIrpCompletion.c)
 */

__int64 __fastcall PopFxNotifyPendingSIrpReady(__int64 a1)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 32));
  result = (unsigned int)_InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFF3FF);
  if ( (result & 0x400) != 0 )
    return PopSystemIrpCompletion(
             0LL,
             *(_QWORD *)(*(_QWORD *)(a1 + 48) + 280LL),
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 280LL)
                       + 72LL * *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 280LL) + 66LL)
                       + 200));
  return result;
}
