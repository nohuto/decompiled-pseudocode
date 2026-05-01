/*
 * XREFs of ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x1800E9370
 * Callers:
 *     ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x18007ADD0 (-SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z.c)
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x1800E92A4 (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180053C64 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@W_ea_180053C64.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetViewId(CWinRTApplicationView *this, unsigned __int16 **a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // ebx
  int v6; // eax
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+28h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-20h]
  _QWORD v11[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  *a2 = 0LL;
  pv = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 24);
  v4 = *v3;
  v9 = -1LL;
  v10 = -1LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, LPVOID *))(v4 + 40))(v3, &pv);
  if ( v5 < 0 )
  {
    if ( pv )
      CoTaskMemFree(pv);
    return (unsigned int)v5;
  }
  memset(v11, 0, sizeof(v11));
  v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         (__int64)v11,
         L"WRT:%s",
         pv);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v6);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v11);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
    return (unsigned int)v5;
  }
  *a2 = (unsigned __int16 *)v11[0];
  if ( pv )
    CoTaskMemFree(pv);
  return 0LL;
}
