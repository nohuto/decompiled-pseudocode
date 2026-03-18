/*
 * XREFs of IopLiveDumpInitiateCorralStateChange @ 0x1405D010C
 * Callers:
 *     IopLiveDumpCollectPages @ 0x1405CE958 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpCorralProcessors @ 0x1405CED50 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpUncorralProcessors @ 0x1405D2C0C (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x1404A70C8 (IopLiveDumpProcessCorralStateChange.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x1404E48C0 (IopLiveDumpGetMillisecondCounter.c)
 */

__int64 __fastcall IopLiveDumpInitiateCorralStateChange(__int64 a1, __int32 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 MillisecondCounter; // rdi
  __int64 result; // rax
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_QWORD *)a1;
  MillisecondCounter = 0LL;
  *a3 = 0LL;
  if ( (*(_DWORD *)(v4 + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  _InterlockedExchange((volatile __int32 *)(a1 + 16), 0);
  _InterlockedExchange((volatile __int32 *)(a1 + 12), a2);
  if ( a2 == 7 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  else
    IopLiveDumpProcessCorralStateChange(a1, a1 + 112, (__int64)a3, a4);
  v10 = 0;
  while ( *(_DWORD *)(a1 + 16) != *(_DWORD *)(a1 + 20) )
    KeYieldProcessorEx(&v10);
  result = *(unsigned int *)(v4 + 80);
  if ( (result & 0x80u) != 0LL )
  {
    result = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
    *a3 = result;
  }
  return result;
}
