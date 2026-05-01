/*
 * XREFs of ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800A5BF4
 * Callers:
 *     ?IsLegacyApp@@YA_NPEBG@Z @ 0x1800A4D04 (-IsLegacyApp@@YA_NPEBG@Z.c)
 *     ?CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z @ 0x1800A4DF0 (-CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A5F3C (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x1800AD568 (ImmersiveIcons--GetPackageFullNameForAppsFolderItem.c)
 *     ?GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z @ 0x1803E8890 (-GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z.c)
 *     ?s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z @ 0x1804E70D4 (-s_IsLegacyApp@CSwitchController@@CA_NPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
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
  unsigned int v11; // ebx
  __int64 v13; // rdx
  WCHAR *v14; // rcx
  WCHAR v15; // ax
  WCHAR *v16; // rax
  __int64 v17; // rdx
  LONG PackagesByPackageFamily; // eax
  unsigned __int64 v19; // rdx
  char *v20; // rax
  __int64 v21; // r8
  _WORD *v22; // r11
  __int16 v23; // r10
  _WORD *v24; // rcx
  _WORD *v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  _WORD *v30; // rax
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
  if ( Str[0] == 33 || !v10 || !v10[1] )
    return (unsigned int)-2147024809;
  *v10 = 0;
  v13 = 65LL;
  v14 = packageFamilyName;
  do
  {
    if ( v13 == -2147483581 )
      break;
    v15 = *(WCHAR *)((char *)v14 + (char *)Str - (char *)packageFamilyName);
    if ( !v15 )
      break;
    *v14++ = v15;
    --v13;
  }
  while ( v13 );
  v16 = v14 - 1;
  if ( v13 )
    v16 = v14;
  v17 = -v13;
  *v16 = 0;
  v11 = v17 == 0 ? 0x8007007A : 0;
  if ( v17 )
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
    if ( (v11 & 0x80000000) == 0 )
    {
      if ( count[0] != 1 )
        return (unsigned int)-2147221165;
      v28 = -1LL;
      do
        ++v28;
      while ( buffer[v28] );
      v29 = v28 + 1;
      *(_QWORD *)a2 = 0LL;
      if ( v28 + 1 < v28 || !is_mul_ok(v29, 2uLL) )
        return (unsigned int)-2147024362;
      v30 = CoTaskMemAlloc(2 * v29);
      *(_QWORD *)a2 = v30;
      v24 = v30;
      if ( !v30 )
        return (unsigned int)-2147024882;
      v11 = 0;
      if ( v29 <= 0x7FFFFFFF )
      {
        if ( v28 < 0x7FFFFFFF )
        {
          v19 = v28 + 1;
          v20 = (char *)((char *)buffer - (char *)v30);
          v21 = 0LL;
          v22 = v24;
          while ( v19 != 1 )
          {
            v23 = *(_WORD *)((char *)v24 + (_QWORD)v20);
            if ( !v23 )
              break;
            *v24 = v23;
            --v19;
            ++v24;
            ++v21;
          }
          v25 = v24 - 1;
          if ( v19 )
            v25 = v24;
          *v25 = 0;
          v26 = v21 - 1;
          if ( v19 )
            v26 = v21;
          v27 = v29 - v26;
          if ( v19 && v27 > 1 && 2 * v27 > 2 )
            memset_0(&v22[v26 + 1], 0, 2 * v27 - 2);
          return v11;
        }
        if ( v28 == -1LL )
          return v11;
      }
      *v30 = 0;
    }
  }
  return v11;
}
