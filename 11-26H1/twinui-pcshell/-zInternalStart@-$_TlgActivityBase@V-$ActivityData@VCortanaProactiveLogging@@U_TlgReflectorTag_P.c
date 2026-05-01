/*
 * XREFs of ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@QEAAXXZ @ 0x1800FAF50
 * Callers:
 *     ?zInternalStart@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800FAF0C (-zInternalStart@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef.c)
 * Callees:
 *     ?Provider@CortanaProactiveLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800FB040 (-Provider@CortanaProactiveLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall _TlgActivityBase<wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::zInternalStart(
        __int64 a1)
{
  const struct _tlgProvider_t *v2; // rax
  const struct _tlgProvider_t *v3; // rcx

  v2 = CortanaProactiveLogging::Provider();
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
