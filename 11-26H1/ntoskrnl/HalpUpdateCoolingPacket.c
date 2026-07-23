/*
 * XREFs of HalpUpdateCoolingPacket @ 0x1405A3720
 * Callers:
 *     HalpStartPccCommand @ 0x14078A034 (HalpStartPccCommand.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 */

char __fastcall HalpUpdateCoolingPacket(__int64 a1)
{
  KIRQL v2; // al
  char v3; // di

  v2 = ExAcquireSpinLockExclusive(&unk_140F87A84);
  v3 = HalpAcquiredInterface;
  if ( a1 && !HalpAcquiredInterface )
  {
    HalpMemoryCoolingPacket = *(_OWORD *)a1;
    HalpAcquiredInterface = 1;
    xmmword_140F87AB0 = *(_OWORD *)(a1 + 16);
    xmmword_140F87AC0 = *(_OWORD *)(a1 + 32);
    xmmword_140F87AD0 = *(_OWORD *)(a1 + 48);
    xmmword_140F87AE0 = *(_OWORD *)(a1 + 64);
    xmmword_140F87AF0 = *(_OWORD *)(a1 + 80);
    xmmword_140F87B00 = *(_OWORD *)(a1 + 96);
    xmmword_140F87B10 = *(_OWORD *)(a1 + 112);
    qword_140F87B20 = *(_QWORD *)(a1 + 72);
  }
  ExReleaseSpinLockExclusive(&unk_140F87A84, v2);
  return v3;
}
