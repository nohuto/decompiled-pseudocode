/*
 * XREFs of ?OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winrt@@V?$optional@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@@Z @ 0x18046DC4C
 * Callers:
 *     ?OnKeyboardButtonRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180463190 (-OnKeyboardButtonRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEBUShowShellViewRequestedEventArgs@Shell@7WindowsUdk@winrt@@@Z @ 0x18046E8A4 (-OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJI_N0@Z @ 0x180098E6C (-NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJI_N0@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802BBF8C (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x18046BB90 (-EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnPrimaryViewSystemLevelShowRequested(
        KeyboardHosting::TabTipAdapter *this,
        _BYTE *a2,
        __int64 *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  const char *v9; // r9
  unsigned int v10; // edi
  __int64 result; // rax
  char v12; // di
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, _BYTE *, char *, int *, __int64 *); // rbx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // r14
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64); // r12
  __int64 v19; // r15
  winrt::hstring *v20; // rax
  int v21; // r14d
  int v22; // eax
  unsigned int v23; // ebx
  int v24; // eax
  unsigned int v25; // ebx
  char v26; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v27[3]; // [rsp+41h] [rbp-37h] BYREF
  int v28; // [rsp+44h] [rbp-34h] BYREF
  int v29; // [rsp+48h] [rbp-30h] BYREF
  __int64 v30; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int32 *v31; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char v33; // [rsp+9Ch] [rbp+24h]

  v33 = BYTE4(a4);
  v4 = a4;
  try
  {
    KeyboardHosting::TabTipAdapter::EnsureTabTip(this);
    *a2 = 0;
    v28 = 0;
    v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 15) + 320LL))(*((_QWORD *)this + 15), &v28);
    v10 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x888,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v8);
      return v10;
    }
    if ( v28 != 1 )
      goto LABEL_17;
    *a2 = 1;
    v12 = v33;
    if ( !v33 )
    {
      v27[0] = 0;
      v26 = 0;
      v30 = 0LL;
      v29 = 0;
      v13 = *((_QWORD *)this + 15);
      v14 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, char *, int *, __int64 *))(*(_QWORD *)v13 + 304LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
      v15 = v14(v13, 0LL, v27, &v26, &v29, &v30);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x896,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v15);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
        return v16;
      }
      LODWORD(v31) = v29;
      BYTE4(v31) = 1;
      v4 = v29;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
      v12 = 1;
    }
    v17 = *((_QWORD *)this + 16);
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v17 + 328LL);
    v19 = *a3;
    v20 = winrt::hstring::hstring((winrt::hstring *)&v31, L"BUTTON");
    v21 = v18(v17, *(_QWORD *)v20, v19);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v31);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89B,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v21);
      return (unsigned int)v21;
    }
    if ( !v12 )
      std::_Throw_bad_optional_access();
    v22 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8, v4, 0LL);
    v23 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89C,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v22);
      return v23;
    }
    v24 = KeyboardHosting::TabTipAdapter::NotifyCurrentVisibilityState(this, *((_DWORD *)this + 124), 1, 0);
    v25 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A4,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v24);
      result = v25;
    }
    else
    {
LABEL_17:
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8A9,
                           (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
                           v9);
  }
  return result;
}
