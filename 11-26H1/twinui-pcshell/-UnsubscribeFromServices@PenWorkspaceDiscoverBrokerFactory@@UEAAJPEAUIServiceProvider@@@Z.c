/*
 * XREFs of ?UnsubscribeFromServices@PenWorkspaceDiscoverBrokerFactory@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803E8DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBrokerFactory::UnsubscribeFromServices(
        PenWorkspaceDiscoverBrokerFactory *this,
        struct IServiceProvider *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)(*((_QWORD *)this + 3) + 40LL) + 48LL))(
         *((_QWORD *)this + 3) + 40LL,
         a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE8,
    (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
