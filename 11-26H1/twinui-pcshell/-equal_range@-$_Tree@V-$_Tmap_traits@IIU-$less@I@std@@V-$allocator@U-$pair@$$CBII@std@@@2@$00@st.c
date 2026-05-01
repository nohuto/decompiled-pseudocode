/*
 * XREFs of ?equal_range@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$00@std@@@std@@QEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@V12@@2@AEBI@Z @ 0x1805BF60C
 * Callers:
 *     ?GetUIIDs@MonitorIDFinder@SnapAccessibilityHelpers@@QEBA?AV?$vector@IV?$allocator@I@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1805BECF8 (-GetUIIDs@MonitorIDFinder@SnapAccessibilityHelpers@@QEBA-AV-$vector@IV-$allocator@I@std@@@std@@P.c)
 * Callees:
 *     <none>
 */

__int64 ***__fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,1>>::equal_range(
        __int64 ***a1,
        __int64 ***a2,
        unsigned int *a3)
{
  __int64 **v3; // r10
  __int64 **v4; // rcx
  __int64 *v5; // r9
  __int64 *v6; // rax
  unsigned int v7; // r11d
  unsigned int v8; // r11d
  __int64 **v9; // rax
  __int64 ***result; // rax

  v3 = *a1;
  v4 = v3;
  v5 = v3[1];
  v6 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v7 = *a3;
    do
    {
      if ( *((_DWORD *)v6 + 7) >= v7 )
      {
        if ( *((_BYTE *)v4 + 25) && v7 < *((_DWORD *)v6 + 7) )
          v4 = (__int64 **)v6;
        v3 = (__int64 **)v6;
      }
      else
      {
        v6 += 2;
      }
      v6 = (__int64 *)*v6;
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( !*((_BYTE *)v4 + 25) )
    v5 = *v4;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v8 = *a3;
    do
    {
      v9 = (__int64 **)v5;
      if ( v8 >= *((_DWORD *)v5 + 7) )
        v9 = v4;
      v4 = v9;
      if ( v8 >= *((_DWORD *)v5 + 7) )
        v5 += 2;
      v5 = (__int64 *)*v5;
    }
    while ( !*((_BYTE *)v5 + 25) );
  }
  *a2 = v3;
  result = a2;
  a2[1] = v4;
  return result;
}
