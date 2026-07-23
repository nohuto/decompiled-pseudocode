/*
 * XREFs of MiRotateComplete @ 0x1404DBF04
 * Callers:
 *     MiRotateToFrameBufferNoCopy @ 0x140AEF51C (MiRotateToFrameBufferNoCopy.c)
 *     MiRotateToFrameBuffer @ 0x140AEF750 (MiRotateToFrameBuffer.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiRotateComplete(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rdx
  __int64 p_Blink; // rsi
  unsigned __int64 *v6; // rbx
  KIRQL v7; // al
  unsigned __int64 *i; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v6 = &Process[1].ActiveGroupsMask.Masks[1];
  v7 = MiLockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, (__int64)Process, a3);
  for ( i = (unsigned __int64 *)*v6; i != a1; i = (unsigned __int64 *)*i )
    v6 = i;
  *v6 = *i;
  MiUnlockWorkingSetExclusive(p_Blink, v7);
}
