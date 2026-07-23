/*
 * XREFs of IovpLogStackTrace @ 0x140C4BE04
 * Callers:
 *     IoReuseIrp @ 0x140267BC0 (IoReuseIrp.c)
 *     IovCancelIrp @ 0x140C26E00 (IovCancelIrp.c)
 *     IovCompleteRequest @ 0x140C4BB00 (IovCompleteRequest.c)
 *     IovAllocateIrp @ 0x140C4E160 (IovAllocateIrp.c)
 * Callees:
 *     RtlEnoughStackSpaceForStackCapture @ 0x140263D20 (RtlEnoughStackSpaceForStackCapture.c)
 *     KeExpandKernelStackAndCallout @ 0x140263D70 (KeExpandKernelStackAndCallout.c)
 *     IovpLogStackCallout @ 0x140C4BEC0 (IovpLogStackCallout.c)
 */

_QWORD *__fastcall IovpLogStackTrace(__int64 a1)
{
  _QWORD *v2; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !IovIrpTraces || (VfRuleClasses & 0x400000) != 0 )
    return 0LL;
  v2 = (_QWORD *)(IovIrpTraces
                + ((unsigned __int64)(_InterlockedIncrement(&IovIrpTracesIndex) & (unsigned int)(IovIrpTracesLength - 1)) << 7));
  *v2 = a1;
  CurrentThread = KeGetCurrentThread();
  v2[1] = CurrentThread;
  *((_DWORD *)v2 + 4) = CurrentThread->WaitBlock[3].SpareLong;
  LOBYTE(CurrentThread) = KeGetCurrentIrql();
  *((_BYTE *)v2 + 20) = (_BYTE)CurrentThread;
  if ( (unsigned __int8)CurrentThread > 1u || (unsigned int)RtlEnoughStackSpaceForStackCapture() )
  {
    IovpLogStackCallout(v2);
  }
  else if ( KeExpandKernelStackAndCallout(IovpLogStackCallout, v2, 0xE30uLL) < 0 )
  {
    v2[3] = 0LL;
  }
  return v2;
}
