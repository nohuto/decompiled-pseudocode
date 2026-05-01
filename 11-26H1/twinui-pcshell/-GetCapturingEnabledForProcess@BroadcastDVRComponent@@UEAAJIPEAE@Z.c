/*
 * XREFs of ?GetCapturingEnabledForProcess@BroadcastDVRComponent@@UEAAJIPEAE@Z @ 0x18017E660
 * Callers:
 *     <none>
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x180031ECC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BroadcastDVRComponent::GetCapturingEnabledForProcess(BroadcastDVRComponent *this, int a2, bool *a3)
{
  _QWORD *i; // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  std::_Ref_count_base *v9; // rdi
  __int64 v10; // rcx
  _QWORD *j; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    *a3 = 1;
    for ( i = (_QWORD *)**((_QWORD **)this + 33); i != *((_QWORD **)this + 33); i = j )
    {
      v7 = i[6];
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v8 = i[5];
      v9 = (std::_Ref_count_base *)i[6];
      dwProcessId = 0;
      GetWindowThreadProcessId(*(HWND *)v8, &dwProcessId);
      if ( a2 == dwProcessId )
      {
        *a3 = (*(_DWORD *)(v8 + 56) & 0x80) != 0;
        if ( v9 )
          std::_Ref_count_base::_Decref(v9);
        return 0LL;
      }
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      v10 = i[2];
      if ( *(_BYTE *)(v10 + 25) )
      {
        for ( j = (_QWORD *)i[1]; !*((_BYTE *)j + 25) && i == (_QWORD *)j[2]; j = (_QWORD *)j[1] )
          i = j;
      }
      else
      {
        j = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min((_QWORD *)v10);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
