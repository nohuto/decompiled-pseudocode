/*
 * XREFs of SepAdtAuditPrivilegeUseWithContext @ 0x140932DB0
 * Callers:
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409F8930 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAdtCheckPrivilegeForSensitivity @ 0x1404BBEA8 (SepAdtCheckPrivilegeForSensitivity.c)
 *     SepAdtAuditThisEventWithContext @ 0x140932EA0 (SepAdtAuditThisEventWithContext.c)
 *     SepFilterPrivilegeAudits @ 0x1409F7460 (SepFilterPrivilegeAudits.c)
 */

char __fastcall SepAdtAuditPrivilegeUseWithContext(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, _WORD *a5)
{
  unsigned __int8 v7; // di
  unsigned __int8 v8; // si
  char v9; // bp
  char v10; // al
  char v11; // bl
  char result; // al
  char v13; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v14[39]; // [rsp+21h] [rbp-27h] BYREF

  v13 = 0;
  v14[0] = 0;
  v7 = a3;
  v8 = a2;
  v9 = SepAdtAuditThisEventWithContext(131LL, a2, a3, a4);
  v10 = SepAdtAuditThisEventWithContext(132LL, v8, v7, a4);
  v11 = v10;
  if ( !v9 && !v10 || !(unsigned __int8)SepFilterPrivilegeAudits(0LL, a1) )
    return 0;
  if ( !v9 || !v11 || !a1 || !*a1 )
  {
    SepAdtCheckPrivilegeForSensitivity(a1, &v13, v14);
    if ( !v9 || !v13 )
    {
      if ( v11 && v14[0] )
      {
        result = 1;
        *a5 = 132;
        return result;
      }
      return 0;
    }
  }
  result = 1;
  *a5 = 131;
  return result;
}
