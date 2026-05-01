/*
 * XREFs of ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x18004188C
 * Callers:
 *     ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x18003D1AC (--$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKno.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002294 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18000655C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180008DB4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x180042008 (-ValidateKGL@CQueryKnownGameList@@AEAAJK@Z.c)
 */

signed int __fastcall CQueryKnownGameList::RuntimeClassInitialize(
        CQueryKnownGameList *this,
        const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // r14
  unsigned int v4; // ebx
  __int64 v5; // rdx
  const unsigned __int16 *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  void *v10; // rax
  const struct std::nothrow_t *v11; // rdx
  void *v12; // rcx
  _WORD *v13; // rcx
  __int64 v14; // rdx
  _WORD *v15; // rax
  HANDLE FileW; // rax
  wil::details *v17; // rcx
  void *v18; // r14
  void *v19; // rsi
  DWORD LastError; // ebx
  const char *v22; // r9
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rdx
  void *v26; // rax
  const struct std::nothrow_t *v27; // rdx
  void *v28; // rcx
  void *v29; // rdx
  unsigned int v30; // eax
  DWORD nFileSizeLow; // edx
  int v32; // eax
  DWORD NumberOfBytesRead; // [rsp+40h] [rbp-19h] BYREF
  _BY_HANDLE_FILE_INFORMATION FileInformation; // [rsp+48h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  NumberOfBytesRead = 0;
  v2 = a2;
  memset(&FileInformation, 0, sizeof(FileInformation));
  if ( a2 )
  {
    v6 = a2;
    v7 = 0x7FFFFFFFLL;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v7;
    }
    while ( v7 );
    v4 = v7 == 0 ? 0x80070057 : 0;
    if ( !v7 )
    {
      v5 = 227LL;
      goto LABEL_82;
    }
    v8 = ((0x7FFFFFFF - v7) & -(__int64)(v7 != 0)) + 1;
    v9 = 2 * v8;
    if ( !is_mul_ok(v8, 2uLL) )
      v9 = -1LL;
    v10 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
    v12 = (void *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v10;
    if ( v12 )
      operator delete(v12, v11);
    v13 = (_WORD *)*((_QWORD *)this + 2);
    if ( !v13 )
    {
      v4 = -2147024882;
      v5 = 230LL;
      goto LABEL_82;
    }
    v14 = 2147483646LL;
    if ( v8 - 1 > 0x7FFFFFFE )
    {
      v4 = -2147024809;
      if ( v8 )
        *v13 = 0;
    }
    else
    {
      do
      {
        if ( !v14 )
          break;
        if ( !*v2 )
          break;
        *v13++ = *v2++;
        --v14;
        --v8;
      }
      while ( v8 );
      v15 = v13 - 1;
      if ( v8 )
        v15 = v13;
      *v15 = 0;
      v4 = v8 == 0 ? 0x8007007A : 0;
      if ( v8 )
      {
        FileW = CreateFileW(*((LPCWSTR *)this + 2), 0x80000000, 1u, 0LL, 3u, 0x80u, 0LL);
        v18 = (void *)*((_QWORD *)this + 3);
        v19 = FileW;
        if ( v18 != (void *)-1LL && v18 )
        {
          LastError = GetLastError();
          CloseHandle(v18);
          SetLastError(LastError);
        }
        *((_QWORD *)this + 3) = v19;
        if ( v19 == (void *)-1LL )
          return wil::details::GetLastErrorFailHr(v17);
        if ( !GetFileInformationByHandle(v19, &FileInformation) )
        {
          v23 = 238LL;
          return wil::details::in1diag3::Return_GetLastError(
                   retaddr,
                   (void *)v23,
                   (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                   v22);
        }
        if ( FileInformation.nFileSizeHigh )
        {
          v25 = 241LL;
          goto LABEL_77;
        }
        if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 32, 0x18u, &NumberOfBytesRead, 0LL) )
        {
          v23 = 243LL;
          return wil::details::in1diag3::Return_GetLastError(
                   retaddr,
                   (void *)v23,
                   (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                   v22);
        }
        if ( NumberOfBytesRead != 24 )
        {
          v25 = 244LL;
          goto LABEL_77;
        }
        v24 = *((_DWORD *)this + 9);
        if ( !v24 )
        {
          v25 = 248LL;
          goto LABEL_77;
        }
        if ( v24 == 1 )
        {
          if ( *((_DWORD *)this + 8) != 24 )
          {
            v25 = 251LL;
            goto LABEL_77;
          }
        }
        else
        {
          if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 56, 8u, &NumberOfBytesRead, 0LL) )
          {
            v23 = 257LL;
            return wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)v23,
                     (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                     v22);
          }
          if ( NumberOfBytesRead != 8 )
          {
            v25 = 258LL;
            goto LABEL_77;
          }
          if ( *((_DWORD *)this + 9) >= 3u )
          {
            if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 64, 0x298u, &NumberOfBytesRead, 0LL) )
            {
              v23 = 262LL;
              return wil::details::in1diag3::Return_GetLastError(
                       retaddr,
                       (void *)v23,
                       (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                       v22);
            }
            if ( NumberOfBytesRead != 664 )
            {
              v25 = 263LL;
              goto LABEL_77;
            }
            if ( *((_DWORD *)this + 9) >= 4u )
            {
              if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 728, 8u, &NumberOfBytesRead, 0LL) )
              {
                v23 = 267LL;
                return wil::details::in1diag3::Return_GetLastError(
                         retaddr,
                         (void *)v23,
                         (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                         v22);
              }
              if ( NumberOfBytesRead != 8 )
              {
                v25 = 268LL;
                goto LABEL_77;
              }
              if ( *((_DWORD *)this + 9) >= 5u )
              {
                if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 736, 4u, &NumberOfBytesRead, 0LL) )
                {
                  v23 = 272LL;
                  return wil::details::in1diag3::Return_GetLastError(
                           retaddr,
                           (void *)v23,
                           (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                           v22);
                }
                if ( NumberOfBytesRead != 4 )
                {
                  v25 = 273LL;
                  goto LABEL_77;
                }
              }
            }
          }
        }
        if ( *((_DWORD *)this + 12) >= FileInformation.nFileSizeLow )
        {
          v25 = 279LL;
        }
        else if ( *((_DWORD *)this + 13) )
        {
          if ( SetFilePointer(*((HANDLE *)this + 3), *((_DWORD *)this + 11), 0LL, 0) == -1 )
          {
            v4 = -2147418113;
            v5 = 283LL;
            goto LABEL_82;
          }
          v26 = operator new[](*((unsigned int *)this + 12), (const struct std::nothrow_t *)&std::nothrow);
          v28 = (void *)*((_QWORD *)this + 93);
          *((_QWORD *)this + 93) = v26;
          if ( v28 )
            operator delete(v28, v27);
          v29 = (void *)*((_QWORD *)this + 93);
          if ( !v29 )
          {
            v4 = -2147024882;
            v5 = 286LL;
            goto LABEL_82;
          }
          if ( !ReadFile(*((HANDLE *)this + 3), v29, *((_DWORD *)this + 12), &NumberOfBytesRead, 0LL) )
          {
            v23 = 289LL;
            return wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)v23,
                     (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                     v22);
          }
          v30 = *((_DWORD *)this + 12);
          if ( NumberOfBytesRead == v30 )
          {
            nFileSizeLow = FileInformation.nFileSizeLow;
            *((_DWORD *)this + 200) = v30 / *((_DWORD *)this + 13);
            v32 = CQueryKnownGameList::ValidateKGL(this, nFileSizeLow);
            v4 = v32;
            if ( v32 != -2147024809 )
            {
              if ( v32 >= 0 )
                return 0;
              v5 = 296LL;
              goto LABEL_82;
            }
            return -2147024809;
          }
          v25 = 290LL;
        }
        else
        {
          v25 = 280LL;
        }
LABEL_77:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)0x80070057LL);
        return -2147024809;
      }
    }
    v5 = 232LL;
    goto LABEL_82;
  }
  v4 = -2147467261;
  v5 = 225LL;
LABEL_82:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)v4);
  return v4;
}
