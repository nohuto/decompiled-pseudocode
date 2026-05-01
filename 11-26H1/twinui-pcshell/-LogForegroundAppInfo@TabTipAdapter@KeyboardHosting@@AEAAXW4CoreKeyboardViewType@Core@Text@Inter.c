/*
 * XREFs of ?LogForegroundAppInfo@TabTipAdapter@KeyboardHosting@@AEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18024E1B0
 * Callers:
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEA_N@Z @ 0x18047CE24 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x18047CFB4 (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$ShowRequestProcessed@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAIPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAI$$QEAPEBG@Z @ 0x180231344 (--$ShowRequestProcessed@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAIPEBG@TouchK.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardHosting::TabTipAdapter::LogForegroundAppInfo(__int64 a1, int a2)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, volatile signed __int32 **); // rbx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  int v8; // [rsp+40h] [rbp+20h] BYREF
  int v9; // [rsp+48h] [rbp+28h] BYREF
  volatile signed __int32 *v10; // [rsp+50h] [rbp+30h] BYREF
  const unsigned __int16 *v11; // [rsp+58h] [rbp+38h] BYREF

  v9 = a2;
  v8 = 20480;
  v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 32) + 720LL))(*(_QWORD *)(a1 + 32), &v8);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA31,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v3);
  v10 = 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)v4 + 712LL);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  v6 = v5(v4, &v10);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA33,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
  v11 = winrt::hstring::c_str((winrt::hstring *)&v10);
  TouchKeyboardExperienceTelemetryLogger::ShowRequestProcessed<enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType &,unsigned int &,unsigned short const *>(
    &v9,
    &v8,
    (__int64 *)&v11);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
}
