/*
 * XREFs of PoFxNotifySurprisePowerOn @ 0x1403C1310
 * Callers:
 *     DifPoFxNotifySurprisePowerOnWrapper @ 0x140697050 (DifPoFxNotifySurprisePowerOnWrapper.c)
 * Callees:
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     PopFxLockDevice @ 0x1403C13A4 (PopFxLockDevice.c)
 *     PopPepSurprisePowerOn @ 0x1403C145C (PopPepSurprisePowerOn.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140606610 (PopDirectedDripsStartDisengageTimer.c)
 */

int __fastcall PoFxNotifySurprisePowerOn(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi

  v3 = a1 + 312;
  v4 = a1;
  if ( a1 )
    a1 = *(_QWORD *)(*(_QWORD *)v3 + 40LL);
  LOBYTE(a3) = 1;
  v5 = PopFxLockDevice(a1, 1LL, a3);
  v6 = v5;
  if ( v5 )
  {
    PopPepSurprisePowerOn(*(_QWORD *)(v5 + 56));
    LODWORD(v5) = PopFxDereferenceDevice(v6, 1);
    if ( v4 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)v3 + 40LL);
      if ( v5 )
      {
        LODWORD(v5) = *(_DWORD *)(v5 + 760);
        if ( (v5 & 0x30000) != 0 )
          LODWORD(v5) = PopDirectedDripsStartDisengageTimer(1LL);
      }
    }
  }
  return v5;
}
