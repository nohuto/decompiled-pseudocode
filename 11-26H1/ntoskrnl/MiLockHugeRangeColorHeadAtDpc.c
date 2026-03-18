/*
 * XREFs of MiLockHugeRangeColorHeadAtDpc @ 0x14048E350
 * Callers:
 *     MiHugeRangeFreeToZero @ 0x14048DD70 (MiHugeRangeFreeToZero.c)
 *     MiStopHugePageAccessor @ 0x14048E1B4 (MiStopHugePageAccessor.c)
 *     MiCanBeginHugeIoPageAccessor @ 0x14052EEFC (MiCanBeginHugeIoPageAccessor.c)
 *     MiMarkHugePfnBad @ 0x1406EC7AC (MiMarkHugePfnBad.c)
 *     MiMoveHibernateHugeRangesFreeToZeroCallback @ 0x1406ED210 (MiMoveHibernateHugeRangesFreeToZeroCallback.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140532364 (MiComputeHugeRangeColorHeadAtDpc.c)
 */

volatile signed __int32 *MiLockHugeRangeColorHeadAtDpc()
{
  volatile signed __int32 *v0; // rbx
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v0 = (volatile signed __int32 *)MiComputeHugeRangeColorHeadAtDpc();
  v2 = 0;
  while ( _interlockedbittestandset64(v0, 3uLL) )
  {
    do
      KeYieldProcessorEx(&v2);
    while ( (*(_QWORD *)v0 & 8) != 0 );
  }
  return v0;
}
