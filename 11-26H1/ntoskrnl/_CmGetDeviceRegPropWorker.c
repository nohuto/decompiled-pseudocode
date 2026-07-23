/*
 * XREFs of _CmGetDeviceRegPropWorker @ 0x140956E10
 * Callers:
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     _MapCmDevicePropertyToRegType @ 0x14049DCC8 (_MapCmDevicePropertyToRegType.c)
 *     RtlStringCbCopyNExW @ 0x1404AF9AC (RtlStringCbCopyNExW.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _CmGetInstallerClassRegProp @ 0x1409738BC (_CmGetInstallerClassRegProp.c)
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
  const wchar_t *v11; // r10
  NTSTATUS inited; // edi
  unsigned int v13; // edx
  wchar_t *v14; // r15
  int v15; // ebx
  HANDLE v17; // r8
  NTSTATUS DeviceRegProp; // eax
  int ObjectProperty; // eax
  int v20; // eax
  HANDLE v21; // rdx
  NTSTATUS v22; // eax
  NTSTATUS v23; // edx
  int v24; // eax
  wchar_t *v25; // rax
  const wchar_t *v26; // r8
  __int64 v27; // rax
  int v28; // r9d
  NTSTRSAFE_PWSTR *ppszDestEnd; // [rsp+20h] [rbp-D9h]
  size_t *pcbRemaining; // [rsp+28h] [rbp-D1h]
  ULONG dwFlags; // [rsp+30h] [rbp-C9h]
  unsigned int cbDest; // [rsp+60h] [rbp-99h]
  unsigned int cbDest_4; // [rsp+64h] [rbp-95h] BYREF
  int v34; // [rsp+68h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-89h] BYREF
  int v36; // [rsp+78h] [rbp-81h] BYREF
  STRSAFE_PCNZWCH pszSrc; // [rsp+80h] [rbp-79h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-71h] BYREF
  _BYTE v39[76]; // [rsp+A0h] [rbp-59h] BYREF
  __int16 v40; // [rsp+ECh] [rbp-Dh]

  v11 = a2;
  pszSrc = a2;
  inited = 0;
  Handle = 0LL;
  v34 = 0;
  cbDest_4 = 0;
  v36 = 0;
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
  *a7 = 0;
  v14 = 0LL;
  cbDest = v13;
  if ( v13 )
    v14 = pszDest;
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
    inited = CmOpenDeviceRegKey(a1, (_DWORD)v11, 16, 0, 33554433, 0, (__int64)&Handle, 0LL);
    if ( inited < 0 )
      goto LABEL_25;
    v13 = cbDest;
    v11 = pszSrc;
  }
  if ( a4 == 29 )
  {
    v15 = 28;
LABEL_15:
    switch ( v15 )
    {
      case 0:
      case 2:
      case 4:
      case 7:
      case 8:
      case 11:
      case 12:
      case 13:
      case 15:
      case 16:
      case 17:
      case 18:
      case 23:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 33:
      case 36:
        goto LABEL_38;
      default:
        inited = -1073741264;
        break;
    }
    goto LABEL_25;
  }
  if ( a4 != 8 )
  {
    if ( a4 == 23 )
    {
      v25 = wcschr(v11, 0x5Cu);
      if ( v25 )
      {
        v26 = pszSrc;
        *a7 = (_DWORD)v25 - (_DWORD)pszSrc + 2;
        *a5 = 1;
        v27 = *a7;
        if ( cbDest < (unsigned int)v27 )
          inited = -1073741789;
        else
          inited = RtlStringCbCopyNExW(v14, cbDest, v26, v27 - 2, ppszDestEnd, pcbRemaining, dwFlags);
      }
      else
      {
        inited = -1073741811;
      }
      goto LABEL_25;
    }
    if ( a4 != 36 )
    {
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
          inited = RtlInitUnicodeStringEx(&DestinationString, v11);
          if ( inited < 0 )
            goto LABEL_25;
          if ( *(_QWORD *)(a1 + 256) )
          {
            v20 = guard_dispatch_icall_no_overrides(a1, (__int64)&DestinationString);
            inited = v20;
            if ( v20 == -2147483643 )
            {
              inited = -1073741789;
LABEL_36:
              *a7 = cbDest;
              *a5 = MapCmDevicePropertyToRegType(a4);
              goto LABEL_25;
            }
            if ( v20 == -1073741772 )
              goto LABEL_24;
            if ( v20 >= 0 || v20 == -1073741789 )
              goto LABEL_36;
          }
          else
          {
            inited = -1073741822;
          }
          break;
        default:
          if ( a4 != 2 && a4 != 10 && a4 != 11 )
          {
            v15 = a4 - 1;
            goto LABEL_15;
          }
LABEL_38:
          cbDest_4 = v13;
          v21 = Handle;
          if ( a3 )
            v21 = a3;
          v22 = guard_dispatch_icall_no_overrides(a1, (__int64)v21);
          v23 = v22;
          if ( v22 == -1073741772 || v22 == -1073741444 )
            goto LABEL_24;
          if ( (int)(v22 + 0x80000000) < 0 || v22 == -1073741789 )
          {
            v24 = v34;
            if ( v34 == 1 )
            {
              if ( cbDest_4 < 2 )
                goto LABEL_24;
            }
            else if ( v34 == 7 )
            {
              if ( cbDest_4 < 2 )
                goto LABEL_24;
            }
            else if ( cbDest_4 != 4 && v34 == 4 )
            {
              goto LABEL_24;
            }
            *a7 = cbDest_4;
            *a5 = v24;
            if ( v23 || !cbDest )
              inited = -1073741789;
          }
          else
          {
            inited = v22;
          }
          goto LABEL_25;
      }
      goto LABEL_25;
    }
    v28 = (int)Handle;
    if ( a3 )
      v28 = (int)a3;
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       (_DWORD)v11,
                       1,
                       v28,
                       0LL,
                       (__int64)&DEVPKEY_Device_LocationPaths,
                       (__int64)&v36,
                       (__int64)v14,
                       v13,
                       (__int64)a7,
                       0);
    *a5 = 7;
    inited = ObjectProperty;
    if ( ObjectProperty >= 0 )
      goto LABEL_25;
LABEL_23:
    if ( ObjectProperty == -1073741772 )
LABEL_24:
      inited = -1073741275;
    goto LABEL_25;
  }
  v17 = Handle;
  cbDest_4 = 78;
  if ( a3 )
    v17 = a3;
  DeviceRegProp = CmGetDeviceRegProp(
                    a1,
                    (__int64)v11,
                    (__int64)v17,
                    9u,
                    (__int64)&v34,
                    (__int64)v39,
                    (__int64)&cbDest_4,
                    0);
  inited = DeviceRegProp;
  if ( DeviceRegProp == -1073741789 )
  {
    inited = -1073741595;
    goto LABEL_25;
  }
  if ( !DeviceRegProp )
  {
    v40 = 0;
    *a7 = cbDest;
    ObjectProperty = CmGetInstallerClassRegProp(a1, (unsigned int)v39, 0, 8, (__int64)a5, (__int64)v14, (__int64)a7);
    inited = ObjectProperty;
    goto LABEL_23;
  }
LABEL_25:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
