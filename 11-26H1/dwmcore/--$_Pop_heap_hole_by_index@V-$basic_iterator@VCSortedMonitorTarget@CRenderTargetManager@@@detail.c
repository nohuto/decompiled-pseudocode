/*
 * XREFs of ??$_Pop_heap_hole_by_index@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@VCSortedMonitorTarget@CRenderTargetManager@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@_J1$$QEAVCSortedMonitorTarget@CRenderTargetManager@@U?$less@X@0@@Z @ 0x18022D93C
 * Callers:
 *     ??$_Make_heap_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0U?$less@X@0@@Z @ 0x18022D6A8 (--$_Make_heap_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U.c)
 *     ??$_Sort_heap_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0U?$less@X@0@@Z @ 0x18022DA24 (--$_Sort_heap_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,CRenderTargetManager::CSortedMonitorTarget,std::less<void>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r10
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r8

  v4 = (a3 - 1) >> 1;
  v5 = a2;
  while ( 1 )
  {
    v6 = a2;
    if ( a2 >= v4 )
      break;
    a2 = 2LL - (*(_QWORD *)(*a1 + 32 * a2 + 40) < *(_QWORD *)(*a1 + 32 * a2 + 24)) + 2 * a2;
    *(_OWORD *)(*a1 + 16 * v6) = *(_OWORD *)(*a1 + 16 * a2);
  }
  if ( a2 == v4 && (a3 & 1) == 0 )
  {
    *(_OWORD *)(*a1 + 16 * a2) = *(_OWORD *)(*a1 + 16 * a3 - 16);
    v6 = a3 - 1;
  }
  result = *a1;
  v8 = (v6 - 1) >> 1;
  if ( v5 < v6 )
  {
    v9 = *(_QWORD *)(a4 + 8);
    do
    {
      if ( *(_QWORD *)(result + 16 * v8 + 8) >= v9 )
        break;
      *(_OWORD *)(result + 16 * v6) = *(_OWORD *)(result + 16 * v8);
      v6 = v8;
      v8 = (v8 - 1) >> 1;
    }
    while ( v5 < v6 );
  }
  *(_OWORD *)(result + 16 * v6) = *(_OWORD *)a4;
  return result;
}
