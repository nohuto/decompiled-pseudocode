/*
 * XREFs of ACPIDeviceCompletePhase3Off @ 0x14003B300
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x14001AD90 (ACPIDevicePowerProcessPhase3.c)
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1400273F0 (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_qL @ 0x14003B520 (WPP_RECORDER_SF_qL.c)
 */

void __fastcall ACPIDeviceCompletePhase3Off(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  KIRQL v6; // si
  signed __int32 v7; // edx
  _QWORD **v8; // rbx
  _QWORD *i; // r8
  __int64 v10; // rcx
  char v11; // dl
  _QWORD *v12; // r10
  char v13; // al
  __int64 v14; // r9
  char v15; // [rsp+30h] [rbp-18h]

  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      15,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a4,
      v15);
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFF7FFuLL);
  if ( v5 < 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(a4 + 16), 0x10000uLL);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFFFEFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFEFFFFuLL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFFFF7uLL);
  v7 = *(_DWORD *)(a4 + 68);
  --Phase3PendingOffWorkCount;
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 64), v7);
  v8 = (_QWORD **)(a4 + 48);
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v14 = *(i - 1);
    v13 = 1;
    v12 = *(_QWORD **)(v14 + 440);
    if ( v12 )
    {
      do
      {
        v10 = v12[1];
        v11 = 0;
        v12 = (_QWORD *)*v12;
        if ( !*(_DWORD *)(v10 + 24) )
          v11 = v13;
        v13 = v11;
      }
      while ( v12 );
      if ( v11 )
        *(_QWORD *)(v14 + 1008) |= 0x10000uLL;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v6);
}
