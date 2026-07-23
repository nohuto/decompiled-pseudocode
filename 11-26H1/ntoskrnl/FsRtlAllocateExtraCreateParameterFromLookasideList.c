/*
 * XREFs of FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140933DA0
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140933530 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140933C40 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameterFromLookasideList(
        LPCGUID EcpType,
        ULONG SizeOfContext,
        FSRTL_ALLOCATE_ECP_FLAGS Flags,
        PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
        PVOID LookasideList,
        PVOID *EcpContext)
{
  ULONG v6; // ebp
  int v7; // esi
  char *v10; // rax
  GUID v11; // xmm0
  NTSTATUS v13; // ebx
  __int64 v14; // rax
  ULONG_PTR v15; // rcx
  __int64 Pool2; // rax
  GUID v17; // xmm0

  v6 = SizeOfContext + 72;
  v7 = 66;
  if ( (Flags & 2) == 0 )
    v7 = 2;
  if ( v6 > *((_DWORD *)LookasideList + 11) )
  {
    v13 = 0;
    *EcpContext = 0LL;
    if ( v6 < 0x48 )
      return -1073741675;
    v14 = 64LL;
    if ( (Flags & 2) == 0 )
      v14 = 256LL;
    v15 = (unsigned int)v14 | 1LL;
    if ( (Flags & 1) == 0 )
      v15 = v14;
    Pool2 = ExAllocatePool2(v15);
    if ( !Pool2 )
      return -1073741670;
    *(_QWORD *)Pool2 = 1215324997LL;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    v17 = *EcpType;
    *(_QWORD *)(Pool2 + 40) = CleanupCallback;
    *(_DWORD *)(Pool2 + 48) = v7;
    *(GUID *)(Pool2 + 24) = v17;
    *(_DWORD *)(Pool2 + 52) = v6;
    *(_QWORD *)(Pool2 + 56) = 0LL;
    *(_QWORD *)(Pool2 + 64) = 0LL;
    *EcpContext = (PVOID)(Pool2 + 72);
    return v13;
  }
  v10 = (char *)ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)LookasideList);
  if ( v10 )
  {
    *(_QWORD *)v10 = 1215324997LL;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 1) = 0LL;
    v11 = *EcpType;
    *((_QWORD *)v10 + 5) = CleanupCallback;
    *((_DWORD *)v10 + 12) = v7;
    *(GUID *)(v10 + 24) = v11;
    *((_DWORD *)v10 + 13) = v6;
    *((_QWORD *)v10 + 7) = LookasideList;
    *((_QWORD *)v10 + 8) = 0LL;
    *EcpContext = v10 + 72;
    return 0;
  }
  else
  {
    *EcpContext = 0LL;
    return -1073741670;
  }
}
