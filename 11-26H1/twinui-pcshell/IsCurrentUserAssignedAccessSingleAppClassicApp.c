/*
 * XREFs of IsCurrentUserAssignedAccessSingleAppClassicApp @ 0x1800F5BAC
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180244780 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800F5C1C (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     GetSidStringFromToken @ 0x1800F6470 (GetSidStringFromToken.c)
 *     IsUserSidAssignedAccessSingleAppClassicApp @ 0x1800F660C (IsUserSidAssignedAccessSingleAppClassicApp.c)
 */

__int64 IsCurrentUserAssignedAccessSingleAppClassicApp()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  HLOCAL hMem[5]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  memset(hMem, 0, 24);
  if ( (int)GetSidStringFromToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, (LPWSTR *)hMem) >= 0 )
  {
    v1 = IsUserSidAssignedAccessSingleAppClassicApp(hMem[0]);
    if ( hMem[0] )
      LocalFree(hMem[0]);
    return v1;
  }
  else
  {
    Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(hMem);
  }
  return v0;
}
