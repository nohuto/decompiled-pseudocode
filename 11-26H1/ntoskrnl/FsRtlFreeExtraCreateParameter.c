/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x140903780
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x1402C2000 (FsRtlpAttachOplockKey.c)
 *     IopDeleteFileObjectExtension @ 0x1403DB7A0 (IopDeleteFileObjectExtension.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1409035A0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140903CB0 (IopSymlinkAllocateAndAddECP.c)
 *     PspCreateUserProcessEcp @ 0x140903F68 (PspCreateUserProcessEcp.c)
 *     IopGraftName @ 0x140904274 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x140904868 (IopSymlinkUpdateECP.c)
 *     IopCreateFile @ 0x1409B3A58 (IopCreateFile.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameter(PVOID EcpContext)
{
  __int64 v1; // rdi
  struct _PAGED_LOOKASIDE_LIST *v3; // rcx
  __int64 v4; // rdx

  v1 = 0LL;
  if ( *((_QWORD *)EcpContext - 4) )
    guard_dispatch_icall_no_overrides((__int64)EcpContext, (__int64)EcpContext - 48);
  if ( (*((_DWORD *)EcpContext - 6) & 0x20) != 0 && FltMgrCallbacks )
  {
    v1 = *((_QWORD *)EcpContext - 1);
    guard_dispatch_icall_no_overrides(v1, (__int64)EcpContext);
  }
  v3 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)EcpContext - 2);
  if ( v3 )
    ExFreeToNPagedLookasideList(v3, (char *)EcpContext - 72);
  else
    ExFreePoolWithTag((char *)EcpContext - 72, 0);
  if ( v1 )
    guard_dispatch_icall_no_overrides(v1, v4);
}
