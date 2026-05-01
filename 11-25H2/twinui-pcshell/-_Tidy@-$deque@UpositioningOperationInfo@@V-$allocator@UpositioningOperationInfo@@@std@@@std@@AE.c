/*
 * XREFs of ?_Tidy@?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@AEAAXXZ @ 0x1802BEFB4
 * Callers:
 *     ??1?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@QEAA@XZ @ 0x1802BEF88 (--1-$deque@UpositioningOperationInfo@@V-$allocator@UpositioningOperationInfo@@@std@@@std@@QEAA@X.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1positioningOperationInfo@@QEAA@XZ @ 0x180322DB0 (--1positioningOperationInfo@@QEAA@XZ.c)
 */

void __fastcall std::deque<positioningOperationInfo>::_Tidy(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // rdi
  void *v5; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( !v2 )
      break;
    positioningOperationInfo::~positioningOperationInfo(*(positioningOperationInfo **)(*(_QWORD *)(a1 + 8)
                                                                                     + 8
                                                                                     * ((*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 24) - 1LL + v2))));
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
        std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x10);
    }
    std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a1 + 16)));
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
}
