/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VThemeCoordinatorProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180607DE8
 * Callers:
 *     ??1?$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1806059DC (--1-$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?Destroy@?$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18060622C (-Destroy@-$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ActivityData@VThemeCoordinatorProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180605A14 (--1-$ActivityData@VThemeCoordinatorProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<ThemeCoordinatorProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ThemeCoordinatorProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(
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
        wil::ActivityBase<ThemeCoordinatorProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ThemeCoordinatorProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ThemeCoordinatorProvider,_TlgReflectorTag_Param0IsProviderType>((__int64)(v3 + 2));
        operator delete((void *)v3, (const struct std::nothrow_t *)0x110);
      }
    }
    *a1 = 0LL;
  }
}
