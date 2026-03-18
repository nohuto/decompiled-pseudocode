/*
 * XREFs of SepFilterPrivilegeAudits @ 0x1409F7460
 * Callers:
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14092F1E0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpGrantAccess @ 0x140930170 (ObpGrantAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 *     ObpAdjustCreatorAccessState @ 0x140931B40 (ObpAdjustCreatorAccessState.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140932AB0 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140932DB0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SeCheckAuditPrivilege @ 0x1409F7320 (SeCheckAuditPrivilege.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepFilterPrivilegeAudits(char a1, unsigned int *a2)
{
  int v2; // ebx
  _DWORD *v4; // rdi
  __int64 v5; // rsi
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rax
  unsigned int v8; // eax
  _DWORD *v10; // r10
  __int64 v11; // r11
  _DWORD *v12; // rax
  _UNKNOWN **v13; // rdx

  v2 = 0;
  if ( !a2 || !*a2 )
    return 0;
  v4 = a2 + 2;
  v5 = *a2;
  do
  {
    Blink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink;
    Flink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink->Flink;
    while ( *v4 != LODWORD(Flink->Flink) || v4[1] != HIDWORD(Blink->Flink->Flink) )
    {
      Flink = Blink->Blink;
      Blink = (struct _LIST_ENTRY *)((char *)Blink + 8);
      if ( !Flink )
        goto LABEL_10;
    }
    ++v2;
LABEL_10:
    v4 += 3;
    --v5;
  }
  while ( v5 );
  v8 = *a2;
  if ( (a1 & 1) != 0 && v8 )
  {
    v10 = a2 + 2;
    v11 = v8;
    do
    {
      v12 = SepServicesFilterPrivileges;
      v13 = &SepServicesFilterPrivileges;
      while ( *v10 != *v12 || v10[1] != *((_DWORD *)*v13 + 1) )
      {
        v12 = v13[1];
        ++v13;
        if ( !v12 )
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
