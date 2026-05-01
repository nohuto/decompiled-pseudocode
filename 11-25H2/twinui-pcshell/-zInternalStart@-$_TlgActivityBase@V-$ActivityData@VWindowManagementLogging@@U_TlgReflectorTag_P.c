/*
 * XREFs of ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@QEAAXXZ @ 0x1801EE8D8
 * Callers:
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180018A14 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall _TlgActivityBase<wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::zInternalStart(
        __int64 a1)
{
  const struct _tlgProvider_t *v2; // rax
  const struct _tlgProvider_t *v3; // rcx

  v2 = WindowManagementLogging::Provider();
  v3 = v2;
  if ( *(_DWORD *)v2 > 5u
    && (*((_QWORD *)v2 + 2) & 0x400000000000LL) != 0
    && (v2 = (const struct _tlgProvider_t *)(*((_QWORD *)v2 + 3) & 0x400000000000LL),
        v2 == *((const struct _tlgProvider_t **)v3 + 3)) )
  {
    LODWORD(v2) = EventActivityIdControl(3u, (LPGUID)(a1 + 8));
  }
  else
  {
    *(_OWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 1;
  return (int)v2;
}
