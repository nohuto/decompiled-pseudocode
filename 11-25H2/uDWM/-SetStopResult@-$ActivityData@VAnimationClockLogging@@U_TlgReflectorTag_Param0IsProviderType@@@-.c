/*
 * XREFs of ?SetStopResult@?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800824D0
 * Callers:
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004C314 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18004CC2C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 */

bool __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        __int64 a1,
        int a2,
        int *a3)
{
  int v3; // r9d
  const struct wil::FailureInfo *v4; // rdx
  int v5; // eax
  _BYTE v7[168]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = *(_DWORD *)(a1 + 248);
  if ( v3 < 1 )
  {
    memset_0(v7, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v7, v4);
  }
  v5 = *(_DWORD *)(a1 + 72);
  if ( v5 >= 0 )
  {
    *(_DWORD *)(a1 + 72) = a2;
    v5 = a2;
  }
  if ( a3 )
    *a3 = v5;
  *(_DWORD *)(a1 + 248) = v3 - 1;
  return v3 == 1;
}
