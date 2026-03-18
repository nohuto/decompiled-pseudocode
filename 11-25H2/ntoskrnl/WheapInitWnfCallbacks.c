/*
 * XREFs of WheapInitWnfCallbacks @ 0x1407B9DD4
 * Callers:
 *     WheaInitialize @ 0x140C32E30 (WheaInitialize.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x140A139C0 (ExSubscribeWnfStateChange.c)
 */

__int64 WheapInitWnfCallbacks()
{
  __int64 result; // rax
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  qword_140EF7508 = 0LL;
  WheapOfflineChecker = 0LL;
  result = ExSubscribeWnfStateChange(
             (unsigned int)&v1,
             (unsigned int)&WNF_MM_BAD_MEMORY_QUARANTINED,
             1,
             0,
             (__int64)WheapProcessOfflineList,
             0LL);
  if ( (int)result >= 0 )
  {
    result = v1;
    qword_140EF7518 = v1;
  }
  return result;
}
