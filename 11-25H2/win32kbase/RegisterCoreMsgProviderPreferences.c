/*
 * XREFs of RegisterCoreMsgProviderPreferences @ 0x140144A70
 * Callers:
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1401448FC (-Initialize@CInputConfig@@SAJXZ.c)
 *     ?Initialize@CActivationObjectManager@@SAJXZ @ 0x140144994 (-Initialize@CActivationObjectManager@@SAJXZ.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x14015B2BC (-Initialize@CCursorClip@@SAJXZ.c)
 *     InitializeContext @ 0x1402162C0 (InitializeContext.c)
 * Callees:
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x140144ADC (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 */

__int64 __fastcall RegisterCoreMsgProviderPreferences(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // esi
  unsigned int v8; // ebp
  __int64 UserSessionState; // rax

  v7 = a2;
  v8 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return InputExtensibilityCallout::RegisterCoreMsgProvider(*(_QWORD *)(UserSessionState + 16408), v8, v7, a3, a4, a5);
}
