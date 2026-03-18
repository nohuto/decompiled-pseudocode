/*
 * XREFs of RegisterCoreMsgProviderPreferences @ 0x14017FE40
 * Callers:
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x14017FDA4 (-Initialize@CInputConfig@@SAJXZ.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x14019B430 (-Initialize@CCursorClip@@SAJXZ.c)
 *     InitializeContext @ 0x14021B720 (InitializeContext.c)
 * Callees:
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x14017FEAC (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 */

__int64 __fastcall RegisterCoreMsgProviderPreferences(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  return InputExtensibilityCallout::RegisterCoreMsgProvider(*(_QWORD *)(UserSessionState + 16400), a1, a2, a3, a4, a5);
}
