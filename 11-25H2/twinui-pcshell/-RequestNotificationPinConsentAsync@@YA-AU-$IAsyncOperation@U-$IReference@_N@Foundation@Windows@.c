/*
 * XREFs of ?RequestNotificationPinConsentAsync@@YA?AU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@Z @ 0x1805CCBF4
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x1805C4640 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     RequestNotificationPinConsentAsync$_InitCoro$2 @ 0x1805CC2A8 (RequestNotificationPinConsentAsync$_InitCoro$2.c)
 */

__int64 *__fastcall RequestNotificationPinConsentAsync(__int64 *a1, __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+320h] [rbp+8h] BYREF

  v4 = operator new(0x2F0uLL);
  v6 = 0;
  RequestNotificationPinConsentAsync__InitCoro_2(&v6, (__int64)v4 + 112, a1, a2);
  return a1;
}
