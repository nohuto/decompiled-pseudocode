/*
 * XREFs of MiClonePteReadonly @ 0x1404D28A0
 * Callers:
 *     MiPteForTrimmedProto @ 0x1402B3394 (MiPteForTrimmedProto.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x14036D7EC (MiLocateCloneAddress.c)
 */

_BOOL8 __fastcall MiClonePteReadonly(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbx
  _QWORD *CloneAddress; // rax
  _BOOL8 result; // rax

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  result = 0;
  if ( Process[1].IdealProcessorAssignmentBlock )
  {
    CloneAddress = MiLocateCloneAddress((__int64)CurrentThread->ApcState.Process, a1);
    if ( CloneAddress )
    {
      if ( Process[2].ActiveProcessors[4].StaticBitmap[16] > CloneAddress[12] )
        return 1;
    }
  }
  return result;
}
