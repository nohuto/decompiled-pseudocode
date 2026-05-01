/*
 * XREFs of ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18002D87C
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18002D49C (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x1800AF5AC (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18013708C (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801F6358 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 *     ?AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18054E784 (-AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std.c)
 *     GetPidlsFromTaskbarLayout @ 0x180669AEC (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x18001FF50 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

__int64 __fastcall ParseAppUserModelId(char *a1, LPVOID *a2, unsigned __int16 **a3)
{
  signed __int64 v5; // r8
  unsigned __int128 v6; // rax
  wchar_t *v7; // rcx
  signed int v8; // ebx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdi
  char *v12; // r9
  __int64 v13; // r10
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  const unsigned __int16 *v17; // r8
  __int64 v18; // r9
  wchar_t v19; // ax
  wchar_t *v20; // rax
  _WORD v21[72]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v22[72]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t Str[136]; // [rsp+150h] [rbp+50h] BYREF

  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  v21[0] = 0;
  v5 = a1 - (char *)Str;
  v22[0] = 0;
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
    && (v17 = (const unsigned __int16 *)(v6 + 2), *(_WORD *)(v6 + 2)) )
  {
    *(_WORD *)v6 = 0;
    *((_QWORD *)&v6 + 1) = (char *)Str - (char *)v21;
    v7 = v21;
    v18 = 65LL;
    do
    {
      if ( v18 == -2147483581 )
        break;
      v19 = *(wchar_t *)((char *)v7 + *((_QWORD *)&v6 + 1));
      if ( !v19 )
        break;
      *v7++ = v19;
      --v18;
    }
    while ( v18 );
    v20 = v7 - 1;
    if ( v18 )
      v20 = v7;
    *v20 = 0;
    v8 = v18 == 0 ? 0x8007007A : 0;
    if ( v18 )
      v8 = StringCchCopyW(v22, 0x41uLL, v17);
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
    while ( v21[v9] );
    v10 = v9 + 1;
    *a2 = 0LL;
    if ( v9 + 1 < v9 || (*a2 = 0LL, v6 = v10 * (unsigned __int128)2uLL, !is_mul_ok(v10, 2uLL)) )
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
        *((_QWORD *)&v6 + 1) = 0LL;
        v12 = (char *)v21 - v6;
        v13 = v6;
        while ( v10 != 1 )
        {
          LOWORD(v6) = *(wchar_t *)((char *)v7 + (_QWORD)v12);
          if ( !(_WORD)v6 )
            break;
          *v7 = v6;
          --v10;
          ++v7;
          ++*((_QWORD *)&v6 + 1);
        }
        *(_QWORD *)&v6 = v7 - 1;
        if ( v10 )
          *(_QWORD *)&v6 = v7;
        *(_WORD *)v6 = 0;
        v14 = *((_QWORD *)&v6 + 1) - 1LL;
        if ( v10 )
          v14 = *((_QWORD *)&v6 + 1);
        v15 = v9 + 1 - v14;
        if ( v10 )
        {
          if ( v15 > 1 )
          {
            v16 = 2 * v15;
            if ( v16 > 2 )
              memset_0((void *)(v13 + 2 * (v14 + 1)), 0, v16 - 2);
          }
        }
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
      v8 = _AllocString<CTCoAllocPolicy>((__int64)v7, *((__int64 *)&v6 + 1), v22, a3);
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
