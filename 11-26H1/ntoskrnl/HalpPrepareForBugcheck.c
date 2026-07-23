/*
 * XREFs of HalpPrepareForBugcheck @ 0x1405877E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x140434CC0 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x14059BF00 (HalpTimerUpdateApiConsumers.c)
 */

__int64 __fastcall HalpPrepareForBugcheck(char a1)
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140FBB3DC = -1;
    qword_140FBB3E0 = 0LL;
    xmmword_140FBB3C8 = 0uLL;
    qword_140FBB488 = 0LL;
    dword_140FBB3C4 = 0;
    HalpEnlightenment = 0;
    result = HalpTimerUpdateApiConsumers();
  }
  if ( (a1 & 1) != 0 )
    dword_140E109F8 = 1;
  HalpBugcheckInProgress = 1;
  return result;
}
