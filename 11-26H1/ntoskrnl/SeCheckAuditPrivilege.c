/*
 * XREFs of SeCheckAuditPrivilege @ 0x140A5FE70
 * Callers:
 *     NtDeleteObjectAuditAlarm @ 0x140819C00 (NtDeleteObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140A5DD30 (NtPrivilegedServiceAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140A60090 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140A60CD0 (NtPrivilegeObjectAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x140A9B2F0 (NtCloseObjectAuditAlarm.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x14041BFB0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x140A5FFB0 (SepFilterPrivilegeAudits.c)
 */

char __fastcall SeCheckAuditPrivilege(__int64 *a1, char a2)
{
  __int64 v4; // rcx
  char v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  void *v8; // rsi
  PSE_EXPORTS v10; // rbp
  unsigned int v11[2]; // [rsp+40h] [rbp-38h] BYREF
  volatile __int64 WaitStatus; // [rsp+48h] [rbp-30h] BYREF
  int v13; // [rsp+50h] [rbp-28h]

  v11[0] = 1;
  v4 = a1[2];
  v11[1] = 1;
  WaitStatus = PspSiloMonitorLock.WaitStatus;
  v13 = 0;
  v5 = SepPrivilegeCheck(v4, (__int64)&WaitStatus, 1u, 1, a2);
  if ( a2 )
  {
    v6 = *a1;
    v7 = *a1;
    if ( !*a1 )
      v7 = a1[2];
    v8 = **(void ***)(v7 + 152);
    if ( !RtlEqualSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4), v8) )
    {
      if ( (v10 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v8))
        && !RtlEqualSid(v10->SeLocalServiceSid, v8)
        || (unsigned __int8)SepFilterPrivilegeAudits(1LL, v11) )
      {
        SepAdtPrivilegedServiceAuditAlarm((__int64)a1, &SeSubsystemName, 0LL, v6, a1[2], v11, v5);
      }
    }
  }
  return v5;
}
