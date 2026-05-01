/*
 * XREFs of ?_SubscribeToWNF@CImmersiveApplicationTransitionHelper@@AEAAJXZ @ 0x1801B8378
 * Callers:
 *     ?Initialize@CImmersiveApplicationTransitionHelper@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801B82C0 (-Initialize@CImmersiveApplicationTransitionHelper@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CImmersiveApplicationTransitionHelper::_SubscribeToWNF(CImmersiveApplicationTransitionHelper *this)
{
  int v2; // eax
  unsigned int v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  v2 = RtlQueryWnfStateData(
         &v4,
         WNF_IMSN_LAUNCHERVISIBILITY,
         CImmersiveApplicationTransitionHelper::ImmersiveLauncherWNFCallback,
         this,
         0LL);
  if ( v2 >= 0 )
    v2 = RtlSubscribeWnfStateChangeNotification(
           (char *)this + 88,
           WNF_IMSN_LAUNCHERVISIBILITY,
           v4,
           CImmersiveApplicationTransitionHelper::ImmersiveLauncherWNFCallback);
  return v2 | 0x10000000;
}
