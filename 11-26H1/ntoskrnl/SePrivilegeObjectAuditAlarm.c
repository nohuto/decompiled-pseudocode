/*
 * XREFs of SePrivilegeObjectAuditAlarm @ 0x140A7AA20
 * Callers:
 *     SeCheckPrivilegedObject @ 0x140A7A93C (SeCheckPrivilegedObject.c)
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14092F1E0 (SepAdtPrivilegeObjectAuditAlarm.c)
 */

char __fastcall SePrivilegeObjectAuditAlarm(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int8 a5,
        char a6)
{
  char result; // al

  if ( a6 )
    return SepAdtPrivilegeObjectAuditAlarm(&SeSubsystemName, 0LL, 0LL, a1, *a2, a2[2], a2[3], a3, a4, a5);
  return result;
}
