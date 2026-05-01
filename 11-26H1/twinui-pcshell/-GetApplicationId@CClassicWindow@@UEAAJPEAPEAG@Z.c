/*
 * XREFs of ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x1800C1700
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800C1E58 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     memcpy_s @ 0x1800C2818 (memcpy_s.c)
 *     ?ResultFromLastError@@YAJXZ @ 0x1801FB250 (-ResultFromLastError@@YAJXZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C5830 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x1802C9DB6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindow::GetApplicationId(CClassicWindow *this, unsigned __int16 **a2)
{
  char *v3; // r14
  unsigned int v4; // esi
  unsigned __int16 **v5; // r13
  __int16 *v6; // r15
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // rcx
  unsigned __int16 *v13; // rdx
  __int16 v14; // ax
  HWND v15; // rcx
  ATOM PropW; // ax
  char *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r12
  WCHAR *v20; // rbx
  __int64 v21; // rbx
  _WORD *v22; // rax
  _WORD *v23; // rdi
  rsize_t v24; // rbx
  char *v25; // rbx
  unsigned __int16 **v26; // r8
  int ProcessAppId; // r15d
  NTSTATUS v28; // eax
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rax
  char *i; // rbx
  __int64 v32; // rbx
  _WORD *v33; // rax
  _WORD *v34; // r15
  size_t v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int ReturnLength; // [rsp+20h] [rbp-E0h]
  DWORD dwProcessId; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v41[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 **v42; // [rsp+40h] [rbp-C0h]
  int ProcessInformation; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v44; // [rsp+54h] [rbp-ACh]
  _BYTE Src[506]; // [rsp+56h] [rbp-AAh] BYREF
  WCHAR Buffer[256]; // [rsp+250h] [rbp+150h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+498h] [rbp+398h]

  v42 = a2;
  v3 = (char *)this + 40;
  v4 = -2147024882;
  if ( !*((_QWORD *)this + 5) )
  {
    *((_QWORD *)this + 6) = -1LL;
    *((_QWORD *)this + 7) = -1LL;
    v15 = (HWND)*((_QWORD *)this + 2);
    *(_QWORD *)v3 = 0LL;
    PropW = (unsigned __int16)GetPropW(v15, L"{9F4C2855-9F79-4B39-A8D0-E1D42DE1D5F3} 5");
    if ( PropW )
    {
      LODWORD(v18) = GlobalGetAtomNameW(PropW, Buffer, 256);
      if ( (_DWORD)v18 )
      {
        v19 = (unsigned int)v18;
        v18 = (unsigned int)v18;
        if ( (unsigned int)v18 >= 0x7FFFFFFF )
          v18 = 0x7FFFFFFFLL;
        v20 = Buffer;
        do
        {
          if ( !*v20 )
            break;
          ++v20;
          --v18;
        }
        while ( v18 );
        v21 = v20 - Buffer;
        v22 = CoTaskMemAlloc(2 * v19 + 2);
        v23 = v22;
        if ( !v22 )
        {
          *(_QWORD *)v3 = 0LL;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x60,
            (int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
            (const char *)0x8007000ELL);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x158,
            (int)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
            (const char *)0x8007000ELL);
          return v4;
        }
        v24 = v21;
        memcpy_s(v22, 2 * v19 + 2, Buffer, v24 * 2);
        v23[v24] = 0;
        v23[v19] = 0;
        *(_QWORD *)v3 = v23;
      }
    }
    if ( !*(_QWORD *)v3 )
    {
      dwProcessId = 0;
      if ( GetWindowThreadProcessId(*((HWND *)this + 2), &dwProcessId) )
      {
        v17 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
        *(_QWORD *)v41 = v17;
        if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( *(_QWORD *)v3 )
            CoTaskMemFree(*(LPVOID *)v3);
          *((_QWORD *)v3 + 1) = -1LL;
          *((_QWORD *)v3 + 2) = -1LL;
          *(_QWORD *)v3 = 0LL;
          v25 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
          if ( v25 || (ProcessAppId = ResultFromLastError(), v26 = 0LL, ProcessAppId >= 0) )
          {
            ProcessAppId = CallerIdentity::GetProcessAppId(v25, v3, v26);
            if ( (unsigned __int64)(v25 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              CloseHandle(v25);
          }
          if ( ProcessAppId < 0 )
          {
            if ( *(_QWORD *)v3 )
              CoTaskMemFree(*(LPVOID *)v3);
            *((_QWORD *)v3 + 1) = -1LL;
            *((_QWORD *)v3 + 2) = -1LL;
            *(_QWORD *)v3 = 0LL;
            memset_0(&ProcessInformation, 0, 0x200uLL);
            v41[0] = 0;
            v28 = NtQueryInformationProcess(
                    v17,
                    ProcessExecuteFlags|ProcessUserModeIOPL,
                    &ProcessInformation,
                    0x200u,
                    v41);
            if ( v28 < 0 )
            {
              wil::details::in1diag3::Return_NtStatus(
                retaddr,
                (void *)0x191,
                (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
                (const char *)(unsigned int)v28,
                ReturnLength);
            }
            else if ( (ProcessInformation & 0x1000) != 0 )
            {
              v29 = (unsigned __int64)v44 >> 1;
              v30 = v29;
              for ( i = Src; v30; --v30 )
              {
                if ( !*(_WORD *)i )
                  break;
                i += 2;
              }
              v32 = (i - Src) >> 1;
              v33 = CoTaskMemAlloc(2 * v29 + 2);
              v34 = v33;
              if ( v33 )
              {
                v35 = 2 * v32;
                if ( v35 )
                {
                  if ( 2 * v29 + 2 < v35 )
                  {
                    memset_0(v33, 0, 2 * v29 + 2);
                    *(_DWORD *)_o__errno(v37, v36, v38) = 34;
                    invalid_parameter_noinfo();
                  }
                  else
                  {
                    memcpy_0(v33, Src, v35);
                  }
                }
                v34[v35 / 2] = 0;
                v34[v29] = 0;
                *(_QWORD *)v3 = v34;
              }
              else
              {
                *(_QWORD *)v3 = 0LL;
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x196,
                  (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
                  (const char *)0x8007000ELL);
              }
            }
          }
        }
        if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v17);
      }
    }
  }
  v5 = v42;
  *v42 = 0LL;
  v6 = *(__int16 **)v3;
  if ( !*(_QWORD *)v3 )
    return (unsigned int)-2147023728;
  v7 = *((_QWORD *)v3 + 1);
  if ( v7 == -1LL )
  {
    do
      ++v7;
    while ( v6[v7] );
  }
  v8 = -1LL;
  do
    ++v8;
  while ( v6[v8] );
  if ( v7 == -1LL )
  {
    v7 = v8;
  }
  else if ( v7 < v8 )
  {
    v8 = v7;
  }
  else
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v6[v8] );
  }
  v9 = v7 + 1;
  if ( v7 + 1 >= v7 && is_mul_ok(v9, 2uLL) )
  {
    v11 = (unsigned __int16 *)CoTaskMemAlloc(2 * v9);
    v12 = v11;
    if ( v11 )
    {
      *v11 = 0;
      if ( v9 )
      {
        if ( v9 <= 0x7FFFFFFF )
        {
          v4 = 0;
          if ( v8 <= 0x7FFFFFFE )
          {
            v13 = v11;
            do
            {
              if ( !v8 )
                break;
              v14 = *v6;
              if ( !*v6 )
                break;
              ++v6;
              *v13++ = v14;
              --v8;
              --v9;
            }
            while ( v9 );
            v11 = v13 - 1;
            if ( v9 )
              v11 = v13;
          }
          *v11 = 0;
          goto LABEL_26;
        }
        *v11 = 0;
      }
      v4 = 0;
LABEL_26:
      *v5 = v12;
    }
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v4;
}
