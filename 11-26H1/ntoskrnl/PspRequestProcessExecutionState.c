/*
 * XREFs of PspRequestProcessExecutionState @ 0x140AFC0F8
 * Callers:
 *     PspSetProcessFreezeStateCallback @ 0x140618E70 (PspSetProcessFreezeStateCallback.c)
 *     PsSwapProcessWorkingSet @ 0x1407F67E8 (PsSwapProcessWorkingSet.c)
 *     PspRemoveProcessFromJobChain @ 0x1409FEEF8 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspRequestProcessExecutionState(__int64 a1, char a2, char a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 1532);
  if ( (result & 1) != 0 && (a3 & 1) == 0 )
    a2 &= ~2u;
  *(_BYTE *)(a1 + 2043) = a2;
  return result;
}
