/*
 * XREFs of ?IsXusbDevicePresent@GamingOverlayExperienceManager@@AEAA_NUwrite_lock_required@wil@@@Z @ 0x180235C5C
 * Callers:
 *     ?StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18023659C (-StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ @ 0x18018E854 (--1-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802CE0B0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char GamingOverlayExperienceManager::IsXusbDevicePresent()
{
  int v0; // esi
  char v1; // di
  unsigned __int64 v2; // rax
  WCHAR *v3; // rax
  WCHAR *v4; // rbx
  CONFIGRET Device_Interface_ListW; // eax
  ULONG pulLen; // [rsp+30h] [rbp-28h] BYREF
  WCHAR *v8; // [rsp+38h] [rbp-20h] BYREF

  pulLen = 0;
  v0 = 0;
  v1 = 1;
  while ( 1 )
  {
    if ( CM_Get_Device_Interface_List_SizeW(&pulLen, (LPGUID)&InterfaceClassGuid, 0LL, 0) )
      return 0;
    v2 = 2LL * pulLen;
    if ( !is_mul_ok(pulLen, 2uLL) )
      v2 = -1LL;
    v3 = (WCHAR *)operator new[](v2, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v3;
    v4 = v3;
    if ( !v3 )
    {
LABEL_14:
      std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v8);
      return 0;
    }
    Device_Interface_ListW = CM_Get_Device_Interface_ListW((LPGUID)&InterfaceClassGuid, 0LL, v3, pulLen, 0);
    if ( !Device_Interface_ListW )
      break;
    if ( Device_Interface_ListW != 26 )
      goto LABEL_14;
    std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v8);
    if ( ++v0 >= 4 )
      return 0;
  }
  if ( !pulLen || !*v4 )
    v1 = 0;
  std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&v8);
  return v1;
}
