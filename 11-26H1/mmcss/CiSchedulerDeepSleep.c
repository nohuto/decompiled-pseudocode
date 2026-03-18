/*
 * XREFs of CiSchedulerDeepSleep @ 0x1400021C0
 * Callers:
 *     CiSchedulerThreadFunction @ 0x140001520 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSchedulerProcessDeadlines @ 0x140002280 (CiSchedulerProcessDeadlines.c)
 *     CiLogSchedulerSleep @ 0x140004010 (CiLogSchedulerSleep.c)
 *     WPP_SF_ @ 0x1400043B0 (WPP_SF_.c)
 */

__int64 __fastcall CiSchedulerDeepSleep(__int32 *a1)
{
  __int32 v2; // eax
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids);
  if ( byte_14000A0F0 )
    CiLogSchedulerSleep(5LL, 0xFFFFFFFFLL);
  v2 = _InterlockedExchange(&CiSchedulerWakeupReason, 0x8000);
  *a1 = v2;
  if ( !v2 )
    CiSchedulerWaitStatus = KeWaitForSingleObject(KeGetCurrentThread(), Executive, 0, 1u, 0LL);
  result = CiSchedulerProcessDeadlines(&v4);
  *a1 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0);
  return result;
}
