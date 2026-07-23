/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x14036F4A8
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x1404AB170 (MmGetImageFileSignatureInformation.c)
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 *     MiSectionDelete @ 0x140A9ADD0 (MiSectionDelete.c)
 *     MiDereferenceFailedControlArea @ 0x140B275E4 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 */

__int64 __fastcall MiDereferenceControlAreaBySection(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  KIRQL v4; // al
  __int64 v5; // rdx

  v3 = a2;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 24);
  LOBYTE(v5) = v4;
  *(_QWORD *)(a1 + 48) -= v3;
  return MiCheckControlArea(a1, v5);
}
