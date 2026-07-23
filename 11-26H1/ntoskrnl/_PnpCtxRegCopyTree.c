/*
 * XREFs of _PnpCtxRegCopyTree @ 0x14089C328
 * Callers:
 *     PiDevCfgConfigureSoftwareDevices @ 0x140A42818 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceFilters @ 0x140B376C0 (PiDevCfgConfigureDeviceFilters.c)
 *     PipMigratePnpState @ 0x140CC8770 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlCopyTreeInternal @ 0x1408A3800 (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall PnpCtxRegCopyTree(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( *(_QWORD *)&PiPnpRtlCtx && (v5 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
    v6 = *(_QWORD *)(v5 + 8);
  else
    v6 = 0LL;
  return RegRtlCopyTreeInternal(a2, a3, a4, a5, 0, v6, 0);
}
