/*
 * XREFs of ACPIEcMaskInterrupt @ 0x140020410
 * Callers:
 *     ACPIEcServiceDevice @ 0x14001F19C (ACPIEcServiceDevice.c)
 *     ACPIEcGpioServiceRoutine @ 0x14004B360 (ACPIEcGpioServiceRoutine.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     ACPIGpeEnableDisableEvents @ 0x140021160 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToGpeRegister @ 0x14002131C (ACPIGpeIndexToGpeRegister.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall ACPIEcMaskInterrupt(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v2; // rbx
  KIRQL v3; // di
  __int64 v4; // rcx
  char v5; // r9
  char v6; // r9
  int v7; // edx
  _UNKNOWN **result; // rax

  if ( *(_BYTE *)(a1 + 2221) )
    return (_UNKNOWN **)HalPrivateDispatchTable[60](*(unsigned int *)(a1 + 2316), 1LL);
  v1 = **(_DWORD **)(a1 + 72);
  v2 = (unsigned int)ACPIGpeIndexToGpeRegister(v1);
  v3 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0LL);
  v4 = v1 & 7;
  v5 = 1 << v4;
  LOBYTE(v4) = 1;
  v6 = ~v5;
  *((_BYTE *)GpeEnable + v2) &= v6;
  *((_BYTE *)GpeCurEnable + v2) &= v6;
  ACPIGpeEnableDisableEvents(v4);
  KeReleaseSpinLock(&GpeTableLock, v3);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_D(
                          WPP_GLOBAL_Control->DeviceExtension,
                          v7,
                          14,
                          12,
                          (__int64)&WPP_7b0d4207db2a3169cd3bb4e871adee9d_Traceguids,
                          v1);
  }
  return result;
}
