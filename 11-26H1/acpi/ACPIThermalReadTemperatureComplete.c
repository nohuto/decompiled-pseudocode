/*
 * XREFs of ACPIThermalReadTemperatureComplete @ 0x14006A660
 * Callers:
 *     <none>
 * Callees:
 *     ACPIThermalLoop @ 0x140029C00 (ACPIThermalLoop.c)
 *     ACPIThermalUpdateTemperature @ 0x14002A484 (ACPIThermalUpdateTemperature.c)
 */

__int64 __fastcall ACPIThermalReadTemperatureComplete(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // rbp
  KSPIN_LOCK *v6; // rdi
  KIRQL v7; // al
  int v8; // ebx
  bool v9; // bl
  int v10; // edx

  v3 = *(_DWORD *)(a2 + 48);
  v5 = *(_QWORD *)(a3 + 200);
  if ( v3 == -1073741536 )
  {
    v6 = (KSPIN_LOCK *)(a3 + 184);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a3 + 184));
    v8 = *(_DWORD *)(a3 + 192);
    KeReleaseSpinLock(v6, v7);
    v9 = (v8 & 0x4000000) == 0;
  }
  else
  {
    v9 = 1;
    if ( v3 >= 0 )
    {
      v10 = *(_DWORD *)(v5 + 224);
      *(_BYTE *)(v5 + 272) = 0;
      ACPIThermalUpdateTemperature(a3, v10);
    }
    else
    {
      *(_BYTE *)(v5 + 272) = 1;
    }
  }
  KeSetEvent((PRKEVENT)(v5 + 248), 0, 0);
  if ( v9 )
    ACPIThermalLoop(a3, 536871424LL);
  return 3221225494LL;
}
