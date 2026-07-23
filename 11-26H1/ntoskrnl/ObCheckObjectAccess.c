/*
 * XREFs of ObCheckObjectAccess @ 0x1409349E0
 * Callers:
 *     PspReferenceCpuPartitionByHandle @ 0x1407F8814 (PspReferenceCpuPartitionByHandle.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     SepConcatenatePrivileges @ 0x140934F50 (SepConcatenatePrivileges.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140934FB4 (ObpReferenceSecurityDescriptorSlow.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall ObCheckObjectAccess(
        _QWORD *Object,
        PACCESS_STATE AccessState,
        __int64 a3,
        KPROCESSOR_MODE a4,
        PNTSTATUS AccessStatus)
{
  unsigned __int64 v7; // r8
  ULONG_PTR v9; // r13
  signed __int64 v10; // rbx
  char v11; // dl
  signed __int64 v12; // rax
  unsigned __int64 Pool2; // rbx
  __int64 v14; // rdx
  int v15; // ebp
  GENERIC_MAPPING *GenericMapping; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v18; // rax
  BOOLEAN v19; // al
  PPRIVILEGE_SET v20; // r12
  BOOLEAN v21; // bp
  ULONG PrivilegeCount; // edx
  _DWORD *v23; // r15
  int v24; // ecx
  unsigned int v25; // r13d
  ACCESS_MASK v26; // eax
  __int64 v27; // r8
  struct _KLOCK_ENTRIES *v28; // r9
  PERESOURCE *ClientToken; // rcx
  signed __int64 v30; // rax
  signed __int64 v31; // rtt
  unsigned int v33; // r13d
  PVOID *v34; // r15
  _DWORD *v35; // rdx
  PPRIVILEGE_SET v36; // r8
  void *v37; // r12
  __int64 v38; // rdx
  int v39; // [rsp+50h] [rbp-68h]
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-60h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-58h] BYREF
  PVOID *AuxData; // [rsp+68h] [rbp-50h]
  void *v43; // [rsp+70h] [rbp-48h]
  ULONG_PTR v44; // [rsp+78h] [rbp-40h]
  char v45; // [rsp+C0h] [rbp+8h]

  v7 = *((unsigned __int8 *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  GrantedAccess = 0;
  Privileges = 0LL;
  v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v7];
  v44 = v9;
  if ( *(__int64 (__fastcall **)(__int64, int, DWORD *, struct _KLOCK_ENTRIES *, ULONG *, __int64 *, int, __int64))(v9 + 152) != SeDefaultObjectMethod )
  {
    v39 = ObpDefaultSecurityDescriptorLength;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      GenericMapping = (GENERIC_MAPPING *)(v9 + 76);
      v15 = guard_dispatch_icall_no_overrides((__int64)Object, 1LL);
      if ( v15 != -1073741789 )
      {
LABEL_32:
        if ( v15 < 0 )
        {
          ExFreePoolWithTag((PVOID)Pool2, 0);
          *AccessStatus = v15;
          return 0;
        }
        v45 = 1;
        goto LABEL_9;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
      ObpDefaultSecurityDescriptorLength = v39;
      Pool2 = ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        v15 = guard_dispatch_icall_no_overrides((__int64)Object, 1LL);
        goto LABEL_32;
      }
    }
    *AccessStatus = -1073741670;
    return 0;
  }
  _m_prefetchw(Object - 1);
  v10 = *(Object - 1);
  v11 = v10;
  if ( (v10 & 0xF) != 0 )
  {
    do
    {
      v12 = _InterlockedCompareExchange64(Object - 1, v10 - 1, v10);
      if ( v10 == v12 )
        break;
      v10 = v12;
      v11 = v12;
    }
    while ( (v12 & 0xF) != 0 );
  }
  Pool2 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = v11 & 0xF;
  if ( (unsigned int)v14 <= 1 && Pool2 )
    Pool2 = ObpReferenceSecurityDescriptorSlow(Object - 6, v14, Pool2);
  v45 = 0;
  if ( !Pool2 && ((*(_BYTE *)(v9 + 66) & 8) != 0 || (*((_BYTE *)Object - 22) & 2) != 0) )
    KeBugCheckEx(0x189u, (ULONG_PTR)(Object - 6), v9, 1uLL, 0LL);
  v15 = 0;
  GenericMapping = (GENERIC_MAPPING *)(v9 + 76);
LABEL_9:
  if ( Pool2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)AccessState->SubjectSecurityContext.PrimaryToken + 6), 1u);
    if ( AccessState->SubjectSecurityContext.ClientToken )
    {
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)AccessState->SubjectSecurityContext.ClientToken + 6), 1u);
    }
    v19 = SeAccessCheck(
            (PSECURITY_DESCRIPTOR)Pool2,
            &AccessState->SubjectSecurityContext,
            1u,
            AccessState->RemainingDesiredAccess,
            AccessState->PreviouslyGrantedAccess,
            &Privileges,
            GenericMapping,
            a4,
            &GrantedAccess,
            AccessStatus);
    v20 = Privileges;
    v21 = v19;
    if ( Privileges )
    {
      PrivilegeCount = Privileges->PrivilegeCount;
      AuxData = (PVOID *)AccessState->AuxData;
      v23 = *AuxData;
      v24 = *(_DWORD *)*AuxData;
      if ( v24 + PrivilegeCount > 3 )
      {
        v33 = 8;
        v43 = (void *)ExAllocatePool2(0x100uLL);
        if ( v43 )
        {
          v34 = AuxData;
          v35 = *AuxData;
          if ( *AuxData )
          {
            if ( *v35 )
              v33 = 12 * *v35 + 8;
          }
          else
          {
            v33 = 0;
          }
          memmove(v43, v35, v33);
          v36 = v20;
          v37 = v43;
          SepConcatenatePrivileges(v43, v38, v36);
          if ( AccessState->PrivilegesAllocated )
            ExFreePoolWithTag(*v34, 0);
          *v34 = v37;
          AccessState->PrivilegesAllocated = 1;
        }
      }
      else
      {
        if ( v23 )
        {
          if ( v24 )
            v25 = 12 * v24 + 8;
          else
            v25 = 8;
        }
        else
        {
          v25 = 0;
        }
        memmove((char *)v23 + v25, Privileges->Privilege, 12 * PrivilegeCount);
        *v23 += v20->PrivilegeCount;
      }
      CmSiFreeMemory(Privileges);
      v9 = v44;
    }
    if ( v21 )
    {
      v26 = GrantedAccess;
      AccessState->PreviouslyGrantedAccess |= GrantedAccess;
      AccessState->RemainingDesiredAccess &= ~(v26 | 0x2000000);
    }
    if ( a4 )
      SeOpenObjectAuditAlarmWithTransaction(
        (PUNICODE_STRING)(v9 + 16),
        Object,
        0LL,
        (PSECURITY_DESCRIPTOR)Pool2,
        AccessState,
        0,
        v21,
        a4,
        0LL,
        &AccessState->GenerateOnClose);
    ExReleaseResourceLite(*((PERESOURCE *)AccessState->SubjectSecurityContext.PrimaryToken + 6));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ClientToken = (PERESOURCE *)AccessState->SubjectSecurityContext.ClientToken;
    if ( ClientToken )
    {
      ExReleaseResourceLite(ClientToken[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    if ( v45 )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    else
    {
      _m_prefetchw(Object - 1);
      v30 = *(Object - 1);
      while ( (Pool2 ^ v30) < 0xF )
      {
        v31 = v30;
        v30 = _InterlockedCompareExchange64(Object - 1, v30 + 1, v30);
        if ( v31 == v30 )
          return v21;
      }
      ObDereferenceSecurityDescriptor(Pool2, 1u, v27, v28);
    }
    return v21;
  }
  else
  {
    AccessState->PreviouslyGrantedAccess |= AccessState->RemainingDesiredAccess;
    AccessState->RemainingDesiredAccess = 0;
    *AccessStatus = v15;
    return 1;
  }
}
