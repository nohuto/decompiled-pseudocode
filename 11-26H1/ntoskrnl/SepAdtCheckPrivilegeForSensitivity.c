/*
 * XREFs of SepAdtCheckPrivilegeForSensitivity @ 0x1404B60C8
 * Callers:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14090AD10 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14090E960 (SepAdtAuditPrivilegeUseWithContext.c)
 * Callees:
 *     <none>
 */

void __fastcall SepAdtCheckPrivilegeForSensitivity(unsigned int *a1, char *a2, _BYTE *a3)
{
  unsigned int v4; // r9d
  __int64 v5; // r10
  char v6; // al
  _DWORD *v7; // rax
  _DWORD **v8; // rdx

  *a2 = 0;
  *a3 = 0;
  if ( a1 )
  {
    v4 = *a1;
    if ( *a1 )
    {
      v5 = 0LL;
      v6 = 0;
      do
      {
        if ( v6 && *a3 )
          break;
        v7 = SepSensitivePrivileges;
        v8 = (_DWORD **)&SepSensitivePrivileges;
        do
        {
          if ( a1[3 * v5 + 2] == *v7 && a1[3 * v5 + 3] == v7[1] )
            break;
          v7 = *++v8;
        }
        while ( *v8 );
        if ( *v8 )
        {
          *a2 = 1;
          v6 = 1;
        }
        else
        {
          v6 = *a2;
          *a3 = 1;
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < v4 );
    }
  }
}
