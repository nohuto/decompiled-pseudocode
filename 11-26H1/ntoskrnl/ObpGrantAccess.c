/*
 * XREFs of ObpGrantAccess @ 0x140930170
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1408EEAF0 (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     SeComputeCreatorDeniedRights @ 0x1403BDDA0 (SeComputeCreatorDeniedRights.c)
 *     SepPrivilegeCheck @ 0x14042F0A0 (SepPrivilegeCheck.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     SeAppendPrivileges @ 0x140903960 (SeAppendPrivileges.c)
 *     SepConcatenatePrivileges @ 0x140904FC0 (SepConcatenatePrivileges.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140905024 (ObpReferenceSecurityDescriptorSlow.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObDereferenceSecurityDescriptor @ 0x140931DF0 (ObDereferenceSecurityDescriptor.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140932AB0 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x1409F7460 (SepFilterPrivilegeAudits.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpGrantAccess(int a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4, __int16 a5, _DWORD *a6)
{
  char AccessMode; // r14
  __int16 v9; // ax
  unsigned __int64 v10; // rcx
  ULONG_PTR v11; // r13
  signed __int64 v12; // rbx
  char v13; // dl
  signed __int64 v14; // rax
  __int64 Pool2; // rbx
  unsigned int v16; // edx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v18; // rax
  BOOLEAN v19; // al
  PPRIVILEGE_SET v20; // r13
  BOOLEAN v21; // r15
  _DWORD *v22; // r15
  int v23; // edx
  ACCESS_MASK v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  signed __int64 v30; // rax
  signed __int64 v31; // rtt
  _DWORD *v33; // rbx
  signed int v34; // eax
  __int64 v35; // r14
  signed __int64 v36; // rsi
  char v37; // dl
  signed __int64 v38; // rax
  unsigned __int64 v39; // rsi
  unsigned int v40; // edx
  int v41; // ebx
  signed __int64 v42; // rax
  signed __int64 v43; // rtt
  int v44; // r15d
  __int64 *v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // rax
  void *v49; // rdi
  PSE_EXPORTS v50; // rsi
  _DWORD *v51; // rdx
  unsigned int v52; // eax
  unsigned int *p_PrivilegeCount; // r8
  _DWORD *v54; // r13
  __int64 v55; // rdx
  char v56; // [rsp+50h] [rbp-49h]
  BOOLEAN v57; // [rsp+51h] [rbp-48h]
  int v58; // [rsp+54h] [rbp-45h]
  PVOID *v59; // [rsp+60h] [rbp-39h]
  unsigned int v60; // [rsp+60h] [rbp-39h]
  ACCESS_MASK GrantedAccess; // [rsp+68h] [rbp-31h] BYREF
  NTSTATUS AccessStatus; // [rsp+6Ch] [rbp-2Dh] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-29h] BYREF
  _DWORD *v64; // [rsp+78h] [rbp-21h]
  UNICODE_STRING *v65; // [rsp+80h] [rbp-19h]
  struct _PRIVILEGE_SET v66; // [rsp+88h] [rbp-11h] BYREF

  AccessMode = 1;
  AccessStatus = 0;
  if ( (a5 & 0x400) == 0 )
    AccessMode = (char)a4;
  v9 = (_WORD)a2 - 48;
  if ( (unsigned int)(a1 - 1) > 1 )
  {
    v33 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)a2 - 24) ^ (unsigned __int64)HIBYTE(v9)];
    v34 = *(_DWORD *)(a3 + 16);
    if ( (v34 & 0x2000000) != 0 )
    {
      v34 = v34 & 0xEDFFFFFF | 0x10000000;
      *(_DWORD *)(a3 + 16) = v34;
    }
    if ( (v34 & 0xF0000000) != 0 )
    {
      if ( v34 < 0 )
        v34 |= v33[19];
      if ( (v34 & 0x40000000) != 0 )
        v34 |= v33[20];
      if ( (v34 & 0x20000000) != 0 )
        v34 |= v33[21];
      if ( (v34 & 0x10000000) != 0 )
        v34 |= v33[22];
      v34 &= 0xFFFFFFFu;
      *(_DWORD *)(a3 + 16) = v34;
    }
    if ( (v34 & 0x1000000) == 0 )
    {
LABEL_45:
      v35 = (__int64)(a2 - 6);
      *(_DWORD *)(a3 + 20) |= *(_DWORD *)(a3 + 16);
      *(_DWORD *)(a3 + 16) = 0;
      *(_DWORD *)(a3 + 20) &= v33[23] | 0x1000000;
      _m_prefetchw(a2 - 1);
      v36 = *(a2 - 1);
      v37 = v36;
      if ( (v36 & 0xF) != 0 )
      {
        do
        {
          v38 = _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 40), v36 - 1, v36);
          if ( v36 == v38 )
            break;
          v36 = v38;
          v37 = v38;
        }
        while ( (v38 & 0xF) != 0 );
      }
      v39 = v36 & 0xFFFFFFFFFFFFFFF0uLL;
      v40 = v37 & 0xF;
      if ( v40 <= 1 && v39 )
        v39 = ObpReferenceSecurityDescriptorSlow(v35, v40, v39, a4);
      v41 = *(_DWORD *)(a3 + 20);
      *(_DWORD *)(a3 + 20) = v41 & ~(unsigned int)SeComputeCreatorDeniedRights(
                                                    (struct _SECURITY_SUBJECT_CONTEXT *)(a3 + 32),
                                                    a3,
                                                    v41,
                                                    (unsigned int *)v39);
      if ( v39 )
      {
        _m_prefetchw((const void *)(v35 + 40));
        v42 = *(_QWORD *)(v35 + 40);
        while ( (v39 ^ v42) < 0xF )
        {
          v43 = v42;
          v42 = _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 40), v42 + 1, v42);
          if ( v43 == v42 )
            goto LABEL_31;
        }
        ObDereferenceSecurityDescriptor(v39, 1LL);
      }
      goto LABEL_31;
    }
    v45 = (__int64 *)(a3 + 32);
    v66.Privilege[0].Luid = SeSecurityPrivilege;
    v66.PrivilegeCount = 1;
    v66.Control = 1;
    v66.Privilege[0].Attributes = 0;
    if ( AccessMode )
    {
      v46 = *v45;
      if ( *v45 )
      {
        if ( *(int *)(a3 + 40) < 2 )
          goto LABEL_80;
      }
      else
      {
        v46 = *(_QWORD *)(a3 + 48);
      }
      if ( !SepPrivilegeCheck(v46, (__int64)v66.Privilege, 1u, 1, AccessMode) )
      {
LABEL_80:
        v47 = *v45;
        v48 = *v45;
        if ( !*v45 )
          v48 = *(_QWORD *)(a3 + 48);
        v49 = **(void ***)(v48 + 152);
        if ( !RtlEqualSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags, v49) )
        {
          if ( (v50 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v49))
            && !RtlEqualSid(v50->SeLocalServiceSid, v49)
            || (unsigned __int8)SepFilterPrivilegeAudits(1LL, &v66) )
          {
            SepAdtPrivilegedServiceAuditAlarm(
              (_DWORD)v45,
              (unsigned int)&SeSubsystemName,
              0,
              v47,
              v45[2],
              (__int64)&v66,
              0);
          }
        }
        return 3221225569LL;
      }
    }
    *(_DWORD *)(a3 + 16) &= ~0x1000000u;
    *(_DWORD *)(a3 + 20) |= 0x1000000u;
    SeAppendPrivileges((PACCESS_STATE)a3, &v66);
    goto LABEL_45;
  }
  v10 = *((unsigned __int8 *)a2 - 24) ^ (unsigned __int64)HIBYTE(v9);
  GrantedAccess = 0;
  Privileges = 0LL;
  v11 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v10];
  v65 = (UNICODE_STRING *)v11;
  if ( *(__int64 (__fastcall **)(__int64, int, ULONG *, struct _KLOCK_ENTRIES *, ULONG *, __int64 *, int, __int64))(v11 + 152) == SeDefaultObjectMethod )
  {
    _m_prefetchw(a2 - 1);
    v12 = *(a2 - 1);
    v13 = v12;
    if ( (v12 & 0xF) != 0 )
    {
      do
      {
        v14 = _InterlockedCompareExchange64(a2 - 1, v12 - 1, v12);
        if ( v12 == v14 )
          break;
        v12 = v14;
        v13 = v14;
      }
      while ( (v14 & 0xF) != 0 );
    }
    Pool2 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
    v16 = v13 & 0xF;
    if ( v16 <= 1 && Pool2 )
      Pool2 = ObpReferenceSecurityDescriptorSlow((__int64)(a2 - 6), v16, Pool2, a4);
    v56 = 0;
    if ( !Pool2 )
    {
      if ( (*(_BYTE *)(v11 + 66) & 8) != 0 || (*((_BYTE *)a2 - 22) & 2) != 0 )
        KeBugCheckEx(0x189u, (ULONG_PTR)(a2 - 6), v11, 1uLL, 0LL);
      *(_DWORD *)(a3 + 20) |= *(_DWORD *)(a3 + 16);
      *(_DWORD *)(a3 + 16) = 0;
LABEL_31:
      *a6 = *(_DWORD *)(a3 + 20);
      return 0LL;
    }
    goto LABEL_11;
  }
  v58 = ObpDefaultSecurityDescriptorLength;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v44 = guard_dispatch_icall_no_overrides((__int64)a2, 1LL);
    if ( v44 != -1073741789 )
    {
LABEL_57:
      if ( v44 < 0 )
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return (unsigned int)v44;
      }
      v56 = 1;
LABEL_11:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a3 + 48) + 48LL), 1u);
      if ( *(_QWORD *)(a3 + 32) )
      {
        v18 = KeGetCurrentThread();
        --v18->KernelApcDisable;
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a3 + 32) + 48LL), 1u);
      }
      v19 = SeAccessCheck(
              (PSECURITY_DESCRIPTOR)Pool2,
              (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
              1u,
              *(_DWORD *)(a3 + 16),
              *(_DWORD *)(a3 + 20),
              &Privileges,
              (PGENERIC_MAPPING)(v11 + 76),
              AccessMode,
              &GrantedAccess,
              &AccessStatus);
      v20 = Privileges;
      v21 = v19;
      v57 = v19;
      if ( Privileges )
      {
        v59 = *(PVOID **)(a3 + 72);
        v22 = *v59;
        v23 = *(_DWORD *)*v59;
        if ( Privileges->PrivilegeCount + v23 > 3 )
        {
          v64 = (_DWORD *)ExAllocatePool2(0x100uLL);
          if ( v64 )
          {
            v51 = *v59;
            if ( *v59 )
            {
              if ( *v51 )
                v52 = 12 * *v51 + 8;
              else
                v52 = 8;
            }
            else
            {
              v52 = 0;
            }
            memmove(v64, v51, v52);
            p_PrivilegeCount = &v20->PrivilegeCount;
            v54 = v64;
            SepConcatenatePrivileges(v64, v55, p_PrivilegeCount);
            if ( *(_BYTE *)(a3 + 11) )
              ExFreePoolWithTag(*v59, 0);
            *v59 = v54;
            *(_BYTE *)(a3 + 11) = 1;
          }
        }
        else
        {
          if ( v22 )
          {
            if ( v23 )
              v60 = 12 * v23 + 8;
            else
              v60 = 8;
          }
          else
          {
            v60 = 0;
          }
          memmove((char *)v22 + v60, Privileges->Privilege, 12 * Privileges->PrivilegeCount);
          *v22 += v20->PrivilegeCount;
        }
        CmSiFreeMemory(Privileges);
        v21 = v57;
      }
      if ( v21 )
      {
        v24 = GrantedAccess;
        *(_DWORD *)(a3 + 20) |= GrantedAccess;
        *(_DWORD *)(a3 + 16) &= ~(v24 | 0x2000000);
      }
      if ( AccessMode )
        SeOpenObjectAuditAlarmWithTransaction(
          v65 + 1,
          a2,
          0LL,
          (PSECURITY_DESCRIPTOR)Pool2,
          (PACCESS_STATE)a3,
          0,
          v21,
          AccessMode,
          0LL,
          (PBOOLEAN)(a3 + 10));
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a3 + 48) + 48LL));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v25, v26);
      v27 = *(_QWORD *)(a3 + 32);
      if ( v27 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v27 + 48));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v28, v29);
      }
      if ( v56 )
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
      else
      {
        _m_prefetchw(a2 - 1);
        v30 = *(a2 - 1);
        while ( (Pool2 ^ (unsigned __int64)v30) < 0xF )
        {
          v31 = v30;
          v30 = _InterlockedCompareExchange64(a2 - 1, v30 + 1, v30);
          if ( v31 == v30 )
            goto LABEL_30;
        }
        ObDereferenceSecurityDescriptor(Pool2, 1LL);
      }
LABEL_30:
      if ( v21 )
        goto LABEL_31;
      return (unsigned int)AccessStatus;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
    ObpDefaultSecurityDescriptorLength = v58;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v44 = guard_dispatch_icall_no_overrides((__int64)a2, 1LL);
      goto LABEL_57;
    }
  }
  return 3221225626LL;
}
