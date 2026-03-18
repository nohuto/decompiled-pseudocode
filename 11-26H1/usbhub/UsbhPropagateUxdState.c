/*
 * XREFs of UsbhPropagateUxdState @ 0x14005FE94
 * Callers:
 *     UsbhQueryParentHubConfig @ 0x14005FFA4 (UsbhQueryParentHubConfig.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     RtlStringCbPrintfW @ 0x140031F60 (RtlStringCbPrintfW.c)
 *     UsbhOpenUxdPortHandle @ 0x14005FD7C (UsbhOpenUxdPortHandle.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhPropagateUxdState(__int64 a1, void *a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned int i; // esi
  PCWSTR Path; // [rsp+30h] [rbp-48h] BYREF
  wchar_t pszDest[16]; // [rsp+38h] [rbp-40h] BYREF

  wcscpy(pszDest, L"uxd_port_nnn");
  Path = 0LL;
  result = UsbhOpenUxdPortHandle(a1, (void **)&Path);
  v5 = result;
  if ( (int)result >= 0 )
  {
    for ( i = 1;
          i <= *((unsigned __int8 *)FdoExt(a1) + 2938);
          v5 = RtlWriteRegistryValue(0x40000000u, Path, pszDest, 3u, a2, 0x44u) )
    {
      RtlStringCbPrintfW(pszDest, 0x1AuLL, L"uxd_port_%3.3d", i++);
    }
    ZwClose((HANDLE)Path);
    return v5;
  }
  return result;
}
