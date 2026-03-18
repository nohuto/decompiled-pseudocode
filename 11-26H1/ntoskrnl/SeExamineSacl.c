/*
 * XREFs of SeExamineSacl @ 0x1409F8430
 * Callers:
 *     CmpExamineSaclForAuditEvent @ 0x14085B068 (CmpExamineSaclForAuditEvent.c)
 *     ObpCheckObjectReference @ 0x1408EE834 (ObpCheckObjectReference.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     NtOpenObjectAuditAlarm @ 0x1409F7550 (NtOpenObjectAuditAlarm.c)
 *     SeExamineGlobalSacl @ 0x1409F8758 (SeExamineGlobalSacl.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409F8930 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140B09DB0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B64ACC (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     SepSidInToken @ 0x1402AFC70 (SepSidInToken.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403CDD60 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403CF030 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14048B6E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall SeExamineSacl(
        PACL Sacl,
        PACL ResourceSacl,
        PACCESS_TOKEN Token,
        ACCESS_MASK DesiredAccess,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateAudit,
        PBOOLEAN GenerateAlarm)
{
  _DWORD *v8; // rdi
  unsigned int v9; // r15d
  PACL v12; // r8
  unsigned int AceCount; // r12d
  _WORD *v15; // rcx
  unsigned int v16; // r13d
  PACL v17; // rbx
  int v18; // eax
  char v19; // al
  int Sbz1; // eax
  PACL v21; // rdx
  int v22; // eax
  int v23; // ecx
  _QWORD *v24; // rax
  void *v25; // r8
  void *v26; // r9
  void *v27; // r10
  void *v28; // r11
  char v29; // al
  int v30; // [rsp+60h] [rbp-48h] BYREF
  int v31; // [rsp+64h] [rbp-44h]
  _DWORD *v32; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v33; // [rsp+B0h] [rbp+8h]
  UCHAR GenerateAudita; // [rsp+D8h] [rbp+30h]
  char GenerateAlarma; // [rsp+E0h] [rbp+38h]

  v8 = 0LL;
  v9 = 0;
  v32 = 0LL;
  v30 = -1;
  *GenerateAudit = 0;
  v12 = ResourceSacl;
  *GenerateAlarm = 0;
  if ( Sacl )
  {
    AceCount = Sacl->AceCount;
    if ( Sacl->AceCount )
    {
      GenerateAlarma = 0;
      if ( (DesiredAccess & 0x2000000) != 0 )
      {
        v29 = 0x80;
        if ( AccessGranted )
          v29 = 64;
        GenerateAlarma = v29;
      }
      v15 = (_WORD *)**((_QWORD **)Token + 19);
      if ( *v15 == *(_WORD *)SeAnonymousLogonSid )
      {
        v18 = memcmp(v15, SeAnonymousLogonSid, 4LL * *((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v12 = ResourceSacl;
        if ( !v18 )
          v9 = 4 * HIBYTE(RtlpBootStatHandleLock.StateSaveArea->ControlWord) + 8;
      }
      v16 = 0;
      v17 = Sacl + 1;
      if ( AceCount )
      {
        while ( 1 )
        {
          if ( *GenerateAudit )
          {
LABEL_14:
            if ( v8 )
            {
              AuthzBasepFreeSecurityAttributesList(v8);
              ExFreePoolWithTag(v8, 0);
            }
            return;
          }
          GenerateAudita = v17->Sbz1;
          if ( (GenerateAudita & 8) == 0 )
          {
            if ( v17->AclRevision != 2 )
            {
              if ( v17->AclRevision != 13 )
                goto LABEL_13;
              Sbz1 = v17[1].Sbz1;
              v21 = v17 + 1;
              v31 = *(_DWORD *)&v17->AceCount;
              v22 = 4 * Sbz1 + 8;
              v33 = v22;
              if ( v12 && !v8 )
              {
                AuthzBasepInitializeResourceClaimsFromSacl((__int64)v12, (__int64 *)&v32);
                v22 = v33;
                v21 = v17 + 1;
                v8 = v32;
              }
              v23 = v17->AclSize - v22;
              if ( v23 - 8 <= 0 )
                goto LABEL_13;
              v24 = (_QWORD *)*((_QWORD *)Token + 137);
              if ( v24 )
              {
                v25 = (void *)v24[75];
                v26 = (void *)v24[73];
                v27 = (void *)v24[74];
                v28 = (void *)v24[72];
              }
              else
              {
                v25 = 0LL;
                v26 = 0LL;
                v27 = 0LL;
                v28 = 0LL;
              }
              AuthzBasepEvaluateAceCondition(
                Token,
                *((void **)Token + 97),
                v8,
                v28,
                v27,
                v26,
                v25,
                (PACL)((char *)v21 + v33),
                v23 - 8,
                1u,
                0,
                &v30);
              if ( ((v30 + 1) & 0xFFFFFFFD) != 0
                || !SepSidInToken((__int64)Token, 0LL, (unsigned __int8 *)&v17[1], 1, 0, 0)
                && (!v9
                 || RtlpBootStatHandleLock.StateSaveArea->ControlWord != *(_WORD *)&v17[1].AclRevision
                 || memcmp(RtlpBootStatHandleLock.StateSaveArea, &v17[1], v9)) )
              {
                goto LABEL_13;
              }
              if ( (DesiredAccess & v31) != 0 )
              {
                v19 = GenerateAudita;
                if ( (GenerateAudita & 0x40) != 0 )
                  goto LABEL_40;
                goto LABEL_24;
              }
              if ( ((unsigned __int8)GenerateAlarma & GenerateAudita) == 0 )
                goto LABEL_13;
LABEL_12:
              *GenerateAudit = 1;
              goto LABEL_13;
            }
            if ( !SepSidInToken((__int64)Token, 0LL, (unsigned __int8 *)&v17[1], 1, 0, 0)
              && (!v9
               || RtlpBootStatHandleLock.StateSaveArea->ControlWord != *(_WORD *)&v17[1].AclRevision
               || memcmp(RtlpBootStatHandleLock.StateSaveArea, &v17[1], v9)) )
            {
              goto LABEL_13;
            }
            if ( (DesiredAccess & *(_DWORD *)&v17->AceCount) != 0 )
            {
              v19 = GenerateAudita;
              if ( (GenerateAudita & 0x40) == 0 )
                goto LABEL_24;
LABEL_40:
              if ( !AccessGranted )
              {
LABEL_24:
                if ( v19 >= 0 || AccessGranted )
                  goto LABEL_13;
              }
              goto LABEL_12;
            }
            if ( ((unsigned __int8)GenerateAlarma & GenerateAudita) != 0 )
              goto LABEL_12;
          }
LABEL_13:
          ++v16;
          v12 = ResourceSacl;
          v17 = (PACL)((char *)v17 + v17->AclSize);
          if ( v16 >= AceCount )
            goto LABEL_14;
        }
      }
    }
  }
}
