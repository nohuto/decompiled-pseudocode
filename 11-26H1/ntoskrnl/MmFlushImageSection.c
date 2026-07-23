/*
 * XREFs of MmFlushImageSection @ 0x140494970
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x1404A5164 (MiCanFileBeTruncatedInternal.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAttemptSectionDelete @ 0x1404B8D88 (MiAttemptSectionDelete.c)
 */

BOOLEAN __stdcall MmFlushImageSection(PSECTION_OBJECT_POINTERS SectionObjectPointer, MMFLUSH_TYPE FlushType)
{
  KIRQL v4; // bl
  volatile signed __int32 *DataSectionObject; // rsi
  volatile signed __int32 *ImageSectionObject; // rdi
  __int64 v7; // rdx
  volatile LONG *v9; // rcx

  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_140E2C940);
    if ( FlushType )
      goto LABEL_8;
    DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->DataSectionObject;
    if ( !SectionObjectPointer->DataSectionObject )
      goto LABEL_8;
    if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
      goto LABEL_11;
    if ( *((_QWORD *)DataSectionObject + 6)
      || (DataSectionObject[14] & 2) != 0
      || *((_QWORD *)DataSectionObject + 14) > 1uLL )
    {
      break;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
LABEL_8:
    ImageSectionObject = (volatile signed __int32 *)SectionObjectPointer->ImageSectionObject;
    if ( !ImageSectionObject )
    {
      if ( v4 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C940);
      else
        ExReleaseSpinLockExclusive(&dword_140E2C940, v4);
      return 1;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(ImageSectionObject + 18) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C940);
      LOBYTE(v7) = v4;
      return MiAttemptSectionDelete(ImageSectionObject, v7, 0LL);
    }
LABEL_11:
    if ( v4 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C940);
    else
      ExReleaseSpinLockExclusive(&dword_140E2C940, v4);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C940);
  v9 = DataSectionObject + 18;
  if ( v4 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  else
    ExReleaseSpinLockExclusive(v9, v4);
  return 0;
}
