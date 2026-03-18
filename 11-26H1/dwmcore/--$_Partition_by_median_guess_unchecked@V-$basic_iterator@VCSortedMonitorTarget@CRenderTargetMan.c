/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YA?AU?$pair@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@V12@@0@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0U?$less@X@0@@Z @ 0x18022D7AC
 * Callers:
 *     ??$_Sort_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0_JU?$less@X@0@@Z @ 0x180171AD4 (--$_Sort_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U-$les.c)
 * Callees:
 *     ??$_Guess_median_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@00U?$less@X@0@@Z @ 0x18022D59C (--$_Guess_median_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail.c)
 */

unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
        unsigned __int64 *a1,
        __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  _OWORD *v13; // rdx
  unsigned __int64 v14; // r8
  __int128 v15; // xmm1
  _OWORD *i; // r8
  bool v17; // zf
  unsigned __int64 v18; // r9
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int128 v23; // xmm1
  __int128 v24; // xmm1
  unsigned __int64 v26; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp+10h] BYREF
  __int64 v28; // [rsp+50h] [rbp+18h] BYREF

  v4 = *a3;
  v6 = *a3;
  v28 = *a2;
  v7 = v28 + 16 * ((__int64)(v6 - v28) >> 5);
  v26 = v4 - 16;
  v27 = v7;
  std::_Guess_median_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
    &v28,
    (__int64 *)&v27,
    (__int64 *)&v26);
  v9 = v7 + 16;
  while ( *a2 < v7 )
  {
    v10 = *(_QWORD *)(v7 - 8);
    if ( v10 < *(_QWORD *)(v7 + 8) || v10 > *(_QWORD *)(v7 + 8) )
      break;
    v7 -= 16LL;
  }
  while ( v9 < *a3 )
  {
    v11 = *(_QWORD *)(v9 + 8);
    if ( v11 < *(_QWORD *)(v7 + 8) || v11 > *(_QWORD *)(v7 + 8) )
      break;
    v9 += 16LL;
  }
  v12 = v9;
  v13 = (_OWORD *)v7;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v12 < *a3 )
      {
        v14 = *(_QWORD *)(v7 + 8);
        if ( v14 < *(_QWORD *)(v12 + 8) )
          goto LABEL_17;
        if ( v14 <= *(_QWORD *)(v12 + 8) )
        {
          if ( v9 != v12 )
          {
            v15 = *(_OWORD *)v9;
            *(_OWORD *)v9 = *(_OWORD *)v12;
            *(_OWORD *)v12 = v15;
          }
          v9 += 16LL;
          goto LABEL_17;
        }
      }
      for ( i = v13 - 1; ; --i )
      {
        v17 = v13 == (_OWORD *)*a2;
        if ( (unsigned __int64)v13 <= *a2 )
          break;
        v18 = *((_QWORD *)i + 1);
        if ( v18 >= *(_QWORD *)(v7 + 8) )
        {
          if ( v18 > *(_QWORD *)(v7 + 8) )
          {
            v17 = v13 == (_OWORD *)*a2;
            break;
          }
          v7 -= 16LL;
          if ( (_OWORD *)v7 != i )
          {
            v19 = *(_OWORD *)v7;
            *(_OWORD *)v7 = *i;
            *i = v19;
          }
        }
        --v13;
      }
      if ( v17 )
        break;
      --v13;
      if ( v12 != *a3 )
      {
        v24 = *(_OWORD *)v12;
        *(_OWORD *)v12 = *v13;
        *v13 = v24;
        goto LABEL_17;
      }
      v7 -= 16LL;
      if ( v13 != (_OWORD *)v7 )
      {
        v22 = *v13;
        *v13 = *(_OWORD *)v7;
        *(_OWORD *)v7 = v22;
      }
      v23 = *(_OWORD *)v7;
      v9 -= 16LL;
      *(_OWORD *)v7 = *(_OWORD *)v9;
      *(_OWORD *)v9 = v23;
    }
    if ( v12 == *a3 )
      break;
    if ( v9 != v12 )
    {
      v20 = *(_OWORD *)v7;
      *(_OWORD *)v7 = *(_OWORD *)v9;
      *(_OWORD *)v9 = v20;
    }
    v21 = *(_OWORD *)v7;
    v9 += 16LL;
    *(_OWORD *)v7 = *(_OWORD *)v12;
    v7 += 16LL;
    *(_OWORD *)v12 = v21;
LABEL_17:
    v12 += 16LL;
  }
  *a1 = v7;
  a1[1] = v9;
  return a1;
}
