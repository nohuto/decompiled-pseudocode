/*
 * XREFs of MiKernelStackVaToStackNode @ 0x1402A2024
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1402A0214 (MiInPageSingleKernelStack.c)
 *     MiEvaluatePageFileRead @ 0x140370440 (MiEvaluatePageFileRead.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

_QWORD *__fastcall MiKernelStackVaToStackNode(unsigned __int64 a1, int a2)
{
  KIRQL v3; // di
  _QWORD *v4; // rbx

  if ( a2 )
  {
    v3 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E34B98);
  }
  else
  {
    v3 = ExAcquireSpinLockShared(&dword_140E34B98);
  }
  v4 = (_QWORD *)qword_140E34B90;
  while ( v4 )
  {
    if ( a1 > v4[3] )
    {
      v4 = (_QWORD *)v4[1];
    }
    else
    {
      if ( a1 >= v4[4] )
        break;
      v4 = (_QWORD *)*v4;
    }
  }
  if ( v3 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E34B98);
  else
    ExReleaseSpinLockShared(&dword_140E34B98, v3);
  return v4;
}
