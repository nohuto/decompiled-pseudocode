/*
 * XREFs of ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1801302C4
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180086D74 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x18009D634 (ImmersiveIcons--GetPackageFullNameForAppsFolderItem.c)
 *     ?IsLegacyApp@@YA_NPEBG@Z @ 0x18012F3DC (-IsLegacyApp@@YA_NPEBG@Z.c)
 *     ?CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z @ 0x18012F4C0 (-CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z.c)
 *     ?GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z @ 0x1803DF750 (-GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z.c)
 *     ?s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z @ 0x1804D4C5C (-s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

__int64 __fastcall CallerIdentity::GetPackageFullNameFromAppId(
        CallerIdentity *this,
        unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  __int64 v5; // rdx
  wchar_t *v6; // rcx
  __int64 v7; // r8
  wchar_t v8; // ax
  wchar_t *v9; // rax
  wchar_t *v10; // rax
  signed int v11; // ebx
  WCHAR *v12; // rax
  __int64 v14; // rdx
  WCHAR *v15; // rcx
  WCHAR v16; // ax
  __int64 v17; // rdx
  char *v18; // r9
  _WORD *v19; // r10
  __int16 v20; // ax
  unsigned __int64 v21; // rdi
  _WORD *v22; // rcx
  _WORD *v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rsi
  _WORD *v28; // rax
  LONG PackagesByPackageFamily; // eax
  UINT32 count[2]; // [rsp+48h] [rbp-C0h] BYREF
  PWSTR packageFullNames; // [rsp+50h] [rbp-B8h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+68h] [rbp-A0h] BYREF
  wchar_t Str[136]; // [rsp+F8h] [rbp-10h] BYREF
  WCHAR buffer[128]; // [rsp+208h] [rbp+100h] BYREF

  count[1] = 128;
  *(_QWORD *)a2 = 0LL;
  packageFullNames = 0LL;
  count[0] = 1;
  v5 = 130LL;
  packageFamilyName[0] = 0;
  v6 = Str;
  v7 = this - (CallerIdentity *)Str;
  do
  {
    if ( v5 == -2147483516 )
      break;
    v8 = *(wchar_t *)((char *)v6 + v7);
    if ( !v8 )
      break;
    *v6++ = v8;
    --v5;
  }
  while ( v5 );
  v9 = v6 - 1;
  if ( v5 )
    v9 = v6;
  *v9 = 0;
  if ( !v5 )
    return (unsigned int)-2147024809;
  v10 = wcsrchr(Str, 0x21u);
  if ( Str[0] != 33 && v10 && v10[1] )
  {
    *v10 = 0;
    v14 = 65LL;
    v15 = packageFamilyName;
    do
    {
      if ( v14 == -2147483581 )
        break;
      v16 = *(WCHAR *)((char *)v15 + (char *)Str - (char *)packageFamilyName);
      if ( !v16 )
        break;
      *v15++ = v16;
      --v14;
    }
    while ( v14 );
    v12 = v15 - 1;
    if ( v14 )
      v12 = v15;
    v11 = v14 == 0 ? 0x8007007A : 0;
    *v12 = 0;
  }
  else
  {
    v11 = -2147024809;
  }
  if ( v11 >= 0 )
  {
    PackagesByPackageFamily = FindPackagesByPackageFamily(
                                packageFamilyName,
                                0x10u,
                                count,
                                &packageFullNames,
                                &count[1],
                                buffer,
                                0LL);
    v11 = PackagesByPackageFamily;
    if ( PackagesByPackageFamily > 0 )
      v11 = (unsigned __int16)PackagesByPackageFamily | 0x80070000;
    if ( v11 >= 0 )
    {
      if ( count[0] != 1 )
        return (unsigned int)-2147221165;
      v27 = -1LL;
      do
        ++v27;
      while ( buffer[v27] );
      v21 = v27 + 1;
      *(_QWORD *)a2 = 0LL;
      if ( v27 + 1 < v27 )
        return (unsigned int)-2147024362;
      *(_QWORD *)a2 = 0LL;
      if ( !is_mul_ok(v21, 2uLL) )
        return (unsigned int)-2147024362;
      v28 = CoTaskMemAlloc(2 * v21);
      *(_QWORD *)a2 = v28;
      v22 = v28;
      if ( !v28 )
        return (unsigned int)-2147024882;
      v11 = 0;
      if ( v21 <= 0x7FFFFFFF )
      {
        if ( v27 < 0x7FFFFFFF )
        {
          v17 = 0LL;
          v18 = (char *)((char *)buffer - (char *)v28);
          v19 = v28;
          while ( v21 != 1 )
          {
            v20 = *(_WORD *)((char *)v22 + (_QWORD)v18);
            if ( !v20 )
              break;
            *v22 = v20;
            --v21;
            ++v22;
            ++v17;
          }
          v23 = v22 - 1;
          if ( v21 )
            v23 = v22;
          *v23 = 0;
          v24 = v17 - 1;
          if ( v21 )
            v24 = v17;
          v25 = v27 + 1 - v24;
          if ( v21 )
          {
            if ( v25 > 1 )
            {
              v26 = 2 * v25;
              if ( v26 > 2 )
                memset_0(&v19[v24 + 1], 0, v26 - 2);
            }
          }
          return (unsigned int)v11;
        }
        if ( v27 == -1LL )
          return (unsigned int)v11;
      }
      *v28 = 0;
    }
  }
  return (unsigned int)v11;
}
