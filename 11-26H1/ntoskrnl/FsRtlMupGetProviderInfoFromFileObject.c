/*
 * XREFs of FsRtlMupGetProviderInfoFromFileObject @ 0x140B51B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall FsRtlMupGetProviderInfoFromFileObject(
        PFILE_OBJECT pFileObject,
        ULONG Level,
        PVOID pBuffer,
        PULONG pBufferSize)
{
  if ( *(_QWORD *)&ExpPlatformBinaryLock.WaitRegister.Flags )
    return guard_dispatch_icall_no_overrides((__int64)pFileObject, *(__int64 *)&Level);
  else
    return -1073741637;
}
