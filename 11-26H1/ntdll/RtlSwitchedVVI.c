/*
 * XREFs of RtlSwitchedVVI @ 0x180082F60
 * Callers:
 *     <none>
 * Callees:
 *     SwitchedRtlGetVersion @ 0x1800833F0 (SwitchedRtlGetVersion.c)
 *     RtlpVerCompare @ 0x180084170 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x1800842E0 (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

DWORD __cdecl RtlSwitchedVVI(PRTL_OSVERSIONINFOEXW VersionInfo, DWORD TypeMask, ULONGLONG ConditionMask)
{
  char v3; // di
  char v5; // bl
  DWORD result; // eax
  DWORD v8; // ebp
  char v9; // cl
  ULONGLONG v10; // rdi
  unsigned int v11; // eax
  char v12; // cl
  signed int dwMajorVersion; // edx
  bool v14; // al
  char v15; // al
  unsigned int v16; // eax
  char v17; // cl
  int v18; // esi
  int wSuiteMask; // r10d
  unsigned int v20; // edx
  unsigned int v21; // r8d
  int v22; // r9d
  unsigned int v23; // eax
  char v24; // cl
  char v25; // al
  int v26; // eax
  int v27; // eax
  _BYTE v28[16]; // [rsp+30h] [rbp-158h] BYREF
  int v29; // [rsp+40h] [rbp-148h] BYREF
  _DWORD v30[68]; // [rsp+44h] [rbp-144h] BYREF
  unsigned __int16 v31; // [rsp+154h] [rbp-34h]
  unsigned __int16 v32; // [rsp+156h] [rbp-32h]
  unsigned __int16 v33; // [rsp+158h] [rbp-30h]
  unsigned __int8 v34; // [rsp+15Ah] [rbp-2Eh]

  v3 = 0;
  v5 = TypeMask;
  if ( !TypeMask )
    return -1073741811;
  memset_thunk_772440563353939046(v30, 0, 0x118uLL);
  v29 = 284;
  result = SwitchedRtlGetVersion(&v29);
  if ( result )
    return result;
  v8 = 0;
  if ( (v5 & 0x40) == 0 )
    goto LABEL_4;
  wSuiteMask = VersionInfo->wSuiteMask;
  if ( !(_WORD)wSuiteMask )
    goto LABEL_4;
  v20 = 0;
  v21 = 64;
  while ( v20 < 0x10 )
  {
    v22 = 1 << v20;
    if ( (wSuiteMask & (1 << v20)) == 0 )
      goto LABEL_50;
    if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
      return -1073741811;
    v23 = 64;
    v24 = 0;
    do
    {
      v23 >>= 1;
      ++v24;
    }
    while ( v23 );
    if ( ((ConditionMask >> (3 * v24 - 3)) & 7) == 6 )
    {
      if ( (v33 & (unsigned __int16)v22) == 0 )
        return -1073741735;
      goto LABEL_50;
    }
    if ( ((ConditionMask >> (3 * v24 - 3)) & 7) != 7 )
      return -1073741811;
    if ( (v33 & (unsigned __int16)v22) != 0 )
    {
      v3 = 1;
      ++v20;
    }
    else
    {
LABEL_50:
      ++v20;
    }
  }
  v25 = 0;
  do
  {
    ++v25;
    v21 >>= 1;
  }
  while ( v21 );
  if ( ((ConditionMask >> (3 * (v25 - 1))) & 7) == 7 && !v3 )
    return -1073741735;
LABEL_4:
  v9 = 1;
  LODWORD(v10) = 1;
  v28[0] = 1;
  if ( (v5 & 2) == 0 )
    goto LABEL_26;
  if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
  {
    LODWORD(v10) = (unsigned __int8)(ConditionMask >> 4);
  }
  else
  {
    v11 = 2;
    v12 = 0;
    do
    {
      v11 >>= 1;
      ++v12;
    }
    while ( v11 );
    v10 = (ConditionMask >> (3 * v12 - 3)) & 7;
  }
  dwMajorVersion = VersionInfo->dwMajorVersion;
  v9 = dwMajorVersion == v30[0];
  v28[0] = dwMajorVersion == v30[0];
  if ( (_DWORD)v10 != 3 )
  {
    switch ( (_DWORD)v10 )
    {
      case 1:
        v14 = v30[0] == dwMajorVersion;
        break;
      case 2:
        v14 = v30[0] > dwMajorVersion;
        break;
      case 4:
        v14 = v30[0] < dwMajorVersion;
        break;
      case 5:
        v14 = v30[0] <= dwMajorVersion;
        break;
      default:
LABEL_16:
        if ( dwMajorVersion != v30[0] )
          return -1073741735;
        goto LABEL_26;
    }
    if ( v14 )
      goto LABEL_20;
    goto LABEL_16;
  }
  if ( v30[0] < dwMajorVersion )
    goto LABEL_16;
LABEL_20:
  if ( dwMajorVersion != v30[0] )
  {
LABEL_21:
    if ( (v5 & 4) != 0 )
    {
      v26 = (ConditionMask & 0x8000000000000000uLL) == 0LL
          ? BYTE2(ConditionMask)
          : RtlpVerGetConditionMask(ConditionMask, 4LL);
      if ( !(unsigned __int8)RtlpVerCompare(v26, VersionInfo->dwBuildNumber, v30[2], (unsigned int)v28, 0) )
        return -1073741735;
    }
    if ( (v5 & 8) != 0 )
    {
      v27 = (ConditionMask & 0x8000000000000000uLL) == 0LL ? 0 : RtlpVerGetConditionMask(ConditionMask, 8LL);
      if ( !(unsigned __int8)RtlpVerCompare(v27, VersionInfo->dwPlatformId, v30[3], (unsigned int)v28, 0) )
        return -1073741735;
    }
    if ( v5 >= 0 )
      return 0;
    if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
    {
      v18 = 0;
    }
    else
    {
      v16 = 128;
      v17 = 0;
      do
      {
        v16 >>= 1;
        ++v17;
      }
      while ( v16 );
      v18 = (ConditionMask >> (3 * v17 - 3)) & 7;
    }
    if ( !(unsigned __int8)RtlpVerCompare(v18, VersionInfo->wProductType, v34, (unsigned int)v28, 0) )
      return -1073741735;
    return v8;
  }
LABEL_26:
  if ( (v5 & 1) == 0 )
    goto LABEL_29;
  if ( (_DWORD)v10 == 1 )
  {
    if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
      LODWORD(v10) = (unsigned __int8)(ConditionMask >> 2);
    else
      LODWORD(v10) = RtlpVerGetConditionMask(ConditionMask, 1LL);
  }
  v15 = RtlpVerCompare(v10, VersionInfo->dwMinorVersion, v30[1], (unsigned int)v28, 1);
  v9 = v28[0];
  if ( !v15 )
  {
    if ( !v28[0] )
      return -1073741735;
  }
  else
  {
LABEL_29:
    if ( !v9 )
      goto LABEL_21;
  }
  if ( (v5 & 0x20) != 0 )
  {
    if ( (_DWORD)v10 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        LODWORD(v10) = 0;
      else
        LODWORD(v10) = RtlpVerGetConditionMask(ConditionMask, 32LL);
    }
    if ( (unsigned __int8)RtlpVerCompare(v10, VersionInfo->wServicePackMajor, v31, (unsigned int)v28, 0) )
    {
      v9 = v28[0];
      goto LABEL_34;
    }
    if ( !v28[0] )
      return -1073741735;
  }
  else
  {
LABEL_34:
    if ( !v9 )
      goto LABEL_21;
  }
  if ( (v5 & 0x10) == 0 )
    goto LABEL_21;
  if ( (_DWORD)v10 == 1 )
  {
    if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
      LODWORD(v10) = 0;
    else
      LODWORD(v10) = RtlpVerGetConditionMask(ConditionMask, 16LL);
  }
  if ( (unsigned __int8)RtlpVerCompare(v10, VersionInfo->wServicePackMinor, v32, (unsigned int)v28, 1) )
    goto LABEL_21;
  return -1073741735;
}
