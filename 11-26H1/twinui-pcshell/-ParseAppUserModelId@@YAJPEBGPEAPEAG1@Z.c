/*
 * XREFs of ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800737A4
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180073520 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1800A9A10 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x180171BE4 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801EC480 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 *     ?AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180572974 (-AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std.c)
 *     GetPidlsFromTaskbarLayout @ 0x180690384 (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AAC98 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800BFCC8 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall ParseAppUserModelId(char *a1, LPVOID *a2, unsigned __int16 **a3)
{
  signed __int64 v5; // r8
  unsigned __int128 v6; // rax
  wchar_t *v7; // rcx
  signed int v8; // ebx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdi
  __int64 v12; // r8
  wchar_t *v13; // r11
  wchar_t v14; // r10
  unsigned __int64 v15; // rdi
  const unsigned __int16 *v16; // r8
  __int64 v17; // r9
  wchar_t v18; // ax
  wchar_t *v19; // rax
  _WORD v20[72]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v21[72]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t Str[136]; // [rsp+150h] [rbp+50h] BYREF

  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  v20[0] = 0;
  v5 = a1 - (char *)Str;
  v21[0] = 0;
  *((_QWORD *)&v6 + 1) = 130LL;
  v7 = Str;
  do
  {
    if ( *((_QWORD *)&v6 + 1) == -2147483516LL )
      break;
    LOWORD(v6) = *(wchar_t *)((char *)v7 + v5);
    if ( !(_WORD)v6 )
      break;
    *v7++ = v6;
    --*((_QWORD *)&v6 + 1);
  }
  while ( *((_QWORD *)&v6 + 1) );
  *(_QWORD *)&v6 = v7 - 1;
  if ( *((_QWORD *)&v6 + 1) )
    *(_QWORD *)&v6 = v7;
  *(_WORD *)v6 = 0;
  if ( *((_QWORD *)&v6 + 1)
    && (*(_QWORD *)&v6 = wcsrchr(Str, 0x21u), Str[0] != 33)
    && (_QWORD)v6
    && (v16 = (const unsigned __int16 *)(v6 + 2), *(_WORD *)(v6 + 2)) )
  {
    *(_WORD *)v6 = 0;
    *((_QWORD *)&v6 + 1) = (char *)Str - (char *)v20;
    v7 = v20;
    v17 = 65LL;
    do
    {
      if ( v17 == -2147483581 )
        break;
      v18 = *(wchar_t *)((char *)v7 + *((_QWORD *)&v6 + 1));
      if ( !v18 )
        break;
      *v7++ = v18;
      --v17;
    }
    while ( v17 );
    v19 = v7 - 1;
    if ( v17 )
      v19 = v7;
    *v19 = 0;
    v8 = v17 == 0 ? 0x8007007A : 0;
    if ( v17 )
      v8 = StringCchCopyW(v21, 0x41uLL, v16);
  }
  else
  {
    v8 = -2147024809;
  }
  if ( a2 && v8 >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v20[v9] );
    v10 = v9 + 1;
    *a2 = 0LL;
    if ( v9 + 1 < v9 || (v6 = v10 * (unsigned __int128)2uLL, !is_mul_ok(v10, 2uLL)) )
    {
      v8 = -2147024362;
      goto LABEL_20;
    }
    *(_QWORD *)&v6 = CoTaskMemAlloc(2 * v10);
    *a2 = (LPVOID)v6;
    v7 = (wchar_t *)v6;
    if ( !(_QWORD)v6 )
    {
      v8 = -2147024882;
      goto LABEL_20;
    }
    v8 = 0;
    if ( v10 <= 0x7FFFFFFF )
    {
      if ( v9 < 0x7FFFFFFF )
      {
        *((_QWORD *)&v6 + 1) = v9 + 1;
        *(_QWORD *)&v6 = (char *)v20 - v6;
        v12 = 0LL;
        v13 = v7;
        while ( *((_QWORD *)&v6 + 1) != 1LL )
        {
          v14 = *(wchar_t *)((char *)v7 + v6);
          if ( !v14 )
            break;
          *v7 = v14;
          --*((_QWORD *)&v6 + 1);
          ++v7;
          ++v12;
        }
        *(_QWORD *)&v6 = v7 - 1;
        if ( *((_QWORD *)&v6 + 1) )
          *(_QWORD *)&v6 = v7;
        *(_WORD *)v6 = 0;
        *(_QWORD *)&v6 = v12 - 1;
        if ( *((_QWORD *)&v6 + 1) )
          *(_QWORD *)&v6 = v12;
        v15 = v10 - v6;
        if ( *((_QWORD *)&v6 + 1) && v15 > 1 && 2 * v15 > 2 )
          memset_0(&v13[v6 + 1], 0, 2 * v15 - 2);
        goto LABEL_20;
      }
      if ( v9 == -1LL )
        goto LABEL_20;
    }
    *(_WORD *)v6 = 0;
  }
LABEL_20:
  if ( a3 )
  {
    if ( v8 >= 0 )
    {
      v8 = _AllocString<CTCoAllocPolicy>(v7, *((_QWORD *)&v6 + 1), v21, a3);
      if ( v8 < 0 )
      {
        if ( a2 )
        {
          CoTaskMemFree(*a2);
          *a2 = 0LL;
        }
      }
    }
  }
  return (unsigned int)v8;
}
