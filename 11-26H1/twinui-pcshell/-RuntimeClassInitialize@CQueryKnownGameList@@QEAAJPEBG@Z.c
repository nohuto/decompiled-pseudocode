/*
 * XREFs of ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x18003CED8
 * Callers:
 *     ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x180127DB8 (--$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKno.c)
 * Callees:
 *     ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x18003D8FC (-ValidateKGL@CQueryKnownGameList@@AEAAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800C1DF4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?close_reset@?$close_invoke_helper@$00P6AHPEAX@Z$1?CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@Z @ 0x18017DFA0 (-close_reset@-$close_invoke_helper@$00P6AHPEAX@Z$1-CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@.c)
 *     ??$?RG$0A@@?$default_delete@$$BY0A@G@std@@QEBAXPEAG@Z @ 0x18018E874 (--$-RG$0A@@-$default_delete@$$BY0A@G@std@@QEBAXPEAG@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802CE0B0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CQueryKnownGameList::RuntimeClassInitialize(CQueryKnownGameList *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // r14
  const unsigned __int16 *v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // edi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  void *v9; // rax
  __int64 v10; // rdx
  _WORD *v11; // rcx
  __int64 v12; // rdx
  _WORD *v13; // rax
  __int64 v14; // rdx
  HANDLE FileW; // rax
  void *v17; // rcx
  void *v18; // rdi
  const char *v19; // r9
  __int64 v20; // rdx
  int v21; // ecx
  void *v22; // rax
  const struct std::nothrow_t *v23; // rdx
  void *v24; // rcx
  void *v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // ebx
  __int64 v28; // rdx
  DWORD nFileSizeLow; // edx
  int v30; // eax
  __int64 v31; // rdx
  int dwCreationDisposition; // [rsp+20h] [rbp-39h]
  DWORD NumberOfBytesRead; // [rsp+40h] [rbp-19h] BYREF
  _BY_HANDLE_FILE_INFORMATION FileInformation; // [rsp+48h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  NumberOfBytesRead = 0;
  v2 = a2;
  memset(&FileInformation, 0, sizeof(FileInformation));
  if ( !a2 )
  {
    v27 = -2147467261;
    v28 = 225LL;
    goto LABEL_43;
  }
  v4 = a2;
  v5 = 0x7FFFFFFFLL;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = v5 == 0 ? 0x80070057 : 0;
  if ( !v5 )
  {
    v14 = 227LL;
    goto LABEL_19;
  }
  v7 = ((0x7FFFFFFF - v5) & -(__int64)(v5 != 0)) + 1;
  v8 = 2 * v7;
  if ( !is_mul_ok(v7, 2uLL) )
    v8 = -1LL;
  v9 = operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  v10 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = v9;
  if ( v10 )
    std::default_delete<unsigned short [0]>::operator()<unsigned short,0>();
  v11 = (_WORD *)*((_QWORD *)this + 2);
  if ( !v11 )
  {
    v27 = -2147024882;
    v28 = 230LL;
    goto LABEL_43;
  }
  v12 = 2147483646LL;
  if ( v7 - 1 > 0x7FFFFFFE )
  {
    v6 = -2147024809;
    if ( v7 )
      *v11 = 0;
    goto LABEL_18;
  }
  do
  {
    if ( !v12 )
      break;
    if ( !*v2 )
      break;
    *v11++ = *v2++;
    --v12;
    --v7;
  }
  while ( v7 );
  v13 = v11 - 1;
  if ( v7 )
    v13 = v11;
  *v13 = 0;
  v6 = v7 == 0 ? 0x8007007A : 0;
  if ( !v7 )
  {
LABEL_18:
    v14 = 232LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v6,
      dwCreationDisposition);
    return v6;
  }
  FileW = CreateFileW(*((LPCWSTR *)this + 2), 0x80000000, 1u, 0LL, 3u, 0x80u, 0LL);
  v17 = (void *)*((_QWORD *)this + 3);
  v18 = FileW;
  if ( v17 != (void *)-1LL && v17 )
    wil::details::close_invoke_helper<1,int (*)(void *),&int CloseHandle(void *),void *>::close_reset(v17);
  *((_QWORD *)this + 3) = v18;
  if ( v18 == (void *)-1LL )
    return wil::details::GetLastErrorFailHr((wil::details *)v17);
  if ( GetFileInformationByHandle(v18, &FileInformation) )
  {
    if ( FileInformation.nFileSizeHigh )
    {
      v20 = 241LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x80070057LL,
        dwCreationDisposition);
      return 2147942487LL;
    }
    if ( ReadFile(*((HANDLE *)this + 3), (char *)this + 32, 0x18u, &NumberOfBytesRead, 0LL) )
    {
      if ( NumberOfBytesRead != 24 )
      {
        v20 = 244LL;
        goto LABEL_25;
      }
      v21 = *((_DWORD *)this + 9);
      if ( !v21 )
      {
        v20 = 248LL;
        goto LABEL_25;
      }
      if ( v21 == 1 )
      {
        if ( *((_DWORD *)this + 8) != 24 )
        {
          v20 = 251LL;
          goto LABEL_25;
        }
      }
      else
      {
        if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 56, 8u, &NumberOfBytesRead, 0LL) )
        {
          v31 = 257LL;
          return wil::details::in1diag3::Return_GetLastError(
                   retaddr,
                   (void *)v31,
                   (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                   v19);
        }
        if ( NumberOfBytesRead != 8 )
        {
          v20 = 258LL;
          goto LABEL_25;
        }
        if ( *((_DWORD *)this + 9) >= 3u )
        {
          if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 64, 0x298u, &NumberOfBytesRead, 0LL) )
          {
            v31 = 262LL;
            return wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)v31,
                     (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                     v19);
          }
          if ( NumberOfBytesRead != 664 )
          {
            v20 = 263LL;
            goto LABEL_25;
          }
          if ( *((_DWORD *)this + 9) >= 4u )
          {
            if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 728, 8u, &NumberOfBytesRead, 0LL) )
            {
              v31 = 267LL;
              return wil::details::in1diag3::Return_GetLastError(
                       retaddr,
                       (void *)v31,
                       (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                       v19);
            }
            if ( NumberOfBytesRead != 8 )
            {
              v20 = 268LL;
              goto LABEL_25;
            }
            if ( *((_DWORD *)this + 9) >= 5u )
            {
              if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 736, 4u, &NumberOfBytesRead, 0LL) )
              {
                v31 = 272LL;
                return wil::details::in1diag3::Return_GetLastError(
                         retaddr,
                         (void *)v31,
                         (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                         v19);
              }
              if ( NumberOfBytesRead != 4 )
              {
                v20 = 273LL;
                goto LABEL_25;
              }
            }
          }
        }
      }
      if ( *((_DWORD *)this + 12) >= FileInformation.nFileSizeLow )
      {
        v20 = 279LL;
        goto LABEL_25;
      }
      if ( !*((_DWORD *)this + 13) )
      {
        v20 = 280LL;
        goto LABEL_25;
      }
      if ( SetFilePointer(*((HANDLE *)this + 3), *((_DWORD *)this + 11), 0LL, 0) == -1 )
      {
        v27 = -2147418113;
        v28 = 283LL;
        goto LABEL_43;
      }
      v22 = operator new[](*((unsigned int *)this + 12), (const struct std::nothrow_t *)&std::nothrow);
      v24 = (void *)*((_QWORD *)this + 93);
      *((_QWORD *)this + 93) = v22;
      if ( v24 )
        operator delete(v24, v23);
      v25 = (void *)*((_QWORD *)this + 93);
      if ( !v25 )
      {
        v27 = -2147024882;
        v28 = 286LL;
        goto LABEL_43;
      }
      if ( ReadFile(*((HANDLE *)this + 3), v25, *((_DWORD *)this + 12), &NumberOfBytesRead, 0LL) )
      {
        v26 = *((_DWORD *)this + 12);
        if ( NumberOfBytesRead != v26 )
        {
          v20 = 290LL;
          goto LABEL_25;
        }
        nFileSizeLow = FileInformation.nFileSizeLow;
        *((_DWORD *)this + 200) = v26 / *((_DWORD *)this + 13);
        v30 = CQueryKnownGameList::ValidateKGL(this, nFileSizeLow);
        v27 = v30;
        if ( v30 == -2147024809 )
          return 2147942487LL;
        if ( v30 >= 0 )
          return 0LL;
        v28 = 296LL;
LABEL_43:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v28,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)v27,
          dwCreationDisposition);
        return v27;
      }
      v31 = 289LL;
    }
    else
    {
      v31 = 243LL;
    }
  }
  else
  {
    v31 = 238LL;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)v31,
           (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
           v19);
}
