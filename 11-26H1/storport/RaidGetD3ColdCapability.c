/*
 * XREFs of RaidGetD3ColdCapability @ 0x14005C47C
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     NvmeNamespaceStartDeviceIrp @ 0x1401A9E6C (NvmeNamespaceStartDeviceIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1401BB140 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

char __fastcall RaidGetD3ColdCapability(__int64 a1)
{
  int (__fastcall *v1)(_QWORD, char *); // rax
  char v2; // bl
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(int (__fastcall **)(_QWORD, char *))(a1 + 48);
  v2 = 0;
  v4 = 0;
  if ( v1 && v1(*(_QWORD *)(a1 + 8), &v4) >= 0 )
    return v4;
  return v2;
}
