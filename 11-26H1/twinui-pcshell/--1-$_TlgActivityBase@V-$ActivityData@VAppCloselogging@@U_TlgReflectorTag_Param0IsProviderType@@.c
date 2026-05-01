/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@IEAA@XZ @ 0x1802C3DF0
 * Callers:
 *     ??1?$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017B410 (--1-$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VApp.c)
 * Callees:
 *     ?Provider@AppCloselogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18017B654 (-Provider@AppCloselogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180284530 (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppCloselogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::~_TlgActivityBase<wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppCloselogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>(
        _DWORD *a1)
{
  const struct _tlgProvider_t *v2; // rax

  if ( *a1 == 1 )
  {
    *a1 = 2;
    v2 = AppCloselogging::Provider((__int64)a1);
    _tlgWriteActivityAutoStop<70368744177664,5>(v2);
  }
  *a1 = 3;
}
