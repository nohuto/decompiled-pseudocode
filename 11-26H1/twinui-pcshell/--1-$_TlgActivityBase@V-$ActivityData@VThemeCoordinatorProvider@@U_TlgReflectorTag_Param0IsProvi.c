/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VThemeCoordinatorProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@IEAA@XZ @ 0x180605A84
 * Callers:
 *     ??1?$ActivityData@VThemeCoordinatorProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180605A14 (--1-$ActivityData@VThemeCoordinatorProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 * Callees:
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180284530 (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Provider@ThemeCoordinatorProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180606F5C (-Provider@ThemeCoordinatorProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<ThemeCoordinatorProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ThemeCoordinatorProvider,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::~_TlgActivityBase<wil::ActivityBase<ThemeCoordinatorProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ThemeCoordinatorProvider,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>(
        _DWORD *a1)
{
  const struct _tlgProvider_t *v2; // rax

  if ( *a1 == 1 )
  {
    *a1 = 2;
    v2 = ThemeCoordinatorProvider::Provider();
    _tlgWriteActivityAutoStop<70368744177664,5>(v2);
  }
  *a1 = 3;
}
