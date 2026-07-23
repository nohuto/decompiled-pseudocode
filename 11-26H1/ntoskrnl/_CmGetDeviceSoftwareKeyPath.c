/*
 * XREFs of _CmGetDeviceSoftwareKeyPath @ 0x140956880
 * Callers:
 *     _CmGetDeviceRegKeyPath @ 0x140954D90 (_CmGetDeviceRegKeyPath.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140957750 (_CmOpenDeviceRegKeyWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _CmOpenCommonClassRegKey @ 0x14095FB24 (_CmOpenCommonClassRegKey.c)
 *     _CmSetDeviceRegProp @ 0x1409AC6A0 (_CmSetDeviceRegProp.c)
 *     _PnpCtxRegDeleteKey @ 0x140A3F2C8 (_PnpCtxRegDeleteKey.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140AE67D8 (_CmCreateOrdinalInstanceKey.c)
 */

__int64 __fastcall CmGetDeviceSoftwareKeyPath(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        char a5,
        NTSTRSAFE_PWSTR a6,
        size_t cchDest,
        _DWORD *a8)
{
  bool v8; // zf
  int v11; // r14d
  NTSTATUS DeviceRegProp; // ebx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // [rsp+38h] [rbp-C8h]
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE v33; // [rsp+68h] [rbp-98h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v37[16]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR SourceString[48]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v39[76]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v40; // [rsp+14Ch] [rbp+4Ch]

  v8 = *(_BYTE *)(a1 + 4) == 0;
  v11 = a2;
  pszDest = a6;
  if ( !v8 )
  {
    if ( (a3 & 0x200) != 0 )
    {
      if ( a4 )
      {
        if ( a4 == -1 )
          return (unsigned int)-1073741811;
        v23 = -1LL;
        do
          ++v23;
        while ( *(_WORD *)(a2 + 2 * v23) );
        v24 = v23 + 97;
        if ( v24 <= 0xFFFFFFFF )
        {
          if ( a8 )
            *a8 = v24;
          if ( (unsigned int)v24 <= (unsigned int)cchDest )
            return (unsigned int)RtlStringCchPrintfExW(
                                   a6,
                                   (unsigned int)cchDest,
                                   0LL,
                                   0LL,
                                   0x800u,
                                   L"%s\\%04u\\%s\\%s\\%s",
                                   L"System\\CurrentControlSet\\Hardware Profiles",
                                   a4,
                                   L"System\\CurrentControlSet\\Enum",
                                   a2,
                                   L"Driver Parameters");
          return (unsigned int)-1073741789;
        }
      }
      else
      {
        v20 = -1LL;
        do
          ++v20;
        while ( *(_WORD *)(a2 + 2 * v20) );
        v22 = v20 + 100;
        if ( v22 <= 0xFFFFFFFF )
        {
          if ( a8 )
            *a8 = v22;
          if ( (unsigned int)v22 <= (unsigned int)cchDest )
            return (unsigned int)RtlStringCchPrintfExW(
                                   a6,
                                   (unsigned int)cchDest,
                                   0LL,
                                   0LL,
                                   0x800u,
                                   L"%s\\%s\\%s\\%s",
                                   L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                                   L"System\\CurrentControlSet\\Enum",
                                   a2,
                                   L"Driver Parameters");
          return (unsigned int)-1073741789;
        }
      }
      return (unsigned int)-1073741675;
    }
    v25 = -1LL;
    do
      ++v25;
    while ( *(_WORD *)(a2 + 2 * v25) );
    v26 = v25 + 49;
    if ( (a3 & 0x100) != 0 )
    {
      if ( v26 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      if ( a8 )
        goto LABEL_60;
    }
    else
    {
      if ( v26 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      if ( a8 )
LABEL_60:
        *a8 = v26;
    }
    if ( (unsigned int)v26 <= (unsigned int)cchDest )
      return (unsigned int)RtlStringCchPrintfExW(
                             a6,
                             (unsigned int)cchDest,
                             0LL,
                             0LL,
                             0x800u,
                             L"%s\\%s\\%s",
                             L"System\\CurrentControlSet\\Enum",
                             a2,
                             L"Driver Parameters");
    return (unsigned int)-1073741789;
  }
  v31 = 88;
  v33 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  v32 = 0;
  DeviceRegProp = CmGetDeviceRegProp(a1, a2, 0, 10, (__int64)&v32, (__int64)SourceString, (__int64)&v31, 0);
  if ( DeviceRegProp == -1073741275 )
  {
    if ( a5 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 240), 1u);
      v32 = 0;
      v31 = 88;
      DeviceRegProp = CmGetDeviceRegProp(a1, v11, 0, 10, (__int64)&v32, (__int64)SourceString, (__int64)&v31, 0);
      if ( DeviceRegProp == -1073741275 )
      {
        v31 = 78;
        v32 = 0;
        v19 = CmGetDeviceRegProp(a1, v11, 0, 9, (__int64)&v32, (__int64)v39, (__int64)&v31, 0);
        DeviceRegProp = v19;
        if ( v19 == -1073741275 )
        {
          DeviceRegProp = -1073741772;
        }
        else if ( v19 >= 0 )
        {
          v40 = 0;
          DeviceRegProp = CmOpenCommonClassRegKey(a1, (unsigned int)v39, 32, 0, 131103, 0, (__int64)&v33, 0LL);
          if ( DeviceRegProp >= 0 )
          {
            DeviceRegProp = CmCreateOrdinalInstanceKey(a1, v33, v37);
            if ( DeviceRegProp >= 0 )
            {
              DeviceRegProp = RtlStringCchPrintfExW(SourceString, 0x2CuLL, 0LL, 0LL, 0x800u, L"%s\\%s", v39, v37);
              if ( DeviceRegProp >= 0 )
              {
                DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, SourceString);
                if ( DeviceRegProp >= 0 )
                {
                  DeviceRegProp = CmSetDeviceRegProp(
                                    a1,
                                    v11,
                                    0,
                                    10,
                                    1,
                                    (__int64)DestinationString.Buffer,
                                    DestinationString.MaximumLength,
                                    0);
                  if ( DeviceRegProp < 0 )
                    PnpCtxRegDeleteKey(a1, v33, v37);
                }
              }
            }
          }
        }
      }
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 240));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( Handle )
        ZwClose(Handle);
    }
    else
    {
      DeviceRegProp = -1073741772;
    }
  }
  if ( v33 )
    ZwClose(v33);
  if ( DeviceRegProp >= 0 )
  {
    if ( (a3 & 0x200) != 0 )
    {
      if ( a4 )
      {
        if ( a4 == -1 )
          return (unsigned int)-1073741811;
        v28 = -1LL;
        do
          ++v28;
        while ( SourceString[v28] );
        v29 = v28 + 88;
        if ( v29 > 0xFFFFFFFF )
          return (unsigned int)-1073741675;
        if ( a8 )
          *a8 = v29;
        if ( (unsigned int)v29 <= (unsigned int)cchDest )
        {
          LODWORD(v30) = a4;
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 (unsigned int)cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"%s\\%04u\\%s\\%s",
                                 L"System\\CurrentControlSet\\Hardware Profiles",
                                 v30,
                                 L"System\\CurrentControlSet\\Control\\Class",
                                 SourceString);
        }
      }
      else
      {
        v21 = -1LL;
        do
          ++v21;
        while ( SourceString[v21] );
        v27 = v21 + 91;
        if ( v27 > 0xFFFFFFFF )
          return (unsigned int)-1073741675;
        if ( a8 )
          *a8 = v27;
        if ( (unsigned int)v27 <= (unsigned int)cchDest )
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 (unsigned int)cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"%s\\%s\\%s",
                                 L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                                 L"System\\CurrentControlSet\\Control\\Class",
                                 SourceString);
      }
    }
    else
    {
      v14 = -1LL;
      do
        ++v14;
      while ( SourceString[v14] );
      v15 = v14 + 40;
      if ( v15 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      if ( a8 )
        *a8 = v15;
      if ( (unsigned int)v15 <= (unsigned int)cchDest )
        return (unsigned int)RtlStringCchPrintfExW(
                               pszDest,
                               (unsigned int)cchDest,
                               0LL,
                               0LL,
                               0x800u,
                               L"%s\\%s",
                               L"System\\CurrentControlSet\\Control\\Class",
                               SourceString);
    }
    return (unsigned int)-1073741789;
  }
  return (unsigned int)DeviceRegProp;
}
