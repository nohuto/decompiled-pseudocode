/*
 * XREFs of HalpMcGetRollbackRequest @ 0x1405936A8
 * Callers:
 *     HalpLoadMicrocode @ 0x140784E40 (HalpLoadMicrocode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PrExtControlOperations @ 0x1406DCA28 (PrExtControlOperations.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MmGetSystemRoutineAddress @ 0x140A864E0 (MmGetSystemRoutineAddress.c)
 */

__int64 HalpMcGetRollbackRequest()
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v2[8]; // [rsp+40h] [rbp-19h] BYREF
  int v3; // [rsp+48h] [rbp-11h]
  const wchar_t *v4; // [rsp+50h] [rbp-9h]
  int *v5; // [rsp+58h] [rbp-1h]
  int v6; // [rsp+60h] [rbp+7h]
  int v7; // [rsp+C0h] [rbp+67h] BYREF

  v7 = 0;
  memset_0(v2, 0, 0x70uLL);
  v3 = 288;
  v4 = L"RollbackRequest";
  v6 = 0x4000000;
  v5 = &v7;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  MmGetSystemRoutineAddress(&DestinationString);
  if ( (int)guard_dispatch_icall_no_overrides(2LL, L"McUpdate") >= 0 )
    v7 &= 1u;
  return PrExtControlOperations(11LL, &v7);
}
