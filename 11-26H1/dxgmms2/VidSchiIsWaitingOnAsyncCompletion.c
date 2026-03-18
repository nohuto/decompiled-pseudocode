/*
 * XREFs of VidSchiIsWaitingOnAsyncCompletion @ 0x140035DE0
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x140012CE0 (VidSchUnwaitFlipQueue.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiIsWaitingOnAsyncCompletion(int a1)
{
  return a1 == 5 || a1 == 15;
}
