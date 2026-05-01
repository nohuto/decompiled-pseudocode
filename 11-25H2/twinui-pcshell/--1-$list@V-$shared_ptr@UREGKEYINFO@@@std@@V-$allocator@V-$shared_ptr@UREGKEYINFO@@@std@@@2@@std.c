/*
 * XREFs of ??1?$list@V?$shared_ptr@UREGKEYINFO@@@std@@V?$allocator@V?$shared_ptr@UREGKEYINFO@@@std@@@2@@std@@QEAA@XZ @ 0x18055FE2C
 * Callers:
 *     _StartupAppMonitor::StartupAppMonitor_::_1_::dtor$1 @ 0x1806B3052 (_StartupAppMonitor--StartupAppMonitor_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::shared_ptr<REGKEYINFO>>::~list<std::shared_ptr<REGKEYINFO>>(void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rbx
  std::_Ref_count_base *v4; // rcx
  _QWORD *v5; // rsi

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (std::_Ref_count_base *)v3[3];
      v5 = (_QWORD *)*v3;
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x20);
      v3 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
