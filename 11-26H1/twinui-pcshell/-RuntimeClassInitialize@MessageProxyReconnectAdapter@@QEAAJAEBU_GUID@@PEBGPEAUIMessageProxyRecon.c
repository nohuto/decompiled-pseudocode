/*
 * XREFs of ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180675FB0
 * Callers:
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0PP@GPEAUTabTipAdapter@KeyboardHosting@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0PP@G$$QEAPEAUTabTipAdapter@KeyboardHosting@@@Z @ 0x1801691A8 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0PP@GPEAUTabTipAdapter@Key.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x180171BA4 (--$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180675AFC (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180676134 (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MessageProxyReconnectAdapter::RuntimeClassInitialize(
        MessageProxyReconnectAdapter *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        struct IMessageProxyReconnectAdapterOwner *a4)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, int *); // rbx
  int started; // eax
  __int64 v11; // rdx
  int v13[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const unsigned __int16 *v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = a3;
  if ( a3 )
  {
    if ( !a4 )
    {
      v6 = 62LL;
      goto LABEL_3;
    }
    *(struct _GUID *)((char *)this + 24) = *a2;
    v7 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>(
           (MessageProxyReconnectAdapter *)((char *)this + 88),
           &v15);
    if ( v7 < 0 )
    {
      v6 = 65LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 6) = a4;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
    v7 = CoreUICreate((char *)this + 72);
    if ( v7 < 0 )
    {
      v6 = 68LL;
      goto LABEL_4;
    }
    *(_QWORD *)v13 = 0LL;
    v8 = *((_QWORD *)this + 9);
    v9 = *(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 40LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v13);
    started = v9(v8, v13);
    v7 = started;
    if ( started >= 0 )
    {
      started = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v13 + 56LL))(*(_QWORD *)v13);
      v7 = started;
      if ( started >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
        started = CoreUIFactoryCreate((char *)this + 56);
        v7 = started;
        if ( started >= 0 )
        {
          started = MessageProxyReconnectAdapter::AttemptPullProxy(this);
          v7 = started;
          if ( started >= 0 )
          {
            if ( *((_QWORD *)this + 8)
              || (started = MessageProxyReconnectAdapter::StartConnectionRetryTimer(this), v7 = started, started >= 0) )
            {
              v7 = 0;
              goto LABEL_24;
            }
            v11 = 83LL;
          }
          else
          {
            v11 = 79LL;
          }
        }
        else
        {
          v11 = 77LL;
        }
      }
      else
      {
        v11 = 75LL;
      }
    }
    else
    {
      v11 = 74LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"shellcommondesktopbase\\textinput\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)(unsigned int)started);
LABEL_24:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v13);
    return (unsigned int)v7;
  }
  v6 = 61LL;
LABEL_3:
  v7 = -2147024809;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"shellcommondesktopbase\\textinput\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
