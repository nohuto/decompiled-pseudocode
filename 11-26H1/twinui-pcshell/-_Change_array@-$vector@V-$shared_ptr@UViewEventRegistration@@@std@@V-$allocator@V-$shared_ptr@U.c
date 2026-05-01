/*
 * XREFs of ?_Change_array@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UViewEventRegistration@@@2@_K1@Z @ 0x1801CFA2C
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x180175F3C (--$_Emplace_reallocate@AEBV-$shared_ptr@UViewEventRegistration@@@std@@@-$vector@V-$shared_ptr@UV.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<std::shared_ptr<ViewEventRegistration>>::_Change_array(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // r14
  std::_Ref_count_base *v10; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    while ( v4 != v9 )
    {
      v10 = *(std::_Ref_count_base **)(v4 + 8);
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
      v4 += 16LL;
    }
    result = std::_Deallocate<16>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = a2;
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
  return result;
}
