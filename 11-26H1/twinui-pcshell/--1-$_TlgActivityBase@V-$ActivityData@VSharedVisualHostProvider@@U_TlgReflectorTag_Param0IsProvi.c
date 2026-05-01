/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0CAAAAAAAAAAA@$04@@IEAA@XZ @ 0x180609D24
 * Callers:
 *     ??1?$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180609C94 (--1-$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 * Callees:
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802A3E48 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Provider@SharedVisualHostProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18060B9C8 (-Provider@SharedVisualHostProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>::~_TlgActivityBase<wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>(
        _DWORD *a1)
{
  const struct _tlgProvider_t *v2; // rax

  if ( *a1 == 1 )
  {
    *a1 = 2;
    v2 = SharedVisualHostProvider::Provider();
    _tlgWriteActivityAutoStop<35184372088832,5>(v2);
  }
  *a1 = 3;
}
