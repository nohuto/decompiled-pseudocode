/*
 * XREFs of ?PostProcessInput@CHidInput@@EEAAJXZ @ 0x14013C5E0
 * Callers:
 *     <none>
 * Callees:
 *     InitiatePTPMouseProcessing @ 0x14013C610 (InitiatePTPMouseProcessing.c)
 */

__int64 __fastcall CHidInput::PostProcessInput(CHidInput *this)
{
  if ( *((_BYTE *)this + 1344) )
  {
    *((_BYTE *)this + 1344) = 0;
    InitiatePTPMouseProcessing();
  }
  return 0LL;
}
