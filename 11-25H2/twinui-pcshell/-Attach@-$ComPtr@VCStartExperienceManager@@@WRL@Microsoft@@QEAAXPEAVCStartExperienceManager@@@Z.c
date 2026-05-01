/*
 * XREFs of ?Attach@?$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@QEAAXPEAVCStartExperienceManager@@@Z @ 0x18037FB40
 * Callers:
 *     ??$Make@VCStartExperienceManager@@_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCStartExperienceManager@@@12@$$QEA_N@Z @ 0x1802BFB08 (--$Make@VCStartExperienceManager@@_N@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCStartExperienceManag.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B1DE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSit.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CStartExperienceManager>::Attach(
        volatile signed __int64 **a1,
        volatile signed __int64 *a2)
{
  volatile signed __int64 *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release(v4);
  *a1 = a2;
  return result;
}
