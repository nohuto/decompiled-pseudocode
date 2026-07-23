/*
 * XREFs of CmpVEExecuteCreateLogic @ 0x140A9F978
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KCBNeedsVirtualImage @ 0x140447908 (KCBNeedsVirtualImage.c)
 *     CmpDoAccessCheckOnKCB @ 0x14085FB38 (CmpDoAccessCheckOnKCB.c)
 *     CmpReplicateKeyToVirtual @ 0x140860234 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x14086135C (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140861774 (CmpReportAuditVirtualizationEvent.c)
 *     CmRealKCBToVirtualPath @ 0x1408B7A24 (CmRealKCBToVirtualPath.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     CmpCheckAdminAccess @ 0x140A4E864 (CmpCheckAdminAccess.c)
 *     CmpReparseToVirtualPath @ 0x140B07FA4 (CmpReparseToVirtualPath.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpVEExecuteCreateLogic(
        ULONG_PTR a1,
        ULONG_PTR a2,
        UNICODE_STRING *a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8,
        UNICODE_STRING *a9)
{
  __int64 v13; // rdi
  int *v14; // r14
  __int64 v15; // rdx
  int v16; // ebx
  ACCESS_MASK v18; // ebx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  ULONG_PTR v23; // rax
  UNICODE_STRING *v24; // rbx
  wchar_t *Buffer; // rcx
  char v26[8]; // [rsp+20h] [rbp-20h] BYREF
  ULONG_PTR v27; // [rsp+28h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  BOOLEAN v29; // [rsp+70h] [rbp+30h] BYREF

  v29 = 0;
  v27 = 0LL;
  v26[0] = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 66) )
    goto LABEL_4;
  v13 = a8;
  if ( (*(_DWORD *)(a8 + 24) & 0x10) != 0 )
    goto LABEL_4;
  v14 = (int *)(a4 + 32);
  if ( !KCBNeedsVirtualImage() )
    goto LABEL_4;
  if ( (*(_DWORD *)(v13 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess((PRKAPC_STATE)(v13 + 168));
    *(_DWORD *)(v13 + 160) |= 1u;
  }
  if ( (unsigned __int8)CmpReparseToVirtualPath(a1, v15, v14, &DestinationString) )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0 || (v18 = a6 | 4, CmpDoAccessCheckOnKCB(a1, a7, a6 | 4, a5)) )
  {
LABEL_4:
    v16 = -1073741199;
    goto LABEL_5;
  }
  if ( !CmpDoAccessCheckOnKCB(a1, a7, 131097, a5) )
    goto LABEL_26;
  v16 = CmpCheckAdminAccess(v18, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(a1 + 88) + 32LL), (__int64)v14, &v29);
  if ( v16 < 0 )
    goto LABEL_5;
  if ( !v29 )
  {
LABEL_26:
    v16 = -1073741790;
    goto LABEL_5;
  }
  CmpUnlockKcb(a2);
  v19 = *(_DWORD *)v13 >> 10;
  LOBYTE(v19) = (*(_DWORD *)v13 & 0x400) != 0;
  v16 = CmpReplicateKeyToVirtual(a1, (__int64)v14, v19, &v27);
  CmpLockKcbExclusive(a2, v20, v21, v22);
  if ( v16 >= 0 )
  {
    v16 = CmpExamineSaclForAuditEvent((void *)(*(_QWORD *)(a1 + 88) + 32LL), (__int64)v14, v26);
    if ( v16 >= 0 )
    {
      if ( !v26[0] || (v16 = CmpReportAuditVirtualizationEvent(a1, (__int64)v14), v16 >= 0) )
      {
        v23 = v27;
        *(_DWORD *)(v13 + 100) |= 2u;
        *(_QWORD *)(v13 + 112) = v23;
LABEL_22:
        v16 = CmRealKCBToVirtualPath(a1, a3, v14, &DestinationString);
        if ( v16 >= 0 )
        {
          v24 = a9;
          Buffer = a9->Buffer;
          if ( Buffer )
            ExFreePoolWithTag(Buffer, 0);
          *v24 = DestinationString;
          RtlInitUnicodeString(&DestinationString, 0LL);
          *(_DWORD *)v13 |= 8u;
          v16 = 260;
        }
      }
    }
  }
LABEL_5:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v16;
}
