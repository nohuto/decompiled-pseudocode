/*
 * XREFs of SepFilterPrivilegeAudits @ 0x140A5FFB0
 * Callers:
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14090AD10 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpGrantAccess @ 0x14090BCA0 (ObpGrantAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x14090D710 (ObpAdjustCreatorAccessState.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14090E960 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SeCheckAuditPrivilege @ 0x140A5FE70 (SeCheckAuditPrivilege.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepFilterPrivilegeAudits(char a1, unsigned int *a2)
{
  int v2; // r11d
  __int64 v4; // rsi
  _DWORD *v5; // rdi
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rax
  unsigned int v8; // eax
  _DWORD *v10; // r8
  __int64 v11; // r10
  _UNKNOWN **v12; // rcx
  _DWORD *v13; // rax

  v2 = 0;
  if ( !a2 || !*a2 )
    return 0;
  v4 = *a2;
  v5 = a2 + 2;
  do
  {
    Blink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink;
    Flink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink->Flink;
    while ( *v5 != LODWORD(Flink->Flink) || v5[1] != HIDWORD(Flink->Flink) )
    {
      Flink = Blink->Blink;
      Blink = (struct _LIST_ENTRY *)((char *)Blink + 8);
      if ( !Flink )
        goto LABEL_10;
    }
    ++v2;
LABEL_10:
    v5 += 3;
    --v4;
  }
  while ( v4 );
  v8 = *a2;
  if ( (a1 & 1) != 0 && v8 )
  {
    v10 = a2 + 2;
    v11 = v8;
    do
    {
      v12 = &SepServicesFilterPrivileges;
      v13 = SepServicesFilterPrivileges;
      while ( *v10 != *v13 || v10[1] != v13[1] )
      {
        v13 = v12[1];
        ++v12;
        if ( !v13 )
          goto LABEL_19;
      }
      ++v2;
LABEL_19:
      v10 += 3;
      --v11;
    }
    while ( v11 );
  }
  return v2 != *a2;
}
