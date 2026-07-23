/*
 * XREFs of _CmGetDeviceMappedPropertyFromComposite @ 0x14095394C
 * Callers:
 *     _PnpDispatchDevice @ 0x140956100 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x140AE0A94 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x140446CE0 (RtlStringCbCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     wcscmp @ 0x14053A470 (wcscmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140952480 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceParent @ 0x14095276C (_CmGetDeviceParent.c)
 *     _CmGetDeviceCompoundFilters @ 0x140953508 (_CmGetDeviceCompoundFilters.c)
 *     _PnpMultiSzGetLen @ 0x1409536BC (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceStatus @ 0x140955C8C (_CmGetDeviceStatus.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1409AC150 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetDeviceSiblings @ 0x140A9794C (_CmGetDeviceSiblings.c)
 *     _CmGetDeviceChildren @ 0x140A97ACC (_CmGetDeviceChildren.c)
 *     _CmGetDeviceRelationsList @ 0x140AA2650 (_CmGetDeviceRelationsList.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromComposite(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        const wchar_t *a4,
        wchar_t *a5,
        NTSTRSAFE_PWSTR pszDest,
        unsigned int a7,
        int *a8,
        int a9)
{
  wchar_t *v9; // rsi
  NTSTRSAFE_PCWSTR v10; // r14
  signed int DeviceStatus; // ebx
  unsigned int v13; // r12d
  unsigned int v14; // eax
  NTSTRSAFE_PCWSTR v15; // rax
  __int64 v16; // rdx
  wchar_t *v17; // r14
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // r9
  signed int DeviceCompoundFilters; // eax
  int v24; // r12d
  signed int ObjectProperty; // eax
  signed int v26; // eax
  unsigned int v27; // r12d
  int v28; // r9d
  int v29; // edx
  char v30; // cl
  signed int DeviceParent; // eax
  wchar_t *v32; // rax
  int v33; // eax
  int v34; // eax
  const WCHAR *v35; // rdx
  int v36; // eax
  const DEVPROPKEY *v37; // rdx
  int v38; // r13d
  int v39; // r15d
  int v40; // ecx
  int *v41; // rax
  int v42; // eax
  wchar_t *v43; // rax
  const WCHAR *v44; // rdx
  unsigned int v45; // edi
  int v46; // r12d
  int v47; // r9d
  int v48; // edx
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  bool v53; // zf
  signed int DeviceChildren; // eax
  signed int DeviceRelationsList; // eax
  unsigned int Len; // eax
  int v57; // eax
  bool v58; // zf
  int v59; // eax
  int v60; // eax
  const WCHAR *v61; // rdx
  const WCHAR *v62; // rdx
  unsigned int v63; // eax
  wchar_t *v64; // rax
  int v65; // r12d
  int v66; // r8d
  __int64 v67; // [rsp+30h] [rbp-D0h]
  unsigned int v68; // [rsp+40h] [rbp-C0h]
  unsigned int v69; // [rsp+40h] [rbp-C0h]
  unsigned int v70; // [rsp+50h] [rbp-B0h]
  _BYTE v71[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v72; // [rsp+64h] [rbp-9Ch] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+68h] [rbp-98h]
  int v74; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v75; // [rsp+74h] [rbp-8Ch] BYREF
  wchar_t *v76; // [rsp+78h] [rbp-88h]
  int v77; // [rsp+80h] [rbp-80h] BYREF
  int v78; // [rsp+84h] [rbp-7Ch]
  unsigned int v79; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v80; // [rsp+8Ch] [rbp-74h]
  unsigned int v81; // [rsp+90h] [rbp-70h] BYREF
  void *v82; // [rsp+98h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  int v84; // [rsp+B0h] [rbp-50h] BYREF
  int v85; // [rsp+B4h] [rbp-4Ch] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  __int128 Buf2; // [rsp+C0h] [rbp-40h] BYREF
  __int128 Buf1; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t Str2[40]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[40]; // [rsp+130h] [rbp+30h] BYREF

  v9 = pszDest;
  v10 = a4;
  pszSrc = a2;
  v82 = a3;
  DeviceStatus = 0;
  v76 = a5;
  v81 = 0;
  v72 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v84 = 0;
  Handle = 0LL;
  v74 = 0;
  v85 = 0;
  v71[0] = 0;
  DestinationString = 0LL;
  Buf2 = 0LL;
  Buf1 = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *(_DWORD *)a5 = 0;
  *a8 = 0;
  v80 = a9 & 0xFFFF0000;
  if ( pszDest )
  {
    v13 = a7;
    v9 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)pszDest);
  }
  else
  {
    v13 = 0;
    a7 = 0;
  }
  v14 = *((_DWORD *)a4 + 4);
  if ( v14 < 2 )
    return (unsigned int)-1073741264;
  switch ( v14 )
  {
    case 0xAu:
      if ( memcmp(a4, &DEVPKEY_NAME, 0x10uLL) )
        goto LABEL_21;
      v10 = v76;
      v68 = v13;
      v24 = (int)v82;
      ObjectProperty = PnpGetObjectProperty(
                         a1,
                         (_DWORD)pszSrc,
                         1,
                         (_DWORD)v82,
                         0LL,
                         (__int64)&DEVPKEY_Device_FriendlyName,
                         (__int64)v76,
                         (__int64)v9,
                         v68,
                         (__int64)&v72,
                         v80);
      DeviceStatus = ObjectProperty;
      if ( !ObjectProperty || ObjectProperty == -1073741789 )
      {
        *a8 = v72;
      }
      else if ( ObjectProperty == -1073741275 )
      {
        v67 = (__int64)v10;
        LODWORD(v10) = (_DWORD)pszSrc;
        v26 = PnpGetObjectProperty(
                a1,
                (_DWORD)pszSrc,
                1,
                v24,
                0LL,
                (__int64)&DEVPKEY_Device_DeviceDesc,
                v67,
                (__int64)v9,
                a7,
                (__int64)&v72,
                v80);
        DeviceStatus = v26;
        if ( v26 && v26 != -1073741789 )
        {
          if ( v26 == -1073741275 )
            return (unsigned int)DeviceStatus;
          goto LABEL_45;
        }
        goto LABEL_54;
      }
      goto LABEL_16;
    case 0x100u:
      if ( !memcmp(a4, &DEVPKEY_Device_InstanceId, 0x10uLL) )
      {
        LODWORD(v10) = (_DWORD)pszSrc;
        if ( !pszSrc )
        {
          DeviceStatus = -1073741811;
          goto LABEL_45;
        }
        v15 = pszSrc;
        v16 = 200LL;
        do
        {
          if ( !*v15 )
            break;
          ++v15;
          --v16;
        }
        while ( v16 );
        DeviceStatus = v16 == 0 ? 0xC000000D : 0;
        if ( !v16 )
          goto LABEL_45;
        v17 = v76;
        *a8 = 2 * (v16 != 0 ? 200 - v16 : 0) + 2;
        *(_DWORD *)v17 = 18;
        if ( v13 >= *a8 )
        {
          DeviceStatus = RtlStringCbCopyExW(v9, (unsigned int)*a8, pszSrc, 0LL, 0LL, 0x900u);
          if ( DeviceStatus < 0 )
          {
            *a8 = 0;
            *(_DWORD *)v17 = 0;
          }
          goto LABEL_16;
        }
        return (unsigned int)-1073741789;
      }
      goto LABEL_21;
    case 2u:
      v37 = &DEVPKEY_Device_DevNodeStatus;
      break;
    case 3u:
      v37 = &DEVPKEY_Device_ProblemCode;
      break;
    case 0xCu:
      v37 = &DEVPKEY_Device_ProblemStatus;
      break;
    default:
      goto LABEL_21;
  }
  if ( !memcmp(a4, v37, 0x10uLL) )
  {
    DeviceStatus = CmGetDeviceStatus(a1, (_DWORD)pszSrc, (_DWORD)v82, (unsigned int)&v77, (__int64)&v79, (__int64)&v81);
    if ( DeviceStatus >= 0 )
    {
      v38 = *((_DWORD *)v10 + 4);
      v39 = v77;
      if ( v38 == 2 && !memcmp(v10, &DEVPKEY_Device_DevNodeStatus, 0x10uLL)
        || v38 == 3 && !memcmp(v10, &DEVPKEY_Device_ProblemCode, 0x10uLL) )
      {
        v40 = 7;
      }
      else
      {
        if ( (v39 & 0x400) == 0 )
          return (unsigned int)-1073741275;
        v40 = 24;
      }
      v41 = (int *)v76;
      *a8 = 4;
      *v41 = v40;
      if ( a7 < *a8 )
        return (unsigned int)-1073741789;
      v42 = *((_DWORD *)v10 + 4);
      if ( v42 == 2 )
      {
        if ( !memcmp(v10, &DEVPKEY_Device_DevNodeStatus, 0x10uLL) )
        {
          *(_DWORD *)v9 = v39;
          return (unsigned int)DeviceStatus;
        }
      }
      else if ( v42 == 3 && !memcmp(v10, &DEVPKEY_Device_ProblemCode, 0x10uLL) )
      {
        v63 = (v39 & 0x400) != 0 ? v79 : 0;
LABEL_191:
        *(_DWORD *)v9 = v63;
        return (unsigned int)DeviceStatus;
      }
      v63 = v81;
      goto LABEL_191;
    }
LABEL_16:
    LODWORD(v10) = (_DWORD)pszSrc;
    goto LABEL_45;
  }
LABEL_21:
  v18 = *((_DWORD *)v10 + 4);
  v78 = v18;
  switch ( v18 )
  {
    case 4:
      if ( !memcmp(v10, &DEVPKEY_Device_EjectionRelations, 0x10uLL) )
      {
        v34 = 4;
        goto LABEL_140;
      }
      goto LABEL_48;
    case 5:
      if ( !memcmp(v10, &DEVPKEY_Device_RemovalRelations, 0x10uLL) )
      {
        v34 = 8;
        goto LABEL_140;
      }
      goto LABEL_48;
    case 6:
      if ( !memcmp(v10, &DEVPKEY_Device_PowerRelations, 0x10uLL) )
      {
        v34 = 16;
        goto LABEL_140;
      }
      goto LABEL_48;
    case 7:
      if ( !memcmp(v10, &DEVPKEY_Device_BusRelations, 0x10uLL) )
      {
        v34 = 32;
        goto LABEL_140;
      }
LABEL_48:
      v18 = v78;
LABEL_26:
      if ( v18 == 8 )
      {
        if ( memcmp(v10, &DEVPKEY_Device_Parent, 0x10uLL) )
          goto LABEL_30;
        LODWORD(v10) = (_DWORD)pszSrc;
        v75 = v13 >> 1;
        DeviceParent = CmGetDeviceParent(a1, pszSrc, v9, &v75);
        DeviceStatus = DeviceParent;
        if ( DeviceParent && DeviceParent != -1073741789 )
          goto LABEL_45;
        *a8 = 2 * v75;
        *(_DWORD *)v76 = 18;
      }
      else
      {
        if ( v18 == 9 )
        {
          if ( memcmp(v10, &DEVPKEY_Device_Children, 0x10uLL) )
            goto LABEL_30;
          LODWORD(v10) = (_DWORD)pszSrc;
          v75 = v13 >> 1;
          DeviceChildren = CmGetDeviceChildren(a1, pszSrc, v9, &v75);
        }
        else
        {
          if ( v18 != 10 )
          {
            if ( v18 == 2 )
            {
              if ( !memcmp(v10, &DEVPKEY_Device_SafeRemovalRequired, 0x10uLL) )
              {
                v43 = v76;
                *a8 = 1;
                *(_DWORD *)v43 = 17;
                if ( v13 < *a8 )
                  return (unsigned int)-1073741789;
                v30 = -CmIsDeviceSafeRemovalRequired(a1, (__int64)pszSrc, (int)v82);
                goto LABEL_60;
              }
              if ( !memcmp(v10, &DEVPKEY_Device_ContainerId, 0x10uLL) )
              {
                v10 = pszSrc;
                v72 = 78;
                DeviceStatus = CmGetDeviceRegProp(
                                 a1,
                                 (_DWORD)pszSrc,
                                 (_DWORD)v82,
                                 37,
                                 (__int64)&v85,
                                 (__int64)Str2,
                                 (__int64)&v72,
                                 a9);
                if ( DeviceStatus < 0 )
                  goto LABEL_45;
                if ( !wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
                  return (unsigned int)-1073741275;
                v64 = v76;
                *a8 = 16;
                *(_DWORD *)v64 = 13;
                if ( a7 < *a8 )
                  return (unsigned int)-1073741789;
                DeviceStatus = CmGetDeviceContainerIdFromBase(a1, v10, Str2, SourceString);
                if ( DeviceStatus < 0 )
                  goto LABEL_45;
                DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, SourceString);
                if ( DeviceStatus < 0 )
                  goto LABEL_45;
                DeviceCompoundFilters = RtlGUIDFromString(&DestinationString, (GUID *)v9);
LABEL_44:
                DeviceStatus = DeviceCompoundFilters;
                goto LABEL_45;
              }
            }
LABEL_30:
            v19 = *((_DWORD *)v10 + 4);
            v78 = v19;
            if ( v19 != 5 )
            {
              switch ( v19 )
              {
                case 6:
                  if ( memcmp(v10, &DEVPKEY_Device_HasProblem, 0x10uLL) )
                    goto LABEL_35;
                  *(_DWORD *)v76 = 17;
                  *a8 = 1;
                  if ( !v13 )
                    return (unsigned int)-1073741789;
                  LODWORD(v10) = (_DWORD)pszSrc;
                  DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, pszSrc);
                  if ( DeviceStatus < 0 )
                    goto LABEL_45;
                  *(_BYTE *)v9 = 0;
                  if ( !*(_QWORD *)(a1 + 264) )
                    return (unsigned int)-1073741822;
                  v51 = guard_dispatch_icall_no_overrides(a1, (__int64)&DestinationString);
                  if ( v51 == -2147483643 )
                    return (unsigned int)-1073741789;
                  if ( v51 == -1073741810 )
                    return 0;
                  DeviceStatus = v51;
                  if ( v51 < 0 )
                    return (unsigned int)DeviceStatus;
                  if ( (v77 & 0x8000) != 0 )
                    goto LABEL_130;
                  if ( (v77 & 0x400) != 0 )
                  {
                    if ( v79 > 0x1D )
                      goto LABEL_130;
                    v66 = 591396864;
                    if ( !_bittest(&v66, v79) )
                      goto LABEL_130;
                  }
                  if ( (v77 & 8) != 0 )
                    return (unsigned int)DeviceStatus;
                  v52 = PnpGetObjectProperty(
                          a1,
                          (_DWORD)v10,
                          1,
                          (_DWORD)v82,
                          0LL,
                          (__int64)&DEVPKEY_Device_Capabilities,
                          (__int64)&v74,
                          (__int64)&v84,
                          4,
                          (__int64)&v72,
                          v80);
                  DeviceStatus = v52;
                  if ( v52 == -1073741275 )
                    return 0;
                  if ( v52 < 0 )
                    goto LABEL_45;
                  v53 = (v84 & 0x40) == 0;
                  break;
                case 15:
                  if ( memcmp(v10, DEVPKEY_Device_IsConnected, 0x10uLL) )
                    goto LABEL_35;
                  *(_DWORD *)v76 = 17;
                  *a8 = 1;
                  if ( !v13 )
                    return (unsigned int)-1073741789;
                  LODWORD(v10) = (_DWORD)pszSrc;
                  DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, pszSrc);
                  if ( DeviceStatus < 0 )
                    goto LABEL_45;
                  *(_BYTE *)v9 = 0;
                  if ( !*(_QWORD *)(a1 + 264) )
                    return (unsigned int)-1073741822;
                  v59 = guard_dispatch_icall_no_overrides(a1, (__int64)&DestinationString);
                  if ( v59 == -2147483643 )
                    return (unsigned int)-1073741789;
                  if ( v59 == -1073741810 )
                    return 0;
                  DeviceStatus = v59;
                  if ( v59 < 0 || (v77 & 0x2000000) != 0 )
                    return (unsigned int)DeviceStatus;
                  v60 = PnpGetObjectProperty(
                          a1,
                          (_DWORD)v10,
                          1,
                          0,
                          0LL,
                          (__int64)&DEVPKEY_Device_PresenceNotForDevice,
                          (__int64)&v74,
                          (__int64)v71,
                          1,
                          (__int64)&v72,
                          v80);
                  DeviceStatus = v60;
                  if ( v60 < 0 )
                  {
                    if ( v60 != -1073741275 && v60 != -1073741789 )
                      goto LABEL_45;
                    DeviceStatus = 0;
                    goto LABEL_130;
                  }
                  if ( v74 != 17 )
                    goto LABEL_130;
                  v53 = v71[0] == 0xFF;
                  break;
                case 16:
                  if ( !memcmp(v10, &DEVPKEY_Device_IsRebootRequired, 0x10uLL) )
                  {
                    *(_DWORD *)v76 = 17;
                    *a8 = 1;
                    if ( !v13 )
                      return (unsigned int)-1073741789;
                    LODWORD(v10) = (_DWORD)pszSrc;
                    DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, pszSrc);
                    if ( DeviceStatus < 0 )
                      goto LABEL_45;
                    *(_BYTE *)v9 = 0;
                    if ( !*(_QWORD *)(a1 + 264) )
                      return (unsigned int)-1073741822;
                    v57 = guard_dispatch_icall_no_overrides(a1, (__int64)&DestinationString);
                    if ( v57 != -1073741810 )
                    {
                      if ( v57 == -2147483643 )
                        return (unsigned int)-1073741789;
                      DeviceStatus = v57;
                      if ( v57 < 0 )
                        return (unsigned int)DeviceStatus;
                      if ( (v77 & 0x100) == 0 )
                      {
                        if ( (v77 & 0x400) == 0 )
                          return (unsigned int)DeviceStatus;
                        v58 = v79 == 14;
                        goto LABEL_156;
                      }
LABEL_130:
                      *(_BYTE *)v9 = -1;
                      return (unsigned int)DeviceStatus;
                    }
                    return 0;
                  }
                  goto LABEL_35;
                default:
                  if ( v19 == 8 && !memcmp(v10, &DEVPKEY_Device_ReportedDeviceIdsHash, 0x10uLL) )
                  {
                    LODWORD(v10) = (_DWORD)pszSrc;
                    v35 = pszSrc;
                    *(_DWORD *)v76 = 7;
                    *a8 = 4;
                    DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, v35);
                    if ( DeviceStatus < 0 )
                      goto LABEL_45;
                    if ( *(_QWORD *)(a1 + 256) )
                      goto LABEL_83;
                    return (unsigned int)-1073741822;
                  }
                  goto LABEL_35;
              }
              if ( v53 )
                return (unsigned int)DeviceStatus;
              goto LABEL_130;
            }
            if ( !memcmp(v10, &DEVPKEY_Device_IsPresent, 0x10uLL) )
            {
              v32 = v76;
              *a8 = 1;
              *(_DWORD *)v32 = 17;
              if ( v13 < *a8 )
                return (unsigned int)-1073741789;
              LODWORD(v10) = (_DWORD)pszSrc;
              DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, pszSrc);
              if ( DeviceStatus < 0 )
                goto LABEL_45;
              *(_BYTE *)v9 = 0;
              if ( !*(_QWORD *)(a1 + 264) )
                return (unsigned int)-1073741822;
              v33 = guard_dispatch_icall_no_overrides(a1, (__int64)&DestinationString);
              DeviceStatus = v33;
              if ( v33 == -2147483643 )
                return (unsigned int)-1073741789;
              if ( v33 != -1073741810 )
              {
                if ( v33 < 0 )
                  return (unsigned int)DeviceStatus;
                goto LABEL_130;
              }
              return 0;
            }
LABEL_35:
            if ( v78 != 4 )
            {
              switch ( v78 )
              {
                case 14:
                  if ( !memcmp(v10, &DEVPKEY_Device_Stack, 0x10uLL) )
                  {
                    LODWORD(v10) = (_DWORD)pszSrc;
                    v44 = pszSrc;
                    *(_DWORD *)v76 = 8210;
                    DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, v44);
                    if ( DeviceStatus < 0 )
                      goto LABEL_45;
                    if ( !*(_QWORD *)(a1 + 256) )
                      return (unsigned int)-1073741822;
LABEL_83:
                    v36 = guard_dispatch_icall_no_overrides(a1, (__int64)&DestinationString);
                    if ( v36 != -2147483643 )
                    {
                      if ( v36 == -1073741772 )
                        return (unsigned int)-1073741275;
                      DeviceStatus = v36;
                      if ( v36 >= 0 )
                        return (unsigned int)DeviceStatus;
                      goto LABEL_45;
                    }
                    return (unsigned int)-1073741789;
                  }
                  break;
                case 20:
                  if ( !memcmp(v10, &DEVPKEY_Device_DependencyProviders, 0x10uLL) )
                  {
                    LODWORD(v10) = (_DWORD)pszSrc;
                    v62 = pszSrc;
                    *(_DWORD *)v76 = 8210;
                    DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, v62);
                    if ( DeviceStatus < 0 )
                      goto LABEL_45;
                    if ( !*(_QWORD *)(a1 + 256) )
                      return (unsigned int)-1073741822;
                    goto LABEL_83;
                  }
                  break;
                case 21:
                  if ( !memcmp(v10, &DEVPKEY_Device_DependencyDependents, 0x10uLL) )
                  {
                    LODWORD(v10) = (_DWORD)pszSrc;
                    v61 = pszSrc;
                    *(_DWORD *)v76 = 8210;
                    DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, v61);
                    if ( DeviceStatus < 0 )
                      goto LABEL_45;
                    if ( !*(_QWORD *)(a1 + 256) )
                      return (unsigned int)-1073741822;
                    goto LABEL_83;
                  }
                  break;
                default:
                  if ( v78 == 26 && !memcmp(v10, DEVPKEY_Device_OmitFromSystemSpec, 0x10uLL) )
                  {
                    *(_DWORD *)v76 = 17;
                    *a8 = 1;
                    if ( !v13 )
                      return (unsigned int)-1073741789;
                    v45 = v80;
                    v46 = (int)v82;
                    LODWORD(v10) = (_DWORD)pszSrc;
                    v47 = (int)v82;
                    v70 = v80;
                    v48 = (int)pszSrc;
                    *(_BYTE *)v9 = 0;
                    v49 = PnpGetObjectProperty(
                            a1,
                            v48,
                            1,
                            v47,
                            0LL,
                            (__int64)DEVPKEY_Device_UpdateWithUngroupedDrivers,
                            (__int64)&v74,
                            (__int64)v71,
                            1,
                            (__int64)&v72,
                            v70);
                    DeviceStatus = v49;
                    if ( v49 < 0 )
                    {
                      if ( v49 != -1073741275 && v49 != -1073741789 )
                        goto LABEL_45;
                      goto LABEL_112;
                    }
                    if ( v74 != 17 || v72 != 1 )
                    {
LABEL_112:
                      v50 = PnpGetObjectProperty(
                              a1,
                              (_DWORD)v10,
                              1,
                              v46,
                              0LL,
                              (__int64)DEVPKEY_Device_DriverNeedsGroupUpdate,
                              (__int64)&v74,
                              (__int64)v71,
                              1,
                              (__int64)&v72,
                              v45);
                      DeviceStatus = v50;
                      if ( v50 < 0 )
                      {
                        if ( v50 == -1073741275 || v50 == -1073741789 )
                          return 0;
                        goto LABEL_45;
                      }
                      if ( v74 != 17 || v72 != 1 )
                        return (unsigned int)DeviceStatus;
                      v58 = v71[0] == 0xFF;
                      goto LABEL_156;
                    }
                    v58 = v71[0] == 0;
LABEL_156:
                    if ( !v58 )
                      return (unsigned int)DeviceStatus;
                    goto LABEL_130;
                  }
                  break;
              }
LABEL_40:
              v20 = *((_DWORD *)v10 + 4);
              v78 = v20;
              if ( v20 == 22 )
              {
                if ( !memcmp(v10, &DEVPKEY_Device_CompoundUpperFilters, 0x10uLL) )
                {
LABEL_43:
                  v21 = (__int64)v10;
                  LODWORD(v10) = (_DWORD)pszSrc;
                  DeviceCompoundFilters = CmGetDeviceCompoundFilters(
                                            a1,
                                            (int)pszSrc,
                                            v82,
                                            v21,
                                            (__int64)v76,
                                            (__int64)v9,
                                            v13,
                                            (__int64)a8);
                  goto LABEL_44;
                }
                v20 = v78;
              }
              if ( v20 == 23 )
              {
                if ( memcmp(v10, DEVPKEY_Device_CompoundLowerFilters, 0x10uLL) )
                  return (unsigned int)DeviceStatus;
                goto LABEL_43;
              }
              if ( v20 != 102 || memcmp(v10, &DEVPKEY_Device_EffectiveRestrictedSD, 0x10uLL) )
                return (unsigned int)DeviceStatus;
              LODWORD(v10) = (_DWORD)pszSrc;
              v69 = v13;
              v65 = (int)v82;
              DeviceStatus = PnpGetObjectProperty(
                               a1,
                               (_DWORD)pszSrc,
                               1,
                               (_DWORD)v82,
                               0LL,
                               (__int64)&DEVPKEY_Device_RestrictedSD,
                               (__int64)&v74,
                               (__int64)v9,
                               v69,
                               (__int64)&v72,
                               v80);
              if ( (int)(DeviceStatus + 0x80000000) < 0 || DeviceStatus == -1073741789 )
              {
                if ( v74 == 19 )
                {
                  *(_DWORD *)v76 = 19;
                  *a8 = v72;
                  goto LABEL_45;
                }
              }
              else if ( DeviceStatus != -1073741275 )
              {
                goto LABEL_45;
              }
              DeviceStatus = PnpGetObjectProperty(
                               a1,
                               (_DWORD)v10,
                               1,
                               v65,
                               0LL,
                               (__int64)&DEVPKEY_Device_InheritedRestrictedSD,
                               (__int64)&v74,
                               (__int64)v9,
                               a7,
                               (__int64)&v72,
                               v80);
              if ( (int)(DeviceStatus + 0x80000000) >= 0 && DeviceStatus != -1073741789 )
                goto LABEL_45;
              if ( v74 != 19 )
              {
                DeviceStatus = -1073741275;
                goto LABEL_45;
              }
              *(_DWORD *)v76 = 19;
LABEL_54:
              *a8 = v72;
              goto LABEL_45;
            }
            if ( memcmp(v10, &DEVPKEY_Device_InLocalMachineContainer, 0x10uLL) )
              goto LABEL_40;
            v27 = v80;
            LODWORD(v10) = (_DWORD)pszSrc;
            v28 = (int)v82;
            v29 = (int)pszSrc;
            *(_DWORD *)v76 = 17;
            *a8 = 1;
            DeviceStatus = PnpGetObjectProperty(
                             a1,
                             v29,
                             1,
                             v28,
                             0LL,
                             (__int64)&DEVPKEY_Device_ContainerId,
                             (__int64)&v74,
                             (__int64)&Buf2,
                             16,
                             (__int64)&v72,
                             v27);
            if ( DeviceStatus < 0 )
              goto LABEL_45;
            DeviceStatus = PnpGetObjectProperty(
                             a1,
                             (unsigned int)L"HTREE\\ROOT\\0",
                             1,
                             0,
                             0LL,
                             (__int64)&DEVPKEY_Device_BaseContainerId,
                             (__int64)&v74,
                             (__int64)&Buf1,
                             16,
                             (__int64)&v72,
                             v27);
            if ( DeviceStatus < 0 )
              goto LABEL_45;
            if ( a7 < *a8 )
              return (unsigned int)-1073741789;
            v30 = (memcmp(&Buf1, &Buf2, 0x10uLL) != 0) - 1;
LABEL_60:
            *(_BYTE *)v9 = v30;
            return (unsigned int)DeviceStatus;
          }
          if ( memcmp(v10, &DEVPKEY_Device_Siblings, 0x10uLL) )
            goto LABEL_30;
          LODWORD(v10) = (_DWORD)pszSrc;
          v75 = v13 >> 1;
          DeviceChildren = CmGetDeviceSiblings(a1, pszSrc, v9, &v75);
        }
        DeviceStatus = DeviceChildren;
        if ( DeviceChildren != -1073741789 && DeviceChildren )
          goto LABEL_45;
        *a8 = 2 * v75;
        *(_DWORD *)v76 = 8210;
      }
      if ( a7 >= *a8 )
        goto LABEL_45;
      return (unsigned int)-1073741789;
  }
  if ( v18 != 11 )
    goto LABEL_26;
  if ( memcmp(v10, &DEVPKEY_Device_TransportRelations, 0x10uLL) )
    goto LABEL_48;
  v34 = 64;
LABEL_140:
  LODWORD(v10) = (_DWORD)pszSrc;
  DeviceRelationsList = CmGetDeviceRelationsList(a1, (_DWORD)pszSrc, v34, (_DWORD)v9, v13 >> 1, (__int64)&v75);
  DeviceStatus = DeviceRelationsList;
  if ( DeviceRelationsList == -1073741772 )
    return (unsigned int)-1073741275;
  if ( !DeviceRelationsList || DeviceRelationsList == -1073741789 )
  {
    *(_DWORD *)v76 = 8210;
    if ( DeviceRelationsList )
      Len = v75;
    else
      Len = PnpMultiSzGetLen(v9);
    *a8 = 2 * Len;
    return (unsigned int)DeviceStatus;
  }
LABEL_45:
  if ( DeviceStatus != -1073741810 )
    return (unsigned int)DeviceStatus;
  DeviceStatus = CmOpenDeviceRegKey(a1, (_DWORD)v10, 16, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( !DeviceStatus )
  {
    ZwClose(Handle);
    return (unsigned int)-1073741275;
  }
  if ( DeviceStatus != -1073741810 && DeviceStatus != -1073741632 )
    return (unsigned int)-1073741823;
  return (unsigned int)DeviceStatus;
}
