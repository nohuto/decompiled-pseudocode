/*
 * XREFs of ?OnMessage@PriorityBoostHelper@@UEAAJI_K_J@Z @ 0x1800C2E40
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x1800C4070 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ?ResetActivationTimeoutPolicy@PriorityBoostHelper@@AEAAXXZ @ 0x1800C4140 (-ResetActivationTimeoutPolicy@PriorityBoostHelper@@AEAAXXZ.c)
 *     ?close_reset@?$close_invoke_helper@$00P6AHPEAX@Z$1?CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@Z @ 0x1800D109C (-close_reset@-$close_invoke_helper@$00P6AHPEAX@Z$1-CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall PriorityBoostHelper::OnMessage(PriorityBoostHelper *this, int a2)
{
  const char *v4; // r9
  char *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( GetCurrentThreadId() != *((_DWORD *)this + 20) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAD,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v4);
  if ( a2 == *((_DWORD *)this + 23) )
  {
    PriorityBoostHelper::ResetActivationTimeoutPolicy((PriorityBoostHelper *)((char *)this - 24));
    wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>::reset(
      (char *)this + 56,
      0LL);
    v5 = (char *)*((_QWORD *)this + 8);
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::close_invoke_helper<1,int (*)(void *),&int CloseHandle(void *),void *>::close_reset(v5);
    *((_QWORD *)this + 8) = 0LL;
  }
  else if ( a2 == *((_DWORD *)this + 22) )
  {
    PriorityBoostHelper::ResetActivationTimeoutPolicy((PriorityBoostHelper *)((char *)this - 24));
  }
  return 0LL;
}
