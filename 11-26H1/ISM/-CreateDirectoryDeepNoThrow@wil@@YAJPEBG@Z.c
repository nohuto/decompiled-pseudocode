/*
 * XREFs of ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800D5064
 * Callers:
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800D5064 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800D80BC (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180081CC0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800D5064 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?try_get_parent_path_range@wil@@YA_NPEBGPEA_K@Z @ 0x1800D8E08 (-try_get_parent_path_range@wil@@YA_NPEBGPEA_K@Z.c)
 */

__int64 __fastcall wil::CreateDirectoryDeepNoThrow(const WCHAR *this, const unsigned __int16 *a2)
{
  DWORD LastError; // eax
  unsigned __int64 *v4; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  size_t v7; // rax
  const unsigned __int16 *v8; // rdx
  wil *v9; // rbx
  unsigned int v11; // edi
  const WCHAR *v12; // rax
  wil *v13; // rcx
  wil *v14; // rax
  int DirectoryDeepNoThrow; // eax
  const struct std::nothrow_t *v16; // rdx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdx
  const struct std::nothrow_t *v20; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v22; // [rsp+48h] [rbp+10h] BYREF

  if ( !CreateDirectoryW(this, 0LL) )
  {
    LastError = GetLastError();
    if ( LastError == 3 )
    {
      v22 = 0LL;
      if ( wil::try_get_parent_path_range(this, (const unsigned __int16 *)&v22, v4) )
      {
        v5 = v22;
        v6 = v22 + 1;
        v7 = 2 * (v22 + 1);
        if ( !is_mul_ok(v22 + 1, 2uLL) )
          v7 = -1LL;
        v9 = (wil *)operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
        if ( !v9 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x82,
            (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
            (const char *)0x8007000ELL);
          return 2147942414LL;
        }
        if ( v6 - 1 > 0x7FFFFFFE )
        {
          v11 = -2147024809;
          if ( !v6 )
          {
LABEL_28:
            v17 = v11;
            v18 = 131LL;
            goto LABEL_29;
          }
LABEL_27:
          *(_WORD *)v9 = 0;
          goto LABEL_28;
        }
        if ( v5 > 0x7FFFFFFE )
        {
          v11 = -2147024809;
          goto LABEL_27;
        }
        v12 = this;
        v13 = v9;
        do
        {
          if ( !v5 )
            break;
          v8 = (const unsigned __int16 *)*v12;
          if ( !(_WORD)v8 )
            break;
          *(_WORD *)v13 = (_WORD)v8;
          ++v12;
          v13 = (wil *)((char *)v13 + 2);
          --v5;
          --v6;
        }
        while ( v6 );
        v14 = (wil *)((char *)v13 - 2);
        if ( v6 )
          v14 = v13;
        *(_WORD *)v14 = 0;
        v11 = v6 == 0 ? 0x8007007A : 0;
        if ( !v6 )
          goto LABEL_28;
        DirectoryDeepNoThrow = wil::CreateDirectoryDeepNoThrow(v9, v8);
        v11 = DirectoryDeepNoThrow;
        if ( DirectoryDeepNoThrow < 0 )
        {
          v17 = (unsigned int)DirectoryDeepNoThrow;
          v18 = 132LL;
LABEL_29:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v18,
            (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
            (const char *)v17);
          operator delete(v9, v20);
          return v11;
        }
        operator delete(v9, v16);
      }
      if ( !CreateDirectoryW(this, 0LL) )
      {
        LastError = GetLastError();
        if ( LastError != 183 )
        {
          if ( LastError )
          {
            v19 = 139LL;
            return wil::details::in1diag3::Return_Win32(
                     retaddr,
                     (void *)v19,
                     (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
                     (const char *)LastError);
          }
        }
      }
    }
    else if ( LastError != 183 && LastError )
    {
      v19 = 145LL;
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)v19,
               (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
               (const char *)LastError);
    }
  }
  return 0LL;
}
