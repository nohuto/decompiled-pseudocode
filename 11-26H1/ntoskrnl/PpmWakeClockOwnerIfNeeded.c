/*
 * XREFs of PpmWakeClockOwnerIfNeeded @ 0x1403EACD0
 * Callers:
 *     PoIdle @ 0x1403E9FF0 (PoIdle.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     HalRequestIpi @ 0x1403EC520 (HalRequestIpi.c)
 *     PoAllProcessorsDeepIdle @ 0x1406013E0 (PoAllProcessorsDeepIdle.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *__fastcall PpmWakeClockOwnerIfNeeded(__int64 a1, char a2)
{
  void *result; // rax
  __int64 v5; // rbp
  unsigned int v6; // edi
  __int64 v7; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v8[264]; // [rsp+28h] [rbp-120h] BYREF

  result = memset_0(v8, 0, 0x100uLL);
  v5 = *(_QWORD *)(a1 + 34880);
  v6 = KiClockTimerOwner;
  if ( !(_BYTE)KiDynamicTickDisableReason
    && !PpmIpiLastClockOwnerDisable
    && (_DWORD)KiClockTimerOwner != *(_DWORD *)(a1 + 36)
    && !a2 )
  {
    result = (void *)PoAllProcessorsDeepIdle();
    if ( (_BYTE)result )
    {
      v7 = 2097153LL;
      memset_0(v8, 0, 0x100uLL);
      KeAddProcessorAffinityEx((unsigned __int16 *)&v7, v6);
      *(_WORD *)(v5 + 56) |= 0x800u;
      return (void *)HalRequestIpi(0LL, &v7);
    }
  }
  return result;
}
