/*
 * XREFs of ObpAdjustCreatorAccessState @ 0x140931B40
 * Callers:
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     SeComputeCreatorDeniedRights @ 0x1403BDDA0 (SeComputeCreatorDeniedRights.c)
 *     SepPrivilegeCheck @ 0x14042F0A0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SeAppendPrivileges @ 0x140903960 (SeAppendPrivileges.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140905024 (ObpReferenceSecurityDescriptorSlow.c)
 *     ObDereferenceSecurityDescriptor @ 0x140931DF0 (ObDereferenceSecurityDescriptor.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140932AB0 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x1409F7460 (SepFilterPrivilegeAudits.c)
 */

__int64 __fastcall ObpAdjustCreatorAccessState(
        PACCESS_STATE AccessState,
        char a2,
        _DWORD *a3,
        struct _KLOCK_ENTRIES *a4)
{
  int RemainingDesiredAccess; // eax
  __int64 v8; // rdi
  signed __int64 AllFields; // rsi
  char v10; // dl
  signed __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned int v13; // edx
  ACCESS_MASK PreviouslyGrantedAccess; // ebx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdi
  __int64 ClientToken; // rcx
  PACCESS_TOKEN v20; // rbx
  _QWORD **PrimaryToken; // rax
  void *v22; // rsi
  PSE_EXPORTS v23; // rbp
  struct _PRIVILEGE_SET Privileges; // [rsp+40h] [rbp-38h] BYREF

  RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  if ( (RemainingDesiredAccess & 0x2000000) != 0 )
  {
    RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
    AccessState->RemainingDesiredAccess = RemainingDesiredAccess;
  }
  if ( (RemainingDesiredAccess & 0xF0000000) != 0 )
  {
    if ( RemainingDesiredAccess < 0 )
      RemainingDesiredAccess |= a3[19];
    if ( (RemainingDesiredAccess & 0x40000000) != 0 )
      RemainingDesiredAccess |= a3[20];
    if ( (RemainingDesiredAccess & 0x20000000) != 0 )
      RemainingDesiredAccess |= a3[21];
    if ( (RemainingDesiredAccess & 0x10000000) != 0 )
      RemainingDesiredAccess |= a3[22];
    RemainingDesiredAccess &= 0xFFFFFFFu;
    AccessState->RemainingDesiredAccess = RemainingDesiredAccess;
  }
  if ( (RemainingDesiredAccess & 0x1000000) == 0 )
    goto LABEL_14;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
  Privileges.Privilege[0].Luid = SeSecurityPrivilege;
  Privileges.PrivilegeCount = 1;
  Privileges.Control = 1;
  Privileges.Privilege[0].Attributes = 0;
  if ( a2 )
  {
    ClientToken = (__int64)p_SubjectSecurityContext->ClientToken;
    if ( p_SubjectSecurityContext->ClientToken )
    {
      if ( p_SubjectSecurityContext->ImpersonationLevel < SecurityImpersonation )
        goto LABEL_31;
    }
    else
    {
      ClientToken = (__int64)p_SubjectSecurityContext->PrimaryToken;
    }
    if ( !SepPrivilegeCheck(ClientToken, (__int64)Privileges.Privilege, 1u, 1, a2) )
    {
LABEL_31:
      v20 = p_SubjectSecurityContext->ClientToken;
      PrimaryToken = (_QWORD **)p_SubjectSecurityContext->ClientToken;
      if ( !p_SubjectSecurityContext->ClientToken )
        PrimaryToken = (_QWORD **)p_SubjectSecurityContext->PrimaryToken;
      v22 = (void *)*PrimaryToken[19];
      if ( !RtlEqualSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags, v22) )
      {
        if ( (v23 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v22))
          && !RtlEqualSid(v23->SeLocalServiceSid, v22)
          || (unsigned __int8)SepFilterPrivilegeAudits(1LL, &Privileges) )
        {
          SepAdtPrivilegedServiceAuditAlarm(
            (_DWORD)p_SubjectSecurityContext,
            (unsigned int)&SeSubsystemName,
            0,
            (_DWORD)v20,
            (__int64)p_SubjectSecurityContext->PrimaryToken,
            (__int64)&Privileges,
            0);
        }
      }
      return 3221225569LL;
    }
  }
  AccessState->RemainingDesiredAccess &= ~0x1000000u;
  AccessState->PreviouslyGrantedAccess |= 0x1000000u;
  SeAppendPrivileges(AccessState, &Privileges);
LABEL_14:
  v8 = (__int64)&a4[-1].Entries[0].40;
  AccessState->PreviouslyGrantedAccess |= AccessState->RemainingDesiredAccess;
  AccessState->RemainingDesiredAccess = 0;
  AccessState->PreviouslyGrantedAccess &= a3[23] | 0x1000000;
  _m_prefetchw(&a4[-1].Entries[0].BoostBitmap);
  AllFields = a4[-1].Entries[0].BoostBitmap.AllFields;
  v10 = AllFields;
  if ( (AllFields & 0xF) != 0 )
  {
    do
    {
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 40), AllFields - 1, AllFields);
      if ( AllFields == v11 )
        break;
      AllFields = v11;
      v10 = v11;
    }
    while ( (v11 & 0xF) != 0 );
  }
  v12 = AllFields & 0xFFFFFFFFFFFFFFF0uLL;
  v13 = v10 & 0xF;
  if ( v13 <= 1 )
  {
    if ( v12 )
      v12 = ObpReferenceSecurityDescriptorSlow(v8, v13, v12, a4);
  }
  PreviouslyGrantedAccess = AccessState->PreviouslyGrantedAccess;
  AccessState->PreviouslyGrantedAccess = PreviouslyGrantedAccess & ~(unsigned int)SeComputeCreatorDeniedRights(
                                                                                    &AccessState->SubjectSecurityContext,
                                                                                    (__int64)AccessState,
                                                                                    PreviouslyGrantedAccess,
                                                                                    (unsigned int *)v12);
  if ( v12 )
  {
    _m_prefetchw((const void *)(v8 + 40));
    v15 = *(_QWORD *)(v8 + 40);
    while ( (v12 ^ v15) < 0xF )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 40), v15 + 1, v15);
      if ( v16 == v15 )
        return 0LL;
    }
    ObDereferenceSecurityDescriptor(v12, 1LL);
  }
  return 0LL;
}
