/*
 * XREFs of SeCloseObjectAuditAlarmForNonObObject @ 0x140813EC0
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtCloseObjectAuditAlarm @ 0x1409F9204 (SepAdtCloseObjectAuditAlarm.c)
 */

__int64 __fastcall SeCloseObjectAuditAlarmForNonObObject(int a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  if ( a4 )
    return SepAdtCloseObjectAuditAlarm(a1, 1);
  return result;
}
