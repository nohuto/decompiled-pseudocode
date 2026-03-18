/*
 * XREFs of HalpUpdateCoolingPacket @ 0x1405A0F10
 * Callers:
 *     HalpStartPccCommand @ 0x140787504 (HalpStartPccCommand.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 */

char __fastcall HalpUpdateCoolingPacket(__int64 a1)
{
  KIRQL v2; // al
  char v3; // di

  v2 = ExAcquireSpinLockExclusive(&HalpMemoryCoolingPacketLock);
  v3 = HalpAcquiredInterface;
  if ( a1 && !HalpAcquiredInterface )
  {
    xmmword_140F876A0 = *(_OWORD *)a1;
    HalpAcquiredInterface = 1;
    xmmword_140F876B0 = *(_OWORD *)(a1 + 16);
    xmmword_140F876C0 = *(_OWORD *)(a1 + 32);
    xmmword_140F876D0 = *(_OWORD *)(a1 + 48);
    xmmword_140F876E0 = *(_OWORD *)(a1 + 64);
    xmmword_140F876F0 = *(_OWORD *)(a1 + 80);
    xmmword_140F87700 = *(_OWORD *)(a1 + 96);
    xmmword_140F87710 = *(_OWORD *)(a1 + 112);
    qword_140F87720 = *(_QWORD *)(a1 + 72);
  }
  ExReleaseSpinLockExclusive(&HalpMemoryCoolingPacketLock, v2);
  return v3;
}
