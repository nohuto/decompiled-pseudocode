/*
 * XREFs of ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x180033728
 * Callers:
 *     ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x1801413BC (--$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKno.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800B71B0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?close_reset@?$close_invoke_helper@$00P6AHPEAX@Z$1?CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@Z @ 0x1800D109C (-close_reset@-$close_invoke_helper@$00P6AHPEAX@Z$1-CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@.c)
 *     ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x180156688 (-ValidateKGL@CQueryKnownGameList@@AEAAJK@Z.c)
 *     ??$?RG$0A@@?$default_delete@$$BY0A@G@std@@QEBAXPEAG@Z @ 0x180197970 (--$-RG$0A@@-$default_delete@$$BY0A@G@std@@QEBAXPEAG@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D5A88 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CQueryKnownGameList::RuntimeClassInitialize(CQueryKnownGameList *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  void *v9; // rax
  __int64 v10; // rdx
  char *v11; // rcx
  unsigned __int64 v12; // rdx
  char *v13; // r14
  __int16 v14; // ax
  char *v15; // rax
  __int64 v16; // rdx
  HANDLE FileW; // rdi
  wil::details *v19; // rcx
  const char *v20; // r9
  __int64 v21; // rdx
  int v22; // ecx
  void *v23; // rax
  const struct std::nothrow_t *v24; // rdx
  void *v25; // rcx
  void *v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // ebx
  __int64 v29; // rdx
  DWORD nFileSizeLow; // edx
  int v31; // eax
  __int64 v32; // rdx
  int dwCreationDisposition; // [rsp+20h] [rbp-39h]
  DWORD NumberOfBytesRead; // [rsp+40h] [rbp-19h] BYREF
  _BY_HANDLE_FILE_INFORMATION FileInformation; // [rsp+48h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  NumberOfBytesRead = 0;
  memset(&FileInformation, 0, sizeof(FileInformation));
  if ( !a2 )
  {
    v28 = -2147467261;
    v29 = 225LL;
    goto LABEL_45;
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
    v16 = 227LL;
    goto LABEL_20;
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
  v11 = (char *)*((_QWORD *)this + 2);
  if ( !v11 )
  {
    v28 = -2147024882;
    v29 = 230LL;
    goto LABEL_45;
  }
  if ( v7 - 1 > 0x7FFFFFFE )
  {
    v6 = -2147024809;
    if ( v7 )
      *(_WORD *)v11 = 0;
    goto LABEL_19;
  }
  v12 = 2147483646 - v7;
  v13 = (char *)((char *)a2 - v11);
  do
  {
    if ( !(v7 + v12) )
      break;
    v14 = *(_WORD *)&v13[(_QWORD)v11];
    if ( !v14 )
      break;
    *(_WORD *)v11 = v14;
    v11 += 2;
    --v7;
  }
  while ( v7 );
  v15 = v11 - 2;
  if ( v7 )
    v15 = v11;
  *(_WORD *)v15 = 0;
  v6 = v7 == 0 ? 0x8007007A : 0;
  if ( !v7 )
  {
LABEL_19:
    v16 = 232LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v6,
      dwCreationDisposition);
    return v6;
  }
  FileW = CreateFileW(*((LPCWSTR *)this + 2), 0x80000000, 1u, 0LL, 3u, 0x80u, 0LL);
  v19 = (wil::details *)(*((_QWORD *)this + 3) - 1LL);
  if ( (unsigned __int64)v19 <= 0xFFFFFFFFFFFFFFFDuLL )
    wil::details::close_invoke_helper<1,int (*)(void *),&int CloseHandle(void *),void *>::close_reset(*((HANDLE *)this + 3));
  *((_QWORD *)this + 3) = FileW;
  if ( FileW == (HANDLE)-1LL )
    return wil::details::GetLastErrorFailHr(v19);
  if ( GetFileInformationByHandle(FileW, &FileInformation) )
  {
    if ( FileInformation.nFileSizeHigh )
    {
      v21 = 241LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x80070057LL,
        dwCreationDisposition);
      return 2147942487LL;
    }
    if ( ReadFile(*((HANDLE *)this + 3), (char *)this + 32, 0x18u, &NumberOfBytesRead, 0LL) )
    {
      if ( NumberOfBytesRead != 24 )
      {
        v21 = 244LL;
        goto LABEL_27;
      }
      v22 = *((_DWORD *)this + 9);
      if ( !v22 )
      {
        v21 = 248LL;
        goto LABEL_27;
      }
      if ( v22 == 1 )
      {
        if ( *((_DWORD *)this + 8) != 24 )
        {
          v21 = 251LL;
          goto LABEL_27;
        }
      }
      else
      {
        if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 56, 8u, &NumberOfBytesRead, 0LL) )
        {
          v32 = 257LL;
          return wil::details::in1diag3::Return_GetLastError(
                   retaddr,
                   (void *)v32,
                   (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                   v20);
        }
        if ( NumberOfBytesRead != 8 )
        {
          v21 = 258LL;
          goto LABEL_27;
        }
        if ( *((_DWORD *)this + 9) >= 3u )
        {
          if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 64, 0x298u, &NumberOfBytesRead, 0LL) )
          {
            v32 = 262LL;
            return wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)v32,
                     (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                     v20);
          }
          if ( NumberOfBytesRead != 664 )
          {
            v21 = 263LL;
            goto LABEL_27;
          }
          if ( *((_DWORD *)this + 9) >= 4u )
          {
            if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 728, 8u, &NumberOfBytesRead, 0LL) )
            {
              v32 = 267LL;
              return wil::details::in1diag3::Return_GetLastError(
                       retaddr,
                       (void *)v32,
                       (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                       v20);
            }
            if ( NumberOfBytesRead != 8 )
            {
              v21 = 268LL;
              goto LABEL_27;
            }
            if ( *((_DWORD *)this + 9) >= 5u )
            {
              if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 736, 4u, &NumberOfBytesRead, 0LL) )
              {
                v32 = 272LL;
                return wil::details::in1diag3::Return_GetLastError(
                         retaddr,
                         (void *)v32,
                         (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                         v20);
              }
              if ( NumberOfBytesRead != 4 )
              {
                v21 = 273LL;
                goto LABEL_27;
              }
            }
          }
        }
      }
      if ( *((_DWORD *)this + 12) >= FileInformation.nFileSizeLow )
      {
        v21 = 279LL;
        goto LABEL_27;
      }
      if ( !*((_DWORD *)this + 13) )
      {
        v21 = 280LL;
        goto LABEL_27;
      }
      if ( SetFilePointer(*((HANDLE *)this + 3), *((_DWORD *)this + 11), 0LL, 0) == -1 )
      {
        v28 = -2147418113;
        v29 = 283LL;
        goto LABEL_45;
      }
      v23 = operator new[](*((unsigned int *)this + 12), (const struct std::nothrow_t *)&std::nothrow);
      v25 = (void *)*((_QWORD *)this + 93);
      *((_QWORD *)this + 93) = v23;
      if ( v25 )
        operator delete(v25, v24);
      v26 = (void *)*((_QWORD *)this + 93);
      if ( !v26 )
      {
        v28 = -2147024882;
        v29 = 286LL;
        goto LABEL_45;
      }
      if ( ReadFile(*((HANDLE *)this + 3), v26, *((_DWORD *)this + 12), &NumberOfBytesRead, 0LL) )
      {
        v27 = *((_DWORD *)this + 12);
        if ( NumberOfBytesRead != v27 )
        {
          v21 = 290LL;
          goto LABEL_27;
        }
        nFileSizeLow = FileInformation.nFileSizeLow;
        *((_DWORD *)this + 200) = v27 / *((_DWORD *)this + 13);
        v31 = CQueryKnownGameList::ValidateKGL(this, nFileSizeLow);
        v28 = v31;
        if ( v31 == -2147024809 )
          return 2147942487LL;
        if ( v31 >= 0 )
          return 0LL;
        v29 = 296LL;
LABEL_45:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)v28,
          dwCreationDisposition);
        return v28;
      }
      v32 = 289LL;
    }
    else
    {
      v32 = 243LL;
    }
  }
  else
  {
    v32 = 238LL;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)v32,
           (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
           v20);
}
