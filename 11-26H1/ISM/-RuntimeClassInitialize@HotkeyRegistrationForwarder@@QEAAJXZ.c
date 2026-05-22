/*
 * XREFs of ?RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ @ 0x180075830
 * Callers:
 *     ??$MakeAndInitialize@VHotkeyRegistrationForwarder@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyRegistrationForwarder@@@Z @ 0x180075778 (--$MakeAndInitialize@VHotkeyRegistrationForwarder@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotke.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x180057EC8 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVHotkeyRegistrationForwarder@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0BAE@G$$QEAPEAVHotkeyRegistrationForwarder@@@Z @ 0x180107D74 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVHotkeyRegistrati.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotkeyRegistrationForwarder::RuntimeClassInitialize(HotkeyRegistrationForwarder *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v6[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v7; // [rsp+28h] [rbp-D8h] BYREF
  HotkeyRegistrationForwarder *v8; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t v9[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  v7 = 0;
  *(_QWORD *)v6 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v6);
  v2 = CoreUIFactoryCreate(v6);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, int *))(**(_QWORD **)v6 + 24LL))(
           *(_QWORD *)v6,
           &GUID_869e9b43_7e00_4f26_b722_f81b75205fb0,
           &v7);
    v3 = v2;
    if ( v2 >= 0 )
    {
      memset_0(v9, 0, 0x208uLL);
      GetDesktopUniqueName(L"TextInputServer", v9);
      v8 = this;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
      v2 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short (&)[260],HotkeyRegistrationForwarder *>(
             (char *)this + 40,
             &GUID_869e9b43_7e00_4f26_b722_f81b75205fb0,
             v9,
             &v8);
      v3 = v2;
      if ( v2 >= 0 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      v4 = 38LL;
    }
    else
    {
      v4 = 29LL;
    }
  }
  else
  {
    v4 = 25LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistrationforwarder.cpp",
    (const char *)(unsigned int)v2,
    v6[0]);
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v6);
  return v3;
}
