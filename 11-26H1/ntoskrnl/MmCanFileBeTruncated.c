/*
 * XREFs of MmCanFileBeTruncated @ 0x1404A5420
 * Callers:
 *     CcPurgeCacheSection @ 0x14039D060 (CcPurgeCacheSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     MiCanFileBeTruncatedInternal @ 0x1404A5164 (MiCanFileBeTruncatedInternal.c)
 */

BOOLEAN __stdcall MmCanFileBeTruncated(PSECTION_OBJECT_POINTERS SectionPointer, PLARGE_INTEGER NewFileSize)
{
  LONGLONG QuadPart; // rax
  volatile signed __int32 *v3; // rax
  KIRQL OldIrql; // [rsp+40h] [rbp+8h] BYREF
  LONGLONG v6; // [rsp+48h] [rbp+10h] BYREF

  OldIrql = 0;
  v6 = 0LL;
  if ( NewFileSize )
  {
    QuadPart = NewFileSize->QuadPart;
    NewFileSize = (PLARGE_INTEGER)&v6;
    v6 = QuadPart;
  }
  v3 = MiCanFileBeTruncatedInternal(SectionPointer, (unsigned __int64 *)&NewFileSize->QuadPart, 0, 0, &OldIrql);
  if ( OldIrql == 17 )
    return 0;
  if ( v3 )
    ExReleaseSpinLockExclusive(v3 + 18, OldIrql);
  return 1;
}
