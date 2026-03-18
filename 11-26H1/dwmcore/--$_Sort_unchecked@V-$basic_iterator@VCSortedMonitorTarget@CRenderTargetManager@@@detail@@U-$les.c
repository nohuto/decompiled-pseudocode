/*
 * XREFs of ??$_Sort_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0_JU?$less@X@0@@Z @ 0x180171AD4
 * Callers:
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x180030310 (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 *     ??$_Sort_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0_JU?$less@X@0@@Z @ 0x180171AD4 (--$_Sort_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U-$les.c)
 * Callees:
 *     ??$_Sort_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0_JU?$less@X@0@@Z @ 0x180171AD4 (--$_Sort_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U-$les.c)
 *     ??$_Make_heap_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0U?$less@X@0@@Z @ 0x18022D6A8 (--$_Make_heap_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U.c)
 *     ??$_Partition_by_median_guess_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YA?AU?$pair@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@V12@@0@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0U?$less@X@0@@Z @ 0x18022D7AC (--$_Partition_by_median_guess_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetMan.c)
 *     ??$_Sort_heap_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0U?$less@X@0@@Z @ 0x18022DA24 (--$_Sort_heap_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U.c)
 */

signed __int64 __fastcall std::_Sort_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
        signed __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  __int64 v5; // rdi
  __int64 v8; // r11
  signed __int64 v9; // r10
  signed __int64 result; // rax
  signed __int64 v11; // rdx
  unsigned __int64 v12; // r8
  _OWORD *v13; // rcx
  __int128 v14; // xmm1
  _OWORD *v15; // rdx
  __int64 v16; // r12
  __int64 v17; // r9
  signed __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // [rsp+20h] [rbp-10h] BYREF
  signed __int64 v21; // [rsp+28h] [rbp-8h]
  __int64 v22; // [rsp+60h] [rbp+30h] BYREF
  signed __int64 v23; // [rsp+68h] [rbp+38h] BYREF

  v4 = a4;
  v5 = a3;
  while ( 1 )
  {
    v8 = *a2;
    v9 = *a1;
    result = (*a2 - *a1) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( result <= 512 )
      break;
    v22 = *a2;
    v23 = v9;
    if ( v5 <= 0 )
    {
      LOBYTE(a3) = v4;
      std::_Make_heap_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
        &v23,
        &v22,
        a3);
      v22 = *a2;
      LOBYTE(v19) = v4;
      v23 = *a1;
      return std::_Sort_heap_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
               &v23,
               &v22,
               v19);
    }
    LOBYTE(a4) = v4;
    std::_Partition_by_median_guess_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
      &v20,
      &v23,
      &v22,
      a4);
    v16 = v20;
    LOBYTE(v17) = v4;
    v18 = v21;
    v5 = (v5 >> 2) + (v5 >> 1);
    if ( (__int64)((v20 - *a1) & 0xFFFFFFFFFFFFFFF0uLL) >= (__int64)((*a2 - v21) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v22 = *a2;
      v23 = v21;
      std::_Sort_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
        &v23,
        &v22,
        v5,
        v17);
      *a2 = v16;
    }
    else
    {
      v23 = *a1;
      v22 = v20;
      std::_Sort_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
        &v23,
        &v22,
        v5,
        v17);
      *a1 = v18;
    }
  }
  if ( v9 != v8 )
  {
    result = *a1;
    while ( 1 )
    {
      v11 = result;
      result += 16LL;
      if ( result == v8 )
        break;
      v12 = *(_QWORD *)(result + 8);
      v13 = (_OWORD *)result;
      v14 = *(_OWORD *)result;
      if ( v12 >= *(_QWORD *)(v9 + 8) )
      {
        while ( v12 < *(_QWORD *)(v11 + 8) )
        {
          *v13 = *(_OWORD *)v11;
          v13 = (_OWORD *)v11;
          v11 -= 16LL;
        }
        *v13 = v14;
      }
      else
      {
        while ( 1 )
        {
          v15 = v13;
          if ( (_OWORD *)v9 == v13 )
            break;
          *v15 = *--v13;
        }
        *(_OWORD *)v9 = v14;
      }
    }
  }
  return result;
}
