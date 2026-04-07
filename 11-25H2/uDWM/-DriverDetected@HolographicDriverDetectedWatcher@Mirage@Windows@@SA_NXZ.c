/*
 * XREFs of ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x180087AB0
 * Callers:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180087A14 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009A248 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800A35CC (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

char Windows::Mirage::HolographicDriverDetectedWatcher::DriverDetected(void)
{
  char v0; // di
  CONFIGRET Device_Interface_List_SizeW; // eax
  DWORD v2; // eax
  unsigned int v3; // r8d
  unsigned __int128 v4; // rax
  WCHAR *v5; // rax
  const char *v6; // r9
  WCHAR *v7; // rbx
  CONFIGRET Device_Interface_ListW; // eax
  const struct std::nothrow_t *v9; // rdx
  DWORD v10; // eax
  unsigned int v11; // r8d
  ULONG ulFlags; // [rsp+20h] [rbp-38h]
  ULONG pulLen; // [rsp+30h] [rbp-28h] BYREF
  GUID InterfaceClassGuid; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v0 = 0;
  InterfaceClassGuid = GUID_DEVINTERFACE_HOLOGRAPHIC_DISPLAY;
  while ( !v0 )
  {
    pulLen = 0;
    Device_Interface_List_SizeW = CM_Get_Device_Interface_List_SizeW(&pulLen, &InterfaceClassGuid, 0LL, 0);
    v2 = CM_MapCrToWin32Err(Device_Interface_List_SizeW, 0x507u);
    if ( v2 )
      wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x77, v3, (const char *)v2, ulFlags);
    v4 = pulLen * (unsigned __int128)2uLL;
    if ( !is_mul_ok(pulLen, 2uLL) )
      *(_QWORD *)&v4 = -1LL;
    v5 = (WCHAR *)operator new[](v4, *((const struct std::nothrow_t **)&v4 + 1));
    v7 = v5;
    if ( !v5 )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x7A,
        (unsigned int)"onecoreuap\\internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
        v6);
    Device_Interface_ListW = CM_Get_Device_Interface_ListW(&InterfaceClassGuid, 0LL, v5, pulLen, 0);
    if ( Device_Interface_ListW != 26 )
    {
      v10 = CM_MapCrToWin32Err(Device_Interface_ListW, 0x507u);
      if ( v10 )
        wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x85, v11, (const char *)v10, ulFlags);
      if ( *v7 )
      {
        CDisplayBlackCurtainAnimatedVisual::operator delete(v7, v9);
        return 1;
      }
      v0 = 1;
    }
    CDisplayBlackCurtainAnimatedVisual::operator delete(v7, v9);
  }
  return 0;
}
