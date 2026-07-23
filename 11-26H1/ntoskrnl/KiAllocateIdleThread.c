/*
 * XREFs of KiAllocateIdleThread @ 0x140BFE048
 * Callers:
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405ECB30 (KiAllocateProcessorStateInitializationParameters.c)
 * Callees:
 *     KiAllocatePrcbThread @ 0x1405EECFC (KiAllocatePrcbThread.c)
 */

__int64 __fastcall KiAllocateIdleThread(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 result; // rax
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v4 = 4;
  v7 = 0LL;
  if ( (_BYTE)KiKernelCetEnabled )
    v4 = 12;
  result = KiAllocatePrcbThread(&v7, (__int64)KiIdleLoop, a3, a4, a2, &KiIdleThreadName, v4);
  if ( (int)result >= 0 )
  {
    *a1 = v7;
    return 0LL;
  }
  return result;
}
