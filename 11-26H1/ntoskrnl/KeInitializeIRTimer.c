/*
 * XREFs of KeInitializeIRTimer @ 0x14044E4C8
 * Callers:
 *     ExAllocateTimerInternal2 @ 0x14044E590 (ExAllocateTimerInternal2.c)
 *     PopInitializeIRTimer @ 0x140603270 (PopInitializeIRTimer.c)
 *     PopPowerButtonWorkCallback @ 0x14060FE80 (PopPowerButtonWorkCallback.c)
 *     PopThermalZoneAdd @ 0x1407D4EA0 (PopThermalZoneAdd.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x1407DE22C (PopIdleInitAoAcDozeS4Timer.c)
 *     NtCreateTimer2 @ 0x140ABF460 (NtCreateTimer2.c)
 *     PopPowerAggregatorInitialize @ 0x140D11CE4 (PopPowerAggregatorInitialize.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14044E75C (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeIRTimer(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4, int a5)
{
  __int64 v7; // r9
  __int64 result; // rax
  unsigned __int8 v9; // dl

  v7 = a5 | 2u;
  if ( LOBYTE(ExSaPageGroupDescriptorArrayLock.UserWaitTime) && *((_DWORD *)&ExpIRTimerDescs + 6 * *a4 + 5) == 1 )
    v7 = a5 | 0x22u;
  KiInitializeTimer2(a1, a2, a3, v7);
  result = *(unsigned __int8 *)a4;
  *(_BYTE *)(a1 + 2) = result;
  v9 = *((_BYTE *)a4 + 2);
  *(_BYTE *)(a1 + 3) = v9;
  if ( (unsigned __int8)result >= 0x14u || v9 >= LOBYTE((&ExpIRTimerDescs)[3 * result + 1]) )
    __fastfail(5u);
  return result;
}
