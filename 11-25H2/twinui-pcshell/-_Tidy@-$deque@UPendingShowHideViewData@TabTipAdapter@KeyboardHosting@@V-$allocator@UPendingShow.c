/*
 * XREFs of ?_Tidy@?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@AEAAXXZ @ 0x1802BED3C
 * Callers:
 *     ??1?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@QEAA@XZ @ 0x1802BED10 (--1-$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$allocator@UPendingShowHide.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1800A982C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::_Tidy(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // rdi
  void *v5; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( !v2 )
      break;
    std::vector<Geometry::CRect>::_Tidy(*(_QWORD *)(*(_QWORD *)(a1 + 8)
                                                  + 8
                                                  * ((*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 24) - 1LL + v2))) + 104LL);
    if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    v4 = *(_QWORD *)(a1 + 16);
    while ( v4 )
    {
      --v4;
      v5 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v4);
      if ( v5 )
        std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x80);
    }
    std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a1 + 16)));
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
}
