/*
 * XREFs of ?IsPeoplePaneOpen@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x1804013A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x180400268 (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 */

__int64 __fastcall PeoplePaneViewManager::IsPeoplePaneOpen(RTL_SRWLOCK *this, char *a2, int *a3)
{
  int v5; // eax
  std::_Ref_count_base *v6[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_OWORD *)v6 = 0LL;
  if ( (int)PeoplePaneViewManager::FindPaneViewInfoByContactId(this - 11, a2, v6) >= 0 && *((_QWORD *)v6[0] + 4) )
  {
    if ( *((_DWORD *)v6[0] + 15) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AA,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)0x80070057LL);
      if ( v6[1] )
        std::_Ref_count_base::_Decref(v6[1]);
      return 2147942487LL;
    }
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  *a3 = v5;
  if ( v6[1] )
    std::_Ref_count_base::_Decref(v6[1]);
  return 0LL;
}
