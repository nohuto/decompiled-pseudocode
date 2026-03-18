/*
 * XREFs of MiDecommitRemoveEnclavePageForce @ 0x140341DE0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140340E34 (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiDeleteEnclavePage @ 0x140340600 (MiDeleteEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x140341200 (KeRemoveEnclavePage.c)
 *     KeOutPageEnclavePage @ 0x1405173FC (KeOutPageEnclavePage.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405EE900 (KeCreateEnclaveMetadataPage.c)
 *     MiGetExceptionInfo @ 0x1406EF49C (MiGetExceptionInfo.c)
 */

__int64 __fastcall MiDecommitRemoveEnclavePageForce(__int64 *a1, unsigned __int64 a2)
{
  int v3; // ebx
  __int64 v6; // [rsp+70h] [rbp+18h]

  v6 = *a1;
  do
  {
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)&stru_140E36558.CycleTime);
    v3 = KeOutPageEnclavePage(a1[9], *(_QWORD *)(v6 + 96), a1[2]);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&stru_140E36558.CycleTime);
  }
  while ( v3 == -1073741802 );
  if ( v3 < 0 )
    KeBugCheckEx(0x1Au, 0x51602uLL, a1[9], v3, 0LL);
  return MiDeleteEnclavePage(a2, 1LL);
}
