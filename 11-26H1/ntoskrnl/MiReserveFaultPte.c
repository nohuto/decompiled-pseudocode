/*
 * XREFs of MiReserveFaultPte @ 0x1406F77D0
 * Callers:
 *     MiValidateImagePfn @ 0x140B04B5C (MiValidateImagePfn.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlFindClearBitsAndSet @ 0x1403586A0 (RtlFindClearBitsAndSet.c)
 */

__int64 MiReserveFaultPte()
{
  KIRQL v0; // di
  __int64 ClearBitsAndSet; // rbx
  RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 16LL;
  BitMapHeader.Buffer = (unsigned int *)byte_140E35FD4;
  v0 = ExAcquireSpinLockExclusive(&dword_140E35FD0);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, 1u, 0);
  if ( v0 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E35FD0);
  else
    ExReleaseSpinLockExclusive(&dword_140E35FD0, v0);
  if ( (_DWORD)ClearBitsAndSet == -1 )
    return 0LL;
  else
    return qword_140E35FC8 + 8 * ClearBitsAndSet;
}
