/*
 * XREFs of CpcReadFeedbackAcquireCallback @ 0x140006450
 * Callers:
 *     <none>
 * Callees:
 *     CpcConsolidateCommandCompletion @ 0x140002D5C (CpcConsolidateCommandCompletion.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CpcReadFeedbackAcquireCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(a2 + 128))(
             *(_QWORD *)(a2 + 72),
             0LL,
             CpcAcquirePerformanceCallback,
             a2);
  if ( (int)result < 0 )
    return CpcConsolidateCommandCompletion(*(_QWORD *)(a2 + 176));
  return result;
}
