/*
 * XREFs of MiDecommitRemoveEnclavePageForce @ 0x140343E60
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140342EB4 (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiDeleteEnclavePage @ 0x140342680 (MiDeleteEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x140343280 (KeRemoveEnclavePage.c)
 *     KeOutPageEnclavePage @ 0x140510E6C (KeOutPageEnclavePage.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405F1270 (KeCreateEnclaveMetadataPage.c)
 *     MiGetExceptionInfo @ 0x1406F413C (MiGetExceptionInfo.c)
 */

__int64 __fastcall MiDecommitRemoveEnclavePageForce(__int64 *a1, unsigned __int64 a2)
{
  int v3; // ebx
  __int64 v6; // [rsp+70h] [rbp+18h]

  v6 = *a1;
  do
  {
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)&stru_140E366D8.CycleTime);
    v3 = KeOutPageEnclavePage(a1[9], *(_QWORD *)(v6 + 96), a1[2]);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&stru_140E366D8.CycleTime);
  }
  while ( v3 == -1073741802 );
  if ( v3 < 0 )
    KeBugCheckEx(0x1Au, 0x51602uLL, a1[9], v3, 0LL);
  return MiDeleteEnclavePage(a2, 1LL);
}
