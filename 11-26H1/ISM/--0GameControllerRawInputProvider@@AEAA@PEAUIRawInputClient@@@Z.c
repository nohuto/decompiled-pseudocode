/*
 * XREFs of ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18007AB64
 * Callers:
 *     ?Create@GameControllerRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18007AB00 (-Create@GameControllerRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x18002E18C (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180063490 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 *     ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x18006C5D0 (-CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800812E8 (-reset@-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@detai.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __std_find_trivial_8 @ 0x18009C8F0 (__std_find_trivial_8.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A1010 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A61E4 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ??$_Emplace_reallocate@AEBQEAUIGamepadInterceptionListener@@@?$vector@PEAUIGamepadInterceptionListener@@V?$allocator@PEAUIGamepadInterceptionListener@@@std@@@std@@AEAAPEAPEAUIGamepadInterceptionListener@@QEAPEAU2@AEBQEAU2@@Z @ 0x180108A44 (--$_Emplace_reallocate@AEBQEAUIGamepadInterceptionListener@@@-$vector@PEAUIGamepadInterceptionLi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
GameControllerRawInputProvider *__fastcall GameControllerRawInputProvider::GameControllerRawInputProvider(
        GameControllerRawInputProvider *this,
        struct IRawInputClient *a2)
{
  char v3; // si
  __int64 *v4; // rdi
  _QWORD *v5; // r14
  int v6; // eax
  unsigned int i; // edi
  HANDLE FileW; // rax
  const char *v9; // r9
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  struct GameInputServerProxy *v14; // rcx
  struct GamepadInterceptionHelper *GamepadInterceptionHelper; // rax
  const char *v16; // r9
  struct GamepadInterceptionHelper *v17; // rbp
  __int64 trivial_8; // rax
  _QWORD *v19; // rdx
  int updated; // eax
  int dwCreationDisposition; // [rsp+20h] [rbp-48h]
  int dwCreationDispositiona; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct GameInputServerProxy *v25; // [rsp+70h] [rbp+8h] BYREF

  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
  v3 = 1;
  *((_DWORD *)this + 10) = 1;
  *(_QWORD *)this = &GameControllerRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &GameControllerRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &GameControllerRawInputProvider::`vftable'{for `IGameInputServerInputRouter'};
  *((_QWORD *)this + 3) = &GameControllerRawInputProvider::`vftable'{for `IGamepadInterceptionListener'};
  *((_QWORD *)this + 4) = &GameControllerRawInputProvider::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = (__int64 *)((char *)this + 56);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v5 = (_QWORD *)((char *)this + 80);
  *((_QWORD *)this + 10) = -1LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 12) = (char *)this + 88;
  *((_QWORD *)this + 11) = (char *)this + 88;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 15) = (char *)this + 112;
  *((_QWORD *)this + 14) = (char *)this + 112;
  QpcTimeConverter::QpcTimeConverter((GameControllerRawInputProvider *)((char *)this + 136));
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 176) = 0;
  if ( GameControllerRawInputProvider::s_instance )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x63,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)0x8000FFFFLL,
      dwCreationDisposition);
  GameControllerRawInputProvider::s_instance = this;
  LODWORD(v25) = GetCurrentProcessId();
  dwCreationDispositiona = 0;
  v6 = RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, &v25, 4LL);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x68,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)v6,
      0);
  if ( IsEdition(6176LL) )
  {
    for ( i = 0; i < 0x14; ++i )
    {
      FileW = CreateFileW(L"\\\\.\\XboxGIP_Admin", 0xC0000000, 3u, 0LL, 3u, 0xA0000000, 0LL);
      wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (char *)this + 80,
        FileW);
      if ( *v5 != -1LL && *v5 )
        break;
      Sleep(0x64u);
    }
    if ( *v5 != -1LL && *v5 )
      v3 = 0;
    if ( v3 )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x89,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerra"
                      "winputprovider.cpp",
        v9);
    v4 = (__int64 *)((char *)this + 56);
  }
  v10 = *v4;
  *v4 = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = CoreUICreate(v4);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)v11,
      dwCreationDispositiona);
  if ( !gbIsDWMNoRawGameController )
  {
    v12 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v25 = 0LL;
    v13 = GameInputServerProxy::CreateSingleton((GameControllerRawInputProvider *)((char *)this + 16), &v25);
    v14 = 0LL;
    if ( v13 >= 0 )
      v14 = v25;
    *((_QWORD *)this + 8) = v14;
  }
  GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
  v17 = GamepadInterceptionHelper;
  v25 = (GameControllerRawInputProvider *)((char *)this + 24);
  if ( this == (GameControllerRawInputProvider *)-24LL )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\gamepadinterceptionhelper\\gamepadinterceptionhelper.cpp",
      v16);
  trivial_8 = _std_find_trivial_8(
                *((_QWORD *)GamepadInterceptionHelper + 6),
                *((_QWORD *)GamepadInterceptionHelper + 7),
                (char *)this + 24);
  v19 = (_QWORD *)*((_QWORD *)v17 + 7);
  if ( (_QWORD *)trivial_8 == v19 )
  {
    if ( v19 == *((_QWORD **)v17 + 8) )
    {
      std::vector<IGamepadInterceptionListener *>::_Emplace_reallocate<IGamepadInterceptionListener * const &>(
        (char *)v17 + 48,
        v19,
        &v25);
    }
    else
    {
      *v19 = (char *)this + 24;
      *((_QWORD *)v17 + 7) += 8LL;
    }
  }
  *(_QWORD *)((char *)this + 156) = 0LL;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 43) = -1;
  updated = GameControllerRawInputProvider::UpdateFocusPids(this);
  if ( updated < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x98,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)updated,
      dwCreationDispositiona);
  return this;
}
