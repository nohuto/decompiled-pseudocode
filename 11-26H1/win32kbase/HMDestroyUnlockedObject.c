/*
 * XREFs of HMDestroyUnlockedObject @ 0x1401DF3D0
 * Callers:
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401D6C20 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1401EA590 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400489B0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D096C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall HMDestroyUnlockedObject(struct _HANDLEENTRY *a1, int a2, int a3)
{
  int v4; // edx
  int v5; // r8d

  if ( !*(_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 19792) && !IS_USERCRIT_OWNED_EXCLUSIVE() )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 4093);
  HMDestroyUnlockedObjectWorker(a1, v4, v5);
}
