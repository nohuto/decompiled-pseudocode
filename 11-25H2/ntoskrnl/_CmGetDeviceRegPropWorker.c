/*
 * XREFs of _CmGetDeviceRegPropWorker @ 0x1408C7ED0
 * Callers:
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     _MapCmDevicePropertyToRegType @ 0x140470B74 (_MapCmDevicePropertyToRegType.c)
 *     RtlStringCbCopyNExW @ 0x140489E30 (RtlStringCbCopyNExW.c)
 *     wcschr @ 0x1404FD610 (wcschr.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C86C0 (_PnpRegQueryValueIndirect.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     _CmGetInstallerClassRegProp @ 0x1409AC648 (_CmGetInstallerClassRegProp.c)
 */

__int64 __fastcall CmGetDeviceRegPropWorker(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        int a4,
        _DWORD *a5,
        NTSTRSAFE_PWSTR pszDest,
        unsigned int *a7,
        __int16 a8)
{
  const WCHAR *v10; // r10
  NTSTATUS inited; // edi
  unsigned int v13; // edx
  wchar_t *v14; // rsi
  const wchar_t *v15; // r8
  __int64 (__fastcall *v16)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  HANDLE v17; // rdx
  NTSTATUS v18; // eax
  int v19; // ecx
  HANDLE v21; // r8
  NTSTATUS DeviceRegProp; // eax
  int InstallerClassRegProp; // eax
  int v24; // eax
  wchar_t *v25; // rax
  const wchar_t *v26; // r8
  _DWORD *v27; // rdx
  __int64 v28; // rax
  int v29; // r9d
  NTSTRSAFE_PWSTR *ppszDestEnd; // [rsp+20h] [rbp-E0h]
  NTSTRSAFE_PWSTR *ppszDestEnda; // [rsp+20h] [rbp-E0h]
  size_t *pcbRemaining; // [rsp+28h] [rbp-D8h]
  ULONG dwFlags; // [rsp+30h] [rbp-D0h]
  unsigned int cbDest; // [rsp+60h] [rbp-A0h]
  unsigned int cbDest_4; // [rsp+64h] [rbp-9Ch] BYREF
  int v36; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v37; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  STRSAFE_PCNZWCH pszSrc; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v42[76]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v43; // [rsp+ECh] [rbp-14h]

  v37 = a5;
  v10 = a2;
  inited = 0;
  pszSrc = a2;
  Handle = 0LL;
  v36 = 0;
  cbDest_4 = 0;
  v40 = 0;
  DestinationString = 0LL;
  if ( a8 )
    return 3221225485LL;
  if ( !a7 )
    return 3221225485LL;
  if ( !a5 )
    return 3221225485LL;
  v13 = *a7;
  if ( *a7 )
  {
    if ( !pszDest )
      return 3221225485LL;
  }
  v14 = 0LL;
  *a7 = 0;
  if ( v13 )
    v14 = pszDest;
  cbDest = v13;
  *a5 = 0;
  if ( (unsigned int)(a4 - 1) > 0x24 )
    return 3221226032LL;
  if ( a4 != 37 )
  {
    if ( a4 != 25 )
    {
      switch ( a4 )
      {
        case 1:
        case 2:
        case 3:
        case 5:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
          goto LABEL_10;
        default:
          return 3221226032LL;
      }
    }
    return 3221226032LL;
  }
LABEL_10:
  if ( !a3 )
  {
    inited = CmOpenDeviceRegKey(a1, 33554433, 0, (__int64)&Handle, 0LL);
    if ( inited < 0 )
      goto LABEL_29;
    v13 = cbDest;
    v10 = pszSrc;
  }
  switch ( a4 )
  {
    case 29:
LABEL_14:
      switch ( a4 )
      {
        case 1:
          v15 = L"DeviceDesc";
          goto LABEL_17;
        case 2:
        case 4:
        case 6:
        case 7:
        case 10:
        case 11:
        case 15:
        case 20:
        case 21:
        case 22:
        case 23:
        case 25:
        case 31:
        case 32:
        case 33:
        case 35:
        case 36:
          inited = -1073741264;
          goto LABEL_29;
        case 3:
          v15 = L"CompatibleIDs";
          goto LABEL_17;
        case 5:
          v15 = L"Service";
          goto LABEL_17;
        case 8:
          v15 = L"Class";
          goto LABEL_17;
        case 9:
          v15 = L"ClassGUID";
          goto LABEL_17;
        case 12:
          v15 = L"Mfg";
          goto LABEL_17;
        case 13:
          v15 = L"FriendlyName";
          goto LABEL_17;
        case 14:
          v15 = L"LocationInformation";
          goto LABEL_17;
        case 16:
          v15 = L"Capabilities";
          goto LABEL_17;
        case 17:
          v15 = L"UINumber";
          goto LABEL_17;
        case 18:
          v15 = L"UpperFilters";
          goto LABEL_17;
        case 19:
          v15 = L"LowerFilters";
          goto LABEL_17;
        case 24:
          v15 = L"Security";
          goto LABEL_17;
        case 26:
          v15 = L"DeviceType";
          goto LABEL_17;
        case 27:
          v15 = L"Exclusive";
          goto LABEL_17;
        case 28:
          v15 = L"DeviceCharacteristics";
          goto LABEL_17;
        case 29:
          v15 = L"Address";
          goto LABEL_17;
        case 30:
          v15 = L"UINumberDescFormat";
          goto LABEL_17;
        case 34:
          v15 = L"RemovalPolicy";
          goto LABEL_17;
        case 37:
          v15 = L"ContainerID";
          goto LABEL_17;
        default:
          return 3221226032LL;
      }
    case 8:
      v21 = Handle;
      cbDest_4 = 78;
      if ( a3 )
        v21 = a3;
      DeviceRegProp = CmGetDeviceRegProp(a1, v10, (__int64)v21, 9u, (__int64)&v36, (__int64)v42, (__int64)&cbDest_4, 0);
      inited = DeviceRegProp;
      if ( DeviceRegProp == -1073741789 )
      {
        inited = -1073741595;
      }
      else if ( !DeviceRegProp )
      {
        v43 = 0;
        ppszDestEnda = (NTSTRSAFE_PWSTR *)v37;
        *a7 = cbDest;
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  a1,
                                  (unsigned int)v42,
                                  0,
                                  8,
                                  (__int64)ppszDestEnda,
                                  (__int64)v14,
                                  (__int64)a7);
        inited = InstallerClassRegProp;
        goto LABEL_42;
      }
      break;
    case 23:
      v25 = wcschr(v10, 0x5Cu);
      if ( v25 )
      {
        v26 = pszSrc;
        v27 = v37;
        *a7 = (_DWORD)v25 - (_DWORD)pszSrc + 2;
        *v27 = 1;
        v28 = *a7;
        if ( cbDest < (unsigned int)v28 )
          inited = -1073741789;
        else
          inited = RtlStringCbCopyNExW(v14, cbDest, v26, v28 - 2, ppszDestEnd, pcbRemaining, dwFlags);
      }
      else
      {
        inited = -1073741811;
      }
      break;
    case 36:
      v29 = (int)Handle;
      if ( a3 )
        v29 = (int)a3;
      InstallerClassRegProp = PnpGetObjectProperty(
                                a1,
                                (_DWORD)v10,
                                1,
                                v29,
                                0LL,
                                (__int64)&DEVPKEY_Device_LocationPaths,
                                (__int64)&v40,
                                (__int64)v14,
                                v13,
                                (__int64)a7,
                                0);
      inited = InstallerClassRegProp;
      *v37 = 7;
      if ( InstallerClassRegProp < 0 )
      {
LABEL_42:
        if ( InstallerClassRegProp == -1073741772 )
LABEL_43:
          inited = -1073741275;
      }
      break;
    default:
      switch ( a4 )
      {
        case 15:
        case 20:
        case 21:
        case 22:
        case 31:
        case 32:
        case 33:
        case 35:
          inited = RtlInitUnicodeStringEx(&DestinationString, v10);
          if ( inited < 0 )
            goto LABEL_29;
          if ( *(_QWORD *)(a1 + 256) )
          {
            v24 = guard_dispatch_icall_no_overrides(a1);
            inited = v24;
            if ( v24 == -2147483643 )
            {
              inited = -1073741789;
            }
            else
            {
              if ( v24 == -1073741772 )
                goto LABEL_43;
              if ( v24 < 0 && v24 != -1073741789 )
                goto LABEL_29;
            }
            *a7 = cbDest;
            *v37 = MapCmDevicePropertyToRegType(a4);
            goto LABEL_29;
          }
          inited = -1073741822;
          break;
        default:
          switch ( a4 )
          {
            case 2:
              v15 = L"HardwareID";
              break;
            case 10:
              v15 = L"Driver";
              break;
            case 11:
              v15 = L"ConfigFlags";
              break;
            default:
              goto LABEL_14;
          }
LABEL_17:
          v16 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(a1 + 520);
          cbDest_4 = v13;
          v17 = Handle;
          if ( a3 )
            v17 = a3;
          if ( !v16 || v16 == PnpRegQueryValueIndirect )
            v18 = PnpRegQueryValueIndirect(a1, v17, v15, &v36, v14, &cbDest_4, 0LL);
          else
            v18 = guard_dispatch_icall_no_overrides(a1);
          if ( v18 == -1073741772 || v18 == -1073741444 )
            goto LABEL_43;
          if ( (int)(v18 + 0x80000000) >= 0 && v18 != -1073741789 )
          {
            inited = v18;
            goto LABEL_29;
          }
          v19 = v36;
          if ( v36 == 1 )
          {
            if ( cbDest_4 < 2 )
            {
              inited = -1073741275;
              goto LABEL_29;
            }
          }
          else if ( v36 == 7 )
          {
            if ( cbDest_4 < 2 )
              goto LABEL_43;
          }
          else if ( cbDest_4 != 4 && v36 == 4 )
          {
            goto LABEL_43;
          }
          *a7 = cbDest_4;
          *v37 = v19;
          if ( v18 || !cbDest )
            inited = -1073741789;
          goto LABEL_29;
      }
      break;
  }
LABEL_29:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
