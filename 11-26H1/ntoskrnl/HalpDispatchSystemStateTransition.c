/*
 * XREFs of HalpDispatchSystemStateTransition @ 0x1404FEE50
 * Callers:
 *     HalpDispatchPower @ 0x140C08350 (HalpDispatchPower.c)
 * Callees:
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x1404FB490 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalpBuildResumeStructures @ 0x140BEAFB0 (HalpBuildResumeStructures.c)
 *     HalpFreeResumeStructures @ 0x140BEB000 (HalpFreeResumeStructures.c)
 *     HalpInterruptMaskAcpi @ 0x140C08BC0 (HalpInterruptMaskAcpi.c)
 */

__int64 __fastcall HalpDispatchSystemStateTransition(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // di
  int v3; // eax
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_BYTE *)(v1 + 1);
  if ( *(_DWORD *)(v1 + 24) == 1 )
  {
    if ( HalpReEnableDiagnosticEventsOnResume )
    {
      HalpDiagnosticEventsRegistered = 1;
      HalpReEnableDiagnosticEventsOnResume = 0;
    }
    if ( LOBYTE(HalpDeviceBlockUnblockPushLock.ReadTransferCount) )
    {
      HalpFreeResumeStructures();
      LOBYTE(HalpDeviceBlockUnblockPushLock.ReadTransferCount) = 0;
    }
    HalpEfiLockOutRuntimeCallsForSystemSleep(1);
    if ( (HalpPlatformFlags & 1) != 0 )
    {
      LOBYTE(v4) = 1;
      goto LABEL_19;
    }
  }
  else
  {
    if ( *(_DWORD *)(v1 + 24) != 2 && *(_DWORD *)(v1 + 24) != 3 && (unsigned int)(*(_DWORD *)(v1 + 24) - 4) > 1 )
      return 0LL;
    if ( !LOBYTE(HalpDeviceBlockUnblockPushLock.ReadTransferCount) )
    {
      v3 = HalpBuildResumeStructures();
      if ( v3 < 0 )
      {
        if ( v2 == 2 )
          KeBugCheckEx(0x5Cu, 0x10CuLL, v3, 0LL, 0LL);
        return 0LL;
      }
      LOBYTE(HalpDeviceBlockUnblockPushLock.ReadTransferCount) = 1;
    }
    if ( v2 == 2 )
    {
      HalpEfiLockOutRuntimeCallsForSystemSleep(0);
      if ( (HalpPlatformFlags & 1) != 0 )
      {
        v4 = 0LL;
LABEL_19:
        HalpInterruptMaskAcpi(v4);
      }
    }
  }
  return 0LL;
}
