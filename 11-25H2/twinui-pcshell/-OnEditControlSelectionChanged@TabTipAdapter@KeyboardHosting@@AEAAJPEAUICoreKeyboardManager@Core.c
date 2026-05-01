/*
 * XREFs of ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x1800D3CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x1800D3E80 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlSelectionChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlSelectionChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // edi
  __int128 v6; // xmm0
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // ebx
  __int64 (__fastcall *v13)(__int64, __int128 *); // r8
  __int64 v14; // rdx
  _DWORD v15[4]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v3 = *(_QWORD *)a3;
  v17 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlSelectionChangedEventArgs *, __int128 *))(v3 + 48))(
         a3,
         &v17);
  if ( v5 < 0 )
  {
    v14 = 982LL;
    goto LABEL_13;
  }
  if ( *(float *)&v17 == 0.0
    && *((float *)&v17 + 1) == 0.0
    && *((float *)&v17 + 2) == 0.0
    && *((float *)&v17 + 3) == 0.0 )
  {
    return 0LL;
  }
  v6 = v17;
  v7 = (__int64 *)*((_QWORD *)this + 15);
  v15[0] = 0;
  *(_OWORD *)((char *)this + 472) = v17;
  v8 = *v7;
  v16 = v6;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _DWORD *))(v8 + 88))(v7, &v16, v15);
  if ( v5 < 0 )
  {
    v14 = 996LL;
    goto LABEL_13;
  }
  v9 = *((_QWORD *)this + 7);
  if ( v9 )
  {
    v13 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 64LL);
    DWORD1(v16) = (int)*((float *)&v17 + 1);
    LODWORD(v16) = (int)*(float *)&v17;
    DWORD2(v16) = (int)(float)(*((float *)&v17 + 2) + *(float *)&v17);
    HIDWORD(v16) = (int)(float)(*((float *)&v17 + 3) + *((float *)&v17 + 1));
    v5 = v13(v9, &v16);
    if ( v5 < 0 )
    {
      v14 = 1015LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  v10 = KeyboardHosting::TabTipAdapter::ExecuteDeferredRequest(this, 1LL);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3FC,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
