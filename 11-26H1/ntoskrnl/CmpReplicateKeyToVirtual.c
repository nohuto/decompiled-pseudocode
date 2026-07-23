/*
 * XREFs of CmpReplicateKeyToVirtual @ 0x140860234
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140A9F978 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B33A1C (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpBuildVirtualReplicationStack @ 0x14085F9F0 (CmpBuildVirtualReplicationStack.c)
 *     CmpDoBuildVirtualStack @ 0x14085FCA4 (CmpDoBuildVirtualStack.c)
 *     CmpGetVirtualStoreRoot @ 0x140860160 (CmpGetVirtualStoreRoot.c)
 *     CmRealKCBToVirtualPath @ 0x1408B7A24 (CmRealKCBToVirtualPath.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpReplicateKeyToVirtual(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, ULONG_PTR *a4)
{
  char v5; // bl
  char v8; // di
  int VirtualStoreRoot; // ebx
  UNICODE_STRING *v10; // rcx
  unsigned int v11; // edi
  char *v12; // rsi
  ULONG_PTR v13; // rcx
  ULONG_PTR v14; // r8
  unsigned int v15; // r15d
  unsigned int v16; // eax
  ULONG_PTR *v17; // r12
  ULONG_PTR v18; // rcx
  UNICODE_STRING *p_DestinationString; // rcx
  char v21; // [rsp+40h] [rbp-39h]
  unsigned int v22; // [rsp+44h] [rbp-35h] BYREF
  int v23; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  PVOID P; // [rsp+60h] [rbp-19h] BYREF
  ULONG_PTR v26; // [rsp+68h] [rbp-11h] BYREF
  ULONG_PTR v27; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v28[2]; // [rsp+78h] [rbp-1h] BYREF

  v5 = a3;
  v23 = 0;
  v21 = 0;
  DestinationString = 0LL;
  v8 = 0;
  memset(v28, 0, sizeof(v28));
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)v28, 0x20000uLL, a3);
    v8 = 1;
    v21 = 1;
  }
  v26 = 0LL;
  P = 0LL;
  v22 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v27 = 0LL;
  if ( !v5 )
  {
    VirtualStoreRoot = -1073741739;
LABEL_26:
    if ( v21 && CmpTraceRoutine )
    {
      p_DestinationString = &DestinationString;
      LOBYTE(p_DestinationString) = 26;
      guard_dispatch_icall_no_overrides((__int64)p_DestinationString, (__int64)v28);
    }
    if ( DestinationString.Buffer )
      RtlFreeAnsiString(&DestinationString);
    return (unsigned int)VirtualStoreRoot;
  }
  CmpUnlockKcb(BugCheckParameter2);
  VirtualStoreRoot = CmRealKCBToVirtualPath(BugCheckParameter2, 0LL, a2, &DestinationString);
  if ( VirtualStoreRoot >= 0 )
  {
    if ( (int)CmpBuildVirtualReplicationStack(BugCheckParameter2, (__int64)&DestinationString, &v22, &P) >= 0 )
    {
      v11 = v22;
      v12 = (char *)P;
      if ( v22 )
      {
        VirtualStoreRoot = CmpGetVirtualStoreRoot(a2, (__int64 *)&v26, &v23, &v27);
        if ( VirtualStoreRoot >= 0 )
        {
          v13 = v27;
          v14 = v26;
          *a4 = v26;
          *((_DWORD *)v12 + 8) = *(_DWORD *)(v13 + 40);
          *((_QWORD *)v12 + 2) = v13;
          VirtualStoreRoot = CmpDoBuildVirtualStack((__int64)v12, v11, v14, BugCheckParameter2, a2);
        }
      }
      else
      {
        VirtualStoreRoot = -1073741811;
      }
      if ( v12 )
      {
        v15 = 0;
        if ( v11 )
        {
          v16 = v11 - 1;
          v17 = (ULONG_PTR *)(v12 + 24);
          do
          {
            v18 = *(v17 - 1);
            if ( v18 )
            {
              CmpDereferenceKeyControlBlock(v18);
              v16 = v11 - 1;
            }
            if ( v15 == v16 && *v17 )
            {
              CmpDereferenceKeyControlBlock(*v17);
              v16 = v11 - 1;
            }
            ++v15;
            v17 += 6;
          }
          while ( v15 < v11 );
        }
        ExFreePoolWithTag(v12, 0);
      }
    }
    else
    {
      VirtualStoreRoot = -1073741670;
    }
    CmpLockKcbExclusive(BugCheckParameter2);
    goto LABEL_26;
  }
  if ( v8 && CmpTraceRoutine )
  {
    v10 = &DestinationString;
    LOBYTE(v10) = 26;
    guard_dispatch_icall_no_overrides((__int64)v10, (__int64)v28);
  }
  return (unsigned int)VirtualStoreRoot;
}
