/*
 * XREFs of VmPauseResumeNotify @ 0x1408222F0
 * Callers:
 *     <none>
 * Callees:
 *     VmpPauseResumeNotify @ 0x140822E14 (VmpPauseResumeNotify.c)
 */

__int64 __fastcall VmPauseResumeNotify(unsigned int a1)
{
  struct _LIST_ENTRY *Blink; // rcx

  Blink = KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  if ( Blink )
    return VmpPauseResumeNotify(Blink, a1);
  else
    return 3221225608LL;
}
