/*
 * XREFs of RtlVerifyVersionInfo @ 0x180082BA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetVersion @ 0x180083D40 (RtlGetVersion.c)
 *     RtlpVerCompare @ 0x180084170 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x1800842E0 (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlVerifyVersionInfo(
        PRTL_OSVERSIONINFOEXW VersionInformation,
        ULONG TypeMask,
        ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  NTSTATUS result; // eax
  char v8; // al
  int v9; // edi
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int i; // r10d
  int v15; // eax
  unsigned __int16 v16; // r11
  _BYTE v17[16]; // [rsp+30h] [rbp-D0h] BYREF
  _OSVERSIONINFOEXW VersionInformationa; // [rsp+40h] [rbp-C0h] BYREF

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset_thunk_772440563353939046(&VersionInformationa.dwMajorVersion, 0, 0x118uLL);
  VersionInformationa.dwOSVersionInfoSize = 284;
  result = RtlGetVersion(&VersionInformationa);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 && VersionInformation->wSuiteMask )
    {
      for ( i = 0; i < 0x10; ++i )
      {
        if ( (VersionInformation->wSuiteMask & (1 << i)) != 0 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
            return -1073741811;
          v15 = RtlpVerGetConditionMask(ConditionMask, 64LL) - 6;
          if ( v15 )
          {
            if ( v15 != 1 )
              return -1073741811;
            if ( (VersionInformationa.wSuiteMask & v16) != 0 )
              v6 = 1;
          }
          else if ( (VersionInformationa.wSuiteMask & v16) == 0 )
          {
            return -1073741735;
          }
        }
      }
      if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 64LL) == 7 && !v6 )
        return -1073741735;
    }
    v8 = 1;
    v17[0] = 1;
    v9 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        v9 = (unsigned __int8)(ConditionMask >> 4);
      else
        v9 = RtlpVerGetConditionMask(ConditionMask, 2LL);
      v10 = (unsigned __int8)RtlpVerCompare(
                               v9,
                               VersionInformation->dwMajorVersion,
                               VersionInformationa.dwMajorVersion,
                               (unsigned int)v17,
                               0) == 0;
      v8 = v17[0];
      if ( v10 )
      {
        if ( !v17[0] )
          return -1073741735;
      }
      else if ( !v17[0] )
      {
        goto LABEL_27;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_14;
    if ( v9 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        v9 = (unsigned __int8)(ConditionMask >> 2);
      else
        v9 = RtlpVerGetConditionMask(ConditionMask, 1LL);
    }
    v10 = (unsigned __int8)RtlpVerCompare(
                             v9,
                             VersionInformation->dwMinorVersion,
                             VersionInformationa.dwMinorVersion,
                             (unsigned int)v17,
                             1) == 0;
    v8 = v17[0];
    if ( v10 )
    {
      if ( !v17[0] )
        return -1073741735;
    }
    else
    {
LABEL_14:
      if ( !v8 )
        goto LABEL_27;
    }
    if ( (v4 & 0x20) != 0 )
    {
      if ( v9 == 1 )
      {
        if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
          v9 = 0;
        else
          v9 = RtlpVerGetConditionMask(ConditionMask, 32LL);
      }
      if ( !(unsigned __int8)RtlpVerCompare(
                               v9,
                               VersionInformation->wServicePackMajor,
                               VersionInformationa.wServicePackMajor,
                               (unsigned int)v17,
                               0) )
      {
        if ( !v17[0] )
          return -1073741735;
        goto LABEL_22;
      }
      v8 = v17[0];
    }
    if ( v8 )
    {
LABEL_22:
      if ( (v4 & 0x10) != 0 )
      {
        if ( v9 == 1 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
            v9 = 0;
          else
            v9 = RtlpVerGetConditionMask(ConditionMask, 16LL);
        }
        if ( !(unsigned __int8)RtlpVerCompare(
                                 v9,
                                 VersionInformation->wServicePackMinor,
                                 VersionInformationa.wServicePackMinor,
                                 (unsigned int)v17,
                                 1) )
          return -1073741735;
      }
    }
LABEL_27:
    if ( (v4 & 4) == 0
      || ((ConditionMask & 0x8000000000000000uLL) == 0LL
        ? (v11 = BYTE2(ConditionMask))
        : (v11 = RtlpVerGetConditionMask(ConditionMask, 4LL)),
          (unsigned __int8)RtlpVerCompare(
                             v11,
                             VersionInformation->dwBuildNumber,
                             VersionInformationa.dwBuildNumber,
                             (unsigned int)v17,
                             0)) )
    {
      if ( (v4 & 8) == 0
        || ((ConditionMask & 0x8000000000000000uLL) == 0LL
          ? (v12 = 0)
          : (v12 = RtlpVerGetConditionMask(ConditionMask, 8LL)),
            (unsigned __int8)RtlpVerCompare(
                               v12,
                               VersionInformation->dwPlatformId,
                               VersionInformationa.dwPlatformId,
                               (unsigned int)v17,
                               0)) )
      {
        if ( v4 >= 0 )
          return 0;
        if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
          v13 = 0;
        else
          v13 = RtlpVerGetConditionMask(ConditionMask, 128LL);
        return (unsigned __int8)RtlpVerCompare(
                                  v13,
                                  VersionInformation->wProductType,
                                  VersionInformationa.wProductType,
                                  (unsigned int)v17,
                                  0) == 0
             ? 0xC0000059
             : 0;
      }
    }
    return -1073741735;
  }
  return result;
}
