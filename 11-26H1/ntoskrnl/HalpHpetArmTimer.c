/*
 * XREFs of HalpHpetArmTimer @ 0x1404E1980
 * Callers:
 *     <none>
 * Callees:
 *     HalpHpetSetMatchValue @ 0x1404E19CC (HalpHpetSetMatchValue.c)
 *     HalSetTimerProblem @ 0x1405341D0 (HalSetTimerProblem.c)
 */

__int64 __fastcall HalpHpetArmTimer(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v4; // rdx

  if ( a3 < 0x80000000 )
  {
    *(_DWORD *)(a1 + 8) = a2;
    v4 = *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.Timer.Header.Lock;
    *(_DWORD *)(a1 + 16) = a3;
    return HalpHpetSetMatchValue(a1, *(unsigned int *)(v4 + 240), 0LL);
  }
  else
  {
    HalSetTimerProblem(a1, 4LL);
    return 3221225485LL;
  }
}
