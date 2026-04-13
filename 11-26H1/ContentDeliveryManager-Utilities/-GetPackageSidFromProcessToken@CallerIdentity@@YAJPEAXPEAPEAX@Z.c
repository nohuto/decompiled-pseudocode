/*
 * XREFs of ?GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180072F3C
 * Callers:
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180072EB8 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180064140 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CallerIdentity::GetPackageSidFromProcessToken(HANDLE TokenHandle, _QWORD *a2, void **a3)
{
  int Error; // ebx
  signed int LastError; // eax
  PSID *v7; // rdi
  DWORD LengthSid; // ebx
  HLOCAL v9; // rax
  void *v10; // rsi
  SIZE_T uBytes; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(uBytes) = 0;
  if ( GetTokenInformation(TokenHandle, TokenAppContainerSid, 0LL, 0, (PDWORD)&uBytes) )
    return (unsigned int)-2147418113;
  LastError = GetLastError();
  Error = LastError;
  if ( LastError == 122 )
    goto LABEL_24;
  if ( LastError > 0 )
    Error = (unsigned __int16)LastError | 0x80070000;
  if ( Error >= 0 )
  {
LABEL_24:
    v7 = (PSID *)LocalAlloc(0x40u, (unsigned int)uBytes);
    if ( !v7 )
      return (unsigned int)-2147024882;
    if ( GetTokenInformation(TokenHandle, TokenAppContainerSid, v7, uBytes, (PDWORD)&uBytes)
      || (Error = ResultFromKnownLastError(), Error >= 0) )
    {
      if ( *v7 )
      {
        LengthSid = GetLengthSid(*v7);
        v9 = LocalAlloc(0x40u, LengthSid);
        v10 = v9;
        if ( v9 )
        {
          if ( CopySid(LengthSid, v9, *v7) )
          {
            Error = 0;
          }
          else
          {
            Error = ResultFromKnownLastError();
            if ( Error < 0 )
            {
              LocalFree(v10);
              goto LABEL_20;
            }
          }
          *a2 = v10;
        }
        else
        {
          Error = -2147024882;
        }
      }
      else
      {
        Error = -2147023728;
      }
LABEL_20:
      LocalFree(v7);
    }
  }
  return (unsigned int)Error;
}
