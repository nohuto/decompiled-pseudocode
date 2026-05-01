/*
 * XREFs of ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x1800B63C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800B733C (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     memcpy_s @ 0x1800B7E64 (memcpy_s.c)
 *     ?ResultFromLastError@@YAJXZ @ 0x1801C9A20 (-ResultFromLastError@@YAJXZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CE330 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x1802D2EE6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindow::GetApplicationId(CClassicWindow *this, unsigned __int16 **a2)
{
  char *v3; // r15
  unsigned int v4; // r14d
  unsigned __int64 v5; // rsi
  unsigned __int16 **v6; // r13
  char *v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // rdx
  unsigned __int16 *v14; // rcx
  unsigned __int64 v15; // rsi
  signed __int64 v16; // rdi
  unsigned __int16 v17; // ax
  HWND v18; // rcx
  ATOM PropW; // ax
  char *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r12
  WCHAR *v23; // rbx
  __int64 v24; // rbx
  _WORD *v25; // rax
  _WORD *v26; // rdi
  rsize_t v27; // rbx
  HANDLE v28; // rbx
  unsigned __int16 **v29; // r8
  int ProcessAppId; // r12d
  NTSTATUS v31; // eax
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rax
  char *i; // rbx
  __int64 v35; // rbx
  _WORD *v36; // rax
  _WORD *v37; // r12
  size_t v38; // rbx
  size_t v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int ReturnLength; // [rsp+20h] [rbp-E0h]
  DWORD dwProcessId; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v45[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 **v46; // [rsp+40h] [rbp-C0h]
  int ProcessInformation; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v48; // [rsp+54h] [rbp-ACh]
  _BYTE Src[506]; // [rsp+56h] [rbp-AAh] BYREF
  WCHAR Buffer[256]; // [rsp+250h] [rbp+150h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+498h] [rbp+398h]

  v46 = a2;
  v3 = (char *)this + 40;
  v4 = -2147024882;
  v5 = -1LL;
  if ( !*((_QWORD *)this + 5) )
  {
    *((_QWORD *)this + 6) = -1LL;
    *((_QWORD *)this + 7) = -1LL;
    v18 = (HWND)*((_QWORD *)this + 2);
    *(_QWORD *)v3 = 0LL;
    PropW = (unsigned __int16)GetPropW(v18, L"{9F4C2855-9F79-4B39-A8D0-E1D42DE1D5F3} 5");
    if ( PropW )
    {
      LODWORD(v21) = GlobalGetAtomNameW(PropW, Buffer, 256);
      if ( (_DWORD)v21 )
      {
        v22 = (unsigned int)v21;
        v21 = (unsigned int)v21;
        if ( (unsigned int)v21 >= 0x7FFFFFFFuLL )
          v21 = 0x7FFFFFFFLL;
        v23 = Buffer;
        do
        {
          if ( !*v23 )
            break;
          ++v23;
          --v21;
        }
        while ( v21 );
        v24 = v23 - Buffer;
        v25 = CoTaskMemAlloc(2 * v22 + 2);
        v26 = v25;
        if ( !v25 )
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
        v27 = v24;
        memcpy_s(v25, 2 * v22 + 2, Buffer, v27 * 2);
        v26[v27] = 0;
        v26[v22] = 0;
        *(_QWORD *)v3 = v26;
      }
    }
    if ( !*(_QWORD *)v3 )
    {
      dwProcessId = 0;
      if ( GetWindowThreadProcessId(*((HWND *)this + 2), &dwProcessId) )
      {
        v20 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
        *(_QWORD *)v45 = v20;
        if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( *(_QWORD *)v3 )
            CoTaskMemFree(*(LPVOID *)v3);
          *((_QWORD *)v3 + 1) = -1LL;
          *((_QWORD *)v3 + 2) = -1LL;
          *(_QWORD *)v3 = 0LL;
          v28 = OpenProcess(0x1000u, 0, dwProcessId);
          if ( v28 || (ProcessAppId = ResultFromLastError(), v29 = 0LL, ProcessAppId >= 0) )
          {
            ProcessAppId = CallerIdentity::GetProcessAppId(v28, v3, v29);
            if ( v28 )
            {
              if ( v28 != (HANDLE)-1LL )
                CloseHandle(v28);
            }
          }
          if ( ProcessAppId < 0 )
          {
            if ( *(_QWORD *)v3 )
              CoTaskMemFree(*(LPVOID *)v3);
            *((_QWORD *)v3 + 1) = -1LL;
            *((_QWORD *)v3 + 2) = -1LL;
            *(_QWORD *)v3 = 0LL;
            memset_0(&ProcessInformation, 0, 0x200uLL);
            v45[0] = 0;
            v31 = NtQueryInformationProcess(
                    v20,
                    ProcessExecuteFlags|ProcessUserModeIOPL,
                    &ProcessInformation,
                    0x200u,
                    v45);
            if ( v31 < 0 )
            {
              wil::details::in1diag3::Return_NtStatus(
                retaddr,
                (void *)0x191,
                (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
                (const char *)(unsigned int)v31,
                ReturnLength);
            }
            else if ( (ProcessInformation & 0x1000) != 0 )
            {
              v32 = (unsigned __int64)v48 >> 1;
              v33 = v32;
              for ( i = Src; v33; --v33 )
              {
                if ( !*(_WORD *)i )
                  break;
                i += 2;
              }
              v35 = (i - Src) >> 1;
              v36 = CoTaskMemAlloc(2 * v32 + 2);
              v37 = v36;
              if ( v36 )
              {
                v38 = 2 * v35;
                if ( v38 )
                {
                  v39 = 2 * v32 + 2;
                  if ( v39 < v38 )
                  {
                    memset_0(v36, 0, v39);
                    *(_DWORD *)_o__errno(v41, v40, v42) = 34;
                    invalid_parameter_noinfo();
                  }
                  else
                  {
                    memcpy_0(v36, Src, v38);
                  }
                }
                v37[v38 / 2] = 0;
                v37[v32] = 0;
                *(_QWORD *)v3 = v37;
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
        if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v20);
      }
    }
  }
  v6 = v46;
  *v46 = 0LL;
  v7 = *(char **)v3;
  if ( *(_QWORD *)v3 )
  {
    v8 = *((_QWORD *)v3 + 1);
    if ( v8 == -1LL )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)&v7[2 * v8] );
    }
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)&v7[2 * v9] );
    if ( v8 == -1LL )
    {
      v8 = v9;
      v5 = v9;
    }
    else if ( v8 < v9 )
    {
      v5 = v8;
    }
    else
    {
      do
        ++v5;
      while ( *(_WORD *)&v7[2 * v5] );
    }
    v10 = v8 + 1;
    if ( v8 + 1 >= v8 && is_mul_ok(v10, 2uLL) )
    {
      v12 = (unsigned __int16 *)CoTaskMemAlloc(2 * v10);
      v13 = v12;
      if ( v12 )
      {
        *v12 = 0;
        if ( v10 )
        {
          if ( v10 <= 0x7FFFFFFF && v5 <= 0x7FFFFFFE )
          {
            v14 = v12;
            v15 = v5 - v10;
            v16 = v7 - (char *)v12;
            do
            {
              if ( !(v15 + v10) )
                break;
              v17 = *(unsigned __int16 *)((char *)v14 + v16);
              if ( !v17 )
                break;
              *v14++ = v17;
              --v10;
            }
            while ( v10 );
            v12 = v14 - 1;
            if ( v10 )
              v12 = v14;
          }
          *v12 = 0;
        }
        v4 = 0;
        *v6 = v13;
      }
    }
    else
    {
      return (unsigned int)-2147024362;
    }
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return v4;
}
