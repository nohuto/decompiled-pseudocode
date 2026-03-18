/*
 * XREFs of MiRotateComplete @ 0x1404E2824
 * Callers:
 *     MiRotateToFrameBufferNoCopy @ 0x140AEC50C (MiRotateToFrameBufferNoCopy.c)
 *     MiRotateToFrameBuffer @ 0x140AEC740 (MiRotateToFrameBuffer.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027E5A0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
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
