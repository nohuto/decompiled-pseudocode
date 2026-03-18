/*
 * XREFs of ACPIEmQueryFailDeviceResetOnOpenHandles @ 0x14006AB8C
 * Callers:
 *     ACPIFilterIrpQueryIdCompletion @ 0x1400B0E60 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIBusIrpQueryId @ 0x1400CBDB0 (ACPIBusIrpQueryId.c)
 * Callees:
 *     ACPIComputeDeviceIdMutiStringLength @ 0x14006AB00 (ACPIComputeDeviceIdMutiStringLength.c)
 */

__int64 __fastcall ACPIEmQueryFailDeviceResetOnOpenHandles(int a1, _WORD *a2)
{
  __int64 v2; // r10
  _QWORD *v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h]
  int v6; // [rsp+2Ch] [rbp-2Ch]
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]
  _QWORD *v10; // [rsp+68h] [rbp+10h] BYREF

  v8 = a1;
  v6 = 0;
  v9 = 0;
  v7[0] = a2;
  v5 = 24;
  v7[1] = 2 * ACPIComputeDeviceIdMutiStringLength(a2);
  v4 = v7;
  v10 = &v4;
  return EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_DEVICE_FAIL_RESET_ON_OPEN_HANDLES, &v10, 1LL, v2);
}
