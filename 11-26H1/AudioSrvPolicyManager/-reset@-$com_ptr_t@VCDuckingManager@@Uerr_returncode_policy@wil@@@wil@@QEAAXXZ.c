/*
 * XREFs of ?reset@?$com_ptr_t@VCDuckingManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180047B90
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x180047388 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x1800476F0 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180046F30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISe_ea_180046F30.c)
 */

__int64 __fastcall wil::com_ptr_t<CDuckingManager,wil::err_returncode_policy>::reset(__int64 *a1, volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>::Release(
             result,
             a2);
  return result;
}
