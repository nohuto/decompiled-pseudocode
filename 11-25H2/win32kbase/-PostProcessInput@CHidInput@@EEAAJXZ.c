/*
 * XREFs of ?PostProcessInput@CHidInput@@EEAAJXZ @ 0x1400F81C0
 * Callers:
 *     <none>
 * Callees:
 *     InitiatePTPMouseProcessing @ 0x1400F81F0 (InitiatePTPMouseProcessing.c)
 */

__int64 __fastcall CHidInput::PostProcessInput(CHidInput *this)
{
  if ( *((_BYTE *)this + 1352) )
  {
    *((_BYTE *)this + 1352) = 0;
    InitiatePTPMouseProcessing();
  }
  return 0LL;
}
