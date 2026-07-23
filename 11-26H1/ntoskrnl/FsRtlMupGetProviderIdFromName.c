/*
 * XREFs of FsRtlMupGetProviderIdFromName @ 0x140B66CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall FsRtlMupGetProviderIdFromName(PCUNICODE_STRING pProviderName, PULONG32 pProviderId)
{
  if ( *(_QWORD *)&ExpPlatformBinaryLock.WaitRegister.Flags )
    return guard_dispatch_icall_no_overrides((__int64)pProviderName, (__int64)pProviderId);
  else
    return -1073741637;
}
