/*
 * XREFs of ?v_WndProc@AltEscHotkeyHandler@@MEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804B77F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDesktopInputContext@@YA_NXZ @ 0x180164A7C (-IsDesktopInputContext@@YA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall AltEscHotkeyHandler::v_WndProc(
        AltEscHotkeyHandler *this,
        enum Windows::Internal::Shell::Holographic::UserInputContext *a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, GUID *, int *); // rbx
  int v8; // eax
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 != 786 )
    return DefWindowProcW((HWND)a2, a3, a4, lParam);
  if ( IsDesktopInputContext((__int64)this, a2) )
  {
    *(_QWORD *)v10 = 0LL;
    v6 = *((_QWORD *)this + 6);
    v7 = *(__int64 (__fastcall **)(__int64, GUID *, int *))(*(_QWORD *)v6 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v10);
    v8 = v7(v6, &GUID_23a47bb4_c26c_4ecf_a5e8_5fbeefdb55d6, v10);
    if ( v8 >= 0 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 32LL))(*(_QWORD *)v10);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x25,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\alteschotkeyhandler.cpp",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v10);
  }
  return 0LL;
}
