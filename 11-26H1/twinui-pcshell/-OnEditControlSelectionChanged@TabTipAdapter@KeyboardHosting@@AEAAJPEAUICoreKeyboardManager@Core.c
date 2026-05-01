/*
 * XREFs of ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x1800B26D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x1800B287C (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlSelectionChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlSelectionChangedEventArgs *a3)
{
  int v4; // edi
  __int128 v5; // xmm0
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  _DWORD v12[4]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlSelectionChangedEventArgs *, __int128 *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v14);
  if ( v4 < 0 )
  {
    v11 = 999LL;
    goto LABEL_13;
  }
  if ( *(float *)&v14 == 0.0
    && *((float *)&v14 + 1) == 0.0
    && *((float *)&v14 + 2) == 0.0
    && *((float *)&v14 + 3) == 0.0 )
  {
    return 0LL;
  }
  v5 = v14;
  *(_OWORD *)((char *)this + 472) = v14;
  v12[0] = 0;
  v6 = *((_QWORD *)this + 15);
  v13 = v5;
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *, _DWORD *))(*(_QWORD *)v6 + 88LL))(v6, &v13, v12);
  if ( v4 < 0 )
  {
    v11 = 1013LL;
    goto LABEL_13;
  }
  v7 = *((_QWORD *)this + 7);
  if ( v7 )
  {
    LODWORD(v13) = (int)*(float *)&v14;
    DWORD1(v13) = (int)*((float *)&v14 + 1);
    DWORD2(v13) = (int)(float)(*((float *)&v14 + 2) + *(float *)&v14);
    HIDWORD(v13) = (int)(float)(*((float *)&v14 + 3) + *((float *)&v14 + 1));
    v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 64LL))(v7, &v13);
    if ( v4 < 0 )
    {
      v11 = 1032LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
  }
  v8 = KeyboardHosting::TabTipAdapter::ExecuteDeferredRequest(this, 1LL);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x40D,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
