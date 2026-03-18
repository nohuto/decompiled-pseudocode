/*
 * XREFs of ??$_Sort_heap_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0U?$less@X@0@@Z @ 0x18022DA24
 * Callers:
 *     ??$_Sort_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0_JU?$less@X@0@@Z @ 0x180171AD4 (--$_Sort_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U-$les.c)
 * Callees:
 *     ??$_Pop_heap_hole_by_index@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@VCSortedMonitorTarget@CRenderTargetManager@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@_J1$$QEAVCSortedMonitorTarget@CRenderTargetManager@@U?$less@X@0@@Z @ 0x18022D93C (--$_Pop_heap_hole_by_index@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail.c)
 */

signed __int64 __fastcall std::_Sort_heap_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
        _QWORD *a1,
        __int64 *a2)
{
  _OWORD *v2; // r9
  __int64 v4; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  signed __int64 result; // rax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  _OWORD *v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_OWORD *)*a1;
  v4 = *a2;
  while ( 1 )
  {
    result = (v4 - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( result < 32 )
      break;
    v6 = *v2;
    v10 = v2;
    v7 = *(_OWORD *)(v4 - 16);
    *(_OWORD *)(v4 - 16) = v6;
    v9 = v7;
    std::_Pop_heap_hole_by_index<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,CRenderTargetManager::CSortedMonitorTarget,std::less<void>>(
      (__int64 *)&v10,
      0LL,
      (v4 - 16 - (__int64)v2) >> 4,
      (__int64)&v9);
    *a2 -= 16LL;
    v4 = *a2;
    v2 = (_OWORD *)*a1;
  }
  return result;
}
