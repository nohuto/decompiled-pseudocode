/*
 * XREFs of MiCreateKernelStackNode @ 0x14050DB4C
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x14036A700 (MiOutPageSingleKernelStack.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 */

__int64 __fastcall MiCreateKernelStackNode(_WORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  bool v5; // bl
  _QWORD *v6; // rdi
  KIRQL v7; // al
  _QWORD *v8; // rdx
  KIRQL v9; // si
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rax

  result = ExAllocatePoolMm(
             64LL,
             0x30uLL,
             1934321997,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v5 = 0;
  v6 = (_QWORD *)result;
  if ( !result )
    return result;
  *(_QWORD *)(result + 24) = *a2 - 1LL;
  *(_QWORD *)(result + 32) = a2[1];
  *(_WORD *)(result + 40) = *a1;
  v7 = ExAcquireSpinLockExclusive(&dword_140E34D18);
  v8 = (_QWORD *)qword_140E34D10;
  v9 = v7;
  if ( !qword_140E34D10 )
    goto LABEL_11;
  v10 = v6[3];
  while ( v10 <= v8[3] && v10 < v8[4] )
  {
    v11 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_11;
LABEL_9:
    v8 = v11;
  }
  v11 = (_QWORD *)v8[1];
  if ( v11 )
    goto LABEL_9;
  v5 = 1;
LABEL_11:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E34D10, (unsigned __int64)v8, v5, v6);
  if ( v9 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E34D18);
  else
    ExReleaseSpinLockExclusive(&dword_140E34D18, v9);
  return (__int64)v6;
}
