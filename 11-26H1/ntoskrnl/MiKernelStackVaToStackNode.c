/*
 * XREFs of MiKernelStackVaToStackNode @ 0x1402A1574
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14029F764 (MiInPageSingleKernelStack.c)
 *     MiEvaluatePageFileRead @ 0x1403721F0 (MiEvaluatePageFileRead.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

_QWORD *__fastcall MiKernelStackVaToStackNode(unsigned __int64 a1, int a2)
{
  KIRQL v3; // di
  _QWORD *v4; // rbx

  if ( a2 )
  {
    v3 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E34D18);
  }
  else
  {
    v3 = ExAcquireSpinLockShared(&dword_140E34D18);
  }
  v4 = (_QWORD *)qword_140E34D10;
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
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E34D18);
  else
    ExReleaseSpinLockShared(&dword_140E34D18, v3);
  return v4;
}
