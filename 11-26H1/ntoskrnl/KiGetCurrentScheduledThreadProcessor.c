/*
 * XREFs of KiGetCurrentScheduledThreadProcessor @ 0x14033770C
 * Callers:
 *     KiParkCurrentProcessor @ 0x14033670C (KiParkCurrentProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetCurrentScheduledThreadProcessor(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( !result )
    return *(_QWORD *)(a1 + 8);
  return result;
}
