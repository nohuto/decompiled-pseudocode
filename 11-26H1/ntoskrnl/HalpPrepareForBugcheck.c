/*
 * XREFs of HalpPrepareForBugcheck @ 0x1405852C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x140427BB0 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x140599780 (HalpTimerUpdateApiConsumers.c)
 */

__int64 __fastcall HalpPrepareForBugcheck(char a1)
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140FBB03C = -1;
    qword_140FBB040 = 0LL;
    xmmword_140FBB028 = 0uLL;
    qword_140FBB0E8 = 0LL;
    dword_140FBB024 = 0;
    HalpEnlightenment = 0;
    result = HalpTimerUpdateApiConsumers();
  }
  if ( (a1 & 1) != 0 )
    dword_140E108C8 = 1;
  HalpBugcheckInProgress = 1;
  return result;
}
