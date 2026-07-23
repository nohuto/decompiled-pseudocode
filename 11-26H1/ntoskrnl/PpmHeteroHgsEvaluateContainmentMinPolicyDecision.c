/*
 * XREFs of PpmHeteroHgsEvaluateContainmentMinPolicyDecision @ 0x1404F2920
 * Callers:
 *     PpmHeteroHgsEvaluateContainmentDecision @ 0x1404F2880 (PpmHeteroHgsEvaluateContainmentDecision.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmHeteroHgsEvaluateContainmentMinPolicyDecision(__int64 a1)
{
  char result; // al
  __int64 v2; // r9
  __int64 v3; // r8
  _WORD *v4; // rcx
  unsigned __int16 v5; // dx

  result = 0;
  if ( *(_BYTE *)(a1 + 10) )
  {
    v2 = *(_QWORD *)(a1 + 1240);
    v3 = *(unsigned __int8 *)(a1 + 10);
    v4 = *(_WORD **)(a1 + 1256);
    do
    {
      if ( *v4 )
      {
        v5 = v4[1];
        if ( v5 > *(_WORD *)(v2 + 8) || v5 > *(_WORD *)(v2 + 10) )
          result = 1;
      }
      v4 += 312;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
