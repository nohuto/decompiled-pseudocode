/*
 * XREFs of ?ReadProductType@CDesktopManager@@AEAAXXZ @ 0x1800779D8
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800720A0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

void __fastcall CDesktopManager::ReadProductType(CDesktopManager *this)
{
  _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF
  unsigned __int8 v3; // [rsp+13Ah] [rbp-1Eh]

  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  if ( GetVersionExW(&VersionInformation) )
    *((_DWORD *)this + 38) = v3;
}
