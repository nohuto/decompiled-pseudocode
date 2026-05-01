/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18067F780
 * Callers:
 *     ??1?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18067D7EC (--1-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?Destroy@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18067E420 (-Destroy@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ??1?$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18067D824 (--1-$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<ImmersiveIconsLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ImmersiveIconsLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rdi

  v2 = *a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *a1;
      if ( *a1 )
      {
        wil::ActivityBase<ImmersiveIconsLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ImmersiveIconsLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ImmersiveIconsLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)(v3 + 2));
        operator delete((void *)v3);
      }
    }
    *a1 = 0LL;
  }
}
