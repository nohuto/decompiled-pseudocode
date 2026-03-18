/*
 * XREFs of ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x140040C50
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x14003FE60 (xxxEnumDisplayMonitors.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x140040AD0 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x140040B68 (-IsInputSuppressRequested@CBaseInput@@IEBA_NXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400BAB1C (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1400BAC6C (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400BAE08 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAU_HEAD@@@Z @ 0x1401AC7C0 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAU_HEAD@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall GetDomainLockRef(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 UserSessionState; // rax
  __int64 v4; // rbx

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = UserSessionState + 42272;
  switch ( v2 )
  {
    case 0:
      return UserSessionState + 42272;
    case 1:
      return UserSessionState + 42280;
    case 2:
      return UserSessionState + 42400;
    case 4:
      return UserSessionState + 42288;
    case 3:
      return UserSessionState + 42296;
    case 5:
      return UserSessionState + 42304;
    case 8:
      return UserSessionState + 42312;
    case 9:
      return UserSessionState + 42320;
    case 11:
      return UserSessionState + 42344;
    case 10:
      return UserSessionState + 42328;
    case 13:
      return UserSessionState + 42352;
    case 12:
      return UserSessionState + 42368;
    case 14:
      return UserSessionState + 42336;
    case 15:
      return UserSessionState + 42376;
    case 16:
      return UserSessionState + 42384;
    case 17:
      return UserSessionState + 42392;
    case 6:
      return UserSessionState + 42408;
    case 7:
      return UserSessionState + 42416;
    case 18:
      return UserSessionState + 42424;
    case 19:
      return UserSessionState + 42432;
    case 20:
      return UserSessionState + 42440;
    case 21:
      return UserSessionState + 42448;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 274LL);
  return v4 + 88;
}
