/*
 * XREFs of SepInitProcessAuditSd @ 0x14063AA70
 * Callers:
 *     SepInitializationPhase1 @ 0x140810284 (SepInitializationPhase1.c)
 * Callees:
 *     RtlAddAuditAccessAce @ 0x140803320 (RtlAddAuditAccessAce.c)
 *     SepAuditFailed @ 0x14092FD10 (SepAuditFailed.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409F49E0 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A8F1C0 (RtlSetSaclSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void SepInitProcessAuditSd()
{
  ACL *v0; // rbx
  ULONG v1; // ebp
  ACL *Pool2; // rax
  _KPROCESS *v3; // rsi
  NTSTATUS Acl; // eax
  ACL *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  ULONG v8; // ebp
  ACL *v9; // rax
  ACL *v10; // rdi

  v0 = 0LL;
  if ( PspSiloMonitorLock.Process )
  {
    ExFreePoolWithTag(PspSiloMonitorLock.Process, 0);
    PspSiloMonitorLock.Process = 0LL;
  }
  if ( LODWORD(ExpPlatformBinaryLock.KernelStack) )
  {
    v1 = 4 * HIBYTE(RtlpBootStatHandleLock.StateSaveArea->ControlWord) + 24;
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
    v3 = (_KPROCESS *)Pool2;
    if ( Pool2 )
    {
      v5 = Pool2 + 5;
      Acl = RtlCreateAcl(Pool2 + 5, v1, 2u);
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlAddAuditAccessAce(v5, v6, LODWORD(ExpPlatformBinaryLock.KernelStack));
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlCreateSecurityDescriptor(v3, 1u);
      if ( Acl < 0 )
        goto LABEL_6;
      LOBYTE(v7) = 1;
      Acl = RtlSetSaclSecurityDescriptor(v3, v7, v5, 0LL);
      if ( Acl < 0 )
        goto LABEL_6;
      PspSiloMonitorLock.Process = v3;
      v8 = 4
         * (*(unsigned __int8 *)(*(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags + 1LL)
          + *((unsigned __int8 *)SeLocalServiceSid + 1)
          + *(unsigned __int8 *)(PspSiloMonitorLock.ThreadLock + 1)
          + *(unsigned __int8 *)(*(_QWORD *)&PspSiloMonitorLock.ApcStateFill[40] + 1LL))
         + 72;
      v9 = (ACL *)ExAllocatePool2(0x100uLL);
      v0 = v9;
      if ( v9 )
      {
        v10 = v9 + 5;
        Acl = RtlCreateAcl(v9 + 5, v8, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v10, 2u, 1u, *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v10, 2u, 1u, SeLocalServiceSid);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAce(v10, 2u, 1u, (PSID)PspSiloMonitorLock.ThreadLock);
              if ( Acl >= 0 )
              {
                Acl = RtlAddAccessAllowedAce(v10, 2u, 1u, *(PSID *)&PspSiloMonitorLock.ApcStateFill[40]);
                if ( Acl >= 0 )
                {
                  Acl = RtlCreateSecurityDescriptor(v0, 1u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetDaclSecurityDescriptor(v0, 1u, v10, 0);
                    if ( Acl >= 0 )
                    {
                      PspSiloMonitorLock.Padding[3] = (unsigned __int64)v0;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_6;
      }
    }
    Acl = -1073741670;
LABEL_6:
    SepAuditFailed((unsigned int)Acl);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      PspSiloMonitorLock.Process = 0LL;
    }
    if ( v0 )
    {
      ExFreePoolWithTag(v0, 0);
      PspSiloMonitorLock.Padding[3] = 0LL;
    }
  }
}
