/*
 * XREFs of NvmeAdapterSystemPowerHintsEnabled @ 0x1400E0C14
 * Callers:
 *     NvmeAdapterCoalescingCallback @ 0x1400D3820 (NvmeAdapterCoalescingCallback.c)
 *     NvmePowerSettingCallback @ 0x14012A580 (NvmePowerSettingCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall NvmeAdapterSystemPowerHintsEnabled(__int64 a1)
{
  _QWORD *v1; // rdx
  char result; // al

  v1 = *(_QWORD **)(a1 + 160);
  result = 0;
  if ( v1[35] && v1[36] || v1[37] )
    return 1;
  return result;
}
