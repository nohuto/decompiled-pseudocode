/*
 * XREFs of DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x140218AC8
 * Callers:
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1402145A8 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiFlexIovMitigationUpdate @ 0x1402496D4 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x140249CA8 (DpiSriovAttach.c)
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkpIsDrtEnabled @ 0x14019364C (DxgkpIsDrtEnabled.c)
 */

bool DxgkpCheckProcessForVirtualMachineManagementAccess()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( (int)RtlCheckTokenMembership(0LL, SeExports->SeLocalSystemSid, &v1) >= 0 && v1 )
    return 1;
  if ( DxgkpIsDrtEnabled() && (int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, &v1) >= 0 )
    return v1 != 0;
  return 0;
}
