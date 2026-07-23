/*
 * XREFs of MiReserveFaultPte @ 0x1406FC440
 * Callers:
 *     MiValidateImagePfn @ 0x140B0676C (MiValidateImagePfn.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 */

__int64 MiReserveFaultPte()
{
  KIRQL v0; // di
  __int64 ClearBitsAndSet; // rbx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 16LL;
  BitMapHeader.Buffer = (unsigned int *)byte_140E36154;
  v0 = ExAcquireSpinLockExclusive(&dword_140E36150);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, 1u, 0);
  if ( v0 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36150);
  else
    ExReleaseSpinLockExclusive(&dword_140E36150, v0);
  if ( (_DWORD)ClearBitsAndSet == -1 )
    return 0LL;
  else
    return qword_140E36148 + 8 * ClearBitsAndSet;
}
