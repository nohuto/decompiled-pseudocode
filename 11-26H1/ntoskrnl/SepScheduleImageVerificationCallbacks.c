/*
 * XREFs of SepScheduleImageVerificationCallbacks @ 0x140B1633C
 * Callers:
 *     SeValidateImageHeader @ 0x14099E0EC (SeValidateImageHeader.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepScheduleImageVerificationCallbacks(__int64 a1, int a2, int a3, int a4)
{
  __int64 Pool2; // rax
  unsigned int v9; // ebx

  Pool2 = ExAllocatePool2(0x40uLL);
  v9 = 0;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 24) = Pool2;
    *(_QWORD *)(Pool2 + 16) = SepImageVerificationCallbackWorker;
    *(_QWORD *)Pool2 = 0LL;
    *(_DWORD *)(Pool2 + 32) = a3;
    *(_DWORD *)(Pool2 + 36) = a4;
    *(_QWORD *)(Pool2 + 40) = a1;
    *(_DWORD *)(Pool2 + 48) = a2;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
