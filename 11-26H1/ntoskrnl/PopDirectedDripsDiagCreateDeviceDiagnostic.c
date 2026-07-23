/*
 * XREFs of PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x140781C04
 * Callers:
 *     PopDirectedDripsDiagGetOrCreateDeviceDiagnostic @ 0x140B0DFFC (PopDirectedDripsDiagGetOrCreateDeviceDiagnostic.c)
 * Callees:
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x1407E7188 (PopDirectedDripsDiagCreateDeviceDescription.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x1407E732C (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall PopDirectedDripsDiagCreateDeviceDiagnostic(__int64 a1)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rbx
  _QWORD *StackLimit; // rax

  Pool2 = ExAllocatePool2(0x100uLL);
  v3 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_DWORD *)(Pool2 + 24) = LODWORD(PopDirectedDripsDiagLock.SavedApcState.ApcListHead[0].Flink)++;
    *(_DWORD *)(Pool2 + 148) = -1;
    if ( (int)PopDirectedDripsDiagCreateDeviceDescription(a1, Pool2) < 0 )
    {
      PopDirectedDripsDiagFreeDeviceDiagnostic(v3);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 776) = v3;
      StackLimit = PopDirectedDripsDiagLock.StackLimit;
      if ( *(struct _KTHREAD **)PopDirectedDripsDiagLock.StackLimit != (struct _KTHREAD *)&PopDirectedDripsDiagLock.InitialStack )
        __fastfail(3u);
      *v3 = &PopDirectedDripsDiagLock.InitialStack;
      v3[1] = StackLimit;
      *StackLimit = v3;
      PopDirectedDripsDiagLock.StackLimit = v3;
    }
  }
  return v3;
}
