/*
 * XREFs of PopIssueNextState @ 0x140BFDF10
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     PopHandleNextState @ 0x140C02C90 (PopHandleNextState.c)
 */

__int64 __fastcall PopIssueNextState(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  int i; // [rsp+40h] [rbp+18h] BYREF

  _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
  *(_DWORD *)(a1 + 56) = a3;
  *a2 = 0;
  PopHandleNextState();
  for ( i = 0; ; KeYieldProcessorEx(&i) )
  {
    result = *(unsigned int *)(a1 + 52);
    if ( (_DWORD)result == *(_DWORD *)(a1 + 48) )
      break;
  }
  return result;
}
