/*
 * XREFs of RaidEvaluateDsmLedState @ 0x140093F20
 * Callers:
 *     NvmeDsmGetSupportedLedState @ 0x14008FA2C (NvmeDsmGetSupportedLedState.c)
 *     NvmeDsmQuerySupportedFunctionForLedState @ 0x14008FB0C (NvmeDsmQuerySupportedFunctionForLedState.c)
 *     RaidDsmGetLedState @ 0x140093B34 (RaidDsmGetLedState.c)
 *     RaidDsmGetSupportedLedState @ 0x140093BEC (RaidDsmGetSupportedLedState.c)
 *     RaidDsmQuerySupportedFunctionForLedState @ 0x140093CB4 (RaidDsmQuerySupportedFunctionForLedState.c)
 *     RaidDsmSetLedState @ 0x140093D6C (RaidDsmSetLedState.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidSyncAcpiEvalMethod @ 0x140047160 (RaidSyncAcpiEvalMethod.c)
 *     memcpy_s @ 0x14005CFF8 (memcpy_s.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidEvaluateDsmLedState(PDEVICE_OBJECT DeviceObject, int a2, int a3, void *a4, ULONG *Src)
{
  ULONG *v5; // rsi
  __int64 Pool; // rax
  void *v11; // rbx
  int v13; // edi
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF

  v5 = Src;
  LODWORD(v14) = 0;
  memset_0(a4, 0, *Src);
  Pool = RaidAllocatePool(64LL, 64LL, 1128358226LL, (__int64)DeviceObject);
  v11 = (void *)Pool;
  if ( !Pool )
    return 3221225626LL;
  *(_DWORD *)Pool = 1130980673;
  *(_DWORD *)(Pool + 12) = 4;
  *(_DWORD *)(Pool + 4) = 1297302623;
  *(_DWORD *)(Pool + 8) = 64;
  *(_DWORD *)(Pool + 16) = 1048578;
  LODWORD(Src) = a3;
  *(GUID *)(Pool + 20) = GUID_ACPI_DSM_PCI_SSD_LED_STATE;
  *(_DWORD *)(Pool + 36) = 0x40000;
  *(_DWORD *)(Pool + 40) = 1;
  *(_DWORD *)(Pool + 44) = 0x40000;
  *(_DWORD *)(Pool + 48) = a2;
  *(_WORD *)(Pool + 52) = 4;
  if ( a2 == 3 )
  {
    *(_DWORD *)(Pool + 54) = 131080;
    *(_WORD *)(Pool + 58) = 4;
    memcpy_s((void *)(Pool + 60), 4uLL, &Src, 4uLL);
  }
  else
  {
    *(_WORD *)(Pool + 54) = 0;
  }
  v13 = RaidSyncAcpiEvalMethod(DeviceObject, v11, 0x40u, a4, *v5, &v14);
  if ( v13 >= 0 )
    *v5 = v14;
  ExFreePoolWithTag(v11, 0x43416152u);
  return (unsigned int)v13;
}
