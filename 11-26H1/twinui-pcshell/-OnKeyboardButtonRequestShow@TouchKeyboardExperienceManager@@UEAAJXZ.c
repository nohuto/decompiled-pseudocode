/*
 * XREFs of ?OnKeyboardButtonRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18046F0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winrt@@V?$optional@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@@Z @ 0x18047BDA8 (-OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnKeyboardButtonRequestShow(TouchKeyboardExperienceManager *this)
{
  __int64 v1; // rbx
  winrt::hstring *v2; // rax
  int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 55);
  BYTE4(v6) = 0;
  v2 = winrt::hstring::hstring((winrt::hstring *)&v7, &pvData);
  v3 = KeyboardHosting::TabTipAdapter::OnPrimaryViewSystemLevelShowRequested(v1, &v6, v2, v6);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x667,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
