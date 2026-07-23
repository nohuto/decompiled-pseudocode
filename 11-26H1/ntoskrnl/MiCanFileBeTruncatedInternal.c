/*
 * XREFs of MiCanFileBeTruncatedInternal @ 0x1404A5164
 * Callers:
 *     MmPurgeSection @ 0x14039E9D4 (MmPurgeSection.c)
 *     MmCanFileBeTruncated @ 0x1404A5420 (MmCanFileBeTruncated.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiEndingOffset @ 0x14036E8D0 (MiEndingOffset.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiFindLastSubsection @ 0x1404466F0 (MiFindLastSubsection.c)
 *     MmFlushImageSection @ 0x140494970 (MmFlushImageSection.c)
 */

volatile signed __int32 *__fastcall MiCanFileBeTruncatedInternal(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        unsigned __int64 *a2,
        int a3,
        int a4,
        KIRQL *a5)
{
  bool v9; // zf
  KIRQL v10; // al
  KIRQL v11; // bl
  volatile signed __int32 *DataSectionObject; // rsi
  volatile LONG *v13; // rcx
  __int64 LastSubsection; // r8
  __int64 i; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax

  while ( 1 )
  {
    v9 = SectionObjectPointer->ImageSectionObject == 0LL;
    *a5 = 17;
    if ( v9 )
    {
      v10 = ExAcquireSpinLockExclusive(&dword_140E2C940);
      v11 = v10;
      if ( !SectionObjectPointer->ImageSectionObject )
        goto LABEL_8;
      if ( v10 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C940);
      else
        ExReleaseSpinLockExclusive(&dword_140E2C940, v10);
    }
    if ( !MmFlushImageSection(SectionObjectPointer, MmFlushForWrite) )
      return 0LL;
    v11 = ExAcquireSpinLockExclusive(&dword_140E2C940);
LABEL_8:
    DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->DataSectionObject;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      if ( v11 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C940);
      else
        ExReleaseSpinLockExclusive(&dword_140E2C940, v11);
      *a5 = 0;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
      break;
    if ( v11 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C940);
    else
      ExReleaseSpinLockExclusive(&dword_140E2C940, v11);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C940);
  if ( !(DataSectionObject[14] & 1 | ((DataSectionObject[14] & 2) != 0))
    && (*((_QWORD *)DataSectionObject + 14) <= 1uLL
     || (DataSectionObject[14] & 0x20) == 0 && (DataSectionObject[14] & 8) != 0
     || a4) )
  {
    if ( !*((_QWORD *)DataSectionObject + 6) || a3 && (!*((_QWORD *)DataSectionObject + 5) || a4) )
    {
LABEL_33:
      *a5 = v11;
      return DataSectionObject;
    }
    if ( a2 )
    {
      LastSubsection = (__int64)(DataSectionObject + 32);
      if ( *((_QWORD *)DataSectionObject + 8) )
        LastSubsection = MiFindLastSubsection((__int64)DataSectionObject, 1LL, LastSubsection);
      for ( i = *(_QWORD *)(LastSubsection + 16); i; i = *(_QWORD *)(i + 16) )
        LastSubsection = i;
      v16 = MiEndingOffset((_DWORD *)LastSubsection);
      if ( *a2 >= v16 )
      {
        v17 = (v16 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( *a2 < v17 )
          *a2 = v17;
        goto LABEL_33;
      }
    }
  }
  v13 = DataSectionObject + 18;
  if ( v11 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v13);
  else
    ExReleaseSpinLockExclusive(v13, v11);
  return 0LL;
}
