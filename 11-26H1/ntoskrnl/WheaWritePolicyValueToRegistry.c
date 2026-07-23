/*
 * XREFs of WheaWritePolicyValueToRegistry @ 0x14084FE10
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x1406DCBD8 (WheapWmiExecutePolicyManagementMethod.c)
 * Callees:
 *     RtlWriteRegistryValue @ 0x140A10F00 (RtlWriteRegistryValue.c)
 */

NTSTATUS __fastcall WheaWritePolicyValueToRegistry(unsigned int a1, _DWORD *ValueData)
{
  __int64 v2; // r8

  if ( a1 >= 0x16 )
    return -1073741811;
  v2 = 4LL * a1;
  if ( *ValueData < LODWORD((&WheaRegPolicyTable)[v2 + 1]) || *ValueData > *((_DWORD *)&WheaRegPolicyTable + 2 * v2 + 5) )
    return -1073741811;
  else
    return RtlWriteRegistryValue(2u, L"WHEA\\Policy", (&WheaRegPolicyTable)[v2], 4u, ValueData, 4u);
}
