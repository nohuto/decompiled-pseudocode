/*
 * XREFs of PpmHeteroHgsEvaluateContainmentDecision @ 0x1404F2880
 * Callers:
 *     PpmHeteroHgsCheckContainmentDecision @ 0x14025A1A8 (PpmHeteroHgsCheckContainmentDecision.c)
 * Callees:
 *     PpmHeteroHgsEvaluateContainmentMinPolicyDecision @ 0x1404F2920 (PpmHeteroHgsEvaluateContainmentMinPolicyDecision.c)
 *     PpmEventHgsContainmentPolicyChange @ 0x140611290 (PpmEventHgsContainmentPolicyChange.c)
 */

__int64 PpmHeteroHgsEvaluateContainmentDecision()
{
  __int64 result; // rax
  int v1; // r8d
  int v2; // r9d
  char v3; // r10
  __int64 v4; // r11
  int v5; // edx
  unsigned int v6; // ecx

  result = PpmHeteroHgsEvaluateContainmentMinPolicyDecision();
  v5 = PpmHeteroHgsContainmentState;
  v6 = PpmHeteroHgsContainmentState & 0xFFFFFFF7;
  PpmHeteroHgsContainmentState &= ~8u;
  if ( PpmHeteroPolicy == 4
    && PpmHeteroContainmentPolicy == 1
    && PpmHeteroHgsParkingEnabled
    && !PpmPerfMaxOverrideEnabled
    && !PpmCheckLatencyBoostActive
    && !(_BYTE)result
    && !v3 )
  {
    v6 |= 8u;
    PpmHeteroHgsContainmentState = v6;
  }
  if ( (v6 & 8) == 0 )
    *(_DWORD *)(v4 + 4) = 2;
  if ( v5 != v6 )
  {
    LOBYTE(v2) = result;
    return PpmEventHgsContainmentPolicyChange(v6, v5, v1, v2, v3, 0);
  }
  return result;
}
