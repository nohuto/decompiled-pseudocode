/*
 * XREFs of SeCloseObjectAuditAlarmForNonObObject @ 0x140819D20
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtCloseObjectAuditAlarm @ 0x140A9EE24 (SepAdtCloseObjectAuditAlarm.c)
 */

__int64 __fastcall SeCloseObjectAuditAlarmForNonObObject(int a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  if ( a4 )
    return SepAdtCloseObjectAuditAlarm(a1, 1);
  return result;
}
