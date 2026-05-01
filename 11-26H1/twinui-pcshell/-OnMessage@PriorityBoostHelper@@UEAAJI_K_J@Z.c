/*
 * XREFs of ?OnMessage@PriorityBoostHelper@@UEAAJI_K_J@Z @ 0x1800FABA0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x1800FAB40 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ?ResetActivationTimeoutPolicy@PriorityBoostHelper@@AEAAXXZ @ 0x1800FAC48 (-ResetActivationTimeoutPolicy@PriorityBoostHelper@@AEAAXXZ.c)
 *     ?close_reset@?$close_invoke_helper@$00P6AHPEAX@Z$1?CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@Z @ 0x18017DFA0 (-close_reset@-$close_invoke_helper@$00P6AHPEAX@Z$1-CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall PriorityBoostHelper::OnMessage(PriorityBoostHelper *this, int a2)
{
  int v2; // ebx
  const char *v5; // r9
  void *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_DWORD *)this + 20);
  if ( GetCurrentThreadId() != v2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAD,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v5);
  if ( a2 == *((_DWORD *)this + 23) )
  {
    PriorityBoostHelper::ResetActivationTimeoutPolicy((PriorityBoostHelper *)((char *)this - 24));
    wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>::reset(
      (struct _TP_WAIT **)this + 7,
      0LL);
    v6 = (void *)*((_QWORD *)this + 8);
    if ( v6 && v6 != (void *)-1LL )
      wil::details::close_invoke_helper<1,int (*)(void *),&int CloseHandle(void *),void *>::close_reset(v6);
    *((_QWORD *)this + 8) = 0LL;
  }
  else if ( a2 == *((_DWORD *)this + 22) )
  {
    PriorityBoostHelper::ResetActivationTimeoutPolicy((PriorityBoostHelper *)((char *)this - 24));
  }
  return 0LL;
}
