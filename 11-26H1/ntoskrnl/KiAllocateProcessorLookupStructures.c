/*
 * XREFs of KiAllocateProcessorLookupStructures @ 0x1405E9DF4
 * Callers:
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 KiAllocateProcessorLookupStructures()
{
  struct _KTHREAD *Pool2; // rax
  unsigned int v1; // ebx
  struct _KTHREAD *v2; // rdi
  _OWORD *v3; // rdx
  __int64 v4; // r9
  __int128 v5; // xmm1
  _DWORD *v6; // rax

  Pool2 = (struct _KTHREAD *)ExAllocatePool2(0x48uLL);
  v1 = 0;
  v2 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v3 = &unk_140F267E4;
  v4 = 2LL;
  do
  {
    *(_OWORD *)&Pool2->Header.Lock = *v3;
    *(_OWORD *)&Pool2->Header.WaitListHead.Blink = v3[1];
    *(_OWORD *)&Pool2->QuantumTarget = v3[2];
    *(_OWORD *)&Pool2->StackLimit = v3[3];
    *(_OWORD *)&Pool2->ThreadLock = v3[4];
    *(_OWORD *)&Pool2->CurrentRunTime = v3[5];
    *(_OWORD *)&Pool2->StateSaveArea = v3[6];
    Pool2 = (struct _KTHREAD *)((char *)Pool2 + 128);
    v5 = v3[7];
    v3 += 8;
    *(_OWORD *)&Pool2[-1].Padding[3] = v5;
    --v4;
  }
  while ( v4 );
  v6 = (_DWORD *)ExAllocatePool2(0x48uLL);
  if ( v6 )
  {
    *v6 = dword_140F267E0;
    KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread = v2;
    *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
