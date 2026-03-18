/*
 * XREFs of CmpCheckOpenAccessOnKeyBody @ 0x140930F10
 * Callers:
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     SepPrivilegeCheck @ 0x14042F0A0 (SepPrivilegeCheck.c)
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     PsGetCurrentThreadProcess @ 0x1404AA5F0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     CmpTransUowIsEqual @ 0x140776F48 (CmpTransUowIsEqual.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408BC470 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsSystemEntity @ 0x1408F4110 (CmpIsSystemEntity.c)
 *     SepConcatenatePrivileges @ 0x140904FC0 (SepConcatenatePrivileges.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpCheckKeyBodyAccess @ 0x140930990 (CmpCheckKeyBodyAccess.c)
 *     CmpIsKcbImmutable @ 0x140931B20 (CmpIsKcbImmutable.c)
 *     SeSinglePrivilegeCheckEx @ 0x140932740 (SeSinglePrivilegeCheckEx.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140932AB0 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdjustAccessStateForConstraints @ 0x1409847D0 (SepAdjustAccessStateForConstraints.c)
 *     SepFilterPrivilegeAudits @ 0x1409F7460 (SepFilterPrivilegeAudits.c)
 *     CmpCheckAdminAccess @ 0x140A33904 (CmpCheckAdminAccess.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140AB02DC (CmpDoesProcessBelongToServiceSession.c)
 *     CmpCheckKeyOwnerForPca @ 0x140AB0CD8 (CmpCheckKeyOwnerForPca.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C58750 (CmpIsKeyDeletedForKeyBody.c)
 */

char __fastcall CmpCheckOpenAccessOnKeyBody(
        _WORD *a1,
        __int64 a2,
        _DWORD *a3,
        struct _ACCESS_STATE *a4,
        char AccessMode,
        char a6,
        __int64 a7,
        bool *a8,
        _DWORD *a9)
{
  unsigned __int16 v9; // di
  _QWORD *v10; // r13
  __int64 v11; // r12
  __int64 v12; // rsi
  PACCESS_STATE v13; // r15
  _WORD *v14; // r14
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned __int16 v18; // ax
  __int64 v19; // r14
  char v20; // si
  PACCESS_STATE v21; // r14
  __int64 v22; // rdi
  __int64 OriginalDesiredAccess; // rdx
  int v24; // edx
  struct _PRIVILEGE_SET *v25; // rdx
  PPRIVILEGE_SET v26; // r15
  int v27; // ebx
  ACCESS_MASK v28; // ecx
  _DWORD *v29; // rdi
  __int64 v30; // rbx
  struct _PRIVILEGE_SET *v31; // r9
  int v32; // edi
  __int64 v33; // rax
  unsigned __int16 v34; // di
  PPRIVILEGE_SET v35; // rbx
  __int64 v36; // rdx
  LUID Luid; // rbx
  LUID_AND_ATTRIBUTES *Privilege; // r15
  __int64 v39; // rdi
  char result; // al
  bool v41; // dl
  struct _KTHREAD *CurrentThread; // rax
  void *v43; // r13
  struct _KTHREAD *v44; // rax
  KPROCESSOR_MODE v45; // di
  BOOLEAN v46; // al
  PPRIVILEGE_SET v47; // r14
  BOOLEAN v48; // r15
  PVOID *AuxData; // r12
  _DWORD *v50; // rbx
  int v51; // ecx
  unsigned int v52; // edi
  ACCESS_MASK v53; // ecx
  _QWORD *v54; // rax
  void *v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  PERESOURCE *ClientToken; // rcx
  __int64 v59; // rdx
  __int64 v60; // r8
  struct _PRIVILEGE_SET *v61; // rcx
  __int64 v62; // rcx
  bool IsEqual; // al
  __int64 v64; // rax
  bool v65; // al
  __int64 v66; // rsi
  __int64 v67; // rbx
  __int64 v68; // rdi
  __int64 v69; // rcx
  __int64 *p_SubjectSecurityContext; // rdi
  ACCESS_MASK PreviouslyGrantedAccess; // ebx
  unsigned __int8 v72; // al
  __int64 PrimaryToken; // rcx
  char v74; // al
  char v75; // r12
  __int64 v76; // r15
  __int64 v77; // rax
  void *v78; // r13
  char v79; // al
  __int64 v80; // r8
  ACCESS_MASK v81; // ecx
  __int64 v82; // rdx
  __int64 v83; // rcx
  struct _PRIVILEGE_SET *v84; // rdx
  int started; // eax
  __int16 v86; // r8
  __int16 v87; // r8
  PPRIVILEGE_SET v88; // r9
  __int16 i; // cx
  PPRIVILEGE_SET v90; // rax
  __int64 v91; // rbx
  _KPROCESS *CurrentThreadProcess; // rax
  void *v93; // r9
  __int64 v94; // rax
  bool v95; // al
  unsigned int v96; // edi
  _DWORD *Pool2; // rbx
  _DWORD *v98; // rdx
  __int64 v99; // rdx
  PACCESS_STATE v100; // rdi
  __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // r14
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rax
  bool v108; // al
  NTSTATUS AccessStatus; // [rsp+58h] [rbp-89h] BYREF
  PACCESS_STATE AccessState; // [rsp+60h] [rbp-81h]
  ACCESS_MASK GrantedAccess; // [rsp+68h] [rbp-79h] BYREF
  _DWORD *v112; // [rsp+70h] [rbp-71h]
  PPRIVILEGE_SET Pool; // [rsp+78h] [rbp-69h]
  PVOID Object; // [rsp+80h] [rbp-61h]
  PPRIVILEGE_SET v115; // [rsp+88h] [rbp-59h] BYREF
  _DWORD *v116; // [rsp+90h] [rbp-51h]
  __int64 v117; // [rsp+98h] [rbp-49h]
  __int64 v118; // [rsp+A0h] [rbp-41h]
  bool *v119; // [rsp+A8h] [rbp-39h]
  __int128 v120; // [rsp+B0h] [rbp-31h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+C0h] [rbp-21h]

  v9 = *(_WORD *)(a2 + 2);
  v10 = a1;
  v11 = a7;
  v12 = 0LL;
  Object = a1;
  v13 = a4;
  v119 = a8;
  v14 = a1 + 2;
  v116 = a3;
  v112 = a9;
  AccessState = a4;
  v118 = a2;
  v117 = a7;
  if ( (v9 & 0x8000u) == 0 )
  {
    do
    {
      v16 = v9 >= 2u ? *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v9 - 16) : *(_QWORD *)(a2 + 8LL * v9 + 8);
      if ( *(_WORD *)(v16 + 66) && *(_BYTE *)(v16 + 65) == 1 )
        break;
      if ( *(_DWORD *)(v16 + 40) != -1
        && ((v17 = *(_QWORD *)(v16 + 240)) == 0
         || a7
         && (a7 == v17
          || ((v62 = *(_QWORD *)(a7 + 56)) == 0 || (v102 = *(_QWORD *)(v17 + 56)) == 0
            ? (IsEqual = CmpTransUowIsEqual((const void *)(a7 + 88), (const void *)(v17 + 88)))
            : (IsEqual = v62 == v102),
              IsEqual))) )
      {
        v12 = v16;
        if ( *(_WORD *)(v16 + 66) && *(_BYTE *)(v16 + 65) )
          break;
        v18 = v9;
      }
      else
      {
        v18 = v9;
      }
      v9 = v18 - 1;
    }
    while ( (__int16)(v18 - 1) >= 0 );
    v13 = AccessState;
  }
  if ( v14 )
    *v14 = *(_WORD *)(v12 + 66);
  v19 = *(_QWORD *)(v12 + 88);
  if ( a7 )
  {
    v66 = v12 + 208;
    v67 = *(_QWORD *)(v66 + 8);
    if ( v66 != v67 )
      goto LABEL_92;
LABEL_84:
    v68 = 0LL;
    while ( v68 )
    {
      v69 = *(_QWORD *)(v68 + 56);
      if ( v69 )
      {
        if ( v69 == a7
          || ((v94 = *(_QWORD *)(v69 + 56)) == 0 || (v101 = *(_QWORD *)(a7 + 56)) == 0
            ? (v95 = CmpTransUowIsEqual((const void *)(v69 + 88), (const void *)(a7 + 88)))
            : (v95 = v94 == v101),
              v95) )
        {
          if ( *(_DWORD *)(v68 + 68) == 9 )
          {
            v19 = *(_QWORD *)(v68 + 88);
            break;
          }
        }
      }
      if ( !v67 )
        v67 = *(_QWORD *)(v66 + 8);
      if ( v66 == v67 )
        goto LABEL_84;
LABEL_92:
      v68 = v67 - 32;
      v67 = *(_QWORD *)(v67 + 8);
    }
  }
  v20 = a6;
  if ( !a6 )
  {
    v21 = AccessState;
    goto LABEL_18;
  }
  LODWORD(v120) = 1;
  v13->PreviouslyGrantedAccess = 0;
  p_SubjectSecurityContext = (__int64 *)&v13->SubjectSecurityContext;
  PreviouslyGrantedAccess = 0;
  *((LUID *)&v120 + 1) = SeBackupPrivilege;
  v72 = AccessMode;
  DWORD1(v120) = 1;
  LODWORD(Privileges[0]) = 0;
  if ( AccessMode )
  {
    PrimaryToken = *p_SubjectSecurityContext;
    if ( *p_SubjectSecurityContext )
    {
      if ( v13->SubjectSecurityContext.ImpersonationLevel < SecurityImpersonation )
      {
        v75 = 0;
LABEL_99:
        v76 = *p_SubjectSecurityContext;
        v77 = *p_SubjectSecurityContext;
        if ( !*p_SubjectSecurityContext )
          v77 = p_SubjectSecurityContext[2];
        v78 = **(void ***)(v77 + 152);
        if ( RtlEqualSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags, v78)
          || ((v115 = (PPRIVILEGE_SET)SeExports, RtlEqualSid(SeExports->SeNetworkServiceSid, v78))
           || RtlEqualSid(*(PSID *)&v115[19].Control, v78))
          && !(unsigned __int8)SepFilterPrivilegeAudits(1LL, &v120) )
        {
          v13 = AccessState;
        }
        else
        {
          SepAdtPrivilegedServiceAuditAlarm(
            (_DWORD)p_SubjectSecurityContext,
            (unsigned int)&SeSubsystemName,
            0,
            v76,
            p_SubjectSecurityContext[2],
            (__int64)&v120,
            v75);
          v13 = AccessState;
          PreviouslyGrantedAccess = AccessState->PreviouslyGrantedAccess;
        }
        v72 = AccessMode;
        if ( !v75 )
          goto LABEL_105;
        goto LABEL_104;
      }
    }
    else
    {
      PrimaryToken = (__int64)v13->SubjectSecurityContext.PrimaryToken;
    }
    v74 = SepPrivilegeCheck(PrimaryToken, (__int64)&v120 + 8, 1u, 1, AccessMode);
    PreviouslyGrantedAccess = v13->PreviouslyGrantedAccess;
    v75 = v74;
    goto LABEL_99;
  }
LABEL_104:
  v13->Flags |= 2u;
  v13->PreviouslyGrantedAccess = PreviouslyGrantedAccess | 0x1020019;
LABEL_105:
  v79 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeSinglePrivilegeCheckEx)(
          SeRestorePrivilege,
          &v13->SubjectSecurityContext,
          v72);
  v81 = v13->PreviouslyGrantedAccess;
  if ( v79 )
  {
    v13->Flags |= 4u;
    v81 |= 0x10F0006u;
    v13->PreviouslyGrantedAccess = v81;
  }
  v13->OriginalDesiredAccess = v81;
  if ( !v81 )
    goto LABEL_116;
  v82 = v19 + 32;
  v21 = AccessState;
  LOBYTE(v80) = 1;
  SepAdjustAccessStateForConstraints(CmKeyObjectType, v82, v80, AccessState);
  v11 = v117;
  v10 = Object;
  AccessState->RemainingDesiredAccess = AccessState->OriginalDesiredAccess & ~AccessState->PreviouslyGrantedAccess;
LABEL_18:
  v22 = v10[1];
  OriginalDesiredAccess = v21->OriginalDesiredAccess;
  v120 = 0LL;
  WORD1(v120) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( !(unsigned __int8)CmpIsKcbImmutable(v22, OriginalDesiredAccess) )
  {
    v25 = Privileges[1];
    v26 = 0LL;
    v27 = 0;
    goto LABEL_20;
  }
  if ( (v24 & 0xD0026) == 0 )
  {
    v25 = Privileges[1];
    v26 = 0LL;
    v27 = 0;
    goto LABEL_20;
  }
  if ( (v24 & 0xD0002) != 0 || (*(_DWORD *)(*(_QWORD *)(v22 + 32) + 4120LL) & 0x2000) == 0 || *(_BYTE *)(v22 + 65) )
  {
    v25 = Privileges[1];
  }
  else
  {
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v120, v22);
    v25 = Privileges[1];
    v27 = started;
    if ( started < 0 )
      goto LABEL_156;
    v86 = *(_WORD *)(v22 + 66);
LABEL_128:
    v87 = v86 - 1;
    if ( v87 < 0 )
      goto LABEL_156;
    if ( v87 >= 2 )
      v88 = (PPRIVILEGE_SET)*((_QWORD *)v25 + v87 - 2);
    else
      v88 = Privileges[v87 - 1];
    WORD1(v120) = v87;
    for ( i = v87; i >= 0; --i )
    {
      v90 = i >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)v25 + i - 2) : Privileges[i - 1];
      if ( HIWORD(v90[3].Control) && BYTE1(v90[3].Control) == 1 )
        break;
      if ( v90[2].PrivilegeCount != -1 )
      {
        if ( !(unsigned __int8)CmpIsKcbImmutable(v88, v25) )
        {
          v26 = 0LL;
          v27 = 0;
          goto LABEL_20;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v22 + 32) + 4120LL) & 0x2000) == 0 )
          break;
        if ( *(_BYTE *)(v22 + 65) )
        {
          v27 = -1073741790;
          v26 = 0LL;
          goto LABEL_20;
        }
        goto LABEL_128;
      }
    }
  }
  v27 = -1073741790;
LABEL_156:
  v26 = 0LL;
LABEL_20:
  if ( v25 )
    CmSiFreeMemory(v25);
  if ( v27 < 0 )
    goto LABEL_116;
  v28 = v21->OriginalDesiredAccess;
  v29 = v116;
  if ( (v28 & v116[24]) != v28 )
    goto LABEL_116;
  if ( (!a6 || v21->RemainingDesiredAccess) && (v28 || (*v116 & 0x1000) == 0) )
  {
    GrantedAccess = 0;
    v115 = 0LL;
    v120 = 0LL;
    WORD1(v120) = -1;
    *(_OWORD *)Privileges = 0LL;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v10, v11) )
    {
      v61 = Privileges[1];
      v48 = 0;
      AccessStatus = -1073741444;
LABEL_65:
      if ( v61 )
        CmSiFreeMemory(v61);
      if ( v48 )
        goto LABEL_68;
      if ( !v20 )
      {
        v91 = v10[1];
        if ( *(_WORD *)(v91 + 66)
          || (v29[6] & 0x10) != 0
          || (*(_DWORD *)(v91 + 184) & 0x40) != 0
          || (*(_DWORD *)(*(_QWORD *)(v91 + 32) + 4120LL) & 0x10) == 0
          || CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, 0LL, v29 + 4)
          || (GrantedAccess = CmpCheckAdminAccess(
                                v21->RemainingDesiredAccess,
                                (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v91 + 88) + 32LL)),
              (GrantedAccess & 0x80000000) != 0) )
        {
          if ( AccessStatus >= 0 )
          {
LABEL_68:
            result = 1;
            v41 = 0;
            *v112 = 0;
            goto LABEL_69;
          }
        }
        if ( KeGetCurrentThread()->PreviousMode == 1 )
        {
          CurrentThreadProcess = PsGetCurrentThreadProcess();
          if ( !(unsigned __int8)CmpDoesProcessBelongToServiceSession(CurrentThreadProcess)
            && (v21->RemainingDesiredAccess & 0xD0026) != 0 )
          {
            v41 = (unsigned __int8)CmpCheckKeyOwnerForPca(v118, v11) != 0;
            result = 0;
            *v112 = -1073741790;
            goto LABEL_69;
          }
        }
      }
LABEL_116:
      result = 0;
      v41 = 0;
      *v112 = -1073741790;
      goto LABEL_69;
    }
    v30 = v10[1];
    v31 = 0LL;
    Pool = 0LL;
    v32 = *(__int16 *)(v30 + 66);
    if ( v32 >= 2 )
    {
      Pool = (PPRIVILEGE_SET)CmpAllocatePool(0x100uLL);
      v31 = Pool;
      if ( !Pool )
      {
        v61 = Privileges[1];
        v48 = 0;
        AccessStatus = -1073741670;
LABEL_64:
        v29 = v116;
        goto LABEL_65;
      }
    }
    LOWORD(v120) = v32;
    Privileges[1] = v31;
    v33 = *(__int16 *)(v30 + 66);
    WORD1(v120) = v33;
    if ( (_WORD)v33 )
    {
      v83 = *(_QWORD *)(v30 + 192);
      if ( !v83 )
        goto LABEL_31;
      do
      {
        v84 = *(struct _PRIVILEGE_SET **)(v83 + 16);
        if ( (__int16)v33 >= 2 )
        {
          *((_QWORD *)v31 + (__int16)v33 - 2) = v84;
        }
        else
        {
          Privileges[(__int16)v33 - 1] = v84;
          v31 = Privileges[1];
        }
        v83 = *(_QWORD *)(v83 + 24);
        LOWORD(v33) = v33 - 1;
      }
      while ( v83 );
    }
    else
    {
      Privileges[v33 - 1] = (PPRIVILEGE_SET)v30;
      v31 = Privileges[1];
    }
    Pool = v31;
LABEL_31:
    v34 = WORD1(v120);
    AccessStatus = 0;
    if ( (SWORD1(v120) & 0x8000u) == 0 )
    {
      do
      {
        if ( v34 >= 2u )
          v35 = (PPRIVILEGE_SET)*((_QWORD *)v31 + v34 - 2);
        else
          v35 = Privileges[v34 - 1];
        if ( HIWORD(v35[3].Control) && BYTE1(v35[3].Control) == 1 )
          break;
        if ( v35[2].PrivilegeCount != -1 )
        {
          v36 = *(_QWORD *)&v35[12].PrivilegeCount;
          if ( !v36
            || v11
            && (v11 == v36
             || ((v64 = *(_QWORD *)(v11 + 56)) == 0 || (v103 = *(_QWORD *)(v36 + 56)) == 0
               ? (v65 = CmpTransUowIsEqual((const void *)(v11 + 88), (const void *)(v36 + 88)), v31 = Pool)
               : (struct _PRIVILEGE_SET *)(v65 = v64 == v103),
                 v65)) )
          {
            v26 = v35;
            if ( HIWORD(v35[3].Control) )
            {
              if ( BYTE1(v35[3].Control) )
                break;
            }
          }
        }
        --v34;
      }
      while ( (v34 & 0x8000u) == 0 );
      v20 = a6;
    }
    Luid = v26[4].Privilege[0].Luid;
    if ( v11 )
    {
      Privilege = v26[10].Privilege;
      v39 = *(_QWORD *)&Privilege->Attributes;
      if ( Privilege == (LUID_AND_ATTRIBUTES *)v39 )
        goto LABEL_206;
LABEL_191:
      v104 = v39 - 32;
      v39 = *(_QWORD *)(v39 + 8);
      while ( v104 )
      {
        v105 = *(_QWORD *)(v104 + 56);
        if ( v105 )
        {
          if ( v105 == v11
            || ((v106 = *(_QWORD *)(v105 + 56)) == 0 || (v107 = *(_QWORD *)(v11 + 56)) == 0
              ? (v108 = CmpTransUowIsEqual((const void *)(v105 + 88), (const void *)(v11 + 88)))
              : (v108 = v106 == v107),
                v108) )
          {
            if ( *(_DWORD *)(v104 + 68) == 9 )
            {
              Luid = *(LUID *)(v104 + 88);
              break;
            }
          }
        }
        if ( !v39 )
          v39 = *(_QWORD *)&Privilege->Attributes;
        if ( Privilege != (LUID_AND_ATTRIBUTES *)v39 )
          goto LABEL_191;
LABEL_206:
        v104 = 0LL;
      }
      v21 = AccessState;
    }
    CurrentThread = KeGetCurrentThread();
    v43 = (void *)(*(_QWORD *)&Luid + 32LL);
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)v21->SubjectSecurityContext.PrimaryToken + 6), 1u);
    if ( v21->SubjectSecurityContext.ClientToken )
    {
      v44 = KeGetCurrentThread();
      --v44->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)v21->SubjectSecurityContext.ClientToken + 6), 1u);
    }
    v45 = AccessMode;
    v46 = SeAccessCheck(
            (PSECURITY_DESCRIPTOR)(*(_QWORD *)&Luid + 32LL),
            &v21->SubjectSecurityContext,
            1u,
            v21->RemainingDesiredAccess,
            v21->PreviouslyGrantedAccess,
            &v115,
            (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
            AccessMode,
            &GrantedAccess,
            &AccessStatus);
    v47 = v115;
    v48 = v46;
    if ( v115 )
    {
      AuxData = (PVOID *)AccessState->AuxData;
      v50 = *AuxData;
      v51 = *(_DWORD *)*AuxData;
      if ( v51 + v115->PrivilegeCount > 3 )
      {
        v96 = 8;
        Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          v98 = *AuxData;
          if ( *AuxData )
          {
            if ( *v98 )
              v96 = 12 * *v98 + 8;
          }
          else
          {
            v96 = 0;
          }
          memmove(Pool2, v98, v96);
          SepConcatenatePrivileges(Pool2, v99, &v47->PrivilegeCount);
          v100 = AccessState;
          if ( AccessState->PrivilegesAllocated )
            ExFreePoolWithTag(*AuxData, 0);
          *AuxData = Pool2;
          v100->PrivilegesAllocated = 1;
        }
      }
      else
      {
        if ( v50 )
        {
          if ( v51 )
            v52 = 12 * v51 + 8;
          else
            v52 = 8;
        }
        else
        {
          v52 = 0;
        }
        memmove((char *)v50 + v52, v115->Privilege, 12 * v115->PrivilegeCount);
        *v50 += v47->PrivilegeCount;
      }
      CmSiFreeMemory(v115);
      v45 = AccessMode;
      v11 = v117;
    }
    v21 = AccessState;
    if ( v48 )
    {
      v53 = GrantedAccess;
      AccessState->PreviouslyGrantedAccess |= GrantedAccess;
      v21->RemainingDesiredAccess &= ~(v53 | 0x2000000);
    }
    v54 = Object;
    *((_WORD *)Object + 24) |= 2u;
    if ( v11 )
    {
      v93 = v43;
      v10 = Object;
      SeOpenObjectAuditAlarmWithTransaction(
        (PUNICODE_STRING)CmKeyObjectType + 1,
        Object,
        0LL,
        v93,
        v21,
        0,
        v48,
        v45,
        (GUID *)(v11 + 88),
        &v21->GenerateOnClose);
    }
    else if ( v45 )
    {
      v55 = v43;
      v10 = Object;
      SeOpenObjectAuditAlarmWithTransaction(
        (PUNICODE_STRING)CmKeyObjectType + 1,
        Object,
        0LL,
        v55,
        v21,
        0,
        v48,
        v45,
        0LL,
        &v21->GenerateOnClose);
    }
    else
    {
      v10 = v54;
    }
    *((_WORD *)v10 + 24) &= ~2u;
    ExReleaseResourceLite(*((PERESOURCE *)v21->SubjectSecurityContext.PrimaryToken + 6));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v56, v57);
    ClientToken = (PERESOURCE *)v21->SubjectSecurityContext.ClientToken;
    if ( ClientToken )
    {
      ExReleaseResourceLite(ClientToken[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v59, v60);
    }
    v61 = Pool;
    goto LABEL_64;
  }
  result = 1;
  v41 = 0;
  *v112 = 0;
LABEL_69:
  *v119 = v41;
  return result;
}
