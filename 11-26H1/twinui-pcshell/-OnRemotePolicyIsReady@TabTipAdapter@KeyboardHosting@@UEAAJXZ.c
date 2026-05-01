/*
 * XREFs of ?OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x1801690D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0PP@GPEAUTabTipAdapter@KeyboardHosting@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0PP@G$$QEAPEAUTabTipAdapter@KeyboardHosting@@@Z @ 0x1801691A8 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0PP@GPEAUTabTipAdapter@Key.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x1802A5568 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x180675C3C (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnRemotePolicyIsReady(KeyboardHosting::TabTipAdapter *this)
{
  unsigned int v2; // r8d
  char *v3; // rdi
  MessageProxyReconnectAdapter *v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  int v10[2]; // [rsp+20h] [rbp-228h] BYREF
  wchar_t v11[256]; // [rsp+30h] [rbp-218h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  memset_0(v11, 0, 0x1FEuLL);
  GetDesktopUniqueName(L"System\\RemoteTabTipPolicy", v11, v2);
  v3 = (char *)this - 8;
  v4 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    MessageProxyReconnectAdapter::Dispose(v4);
    v5 = (__int64 *)((char *)this + 56);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v5);
  }
  else
  {
    v5 = (__int64 *)((char *)this + 56);
  }
  *(_QWORD *)v10 = v3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v5);
  v7 = ((__int64 (__fastcall *)(__int64 *, __int64, wchar_t *, int *))Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short (&)[255],KeyboardHosting::TabTipAdapter *>)(
         v5,
         v6,
         v11,
         v10);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8F3,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
