/*
 * XREFs of ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1800A6E78
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x18007CC78 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 * Callees:
 *     ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x1800A5784 (--$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@-$basic_string@GU-$char_t.c)
 */

void __fastcall std::wstring::resize(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // r10
  unsigned __int64 v4; // rcx
  bool v5; // cc
  _WORD *v6; // rdi

  v2 = a1[2];
  v3 = a1;
  if ( a2 <= v2 )
  {
    a1[2] = a2;
    if ( a1[3] > 7uLL )
      v3 = (_QWORD *)*a1;
LABEL_11:
    *((_WORD *)v3 + a2) = 0;
    return;
  }
  v4 = a2 - v2;
  if ( a2 - v2 <= v3[3] - v2 )
  {
    v5 = v3[3] <= 7uLL;
    v3[2] = a2;
    if ( !v5 )
      v3 = (_QWORD *)*v3;
    v6 = (_WORD *)v3 + v2;
    if ( v4 )
    {
      while ( v4 )
      {
        *v6++ = 0;
        --v4;
      }
    }
    goto LABEL_11;
  }
  std::wstring::_Reallocate_grow_by<_lambda_b70241e9b5ebaad244db3e52d52cab17_,unsigned __int64,unsigned short>(
    v3,
    a2 - v2,
    0LL,
    a2 - v2);
}
