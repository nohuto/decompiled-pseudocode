/*
 * XREFs of ?_Reset_map@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1801BF250
 * Callers:
 *     ?_Tidy@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18013D780 (-_Tidy@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Reset_map(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rdi
  void **v4; // rbx
  _QWORD *v5; // rdi
  void *v6; // rcx

  v1 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = (void **)(a1 + 8);
  if ( v3 > 0 )
  {
    do
    {
      --v3;
      v6 = (void *)*((_QWORD *)*v4 + v3);
      if ( v6 )
        std::_Deallocate<16>(v6, 0x10uLL);
    }
    while ( v3 > 0 );
    v5 = (_QWORD *)(a1 + 16);
  }
  else
  {
    v5 = (_QWORD *)(a1 + 16);
  }
  std::_Deallocate<16>(*v4, 8LL * *v1);
  *v4 = 0LL;
  *v5 = 0LL;
}
