/*
 * XREFs of ObCheckObjectAccess @ 0x140904A50
 * Callers:
 *     PspReferenceCpuPartitionByHandle @ 0x1407F2CB4 (PspReferenceCpuPartitionByHandle.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     SepConcatenatePrivileges @ 0x140904FC0 (SepConcatenatePrivileges.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140905024 (ObpReferenceSecurityDescriptorSlow.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObDereferenceSecurityDescriptor @ 0x140931DF0 (ObDereferenceSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int64 v27; // rdx
  __int64 v28; // r8
  PERESOURCE *ClientToken; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  signed __int64 v32; // rax
  signed __int64 v33; // rtt
  unsigned int v35; // r13d
  PVOID *v36; // r15
  _DWORD *v37; // rdx
  PPRIVILEGE_SET v38; // r8
  void *v39; // r12
  __int64 v40; // rdx
  int v41; // [rsp+50h] [rbp-68h]
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-60h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-58h] BYREF
  PVOID *AuxData; // [rsp+68h] [rbp-50h]
  void *v45; // [rsp+70h] [rbp-48h]
  ULONG_PTR v46; // [rsp+78h] [rbp-40h]
  char v47; // [rsp+C0h] [rbp+8h]

  v7 = *((unsigned __int8 *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  GrantedAccess = 0;
  Privileges = 0LL;
  v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v7];
  v46 = v9;
  if ( *(_UNKNOWN **)(v9 + 152) != &SeDefaultObjectMethod )
  {
    v41 = ObpDefaultSecurityDescriptorLength;
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
        v47 = 1;
        goto LABEL_9;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
      ObpDefaultSecurityDescriptorLength = v41;
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
  v47 = 0;
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
        v35 = 8;
        v45 = (void *)ExAllocatePool2(0x100uLL);
        if ( v45 )
        {
          v36 = AuxData;
          v37 = *AuxData;
          if ( *AuxData )
          {
            if ( *v37 )
              v35 = 12 * *v37 + 8;
          }
          else
          {
            v35 = 0;
          }
          memmove(v45, v37, v35);
          v38 = v20;
          v39 = v45;
          SepConcatenatePrivileges(v45, v40, v38);
          if ( AccessState->PrivilegesAllocated )
            ExFreePoolWithTag(*v36, 0);
          *v36 = v39;
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
      v9 = v46;
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v27, v28);
    ClientToken = (PERESOURCE *)AccessState->SubjectSecurityContext.ClientToken;
    if ( ClientToken )
    {
      ExReleaseResourceLite(ClientToken[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v30, v31);
    }
    if ( v47 )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    else
    {
      _m_prefetchw(Object - 1);
      v32 = *(Object - 1);
      while ( (Pool2 ^ v32) < 0xF )
      {
        v33 = v32;
        v32 = _InterlockedCompareExchange64(Object - 1, v32 + 1, v32);
        if ( v33 == v32 )
          return v21;
      }
      ObDereferenceSecurityDescriptor(Pool2, 1LL);
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
