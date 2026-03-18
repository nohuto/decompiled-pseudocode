/*
 * XREFs of WheapInitWnfCallbacks @ 0x14084A47C
 * Callers:
 *     WheaInitialize @ 0x140CE7AB8 (WheaInitialize.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x140948A90 (ExSubscribeWnfStateChange.c)
 */

__int64 WheapInitWnfCallbacks()
{
  __int64 result; // rax
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  *(_OWORD *)&CmpCallbackListLock.WaitBlockFill11[40] = 0uLL;
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
    *(_QWORD *)&CmpCallbackListLock.WaitBlockFill11[64] = v1;
  }
  return result;
}
