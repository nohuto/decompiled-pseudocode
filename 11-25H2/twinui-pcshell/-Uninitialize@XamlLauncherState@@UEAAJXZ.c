/*
 * XREFs of ?Uninitialize@XamlLauncherState@@UEAAJXZ @ 0x1800C04B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800C0A4C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlLauncherState::Uninitialize(XamlLauncherState *this)
{
  wil::details *v1; // rsi
  DWORD LastError; // ebx
  struct wil::details::wnf_subscription_state_base *v4; // rdx
  char *v5; // rbx
  char *v6; // rsi
  char *v7; // rsi
  __int64 *v8; // rbx
  __int64 *v9; // rsi
  __int64 *v10; // rsi
  int v11; // esi
  int v12; // ebx
  __int64 *v13; // rsi
  int v14; // ebp
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 *v19; // rbp
  __int64 *v20; // rbp
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (wil::details *)*((_QWORD *)this + 31);
  if ( v1 )
  {
    LastError = GetLastError();
    wil::details::delete_wnf_subscription_state(v1, v4);
    SetLastError(LastError);
    *((_QWORD *)this + 31) = 0LL;
  }
  v5 = (char *)this + 56;
  if ( *((_QWORD *)this + 14) )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 200LL))(*(_QWORD *)v5);
    if ( v11 < 0 )
    {
      v17 = 167LL;
      goto LABEL_26;
    }
    *((_QWORD *)this + 14) = 0LL;
  }
  v6 = (char *)this + 56;
  if ( *((_QWORD *)this + 15) )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 216LL))(*(_QWORD *)v5);
    if ( v11 < 0 )
    {
      v17 = 173LL;
      goto LABEL_26;
    }
    *((_QWORD *)this + 15) = 0LL;
    v6 = (char *)this + 56;
  }
  if ( *((_QWORD *)this + 16) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 232LL))(*(_QWORD *)v5);
    if ( v12 < 0 )
    {
      v18 = 179LL;
      goto LABEL_44;
    }
    *((_QWORD *)this + 16) = 0LL;
    v5 = v6;
  }
  v7 = v5;
  if ( *((_QWORD *)this + 17) )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 280LL))(*(_QWORD *)v5);
    if ( v11 < 0 )
    {
      v17 = 185LL;
      goto LABEL_26;
    }
    *((_QWORD *)this + 17) = 0LL;
    v7 = (char *)this + 56;
  }
  if ( *((_QWORD *)this + 18) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 296LL))(*(_QWORD *)v5);
    if ( v12 < 0 )
    {
      v18 = 191LL;
      goto LABEL_44;
    }
    *((_QWORD *)this + 18) = 0LL;
    v5 = v7;
  }
  if ( *((_QWORD *)this + 19) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 312LL))(*(_QWORD *)v5);
    if ( v12 < 0 )
    {
      v18 = 197LL;
      goto LABEL_44;
    }
    *((_QWORD *)this + 19) = 0LL;
  }
  v8 = (__int64 *)((char *)this + 64);
  if ( *((_QWORD *)this + 20) )
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v8 + 192LL))(*v8);
    if ( v11 < 0 )
    {
      v17 = 203LL;
      goto LABEL_26;
    }
    *((_QWORD *)this + 20) = 0LL;
  }
  v9 = (__int64 *)((char *)this + 64);
  if ( *((_QWORD *)this + 21) )
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v8 + 208LL))(*v8);
    if ( v11 < 0 )
    {
      v17 = 209LL;
      goto LABEL_26;
    }
    *((_QWORD *)this + 21) = 0LL;
    v9 = (__int64 *)((char *)this + 64);
  }
  if ( *((_QWORD *)this + 22) )
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v8 + 224LL))(*v8);
    if ( v12 < 0 )
    {
      v18 = 215LL;
      goto LABEL_44;
    }
    *((_QWORD *)this + 22) = 0LL;
    v8 = v9;
  }
  v10 = v8;
  if ( *((_QWORD *)this + 23) )
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v8 + 320LL))(*v8);
    if ( v11 < 0 )
    {
      v17 = 221LL;
      goto LABEL_26;
    }
    *((_QWORD *)this + 23) = 0LL;
    v10 = (__int64 *)((char *)this + 64);
  }
  if ( *((_QWORD *)this + 24) )
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v8 + 272LL))(*v8);
    if ( v12 >= 0 )
    {
      *((_QWORD *)this + 24) = 0LL;
      v8 = v10;
      goto LABEL_18;
    }
    v18 = 227LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
LABEL_18:
  v13 = v8;
  if ( *((_QWORD *)this + 25) )
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v8 + 336LL))(*v8);
    if ( v11 >= 0 )
    {
      *((_QWORD *)this + 25) = 0LL;
      v13 = (__int64 *)((char *)this + 64);
      goto LABEL_21;
    }
    v17 = 233LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
LABEL_21:
  if ( *((_QWORD *)this + 26) )
  {
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v8 + 352LL))(*v8);
    if ( v14 < 0 )
    {
      v15 = 239LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v14);
      return (unsigned int)v14;
    }
    *((_QWORD *)this + 26) = 0LL;
    v19 = (__int64 *)((char *)this + 64);
  }
  else
  {
    v19 = v13;
  }
  if ( *((_QWORD *)this + 27) )
  {
    v8 = v13;
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v13 + 368LL))(*v13);
    if ( v11 < 0 )
    {
      v17 = 245LL;
      goto LABEL_26;
    }
    *((_QWORD *)this + 27) = 0LL;
    v13 = v19;
  }
  v20 = v13;
  if ( *((_QWORD *)this + 28) )
  {
    v8 = v13;
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v13 + 384LL))(*v13);
    if ( v14 < 0 )
    {
      v15 = 251LL;
      goto LABEL_24;
    }
    *((_QWORD *)this + 28) = 0LL;
    v20 = (__int64 *)((char *)this + 64);
  }
  if ( *((_QWORD *)this + 29) )
  {
    v8 = v13;
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v13 + 400LL))(*v13);
    if ( v11 < 0 )
    {
      v17 = 257LL;
      goto LABEL_26;
    }
    *((_QWORD *)this + 29) = 0LL;
    v13 = v20;
  }
  if ( *((_QWORD *)this + 30) )
  {
    v8 = v13;
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v13 + 416LL))(*v13);
    if ( v11 < 0 )
    {
      v17 = 263LL;
      goto LABEL_26;
    }
    *((_QWORD *)this + 30) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 10);
  result = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
