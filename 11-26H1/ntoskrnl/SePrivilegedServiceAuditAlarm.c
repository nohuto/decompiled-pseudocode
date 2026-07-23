/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x14090E4F0
 * Callers:
 *     PspSetQuotaLimits @ 0x1407F6AFC (PspSetQuotaLimits.c)
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660 (SepAdtPrivilegedServiceAuditAlarm.c)
 */

char __fastcall SePrivilegedServiceAuditAlarm(int a1, __int64 *a2, _DWORD *a3, char a4)
{
  __int64 v4; // rax
  void *v9; // rdi
  _DWORD *v10; // rax
  PSE_EXPORTS v11; // rbp
  int v12; // r11d
  _DWORD *v13; // r8
  __int64 v14; // r10
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v17; // r9
  _DWORD *v18; // rdx
  _UNKNOWN **v19; // rcx

  v4 = *a2;
  if ( !*a2 )
    v4 = a2[2];
  v9 = **(void ***)(v4 + 152);
  LOBYTE(v10) = RtlEqualSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4), v9);
  if ( !(_BYTE)v10 )
  {
    v11 = SeExports;
    LOBYTE(v10) = RtlEqualSid(SeExports->SeNetworkServiceSid, v9);
    if ( !(_BYTE)v10 )
    {
      LOBYTE(v10) = RtlEqualSid(v11->SeLocalServiceSid, v9);
      if ( !(_BYTE)v10 )
        goto LABEL_6;
    }
    v12 = 0;
    if ( a3 )
    {
      LODWORD(v10) = *a3;
      if ( *a3 )
      {
        v13 = a3 + 2;
        v14 = (unsigned int)v10;
        do
        {
          Blink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink;
          Flink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink->Flink;
          while ( *v13 != LODWORD(Flink->Flink) || v13[1] != HIDWORD(Flink->Flink) )
          {
            Flink = Blink->Blink;
            Blink = (struct _LIST_ENTRY *)((char *)Blink + 8);
            if ( !Flink )
              goto LABEL_17;
          }
          ++v12;
LABEL_17:
          v13 += 3;
          --v14;
        }
        while ( v14 );
        v17 = (unsigned int)*a3;
        v18 = a3 + 2;
        do
        {
          v19 = &SepServicesFilterPrivileges;
          v10 = SepServicesFilterPrivileges;
          while ( 1 )
          {
            if ( *v18 == *v10 )
            {
              LODWORD(v10) = v10[1];
              if ( v18[1] == (_DWORD)v10 )
                break;
            }
            v10 = v19[1];
            ++v19;
            if ( !v10 )
              goto LABEL_22;
          }
          ++v12;
LABEL_22:
          v18 += 3;
          --v17;
        }
        while ( v17 );
        if ( v12 != *a3 )
LABEL_6:
          LOBYTE(v10) = SepAdtPrivilegedServiceAuditAlarm(
                          (_DWORD)a2,
                          (unsigned int)&SeSubsystemName,
                          a1,
                          *a2,
                          a2[2],
                          (__int64)a3,
                          a4);
      }
    }
  }
  return (char)v10;
}
