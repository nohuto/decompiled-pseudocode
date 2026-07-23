/*
 * XREFs of FsRtlAllocateExtraCreateParameter @ 0x140A84590
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameter(
        LPCGUID EcpType,
        ULONG SizeOfContext,
        FSRTL_ALLOCATE_ECP_FLAGS Flags,
        PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
        ULONG PoolTag,
        PVOID *EcpContext)
{
  ULONG v6; // ebx
  int v9; // edi
  ULONG_PTR v10; // rcx
  __int64 Pool2; // rax
  GUID v12; // xmm0

  v6 = SizeOfContext + 72;
  *EcpContext = 0LL;
  if ( SizeOfContext >= 0xFFFFFFB8 )
    return -1073741675;
  v9 = (Flags & 2) != 0 ? 66 : 2;
  v10 = (-(__int64)((Flags & 2) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256;
  if ( (Flags & 1) != 0 )
    v10 |= 1uLL;
  Pool2 = ExAllocatePool2(v10);
  if ( !Pool2 )
    return -1073741670;
  *(_QWORD *)Pool2 = 1215324997LL;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  v12 = *EcpType;
  *(_QWORD *)(Pool2 + 40) = CleanupCallback;
  *(_DWORD *)(Pool2 + 48) = v9;
  *(GUID *)(Pool2 + 24) = v12;
  *(_DWORD *)(Pool2 + 52) = v6;
  *(_QWORD *)(Pool2 + 56) = 0LL;
  *(_QWORD *)(Pool2 + 64) = 0LL;
  *EcpContext = (PVOID)(Pool2 + 72);
  return 0;
}
