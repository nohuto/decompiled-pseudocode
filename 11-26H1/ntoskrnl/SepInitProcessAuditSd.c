/*
 * XREFs of SepInitProcessAuditSd @ 0x14063DADC
 * Callers:
 *     SepInitializationPhase1 @ 0x140815D14 (SepInitializationPhase1.c)
 * Callees:
 *     RtlAddAuditAccessAce @ 0x140808DC0 (RtlAddAuditAccessAce.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A93E90 (RtlSetSaclSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void SepInitProcessAuditSd()
{
  ACL *v0; // rbx
  ULONG v1; // ebp
  ACL *Pool2; // rax
  _KPROCESS *v3; // rsi
  NTSTATUS Acl; // eax
  ACL *v5; // rdi
  ULONG v6; // edx
  void *v7; // r9
  ULONG v8; // ebp
  ACL *v9; // rax
  ACL *v10; // rdi
  BOOLEAN v11; // [rsp+20h] [rbp-28h]
  BOOLEAN v12; // [rsp+28h] [rbp-20h]

  v0 = 0LL;
  if ( PspSiloMonitorLock.Process )
  {
    ExFreePoolWithTag(PspSiloMonitorLock.Process, 0);
    PspSiloMonitorLock.Process = 0LL;
  }
  if ( LODWORD(ExpPlatformBinaryLock.KernelStack) )
  {
    v1 = 4 * *(unsigned __int8 *)(*(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags + 1LL) + 24;
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
    v3 = (_KPROCESS *)Pool2;
    if ( Pool2 )
    {
      v5 = Pool2 + 5;
      Acl = RtlCreateAcl(Pool2 + 5, v1, 2u);
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlAddAuditAccessAce(v5, v6, (ACCESS_MASK)ExpPlatformBinaryLock.KernelStack, v7, v11, v12);
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlCreateSecurityDescriptor(v3, 1u);
      if ( Acl < 0 )
        goto LABEL_6;
      Acl = RtlSetSaclSecurityDescriptor(v3, 1u, v5, 0);
      if ( Acl < 0 )
        goto LABEL_6;
      PspSiloMonitorLock.Process = v3;
      v8 = 4
         * (*(unsigned __int8 *)(*(_QWORD *)((char *)&RtlpBootStatHandleLock.116 + 4) + 1LL)
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
          Acl = RtlAddAccessAllowedAce(v10, 2u, 1u, *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
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
