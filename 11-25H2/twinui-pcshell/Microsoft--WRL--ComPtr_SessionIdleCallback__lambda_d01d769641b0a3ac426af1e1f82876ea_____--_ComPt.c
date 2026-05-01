/*
 * XREFs of Microsoft::WRL::ComPtr_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____::_ComPtr_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____ @ 0x1800B9634
 * Callers:
 *     _DesktopSingleViewShellExperiencePersonality::RegisterSessionIdleDetector_::_1_::dtor$1 @ 0x1806AA8A7 (_DesktopSingleViewShellExperiencePersonality--RegisterSessionIdleDetector_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052FA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonito.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____::_ComPtr_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveMonitorNotification>::Release(result);
  }
  return result;
}
