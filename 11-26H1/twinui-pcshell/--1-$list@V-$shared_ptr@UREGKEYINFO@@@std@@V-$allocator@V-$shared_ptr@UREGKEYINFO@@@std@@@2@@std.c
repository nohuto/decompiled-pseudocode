/*
 * XREFs of ??1?$list@V?$shared_ptr@UREGKEYINFO@@@std@@V?$allocator@V?$shared_ptr@UREGKEYINFO@@@std@@@2@@std@@QEAA@XZ @ 0x180583E40
 * Callers:
 *     _StartupAppMonitor::StartupAppMonitor_::_1_::dtor$1 @ 0x1806DA35C (_StartupAppMonitor--StartupAppMonitor_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
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
      std::_Deallocate<16>(v3, (struct std::nothrow_t *)0x20);
      v3 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x20);
}
