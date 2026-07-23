/*
 * XREFs of ObpCheckObjectReference @ 0x1408F4DF4
 * Callers:
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     ObReferenceObjectByNameEx @ 0x1408F238C (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x1408F8820 (ObReferenceObjectByName.c)
 * Callees:
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     SeLockSubjectContext @ 0x1408F4CE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408F4D40 (SeUnlockSubjectContext.c)
 *     ObpGetObjectSecurity @ 0x1408F5810 (ObpGetObjectSecurity.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     SeExamineSacl @ 0x140A60F70 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140A61298 (SeExamineGlobalSacl.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x140B52518 (SepAdtObjectReferenceAuditAlarm.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

BOOLEAN __fastcall ObpCheckObjectReference(__int64 a1, __int64 a2, BOOLEAN a3, __int64 a4, PNTSTATUS AccessStatus)
{
  unsigned __int64 v6; // r10
  KPROCESSOR_MODE AccessMode; // r13
  __int64 v9; // rbx
  NTSTATUS ObjectSecurity; // eax
  void **v11; // r14
  GENERIC_MAPPING *GenericMapping; // rcx
  unsigned __int64 v13; // rbx
  BOOLEAN v14; // al
  __int64 v15; // rdx
  BOOLEAN v16; // r15
  ACCESS_MASK v17; // ecx
  ACCESS_MASK v18; // r12d
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  void *v22; // r8
  __int16 v23; // ax
  ACL *v24; // rdx
  ACL *v25; // rcx
  void *v26; // r8
  __int16 v27; // ax
  __int64 v28; // rax
  ACL *v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rax
  _BYTE v33[4]; // [rsp+50h] [rbp-10h] BYREF
  ACCESS_MASK GrantedAccess[3]; // [rsp+54h] [rbp-Ch] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+A0h] [rbp+40h] BYREF
  BOOLEAN GenerateAudit; // [rsp+B0h] [rbp+50h] BYREF

  GenerateAudit = a3;
  v6 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  GrantedAccess[0] = 0;
  AccessMode = a4;
  v33[0] = 0;
  SecurityDescriptor = 0LL;
  v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v6];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, v33, a4);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  v11 = (void **)(a2 + 32);
  SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
  GenericMapping = (GENERIC_MAPPING *)(v9 + 76);
  v13 = (unsigned __int64)SecurityDescriptor;
  v14 = SeAccessCheck(
          SecurityDescriptor,
          (PSECURITY_SUBJECT_CONTEXT)(a2 + 32),
          1u,
          *(_DWORD *)(a2 + 16),
          *(_DWORD *)(a2 + 20),
          0LL,
          GenericMapping,
          AccessMode,
          GrantedAccess,
          AccessStatus);
  v16 = v14;
  if ( v14 )
  {
    v17 = GrantedAccess[0];
    *(_DWORD *)(a2 + 20) |= GrantedAccess[0];
    *(_DWORD *)(a2 + 16) &= ~v17;
  }
  if ( v13 )
  {
    v18 = *(_DWORD *)(a2 + 16) | *(_DWORD *)(a2 + 20);
    GenerateAudit = 0;
    LOBYTE(SecurityDescriptor) = 0;
    if ( AccessMode )
    {
      LOBYTE(v15) = v14;
      if ( (unsigned __int8)SepAdtAuditThisEventWithContext(121LL, v15, 0LL, a2 + 32) )
      {
        v22 = *v11;
        if ( !*v11 )
          v22 = *(void **)(a2 + 48);
        v23 = *(_WORD *)(v13 + 2);
        if ( (v23 & 0x10) != 0 )
        {
          if ( v23 >= 0 )
          {
            v24 = *(ACL **)(v13 + 24);
          }
          else
          {
            v31 = *(unsigned int *)(v13 + 12);
            if ( (_DWORD)v31 )
              v24 = (ACL *)(v13 + v31);
            else
              v24 = 0LL;
          }
          if ( v23 >= 0 )
          {
            v25 = *(ACL **)(v13 + 24);
            goto LABEL_18;
          }
          v32 = *(unsigned int *)(v13 + 12);
          if ( (_DWORD)v32 )
          {
            v25 = (ACL *)(v13 + v32);
            goto LABEL_18;
          }
        }
        else
        {
          v24 = 0LL;
        }
        v25 = 0LL;
LABEL_18:
        SeExamineSacl(v25, v24, v22, v18, v16, &GenerateAudit, (PBOOLEAN)&SecurityDescriptor);
        v26 = *v11;
        if ( !*v11 )
          v26 = *(void **)(a2 + 48);
        v27 = *(_WORD *)(v13 + 2);
        if ( (v27 & 0x10) == 0 )
          goto LABEL_23;
        if ( v27 >= 0 )
        {
          v29 = *(ACL **)(v13 + 24);
          goto LABEL_24;
        }
        v28 = *(unsigned int *)(v13 + 12);
        if ( (_DWORD)v28 )
          v29 = (ACL *)(v13 + v28);
        else
LABEL_23:
          v29 = 0LL;
LABEL_24:
        SeExamineGlobalSacl(
          (PUNICODE_STRING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)]
                          + 16),
          v29,
          v26,
          v18,
          v16,
          &GenerateAudit,
          (PBOOLEAN)&SecurityDescriptor);
        if ( GenerateAudit || (_BYTE)SecurityDescriptor )
        {
          LOBYTE(v30) = v16;
          SepAdtObjectReferenceAuditAlarm(a1, a2 + 32, v18, v30);
        }
      }
    }
  }
  SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
  if ( v13 )
  {
    if ( v33[0] )
    {
      ExFreePoolWithTag((PVOID)v13, 0);
    }
    else
    {
      _m_prefetchw((const void *)(a1 - 8));
      v19 = *(_QWORD *)(a1 - 8);
      while ( (v13 ^ v19) < 0xF )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 8), v19 + 1, v19);
        if ( v20 == v19 )
          return v16;
      }
      ObDereferenceSecurityDescriptor(v13, 1LL);
    }
  }
  return v16;
}
