/*
 * XREFs of PopPowerAggregatorHandleSystemTransitionIntent @ 0x1409BF690
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x1409BF708 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 */

__int64 __fastcall PopPowerAggregatorHandleSystemTransitionIntent(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        __int64 a5)
{
  bool v5; // zf
  __int64 v6; // rbx
  int v7; // edi
  bool v8; // si
  __int64 result; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 16) == 3;
  v6 = a2;
  v10 = 0;
  if ( v5 )
    return 3221266435LL;
  v7 = *a4;
  v8 = a3 == 10;
  LOBYTE(a2) = a3 == 10;
  result = PopPowerAggregatorDetermineTargetSystemPowerState(*a4, a2, &v10, a5);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v6 + 28) = v10;
    result = 0LL;
    *(_DWORD *)v6 = 4;
    *(_BYTE *)(v6 + 24) = v8;
    *(_DWORD *)(v6 + 32) = v7;
  }
  return result;
}
