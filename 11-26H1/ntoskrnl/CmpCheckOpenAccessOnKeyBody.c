/*
 * XREFs of CmpCheckOpenAccessOnKeyBody @ 0x14090CA40
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x14041BFB0 (SepPrivilegeCheck.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     CmpTransUowIsEqual @ 0x140779DF0 (CmpTransUowIsEqual.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsSystemEntity @ 0x1408FA6D0 (CmpIsSystemEntity.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpCheckKeyBodyAccess @ 0x14090C4C0 (CmpCheckKeyBodyAccess.c)
 *     CmpIsKcbImmutable @ 0x14090D6F0 (CmpIsKcbImmutable.c)
 *     SeSinglePrivilegeCheckEx @ 0x14090E300 (SeSinglePrivilegeCheckEx.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepConcatenatePrivileges @ 0x140934F50 (SepConcatenatePrivileges.c)
 *     SepAdjustAccessStateForConstraints @ 0x1409467E0 (SepAdjustAccessStateForConstraints.c)
 *     CmpCheckAdminAccess @ 0x140A4E864 (CmpCheckAdminAccess.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140AADF2C (CmpDoesProcessBelongToServiceSession.c)
 *     CmpCheckKeyOwnerForPca @ 0x140AAECBC (CmpCheckKeyOwnerForPca.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
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
  __int64 v19; // rbx
  PACCESS_STATE v20; // r14
  __int64 v21; // rdi
  __int64 OriginalDesiredAccess; // rdx
  int v23; // edx
  struct _PRIVILEGE_SET *v24; // rdx
  PPRIVILEGE_SET v25; // r15
  int v26; // ebx
  ACCESS_MASK v27; // ecx
  _DWORD *v28; // rdi
  __int64 v29; // rbx
  struct _PRIVILEGE_SET *v30; // r9
  int v31; // edi
  __int64 v32; // rax
  unsigned __int16 v33; // di
  PPRIVILEGE_SET v34; // rbx
  __int64 v35; // rdx
  unsigned __int16 v36; // ax
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
  PERESOURCE *ClientToken; // rcx
  struct _PRIVILEGE_SET *v57; // rcx
  __int64 v58; // rcx
  bool IsEqual; // al
  __int64 v60; // rax
  bool v61; // al
  __int64 v62; // r14
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rcx
  unsigned __int8 v66; // r13
  __int64 *p_SubjectSecurityContext; // rdi
  unsigned int v68; // r14d
  __int64 PrimaryToken; // rcx
  char v70; // r12
  __int64 v71; // rax
  void *v72; // r15
  char v73; // al
  __int64 v74; // r8
  ACCESS_MASK PreviouslyGrantedAccess; // ecx
  PSE_EXPORTS v76; // r13
  __int64 v77; // rcx
  struct _PRIVILEGE_SET *v78; // rdx
  int started; // eax
  __int16 v80; // r8
  __int16 v81; // r8
  PPRIVILEGE_SET v82; // r9
  __int16 i; // cx
  PPRIVILEGE_SET v84; // rax
  __int64 v85; // rbx
  _KPROCESS *CurrentThreadProcess; // rax
  void *v87; // r9
  int v88; // r10d
  LUID *v89; // r8
  __int64 v90; // r9
  struct _LIST_ENTRY *Blink; // rcx
  LUID *v92; // rcx
  __int64 v93; // r8
  _UNKNOWN **v94; // rdx
  _DWORD *v95; // rax
  __int64 v96; // rax
  bool v97; // al
  unsigned int v98; // edi
  void *Pool2; // rbx
  _DWORD *v100; // rdx
  __int64 v101; // rdx
  PACCESS_STATE v102; // rdi
  __int64 v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // r14
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rax
  bool v110; // al
  NTSTATUS AccessStatus; // [rsp+58h] [rbp-99h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+5Ch] [rbp-95h] BYREF
  PACCESS_STATE AccessState; // [rsp+60h] [rbp-91h]
  _DWORD *v114; // [rsp+68h] [rbp-89h]
  PPRIVILEGE_SET Pool; // [rsp+70h] [rbp-81h]
  __int128 v116; // [rsp+78h] [rbp-79h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+88h] [rbp-69h]
  PVOID Object; // [rsp+98h] [rbp-59h]
  _DWORD *v119; // [rsp+A0h] [rbp-51h]
  PPRIVILEGE_SET v120; // [rsp+A8h] [rbp-49h] BYREF
  __int64 v121; // [rsp+B0h] [rbp-41h]
  __int64 v122; // [rsp+B8h] [rbp-39h]
  bool *v123; // [rsp+C0h] [rbp-31h]
  _DWORD v124[2]; // [rsp+C8h] [rbp-29h] BYREF
  LUID v125; // [rsp+D0h] [rbp-21h] BYREF
  int v126; // [rsp+D8h] [rbp-19h]

  v9 = *(_WORD *)(a2 + 2);
  v10 = a1;
  v11 = a7;
  v12 = 0LL;
  Object = a1;
  v13 = a4;
  v123 = a8;
  v14 = a1 + 2;
  v119 = a3;
  v114 = a9;
  AccessState = a4;
  v122 = a2;
  v121 = a7;
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
          || ((v58 = *(_QWORD *)(a7 + 56)) == 0 || (v104 = *(_QWORD *)(v17 + 56)) == 0
            ? (IsEqual = CmpTransUowIsEqual((const void *)(a7 + 88), (const void *)(v17 + 88)))
            : (IsEqual = v58 == v104),
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
    v62 = v12 + 208;
    v63 = *(_QWORD *)(v12 + 216);
    if ( v12 + 208 != v63 )
      goto LABEL_92;
LABEL_84:
    v64 = 0LL;
    while ( v64 )
    {
      v65 = *(_QWORD *)(v64 + 56);
      if ( v65 )
      {
        if ( v65 == a7
          || ((v96 = *(_QWORD *)(v65 + 56)) == 0 || (v103 = *(_QWORD *)(a7 + 56)) == 0
            ? (v97 = CmpTransUowIsEqual((const void *)(v65 + 88), (const void *)(a7 + 88)))
            : (v97 = v96 == v103),
              v97) )
        {
          if ( *(_DWORD *)(v64 + 68) == 9 )
          {
            v19 = *(_QWORD *)(v64 + 88);
            break;
          }
        }
      }
      if ( !v63 )
        v63 = *(_QWORD *)(v62 + 8);
      if ( v62 == v63 )
        goto LABEL_84;
LABEL_92:
      v64 = v63 - 32;
      v63 = *(_QWORD *)(v63 + 8);
    }
  }
  if ( !a6 )
  {
    v20 = AccessState;
    goto LABEL_18;
  }
  v66 = AccessMode;
  p_SubjectSecurityContext = (__int64 *)&v13->SubjectSecurityContext;
  v124[0] = 1;
  v13->PreviouslyGrantedAccess = 0;
  v68 = 1;
  v125 = SeBackupPrivilege;
  v124[1] = 1;
  v126 = 0;
  if ( !AccessMode )
    goto LABEL_103;
  PrimaryToken = *p_SubjectSecurityContext;
  if ( !*p_SubjectSecurityContext )
  {
    PrimaryToken = (__int64)v13->SubjectSecurityContext.PrimaryToken;
LABEL_98:
    v68 = v124[0];
    v70 = SepPrivilegeCheck(PrimaryToken, (__int64)&v125, 1u, 1, AccessMode);
    goto LABEL_99;
  }
  if ( v13->SubjectSecurityContext.ImpersonationLevel >= SecurityImpersonation )
    goto LABEL_98;
  v70 = 0;
LABEL_99:
  v71 = *p_SubjectSecurityContext;
  if ( !*p_SubjectSecurityContext )
    v71 = (__int64)v13->SubjectSecurityContext.PrimaryToken;
  v72 = **(void ***)(v71 + 152);
  if ( !RtlEqualSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4), v72) )
  {
    v76 = SeExports;
    if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v72) && !RtlEqualSid(v76->SeLocalServiceSid, v72) )
      goto LABEL_114;
    v88 = 0;
    if ( v68 )
    {
      v89 = &v125;
      v90 = v68;
      do
      {
        Blink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink;
        while ( v89->LowPart != LODWORD(Blink->Flink->Flink) || v89->HighPart != HIDWORD(Blink->Flink->Flink) )
        {
          Blink = (struct _LIST_ENTRY *)((char *)Blink + 8);
          if ( !Blink->Flink )
            goto LABEL_174;
        }
        ++v88;
LABEL_174:
        v89 = (LUID *)((char *)v89 + 12);
        --v90;
      }
      while ( v90 );
      v92 = &v125;
      v93 = v68;
      do
      {
        v94 = &SepServicesFilterPrivileges;
        v95 = SepServicesFilterPrivileges;
        while ( v92->LowPart != *v95 || v92->HighPart != v95[1] )
        {
          v95 = v94[1];
          ++v94;
          if ( !v95 )
            goto LABEL_179;
        }
        ++v88;
LABEL_179:
        v92 = (LUID *)((char *)v92 + 12);
        --v93;
      }
      while ( v93 );
      if ( v88 != v68 )
LABEL_114:
        SepAdtPrivilegedServiceAuditAlarm(
          (_DWORD)p_SubjectSecurityContext,
          (unsigned int)&SeSubsystemName,
          0,
          *p_SubjectSecurityContext,
          p_SubjectSecurityContext[2],
          (__int64)v124,
          v70);
    }
    v66 = AccessMode;
  }
  if ( !v70 )
  {
    v20 = AccessState;
    goto LABEL_104;
  }
LABEL_103:
  v20 = AccessState;
  AccessState->Flags |= 2u;
  v20->PreviouslyGrantedAccess |= 0x1020019u;
LABEL_104:
  v73 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeSinglePrivilegeCheckEx)(
          SeRestorePrivilege,
          &v20->SubjectSecurityContext,
          v66);
  PreviouslyGrantedAccess = v20->PreviouslyGrantedAccess;
  if ( v73 )
  {
    v20->Flags |= 4u;
    PreviouslyGrantedAccess |= 0x10F0006u;
    v20->PreviouslyGrantedAccess = PreviouslyGrantedAccess;
  }
  v20->OriginalDesiredAccess = PreviouslyGrantedAccess;
  if ( !PreviouslyGrantedAccess )
    goto LABEL_116;
  LOBYTE(v74) = 1;
  SepAdjustAccessStateForConstraints(CmKeyObjectType, v19 + 32, v74, v20);
  v11 = v121;
  v10 = Object;
  v20->RemainingDesiredAccess = v20->OriginalDesiredAccess & ~v20->PreviouslyGrantedAccess;
LABEL_18:
  v21 = v10[1];
  OriginalDesiredAccess = v20->OriginalDesiredAccess;
  v116 = 0LL;
  WORD1(v116) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( !(unsigned __int8)CmpIsKcbImmutable(v21, OriginalDesiredAccess) )
  {
    v24 = Privileges[1];
    v25 = 0LL;
    v26 = 0;
    goto LABEL_20;
  }
  if ( (v23 & 0xD0026) == 0 )
  {
    v24 = Privileges[1];
    v25 = 0LL;
    v26 = 0;
    goto LABEL_20;
  }
  if ( (v23 & 0xD0002) != 0 || (*(_DWORD *)(*(_QWORD *)(v21 + 32) + 4120LL) & 0x2000) == 0 || *(_BYTE *)(v21 + 65) )
  {
    v24 = Privileges[1];
  }
  else
  {
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v116, v21);
    v24 = Privileges[1];
    v26 = started;
    if ( started < 0 )
      goto LABEL_156;
    v80 = *(_WORD *)(v21 + 66);
LABEL_128:
    v81 = v80 - 1;
    if ( v81 < 0 )
      goto LABEL_156;
    if ( v81 >= 2 )
      v82 = (PPRIVILEGE_SET)*((_QWORD *)v24 + v81 - 2);
    else
      v82 = Privileges[v81 - 1];
    WORD1(v116) = v81;
    for ( i = v81; i >= 0; --i )
    {
      v84 = i >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)v24 + i - 2) : Privileges[i - 1];
      if ( HIWORD(v84[3].Control) && BYTE1(v84[3].Control) == 1 )
        break;
      if ( v84[2].PrivilegeCount != -1 )
      {
        if ( !(unsigned __int8)CmpIsKcbImmutable(v82, v24) )
        {
          v25 = 0LL;
          v26 = 0;
          goto LABEL_20;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v21 + 32) + 4120LL) & 0x2000) == 0 )
          break;
        if ( *(_BYTE *)(v21 + 65) )
        {
          v26 = -1073741790;
          v25 = 0LL;
          goto LABEL_20;
        }
        goto LABEL_128;
      }
    }
  }
  v26 = -1073741790;
LABEL_156:
  v25 = 0LL;
LABEL_20:
  if ( v24 )
    CmSiFreeMemory(v24);
  if ( v26 < 0 )
    goto LABEL_116;
  v27 = v20->OriginalDesiredAccess;
  v28 = v119;
  if ( (v27 & v119[24]) != v27 )
    goto LABEL_116;
  if ( (!a6 || v20->RemainingDesiredAccess) && (v27 || (*v119 & 0x1000) == 0) )
  {
    GrantedAccess = 0;
    v120 = 0LL;
    v116 = 0LL;
    WORD1(v116) = -1;
    *(_OWORD *)Privileges = 0LL;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v10, v11) )
    {
      v57 = Privileges[1];
      v48 = 0;
      AccessStatus = -1073741444;
LABEL_65:
      if ( v57 )
        CmSiFreeMemory(v57);
      if ( v48 )
        goto LABEL_68;
      if ( !a6 )
      {
        v85 = v10[1];
        if ( *(_WORD *)(v85 + 66)
          || (v28[6] & 0x10) != 0
          || (*(_DWORD *)(v85 + 184) & 0x40) != 0
          || (*(_DWORD *)(*(_QWORD *)(v85 + 32) + 4120LL) & 0x10) == 0
          || CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, 0LL, v28 + 4)
          || (GrantedAccess = CmpCheckAdminAccess(
                                v20->RemainingDesiredAccess,
                                (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v85 + 88) + 32LL)),
              (GrantedAccess & 0x80000000) != 0) )
        {
          if ( AccessStatus >= 0 )
          {
LABEL_68:
            result = 1;
            v41 = 0;
            *v114 = 0;
            goto LABEL_69;
          }
        }
        if ( KeGetCurrentThread()->PreviousMode == 1 )
        {
          CurrentThreadProcess = PsGetCurrentThreadProcess();
          if ( !(unsigned __int8)CmpDoesProcessBelongToServiceSession(CurrentThreadProcess)
            && (v20->RemainingDesiredAccess & 0xD0026) != 0 )
          {
            v41 = (unsigned __int8)CmpCheckKeyOwnerForPca(v122, v11) != 0;
            result = 0;
            *v114 = -1073741790;
            goto LABEL_69;
          }
        }
      }
LABEL_116:
      result = 0;
      v41 = 0;
      *v114 = -1073741790;
      goto LABEL_69;
    }
    v29 = v10[1];
    v30 = 0LL;
    Pool = 0LL;
    v31 = *(__int16 *)(v29 + 66);
    if ( v31 >= 2 )
    {
      Pool = (PPRIVILEGE_SET)CmpAllocatePool(0x100uLL);
      v30 = Pool;
      if ( !Pool )
      {
        v57 = Privileges[1];
        v48 = 0;
        AccessStatus = -1073741670;
LABEL_64:
        v28 = v119;
        goto LABEL_65;
      }
    }
    LOWORD(v116) = v31;
    Privileges[1] = v30;
    v32 = *(__int16 *)(v29 + 66);
    WORD1(v116) = v32;
    if ( (_WORD)v32 )
    {
      v77 = *(_QWORD *)(v29 + 192);
      if ( !v77 )
        goto LABEL_31;
      do
      {
        v78 = *(struct _PRIVILEGE_SET **)(v77 + 16);
        if ( (__int16)v32 >= 2 )
        {
          *((_QWORD *)v30 + (__int16)v32 - 2) = v78;
        }
        else
        {
          Privileges[(__int16)v32 - 1] = v78;
          v30 = Privileges[1];
        }
        v77 = *(_QWORD *)(v77 + 24);
        LOWORD(v32) = v32 - 1;
      }
      while ( v77 );
    }
    else
    {
      Privileges[v32 - 1] = (PPRIVILEGE_SET)v29;
      v30 = Privileges[1];
    }
    Pool = v30;
LABEL_31:
    v33 = WORD1(v116);
    AccessStatus = 0;
    if ( (SWORD1(v116) & 0x8000u) == 0 )
    {
      do
      {
        v34 = v33 >= 2u ? (PPRIVILEGE_SET)*((_QWORD *)v30 + v33 - 2) : Privileges[v33 - 1];
        if ( HIWORD(v34[3].Control) && BYTE1(v34[3].Control) == 1 )
          break;
        if ( v34[2].PrivilegeCount != -1
          && ((v35 = *(_QWORD *)&v34[12].PrivilegeCount) == 0
           || v11
           && (v11 == v35
            || ((v60 = *(_QWORD *)(v11 + 56)) == 0 || (v105 = *(_QWORD *)(v35 + 56)) == 0
              ? (v61 = CmpTransUowIsEqual((const void *)(v11 + 88), (const void *)(v35 + 88)), v30 = Pool)
              : (struct _PRIVILEGE_SET *)(v61 = v60 == v105),
                v61))) )
        {
          v25 = v34;
          if ( HIWORD(v34[3].Control) && BYTE1(v34[3].Control) )
            break;
          v36 = v33;
        }
        else
        {
          v36 = v33;
        }
        v33 = v36 - 1;
      }
      while ( (__int16)(v36 - 1) >= 0 );
    }
    Luid = v25[4].Privilege[0].Luid;
    if ( v11 )
    {
      Privilege = v25[10].Privilege;
      v39 = *(_QWORD *)&Privilege->Attributes;
      if ( Privilege == (LUID_AND_ATTRIBUTES *)v39 )
        goto LABEL_223;
LABEL_208:
      v106 = v39 - 32;
      v39 = *(_QWORD *)(v39 + 8);
      while ( v106 )
      {
        v107 = *(_QWORD *)(v106 + 56);
        if ( v107 )
        {
          if ( v107 == v11
            || ((v108 = *(_QWORD *)(v107 + 56)) == 0 || (v109 = *(_QWORD *)(v11 + 56)) == 0
              ? (v110 = CmpTransUowIsEqual((const void *)(v107 + 88), (const void *)(v11 + 88)))
              : (v110 = v108 == v109),
                v110) )
          {
            if ( *(_DWORD *)(v106 + 68) == 9 )
            {
              Luid = *(LUID *)(v106 + 88);
              break;
            }
          }
        }
        if ( !v39 )
          v39 = *(_QWORD *)&Privilege->Attributes;
        if ( Privilege != (LUID_AND_ATTRIBUTES *)v39 )
          goto LABEL_208;
LABEL_223:
        v106 = 0LL;
      }
      v20 = AccessState;
    }
    CurrentThread = KeGetCurrentThread();
    v43 = (void *)(*(_QWORD *)&Luid + 32LL);
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)v20->SubjectSecurityContext.PrimaryToken + 6), 1u);
    if ( v20->SubjectSecurityContext.ClientToken )
    {
      v44 = KeGetCurrentThread();
      --v44->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)v20->SubjectSecurityContext.ClientToken + 6), 1u);
    }
    v45 = AccessMode;
    v46 = SeAccessCheck(
            (PSECURITY_DESCRIPTOR)(*(_QWORD *)&Luid + 32LL),
            &v20->SubjectSecurityContext,
            1u,
            v20->RemainingDesiredAccess,
            v20->PreviouslyGrantedAccess,
            &v120,
            (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
            AccessMode,
            &GrantedAccess,
            &AccessStatus);
    v47 = v120;
    v48 = v46;
    if ( v120 )
    {
      AuxData = (PVOID *)AccessState->AuxData;
      v50 = *AuxData;
      v51 = *(_DWORD *)*AuxData;
      if ( v120->PrivilegeCount + v51 > 3 )
      {
        v98 = 8;
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          v100 = *AuxData;
          if ( *AuxData )
          {
            if ( *v100 )
              v98 = 12 * *v100 + 8;
          }
          else
          {
            v98 = 0;
          }
          memmove(Pool2, v100, v98);
          SepConcatenatePrivileges(Pool2, v101, v47);
          v102 = AccessState;
          if ( AccessState->PrivilegesAllocated )
            ExFreePoolWithTag(*AuxData, 0);
          *AuxData = Pool2;
          v102->PrivilegesAllocated = 1;
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
        memmove((char *)v50 + v52, v120->Privilege, 12 * v120->PrivilegeCount);
        *v50 += v47->PrivilegeCount;
      }
      CmSiFreeMemory(v120);
      v45 = AccessMode;
      v11 = v121;
    }
    v20 = AccessState;
    if ( v48 )
    {
      v53 = GrantedAccess;
      AccessState->PreviouslyGrantedAccess |= GrantedAccess;
      v20->RemainingDesiredAccess &= ~(v53 | 0x2000000);
    }
    v54 = Object;
    *((_WORD *)Object + 24) |= 2u;
    if ( v11 )
    {
      v87 = v43;
      v10 = Object;
      SeOpenObjectAuditAlarmWithTransaction(
        (PUNICODE_STRING)CmKeyObjectType + 1,
        Object,
        0LL,
        v87,
        v20,
        0,
        v48,
        v45,
        (GUID *)(v11 + 88),
        &v20->GenerateOnClose);
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
        v20,
        0,
        v48,
        v45,
        0LL,
        &v20->GenerateOnClose);
    }
    else
    {
      v10 = v54;
    }
    *((_WORD *)v10 + 24) &= ~2u;
    ExReleaseResourceLite(*((PERESOURCE *)v20->SubjectSecurityContext.PrimaryToken + 6));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ClientToken = (PERESOURCE *)v20->SubjectSecurityContext.ClientToken;
    if ( ClientToken )
    {
      ExReleaseResourceLite(ClientToken[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    v57 = Pool;
    goto LABEL_64;
  }
  result = 1;
  v41 = 0;
  *v114 = 0;
LABEL_69:
  *v123 = v41;
  return result;
}
