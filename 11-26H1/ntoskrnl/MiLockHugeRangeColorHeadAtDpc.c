/*
 * XREFs of MiLockHugeRangeColorHeadAtDpc @ 0x140487E90
 * Callers:
 *     MiHugeRangeFreeToZero @ 0x1404878B0 (MiHugeRangeFreeToZero.c)
 *     MiStopHugePageAccessor @ 0x140487CF4 (MiStopHugePageAccessor.c)
 *     MiCanBeginHugeIoPageAccessor @ 0x14053141C (MiCanBeginHugeIoPageAccessor.c)
 *     MiMarkHugePfnBad @ 0x1406F144C (MiMarkHugePfnBad.c)
 *     MiMoveHibernateHugeRangesFreeToZeroCallback @ 0x1406F1EB0 (MiMoveHibernateHugeRangesFreeToZeroCallback.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140534804 (MiComputeHugeRangeColorHeadAtDpc.c)
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
