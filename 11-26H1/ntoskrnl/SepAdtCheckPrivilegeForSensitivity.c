/*
 * XREFs of SepAdtCheckPrivilegeForSensitivity @ 0x1404BBEA8
 * Callers:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14092F1E0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140932AB0 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140932DB0 (SepAdtAuditPrivilegeUseWithContext.c)
 * Callees:
 *     <none>
 */

void __fastcall SepAdtCheckPrivilegeForSensitivity(unsigned int *a1, char *a2, _BYTE *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // r10
  char v5; // al
  _DWORD *v6; // rbx
  _UNKNOWN **v7; // r11

  *a2 = 0;
  *a3 = 0;
  if ( a1 )
  {
    v3 = *a1;
    if ( *a1 )
    {
      v4 = 0LL;
      v5 = 0;
      do
      {
        if ( v5 && *a3 )
          break;
        v6 = SepSensitivePrivileges;
        v7 = &SepSensitivePrivileges;
        while ( a1[3 * v4 + 2] != *v6 || a1[3 * v4 + 3] != *((_DWORD *)*v7 + 1) )
        {
          v6 = *++v7;
          if ( !*v7 )
            goto LABEL_9;
        }
        if ( !*v7 )
        {
LABEL_9:
          v5 = *a2;
          *a3 = 1;
          goto LABEL_10;
        }
        *a2 = 1;
        v5 = 1;
LABEL_10:
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < v3 );
    }
  }
}
