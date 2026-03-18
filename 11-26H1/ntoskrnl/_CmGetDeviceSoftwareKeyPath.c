/*
 * XREFs of _CmGetDeviceSoftwareKeyPath @ 0x140995E20
 * Callers:
 *     _CmGetDeviceRegKeyPath @ 0x140994330 (_CmGetDeviceRegKeyPath.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140996CF0 (_CmOpenDeviceRegKeyWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     RtlStringCchPrintfExW @ 0x14044E030 (RtlStringCchPrintfExW.c)
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _CmSetDeviceRegProp @ 0x14090A0E8 (_CmSetDeviceRegProp.c)
 *     _CmGetDeviceRegProp @ 0x140996210 (_CmGetDeviceRegProp.c)
 *     _CmOpenCommonClassRegKey @ 0x14099F0C4 (_CmOpenCommonClassRegKey.c)
 *     _PnpCtxRegDeleteKey @ 0x140A2D8BC (_PnpCtxRegDeleteKey.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140AE8928 (_CmCreateOrdinalInstanceKey.c)
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
  int DeviceRegProp; // ebx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // [rsp+38h] [rbp-C8h]
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE v35; // [rsp+68h] [rbp-98h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v39[16]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR SourceString[48]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v41[76]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v42; // [rsp+14Ch] [rbp+4Ch]

  v8 = *(_BYTE *)(a1 + 4) == 0;
  pszDest = a6;
  if ( !v8 )
  {
    if ( (a3 & 0x200) != 0 )
    {
      if ( a4 )
      {
        if ( a4 == -1 )
          return (unsigned int)-1073741811;
        v25 = -1LL;
        do
          ++v25;
        while ( *(_WORD *)(a2 + 2 * v25) );
        v26 = v25 + 97;
        if ( v26 <= 0xFFFFFFFF )
        {
          if ( a8 )
            *a8 = v26;
          if ( (unsigned int)v26 <= (unsigned int)cchDest )
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
        v22 = -1LL;
        do
          ++v22;
        while ( *(_WORD *)(a2 + 2 * v22) );
        v24 = v22 + 100;
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
    v27 = -1LL;
    do
      ++v27;
    while ( *(_WORD *)(a2 + 2 * v27) );
    v28 = v27 + 49;
    if ( (a3 & 0x100) != 0 )
    {
      if ( v28 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      if ( a8 )
        goto LABEL_60;
    }
    else
    {
      if ( v28 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      if ( a8 )
LABEL_60:
        *a8 = v28;
    }
    if ( (unsigned int)v28 <= (unsigned int)cchDest )
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
  v33 = 88;
  v35 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  v34 = 0;
  DeviceRegProp = CmGetDeviceRegProp(a1, a2, 0, 10, (__int64)&v34, (__int64)SourceString, (__int64)&v33, 0);
  if ( DeviceRegProp == -1073741275 )
  {
    if ( a5 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 240), 1u);
      v34 = 0;
      v33 = 88;
      DeviceRegProp = CmGetDeviceRegProp(a1, a2, 0, 10, (__int64)&v34, (__int64)SourceString, (__int64)&v33, 0);
      if ( DeviceRegProp == -1073741275 )
      {
        v33 = 78;
        v34 = 0;
        v19 = CmGetDeviceRegProp(a1, a2, 0, 9, (__int64)&v34, (__int64)v41, (__int64)&v33, 0);
        DeviceRegProp = v19;
        if ( v19 == -1073741275 )
        {
          DeviceRegProp = -1073741772;
        }
        else if ( v19 >= 0 )
        {
          v42 = 0;
          DeviceRegProp = CmOpenCommonClassRegKey(a1, (unsigned int)v41, 32, 0, 131103, 0, (__int64)&v35, 0LL);
          if ( DeviceRegProp >= 0 )
          {
            DeviceRegProp = CmCreateOrdinalInstanceKey(a1, v35, v39);
            if ( DeviceRegProp >= 0 )
            {
              DeviceRegProp = RtlStringCchPrintfExW(SourceString, 0x2CuLL, 0LL, 0LL, 0x800u, L"%s\\%s", v41, v39);
              if ( DeviceRegProp >= 0 )
              {
                DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, SourceString);
                if ( DeviceRegProp >= 0 )
                {
                  DeviceRegProp = CmSetDeviceRegProp(
                                    a1,
                                    a2,
                                    0LL,
                                    0xAu,
                                    1,
                                    (__int64)DestinationString.Buffer,
                                    DestinationString.MaximumLength,
                                    0);
                  if ( DeviceRegProp < 0 )
                    PnpCtxRegDeleteKey(a1, v35, v39);
                }
              }
            }
          }
        }
      }
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 240));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21);
      if ( Handle )
        ZwClose(Handle);
    }
    else
    {
      DeviceRegProp = -1073741772;
    }
  }
  if ( v35 )
    ZwClose(v35);
  if ( DeviceRegProp >= 0 )
  {
    if ( (a3 & 0x200) != 0 )
    {
      if ( a4 )
      {
        if ( a4 == -1 )
          return (unsigned int)-1073741811;
        v30 = -1LL;
        do
          ++v30;
        while ( SourceString[v30] );
        v31 = v30 + 88;
        if ( v31 > 0xFFFFFFFF )
          return (unsigned int)-1073741675;
        if ( a8 )
          *a8 = v31;
        if ( (unsigned int)v31 <= (unsigned int)cchDest )
        {
          LODWORD(v32) = a4;
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 (unsigned int)cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"%s\\%04u\\%s\\%s",
                                 L"System\\CurrentControlSet\\Hardware Profiles",
                                 v32,
                                 L"System\\CurrentControlSet\\Control\\Class",
                                 SourceString);
        }
      }
      else
      {
        v23 = -1LL;
        do
          ++v23;
        while ( SourceString[v23] );
        v29 = v23 + 91;
        if ( v29 > 0xFFFFFFFF )
          return (unsigned int)-1073741675;
        if ( a8 )
          *a8 = v29;
        if ( (unsigned int)v29 <= (unsigned int)cchDest )
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
