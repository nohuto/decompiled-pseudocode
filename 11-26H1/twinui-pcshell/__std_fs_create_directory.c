/*
 * XREFs of __std_fs_create_directory @ 0x1802CD55C
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800C53F0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 * Callees:
 *     __std_fs_get_stats @ 0x1802CD6C4 (__std_fs_get_stats.c)
 */

__int64 __fastcall _std_fs_create_directory(LPCWSTR lpFileName)
{
  DWORD LastError; // eax
  __int64 v4; // [rsp+58h] [rbp+18h]

  if ( CreateDirectoryW(lpFileName, 0LL) )
  {
    LastError = 0;
    LOBYTE(v4) = 1;
    *(_WORD *)((char *)&v4 + 1) = 0;
    BYTE3(v4) = 0;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError == 183 )
    {
      LastError = _std_fs_get_stats(lpFileName);
      if ( !LastError )
        LastError = 183;
    }
    LOBYTE(v4) = 0;
    *(_WORD *)((char *)&v4 + 1) = 0;
    BYTE3(v4) = 0;
  }
  HIDWORD(v4) = LastError;
  return v4;
}
