/*
 * XREFs of ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1400DF080
 * Callers:
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAU_HEAD@@@Z @ 0x1401CEC50 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAU_HEAD@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall GetDomainLockRef(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rdi

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v5 = UserSessionState + 42296;
  switch ( a1 )
  {
    case 0:
      return UserSessionState + 42296;
    case 1:
      return UserSessionState + 42304;
    case 2:
      return UserSessionState + 42424;
    case 4:
      return UserSessionState + 42312;
    case 3:
      return UserSessionState + 42320;
    case 5:
      return UserSessionState + 42328;
    case 8:
      return UserSessionState + 42336;
    case 9:
      return UserSessionState + 42344;
    case 11:
      return UserSessionState + 42368;
    case 10:
      return UserSessionState + 42352;
    case 13:
      return UserSessionState + 42376;
    case 12:
      return UserSessionState + 42392;
    case 14:
      return UserSessionState + 42360;
    case 15:
      return UserSessionState + 42400;
    case 16:
      return UserSessionState + 42408;
    case 17:
      return UserSessionState + 42416;
    case 6:
      return UserSessionState + 42432;
    case 7:
      return UserSessionState + 42440;
    case 18:
      return UserSessionState + 42448;
    case 19:
      return UserSessionState + 42456;
    case 20:
      return UserSessionState + 42464;
    case 21:
      return UserSessionState + 42472;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 274LL);
  return v5 + 88;
}
