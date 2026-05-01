/*
 * XREFs of ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180675AFC
 * Callers:
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180675FB0 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x180676250 (-s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1801B9734 (-CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1801EDC5C (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1802C31F0 (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180675CFC (-FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::AttemptPullProxy(MessageProxyReconnectAdapter *this)
{
  unsigned int RemoteProxy; // eax
  int v3; // edi
  __int64 v4; // rdx
  unsigned int v6; // eax
  const char *StringRawBuffer; // rax
  const char *v8; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::in1diag3::Log_HrIfMsg(
    retaddr,
    (void *)0xBA,
    (int)"shellcommondesktopbase\\textinput\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)0x8000FFFFLL,
    *((_QWORD *)this + 8) != 0LL,
    (unsigned __int64)"Not expecting to pull a proxy when we have one",
    v8);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
  ++*((_DWORD *)this + 10);
  RemoteProxy = MessageProxyReconnectAdapter::CreateRemoteProxy(this);
  v3 = RemoteProxy;
  if ( RemoteProxy )
  {
    if ( ((RemoteProxy + 2018375675) & 0xFFFFFFFB) != 0 )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0xF1,
        (int)"shellcommondesktopbase\\textinput\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
        (const char *)RemoteProxy);
    }
    else
    {
      v6 = *((_DWORD *)this + 25);
      if ( *((_DWORD *)this + 10) >= v6 && v6 )
      {
        MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
        if ( *((_BYTE *)this + 104) )
        {
          StringRawBuffer = (const char *)WindowsGetStringRawBuffer(*((HSTRING *)this + 11), 0LL);
          wil::details::in1diag3::FailFast_IfFailedMsg(
            retaddr,
            (void *)0xE7,
            (unsigned int)"shellcommondesktopbase\\textinput\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
            (const char *)(unsigned int)v3,
            (int)"Proxy connection failed: %ls",
            StringRawBuffer);
        }
        else if ( v3 < 0 )
        {
          v4 = 235LL;
          goto LABEL_4;
        }
      }
    }
  }
  else
  {
    v3 = MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
    if ( v3 < 0 )
    {
      v4 = 212LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"shellcommondesktopbase\\textinput\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 16LL))(*((_QWORD *)this + 6));
  return 0LL;
}
