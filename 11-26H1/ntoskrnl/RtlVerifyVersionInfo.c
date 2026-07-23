/*
 * XREFs of RtlVerifyVersionInfo @ 0x14048F510
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140826454 (WdipSemLoadScenarioTable.c)
 *     AslpFileGetVersionBlock @ 0x140893EF8 (AslpFileGetVersionBlock.c)
 * Callees:
 *     RtlpVerCompare @ 0x14048F854 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x14048F92C (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlGetVersion @ 0x140A97730 (RtlGetVersion.c)
 */

NTSTATUS __stdcall RtlVerifyVersionInfo(PRTL_OSVERSIONINFOEXW VersionInfo, ULONG TypeMask, ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  NTSTATUS result; // eax
  unsigned int v8; // ecx
  char v9; // al
  ULONGLONG v10; // rdi
  unsigned int v11; // eax
  char v12; // cl
  ULONGLONG v13; // r10
  int v14; // eax
  char v15; // al
  bool v16; // zf
  int wSuiteMask; // r11d
  unsigned int i; // r9d
  int v19; // eax
  unsigned __int16 v20; // r10
  int v21; // eax
  _BYTE v22[16]; // [rsp+30h] [rbp-D0h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v24; // [rsp+154h] [rbp+54h]
  unsigned __int16 v25; // [rsp+156h] [rbp+56h]
  unsigned __int16 v26; // [rsp+158h] [rbp+58h]
  unsigned __int8 v27; // [rsp+15Ah] [rbp+5Ah]

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  result = RtlGetVersion(&VersionInformation);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      wSuiteMask = VersionInfo->wSuiteMask;
      if ( (_WORD)wSuiteMask )
      {
        for ( i = 0; i < 0x10; ++i )
        {
          if ( (wSuiteMask & (1 << i)) != 0 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
              return -1073741811;
            v19 = RtlpVerGetConditionMask(ConditionMask, 64LL) - 6;
            if ( v19 )
            {
              if ( v19 != 1 )
                return -1073741811;
              if ( (v26 & v20) != 0 )
                v6 = 1;
            }
            else if ( (v26 & v20) == 0 )
            {
              return -1073741735;
            }
          }
        }
        if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 64LL) == 7 && !v6 )
          return -1073741735;
      }
    }
    v8 = 2;
    v9 = 1;
    v22[0] = 1;
    LODWORD(v10) = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
      {
        LODWORD(v10) = (unsigned __int8)(ConditionMask >> 4);
      }
      else
      {
        v15 = 0;
        do
        {
          ++v15;
          v8 >>= 1;
        }
        while ( v8 );
        v10 = (ConditionMask >> (3 * (v15 - 1))) & 7;
      }
      v16 = (unsigned __int8)RtlpVerCompare(
                               v10,
                               VersionInfo->dwMajorVersion,
                               VersionInformation.dwMajorVersion,
                               (unsigned int)v22,
                               0) == 0;
      v9 = v22[0];
      if ( v16 )
      {
        if ( !v22[0] )
          return -1073741735;
      }
      else if ( !v22[0] )
      {
        goto LABEL_10;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_6;
    if ( (_DWORD)v10 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        LODWORD(v10) = RtlpVerGetConditionMask(ConditionMask, 1LL);
      else
        LODWORD(v10) = (unsigned __int8)(ConditionMask >> 2);
    }
    v16 = (unsigned __int8)RtlpVerCompare(
                             v10,
                             VersionInfo->dwMinorVersion,
                             VersionInformation.dwMinorVersion,
                             (unsigned int)v22,
                             1) == 0;
    v9 = v22[0];
    if ( v16 )
    {
      if ( !v22[0] )
        return -1073741735;
    }
    else
    {
LABEL_6:
      if ( !v9 )
        goto LABEL_10;
    }
    if ( (v4 & 0x20) == 0 )
    {
LABEL_8:
      if ( v9 )
      {
LABEL_9:
        if ( (v4 & 0x10) != 0 )
        {
          if ( (_DWORD)v10 == 1 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
              LODWORD(v10) = RtlpVerGetConditionMask(ConditionMask, 16LL);
            else
              LODWORD(v10) = 0;
          }
          if ( !(unsigned __int8)RtlpVerCompare(v10, VersionInfo->wServicePackMinor, v25, (unsigned int)v22, 1) )
            return -1073741735;
        }
      }
LABEL_10:
      v11 = 4;
      if ( (v4 & 4) != 0 )
      {
        if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        {
          LODWORD(v13) = BYTE2(ConditionMask);
        }
        else
        {
          v12 = 0;
          do
          {
            ++v12;
            v11 >>= 1;
          }
          while ( v11 );
          v13 = (ConditionMask >> (3 * v12 - 3)) & 7;
        }
        if ( !(unsigned __int8)RtlpVerCompare(
                                 v13,
                                 VersionInfo->dwBuildNumber,
                                 VersionInformation.dwBuildNumber,
                                 (unsigned int)v22,
                                 0) )
          return -1073741735;
      }
      if ( (v4 & 8) != 0 )
      {
        v21 = (ConditionMask & 0x8000000000000000uLL) != 0LL ? RtlpVerGetConditionMask(ConditionMask, 8LL) : 0;
        if ( !(unsigned __int8)RtlpVerCompare(
                                 v21,
                                 VersionInfo->dwPlatformId,
                                 VersionInformation.dwPlatformId,
                                 (unsigned int)v22,
                                 0) )
          return -1073741735;
      }
      if ( v4 >= 0 )
        return 0;
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        v14 = RtlpVerGetConditionMask(ConditionMask, 128LL);
      else
        v14 = 0;
      return (unsigned __int8)RtlpVerCompare(v14, VersionInfo->wProductType, v27, (unsigned int)v22, 0) == 0
           ? 0xC0000059
           : 0;
    }
    if ( (_DWORD)v10 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        LODWORD(v10) = RtlpVerGetConditionMask(ConditionMask, 32LL);
      else
        LODWORD(v10) = 0;
    }
    if ( (unsigned __int8)RtlpVerCompare(v10, VersionInfo->wServicePackMajor, v24, (unsigned int)v22, 0) )
    {
      v9 = v22[0];
      goto LABEL_8;
    }
    if ( v22[0] )
      goto LABEL_9;
    return -1073741735;
  }
  return result;
}
