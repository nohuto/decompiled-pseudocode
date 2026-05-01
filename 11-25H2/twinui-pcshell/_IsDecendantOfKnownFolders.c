/*
 * XREFs of _IsDecendantOfKnownFolders @ 0x180673018
 * Callers:
 *     ?_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z @ 0x1806730DC (-_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

_BOOL8 __fastcall IsDecendantOfKnownFolders(__int64 a1)
{
  BOOL v1; // esi
  unsigned int v3; // edi
  char v4; // bl
  PWSTR ppszPath; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3 = 0;
  do
  {
    if ( v3 >= 3 )
      break;
    ppszPath = 0LL;
    if ( SHGetKnownFolderPath((const KNOWNFOLDERID *const)&unk_180898988 + v3, 0x5000u, 0LL, &ppszPath) >= 0 )
    {
      v4 = PathComparePaths(ppszPath, a1);
      CoTaskMemFree(ppszPath);
      v1 = (v4 & 8) != 0;
    }
    ++v3;
  }
  while ( !v1 );
  return v1;
}
