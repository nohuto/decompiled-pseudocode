/*
 * XREFs of ?SetupExperienceFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1803984CC
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1803987F0 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::SetupExperienceFrame(CVirtualTouchpadExperienceManager *this)
{
  _DWORD *v2; // rsi
  _QWORD *v3; // rdi
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, char *); // rbx
  _QWORD *v8; // r15
  int v9; // eax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 *); // rdi
  int v15; // eax
  __int64 v16; // rdx
  _QWORD *v17; // rdi
  int v18; // eax
  char *v19; // r15
  int v20; // eax
  _DWORD *v21; // rbx
  int v22; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v25; // [rsp+50h] [rbp+30h] BYREF
  __int64 v26; // [rsp+58h] [rbp+38h] BYREF

  v2 = (_DWORD *)((char *)this + 368);
  v3 = (_QWORD *)((char *)this + 336);
  if ( !*((_DWORD *)this + 92) )
  {
LABEL_6:
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)*v3 + 40LL))(
           *v3,
           ((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
           v2);
    if ( v4 < 0 )
    {
      v5 = 442LL;
      goto LABEL_4;
    }
    v6 = *v3;
    v7 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 24LL);
    v8 = (_QWORD *)((char *)this + 344);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 43);
    v4 = v7(v6, (char *)this + 344);
    if ( v4 < 0 )
    {
      v5 = 443LL;
      goto LABEL_4;
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v8 + 48LL))(*v8, *((unsigned int *)this + 31));
    if ( v4 < 0 )
    {
      v5 = 444LL;
      goto LABEL_4;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v8 + 120LL))(*v8, 1LL);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1BE,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    v26 = 0LL;
    v10 = *v8;
    v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v8 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    v12 = v11(v10, &v26);
    v4 = v12;
    if ( v12 >= 0 )
    {
      v25 = 0LL;
      v13 = v26;
      v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 144LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      v15 = v14(v13, &v25);
      v4 = v15;
      if ( v15 >= 0 )
      {
        v17 = (_QWORD *)((char *)this + 352);
        v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v26 + 24LL))(v26, (char *)this + 352);
        v4 = v15;
        if ( v15 >= 0 )
        {
          v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v25 + 88LL))(v25, 1023LL, 4LL);
          v19 = (char *)this + 352;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1C6,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
              (const char *)(unsigned int)v18);
            v19 = (char *)this + 352;
          }
          v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v26 + 112LL))(v26, 255LL, 17LL);
          v4 = v15;
          if ( v15 >= 0 )
          {
            v20 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, _QWORD))(*(_QWORD *)v26 + 72LL))(
                    v26,
                    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
                    0LL);
            if ( v20 < 0 )
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1C8,
                (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                (const char *)(unsigned int)v20);
              v17 = v19;
            }
            v21 = (_DWORD *)((char *)this + 372);
            if ( *((_DWORD *)this + 93) )
            {
              v22 = RevokeScaleChangeNotificationsForWindow(*v17);
              if ( v22 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x1CC,
                  (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                  (const char *)(unsigned int)v22);
              *v21 = 0;
            }
            v15 = RegisterScaleChangeSinkForWindow(*v17, ((unsigned __int64)this + 24) & -(__int64)(this != 0LL), v21);
            v4 = v15;
            if ( v15 >= 0 )
            {
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
              v4 = 0;
              goto LABEL_34;
            }
            v16 = 463LL;
          }
          else
          {
            v16 = 455LL;
          }
        }
        else
        {
          v16 = 452LL;
        }
      }
      else
      {
        v16 = 451LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C1,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    }
LABEL_34:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 48LL))(*v3);
  if ( v4 >= 0 )
  {
    *v2 = 0;
    goto LABEL_6;
  }
  v5 = 438LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
