/*
 * XREFs of ?UnsubscribeFromViewChangeNotifications@PeoplePaneViewManager@@UEAAJK@Z @ 0x18040DB90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802F0AD8 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall PeoplePaneViewManager::UnsubscribeFromViewChangeNotifications(PeoplePaneViewManager *this, int a2)
{
  unsigned int i; // eax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v8; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = 0; ; ++i )
  {
    v4 = i;
    if ( (unsigned __int64)i >= *((_QWORD *)this + 50) )
      break;
    v5 = *((_QWORD *)this + 49);
    v6 = 16LL * i;
    if ( *(_DWORD *)(v5 + v6 + 8) == a2 )
    {
      if ( (unsigned __int64)i >= *((_QWORD *)this + 50) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E4,
          (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)0x80028CA1LL);
        return 2147650721LL;
      }
      Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(v6 + v5));
      v8 = *((_QWORD *)this + 50);
      if ( v4 != v8 - 1 )
        memmove_0(
          (void *)(v6 + *((_QWORD *)this + 49)),
          (const void *)(v6 + *((_QWORD *)this + 49) + 16),
          16 * (v8 - v4) - 16);
      --*((_QWORD *)this + 50);
      return 0LL;
    }
  }
  return 0LL;
}
