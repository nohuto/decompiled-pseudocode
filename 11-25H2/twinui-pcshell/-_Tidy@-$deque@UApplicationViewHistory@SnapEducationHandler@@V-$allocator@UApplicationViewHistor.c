/*
 * XREFs of ?_Tidy@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@AEAAXXZ @ 0x1805806F0
 * Callers:
 *     ??1?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA@XZ @ 0x180579FB0 (--1-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHistory@Sn.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?pop_back@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAAXXZ @ 0x18005EA3C (-pop_back@-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHis.c)
 */

void __fastcall std::deque<SnapEducationHandler::ApplicationViewHistory>::_Tidy(_QWORD *a1)
{
  void **v2; // rdi
  _QWORD *v3; // r14
  __int64 v4; // rsi
  void *v5; // rcx

  while ( a1[4] )
    std::deque<SnapEducationHandler::ApplicationViewHistory>::pop_back(a1);
  v2 = (void **)(a1 + 1);
  v3 = a1 + 1;
  if ( a1[1] )
  {
    v4 = a1[2];
    if ( v4 )
    {
      do
      {
        --v4;
        v5 = (void *)*((_QWORD *)*v2 + v4);
        if ( v5 )
          std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x38);
      }
      while ( v4 );
      v3 = a1 + 1;
    }
    std::_Deallocate<16,0>(*v2, (const struct std::nothrow_t *)(8LL * a1[2]));
  }
  a1[2] = 0LL;
  *v3 = 0LL;
}
