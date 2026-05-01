/*
 * XREFs of ?GetCachedUserAssist@UserAssistImpl@@YAJPEAPEAUIShellUserAssist@@@Z @ 0x180299F40
 * Callers:
 *     ?UAFireEvent@@YAJPEBU_GUID@@W4tagUAEVENT@@PEBGK@Z @ 0x180299E6C (-UAFireEvent@@YAJPEBU_GUID@@W4tagUAEVENT@@PEBGK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserAssistWorker@UserAssistImpl@@YAPEAUIShellUserAssist@@AEBU_GUID@@@Z @ 0x180299FD8 (-GetUserAssistWorker@UserAssistImpl@@YAPEAUIShellUserAssist@@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UserAssistImpl::GetCachedUserAssist(UserAssistImpl *this, const struct _GUID *a2)
{
  struct IShellUserAssist *UserAssistWorker; // rax
  struct IShellUserAssist *v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IShellUserAssist *v7; // [rsp+38h] [rbp+10h] BYREF

  UserAssistWorker = UserAssistImpl::GetUserAssistWorker(this, a2);
  v4 = UserAssistWorker;
  v7 = UserAssistWorker;
  if ( UserAssistWorker )
    (*(void (__fastcall **)(struct IShellUserAssist *))(*(_QWORD *)UserAssistWorker + 8LL))(UserAssistWorker);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IShellUserAssist *))(*(_QWORD *)v4 + 8LL))(v4);
    *(_QWORD *)this = v4;
    (*(void (__fastcall **)(struct IShellUserAssist *))(*(_QWORD *)v4 + 16LL))(v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (int)"onecoreuap\\internal\\shell\\inc\\private\\uem.h",
      (const char *)0x80004005LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
    return 2147500037LL;
  }
}
