/*
 * XREFs of ObCheckCreateObjectAccess @ 0x1408F4A00
 * Callers:
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 * Callees:
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SeLockSubjectContext @ 0x1408F4CE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408F4D40 (SeUnlockSubjectContext.c)
 *     ObpReferenceSecurityDescriptor @ 0x1408F4D90 (ObpReferenceSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     SeAppendPrivileges @ 0x1409338F0 (SeAppendPrivileges.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

BOOLEAN __fastcall ObCheckCreateObjectAccess(
        __int64 a1,
        ACCESS_MASK a2,
        struct _ACCESS_STATE *a3,
        __int64 a4,
        __int64 a5,
        KPROCESSOR_MODE AccessMode,
        PNTSTATUS AccessStatus)
{
  ULONG_PTR v7; // rdi
  unsigned __int64 v10; // r9
  ULONG_PTR v11; // rsi
  __int64 Pool2; // rbx
  char v13; // r15
  GENERIC_MAPPING *GenericMapping; // r12
  BOOLEAN v15; // si
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  int v19; // edi
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-1Ch] BYREF
  PPRIVILEGE_SET Privileges[3]; // [rsp+58h] [rbp-18h] BYREF
  int v22; // [rsp+B0h] [rbp+40h]

  v7 = a1 - 48;
  GrantedAccess = 0;
  v10 = *(unsigned __int8 *)(a1 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  Privileges[0] = 0LL;
  v11 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v10];
  if ( *(_UNKNOWN **)(v11 + 152) == &SeDefaultObjectMethod )
  {
    Pool2 = ObpReferenceSecurityDescriptor(v7);
    v13 = 0;
    if ( !Pool2 && ((*(_BYTE *)(v11 + 66) & 8) != 0 || (*(_BYTE *)(v7 + 26) & 2) != 0) )
      KeBugCheckEx(0x189u, v7, v11, 1uLL, 0LL);
    GenericMapping = (GENERIC_MAPPING *)(v11 + 76);
    goto LABEL_4;
  }
  v22 = ObpDefaultSecurityDescriptorLength;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    goto LABEL_21;
  GenericMapping = (GENERIC_MAPPING *)(v11 + 76);
  Privileges[1] = (PPRIVILEGE_SET)(v7 + 40);
  v19 = guard_dispatch_icall_no_overrides(a1, 1LL);
  if ( v19 != -1073741789 )
    goto LABEL_15;
  ExFreePoolWithTag((PVOID)Pool2, 0);
  ObpDefaultSecurityDescriptorLength = v22;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
  {
LABEL_21:
    v19 = -1073741670;
    goto LABEL_19;
  }
  v19 = guard_dispatch_icall_no_overrides(a1, 1LL);
LABEL_15:
  if ( v19 < 0 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_19:
    *AccessStatus = v19;
    return 0;
  }
  v13 = 1;
LABEL_4:
  SeLockSubjectContext(&a3->SubjectSecurityContext);
  if ( Pool2 )
  {
    v15 = SeAccessCheck(
            (PSECURITY_DESCRIPTOR)Pool2,
            &a3->SubjectSecurityContext,
            1u,
            a2,
            0,
            Privileges,
            GenericMapping,
            AccessMode,
            &GrantedAccess,
            AccessStatus);
    if ( Privileges[0] )
    {
      SeAppendPrivileges(a3, Privileges[0]);
      CmSiFreeMemory(Privileges[0]);
    }
  }
  else
  {
    v15 = 1;
  }
  SeUnlockSubjectContext(&a3->SubjectSecurityContext);
  if ( Pool2 )
  {
    if ( v13 )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    else
    {
      _m_prefetchw((const void *)(a1 - 8));
      v16 = *(_QWORD *)(a1 - 8);
      while ( (Pool2 ^ (unsigned __int64)v16) < 0xF )
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 8), v16 + 1, v16);
        if ( v17 == v16 )
          return v15;
      }
      ObDereferenceSecurityDescriptor(Pool2, 1LL);
    }
  }
  return v15;
}
