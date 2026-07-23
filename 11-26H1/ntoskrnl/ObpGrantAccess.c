/*
 * XREFs of ObpGrantAccess @ 0x14090BCA0
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1408F50B0 (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     SeComputeCreatorDeniedRights @ 0x1403C7CA0 (SeComputeCreatorDeniedRights.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x14041BFB0 (SepPrivilegeCheck.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeAppendPrivileges @ 0x1409338F0 (SeAppendPrivileges.c)
 *     SepConcatenatePrivileges @ 0x140934F50 (SepConcatenatePrivileges.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140934FB4 (ObpReferenceSecurityDescriptorSlow.c)
 *     SepFilterPrivilegeAudits @ 0x140A5FFB0 (SepFilterPrivilegeAudits.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpGrantAccess(int a1, _QWORD *a2, __int64 a3, char a4, __int16 a5, _DWORD *a6)
{
  char AccessMode; // r14
  __int16 v9; // ax
  unsigned __int64 v10; // rcx
  ULONG_PTR v11; // r13
  signed __int64 v12; // rbx
  char v13; // dl
  signed __int64 v14; // rax
  unsigned __int64 Pool2; // rbx
  __int64 v16; // rdx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v18; // rax
  BOOLEAN v19; // al
  PPRIVILEGE_SET v20; // r13
  BOOLEAN v21; // r15
  _DWORD *v22; // r15
  int v23; // edx
  ACCESS_MASK v24; // ecx
  __int64 v25; // rcx
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  _DWORD *v29; // rbx
  signed int v30; // eax
  volatile signed __int64 *v31; // r14
  signed __int64 v32; // rsi
  char v33; // dl
  signed __int64 v34; // rax
  unsigned __int64 v35; // rsi
  __int64 v36; // rdx
  int v37; // ebx
  signed __int64 v38; // rax
  signed __int64 v39; // rtt
  int v40; // r15d
  __int64 *v41; // r15
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rax
  void *v45; // rdi
  PSE_EXPORTS v46; // rsi
  _DWORD *v47; // rdx
  unsigned int v48; // eax
  PPRIVILEGE_SET v49; // r8
  void *v50; // r13
  __int64 v51; // rdx
  char v52; // [rsp+50h] [rbp-49h]
  BOOLEAN v53; // [rsp+51h] [rbp-48h]
  int v54; // [rsp+54h] [rbp-45h]
  PVOID *v55; // [rsp+60h] [rbp-39h]
  unsigned int v56; // [rsp+60h] [rbp-39h]
  ACCESS_MASK GrantedAccess; // [rsp+68h] [rbp-31h] BYREF
  NTSTATUS AccessStatus; // [rsp+6Ch] [rbp-2Dh] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-29h] BYREF
  void *v60; // [rsp+78h] [rbp-21h]
  UNICODE_STRING *v61; // [rsp+80h] [rbp-19h]
  struct _PRIVILEGE_SET v62; // [rsp+88h] [rbp-11h] BYREF

  AccessMode = 1;
  AccessStatus = 0;
  if ( (a5 & 0x400) == 0 )
    AccessMode = a4;
  v9 = (_WORD)a2 - 48;
  if ( (unsigned int)(a1 - 1) > 1 )
  {
    v29 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)a2 - 24) ^ (unsigned __int64)HIBYTE(v9)];
    v30 = *(_DWORD *)(a3 + 16);
    if ( (v30 & 0x2000000) != 0 )
    {
      v30 = v30 & 0xEDFFFFFF | 0x10000000;
      *(_DWORD *)(a3 + 16) = v30;
    }
    if ( (v30 & 0xF0000000) != 0 )
    {
      if ( v30 < 0 )
        v30 |= v29[19];
      if ( (v30 & 0x40000000) != 0 )
        v30 |= v29[20];
      if ( (v30 & 0x20000000) != 0 )
        v30 |= v29[21];
      if ( (v30 & 0x10000000) != 0 )
        v30 |= v29[22];
      v30 &= 0xFFFFFFFu;
      *(_DWORD *)(a3 + 16) = v30;
    }
    if ( (v30 & 0x1000000) == 0 )
    {
LABEL_45:
      v31 = a2 - 6;
      *(_DWORD *)(a3 + 20) |= *(_DWORD *)(a3 + 16);
      *(_DWORD *)(a3 + 16) = 0;
      *(_DWORD *)(a3 + 20) &= v29[23] | 0x1000000;
      _m_prefetchw(a2 - 1);
      v32 = *(a2 - 1);
      v33 = v32;
      if ( (v32 & 0xF) != 0 )
      {
        do
        {
          v34 = _InterlockedCompareExchange64(v31 + 5, v32 - 1, v32);
          if ( v32 == v34 )
            break;
          v32 = v34;
          v33 = v34;
        }
        while ( (v34 & 0xF) != 0 );
      }
      v35 = v32 & 0xFFFFFFFFFFFFFFF0uLL;
      v36 = v33 & 0xF;
      if ( (unsigned int)v36 <= 1 && v35 )
        v35 = ObpReferenceSecurityDescriptorSlow(v31, v36, v35);
      v37 = *(_DWORD *)(a3 + 20);
      *(_DWORD *)(a3 + 20) = v37 & ~(unsigned int)SeComputeCreatorDeniedRights(
                                                    (struct _SECURITY_SUBJECT_CONTEXT *)(a3 + 32),
                                                    a3,
                                                    v37,
                                                    (unsigned int *)v35);
      if ( v35 )
      {
        _m_prefetchw((const void *)(v31 + 5));
        v38 = *((_QWORD *)v31 + 5);
        while ( (v35 ^ v38) < 0xF )
        {
          v39 = v38;
          v38 = _InterlockedCompareExchange64(v31 + 5, v38 + 1, v38);
          if ( v39 == v38 )
            goto LABEL_31;
        }
        ObDereferenceSecurityDescriptor(v35, 1LL);
      }
      goto LABEL_31;
    }
    v41 = (__int64 *)(a3 + 32);
    v62.Privilege[0].Luid = SeSecurityPrivilege;
    v62.PrivilegeCount = 1;
    v62.Control = 1;
    v62.Privilege[0].Attributes = 0;
    if ( AccessMode )
    {
      v42 = *v41;
      if ( *v41 )
      {
        if ( *(int *)(a3 + 40) < 2 )
          goto LABEL_80;
      }
      else
      {
        v42 = *(_QWORD *)(a3 + 48);
      }
      if ( !SepPrivilegeCheck(v42, (__int64)v62.Privilege, 1u, 1, AccessMode) )
      {
LABEL_80:
        v43 = *v41;
        v44 = *v41;
        if ( !*v41 )
          v44 = *(_QWORD *)(a3 + 48);
        v45 = **(void ***)(v44 + 152);
        if ( !RtlEqualSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4), v45) )
        {
          if ( (v46 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v45))
            && !RtlEqualSid(v46->SeLocalServiceSid, v45)
            || (unsigned __int8)SepFilterPrivilegeAudits(1LL, &v62) )
          {
            SepAdtPrivilegedServiceAuditAlarm(
              (_DWORD)v41,
              (unsigned int)&SeSubsystemName,
              0,
              v43,
              v41[2],
              (__int64)&v62,
              0);
          }
        }
        return 3221225569LL;
      }
    }
    *(_DWORD *)(a3 + 16) &= ~0x1000000u;
    *(_DWORD *)(a3 + 20) |= 0x1000000u;
    SeAppendPrivileges((PACCESS_STATE)a3, &v62);
    goto LABEL_45;
  }
  v10 = *((unsigned __int8 *)a2 - 24) ^ (unsigned __int64)HIBYTE(v9);
  GrantedAccess = 0;
  Privileges = 0LL;
  v11 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v10];
  v61 = (UNICODE_STRING *)v11;
  if ( *(__int64 (__fastcall **)(__int64, int, DWORD *, struct _KLOCK_ENTRIES *, ULONG *, __int64 *, int, __int64))(v11 + 152) == SeDefaultObjectMethod )
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
    if ( (unsigned int)v16 <= 1 && Pool2 )
      Pool2 = ObpReferenceSecurityDescriptorSlow(a2 - 6, v16, Pool2);
    v52 = 0;
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
  v54 = ObpDefaultSecurityDescriptorLength;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v40 = guard_dispatch_icall_no_overrides((__int64)a2, 1LL);
    if ( v40 != -1073741789 )
    {
LABEL_57:
      if ( v40 < 0 )
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return (unsigned int)v40;
      }
      v52 = 1;
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
      v53 = v19;
      if ( Privileges )
      {
        v55 = *(PVOID **)(a3 + 72);
        v22 = *v55;
        v23 = *(_DWORD *)*v55;
        if ( Privileges->PrivilegeCount + v23 > 3 )
        {
          v60 = (void *)ExAllocatePool2(0x100uLL);
          if ( v60 )
          {
            v47 = *v55;
            if ( *v55 )
            {
              if ( *v47 )
                v48 = 12 * *v47 + 8;
              else
                v48 = 8;
            }
            else
            {
              v48 = 0;
            }
            memmove(v60, v47, v48);
            v49 = v20;
            v50 = v60;
            SepConcatenatePrivileges(v60, v51, v49);
            if ( *(_BYTE *)(a3 + 11) )
              ExFreePoolWithTag(*v55, 0);
            *v55 = v50;
            *(_BYTE *)(a3 + 11) = 1;
          }
        }
        else
        {
          if ( v22 )
          {
            if ( v23 )
              v56 = 12 * v23 + 8;
            else
              v56 = 8;
          }
          else
          {
            v56 = 0;
          }
          memmove((char *)v22 + v56, Privileges->Privilege, 12 * Privileges->PrivilegeCount);
          *v22 += v20->PrivilegeCount;
        }
        CmSiFreeMemory(Privileges);
        v21 = v53;
      }
      if ( v21 )
      {
        v24 = GrantedAccess;
        *(_DWORD *)(a3 + 20) |= GrantedAccess;
        *(_DWORD *)(a3 + 16) &= ~(v24 | 0x2000000);
      }
      if ( AccessMode )
        SeOpenObjectAuditAlarmWithTransaction(
          v61 + 1,
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
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v25 = *(_QWORD *)(a3 + 32);
      if ( v25 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v25 + 48));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      if ( v52 )
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
      else
      {
        _m_prefetchw(a2 - 1);
        v26 = *(a2 - 1);
        while ( (Pool2 ^ v26) < 0xF )
        {
          v27 = v26;
          v26 = _InterlockedCompareExchange64(a2 - 1, v26 + 1, v26);
          if ( v27 == v26 )
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
    ObpDefaultSecurityDescriptorLength = v54;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v40 = guard_dispatch_icall_no_overrides((__int64)a2, 1LL);
      goto LABEL_57;
    }
  }
  return 3221225626LL;
}
