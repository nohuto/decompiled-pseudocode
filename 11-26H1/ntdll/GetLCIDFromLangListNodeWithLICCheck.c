/*
 * XREFs of GetLCIDFromLangListNodeWithLICCheck @ 0x180009A70
 * Callers:
 *     LdrResFallbackLangList @ 0x1800094E0 (LdrResFallbackLangList.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002DF70 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModule @ 0x1800E4F90 (LdrLoadAlternateResourceModule.c)
 *     RtlGetThreadLangIdByIndex @ 0x18010E340 (RtlGetThreadLangIdByIndex.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlpIsALicensedRegularLanguage @ 0x18000AB10 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18000AC20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpIsALicensedLIPLanguage @ 0x18000AE4C (RtlpIsALicensedLIPLanguage.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall GetLCIDFromLangListNodeWithLICCheck(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // r15
  __int64 v9; // rax
  __int64 v10; // rbp
  unsigned int v11; // eax
  unsigned __int16 *v12; // r9
  int v13; // ecx
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  int v17; // ecx
  unsigned __int16 v18; // ax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  const wchar_t *v23; // rcx
  size_t v24; // rax
  const wchar_t *v25; // rdi
  __int16 v26[2]; // [rsp+20h] [rbp-118h] BYREF
  int v27; // [rsp+24h] [rbp-114h] BYREF
  __int64 v28; // [rsp+28h] [rbp-110h] BYREF
  const wchar_t *v29; // [rsp+30h] [rbp-108h]
  _BYTE v30[176]; // [rsp+40h] [rbp-F8h] BYREF

  v5 = 0;
  v6 = a3;
  v28 = 0LL;
  v27 = 0;
  v26[0] = 0;
  memset_thunk_772440563353939046(v30, 0, 0xAAuLL);
  if ( !a2 || !a4 || !a5 || (unsigned __int16)v6 >= *(_WORD *)(a2 + 4) )
    return (unsigned int)-1073741811;
  v9 = *(_QWORD *)(a2 + 16);
  v10 = g_RegInfo;
  *a5 = 0;
  if ( v9 )
    v10 = v9;
  v11 = *a4;
  if ( !(_WORD)v11 )
  {
    *a4 = 0;
    v12 = (unsigned __int16 *)(*(_QWORD *)(a2 + 24) + 6 * v6);
    v13 = *v12;
    if ( v13 == 2 )
    {
      v14 = *(_WORD *)(28LL * (__int16)v12[2] + *(_QWORD *)(*(_QWORD *)(v10 + 24) + 16LL) + 4);
      *a4 = v14;
      if ( v14 )
      {
LABEL_10:
        v15 = *(_QWORD *)(a2 + 32);
        *a5 = !_bittest64(&v15, v6);
        return v5;
      }
      v20 = 28LL * (__int16)v12[2];
      v21 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 16LL);
      if ( *(__int16 *)(v20 + v21 + 6) <= 0 )
        return (unsigned int)-1073741595;
      v22 = *(__int16 *)(v20 + v21 + 6);
    }
    else
    {
      v17 = v13 - 1;
      if ( !v17 )
      {
        v18 = v12[2];
LABEL_14:
        *a4 = v18;
        goto LABEL_10;
      }
      if ( v17 != 2 )
        return (unsigned int)-1073741595;
      v22 = (__int16)v12[2];
    }
    v23 = (const wchar_t *)(*(_QWORD *)(*(_QWORD *)(v10 + 32) + 24LL)
                          + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 32) + 16LL) + 2 * v22));
    v29 = v23;
    if ( v23 )
    {
      v24 = 2 * wcslen(v23);
      if ( v24 >= 0xFFFE )
        LOWORD(v24) = -4;
      LOWORD(v28) = v24;
      WORD1(v28) = v24 + 2;
    }
    if ( RtlCultureNameToLCID((unsigned __int16 *)&v28, &v27) )
    {
      v18 = v27;
      goto LABEL_14;
    }
    return (unsigned int)-1073741595;
  }
  WORD1(v28) = 170;
  v29 = (const wchar_t *)v30;
  if ( (unsigned __int8)RtlLCIDToCultureName(v11, (__int64)&v28) )
  {
    if ( *(_DWORD *)(v10 + 120) >= 0x3E8u )
    {
      v25 = v29;
      if ( (int)RtlpIsALicensedRegularLanguage(v10, v29) < 0 && (int)RtlpIsALicensedLIPLanguage(v10, v25) < 0 )
        *a5 = 1;
    }
    else
    {
      LOBYTE(v19) = 1;
      if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v10, v29, v19, v26) < 0 )
        *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v5;
}
