/*
 * XREFs of RaidNotifyPoAboutAdaptiveD3Engagement @ 0x1400C5430
 * Callers:
 *     StorPortUnitDirectedPowerDown @ 0x140081D30 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x140082200 (StorPortUnitDirectedPowerUp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidNotifyPoAboutAdaptiveD3Engagement(__int64 a1)
{
  __int64 v1; // rax
  NTSTATUS result; // eax
  _QWORD v4[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v4[0] = 58LL;
  v4[2] = 64LL;
  v4[1] = v1;
  result = ZwPowerInformation(SystemPowerStateLogging|0x40, v4, 0x18u, 0LL, 0);
  if ( result >= 0 )
    *(_BYTE *)(a1 + 507) |= 4u;
  return result;
}
