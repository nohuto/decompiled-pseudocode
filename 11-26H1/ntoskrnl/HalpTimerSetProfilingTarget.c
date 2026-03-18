/*
 * XREFs of HalpTimerSetProfilingTarget @ 0x1402C8024
 * Callers:
 *     EmonSetInterval @ 0x1405969A0 (EmonSetInterval.c)
 *     Amd64SetInterval @ 0x1405A4D10 (Amd64SetInterval.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 */

bool HalpTimerSetProfilingTarget()
{
  bool result; // al
  __int64 v1; // r8
  __int64 v2; // r10
  int v3; // r11d
  int v4; // edx

  result = HalpDisableInterrupts();
  v1 = HalpProfileData;
  v2 = 296LL * KeGetPcr()->Prcb.Number;
  *(_DWORD *)(v2 + HalpProfileData + 24) = v3;
  *(_DWORD *)(v2 + v1 + 16) = v4;
  *(_DWORD *)(v2 + v1 + 28) = v4;
  *(_DWORD *)(v2 + v1 + 20) = 0;
  if ( result )
    _enable();
  return result;
}
