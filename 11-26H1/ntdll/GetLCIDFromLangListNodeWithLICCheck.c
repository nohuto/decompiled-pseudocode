/*
 * XREFs of GetLCIDFromLangListNodeWithLICCheck @ 0x1800551A0
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180019070 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x180054C10 (LdrResFallbackLangList.c)
 *     LdrLoadAlternateResourceModule @ 0x1800E2E40 (LdrLoadAlternateResourceModule.c)
 *     RtlGetThreadLangIdByIndex @ 0x18010DE90 (RtlGetThreadLangIdByIndex.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180056240 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180056350 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpIsALicensedLIPLanguage @ 0x18005657C (RtlpIsALicensedLIPLanguage.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
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
  _QWORD *v9; // rax
  _QWORD *v10; // rbp
  LCID v11; // eax
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
  wchar_t *v23; // rcx
  size_t v24; // rax
  wchar_t *Buffer; // rdi
  __int16 v26[2]; // [rsp+20h] [rbp-118h] BYREF
  DWORD Lcid; // [rsp+24h] [rbp-114h] BYREF
  _UNICODE_STRING String; // [rsp+28h] [rbp-110h] BYREF
  _BYTE v29[176]; // [rsp+40h] [rbp-F8h] BYREF

  v5 = 0;
  v6 = a3;
  *(_QWORD *)&String.Length = 0LL;
  Lcid = 0;
  v26[0] = 0;
  memset_thunk_772440563353939046(v29, 0, 0xAAuLL);
  if ( !a2 || !a4 || !a5 || (unsigned __int16)v6 >= *(_WORD *)(a2 + 4) )
    return (unsigned int)-1073741811;
  v9 = *(_QWORD **)(a2 + 16);
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
      v14 = *(_WORD *)(28LL * (__int16)v12[2] + *(_QWORD *)(v10[3] + 16LL) + 4);
      *a4 = v14;
      if ( v14 )
      {
LABEL_10:
        v15 = *(_QWORD *)(a2 + 32);
        *a5 = !_bittest64(&v15, v6);
        return v5;
      }
      v20 = 28LL * (__int16)v12[2];
      v21 = *(_QWORD *)(v10[3] + 16LL);
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
    v23 = (wchar_t *)(*(_QWORD *)(v10[4] + 24LL) + 2LL * *(__int16 *)(*(_QWORD *)(v10[4] + 16LL) + 2 * v22));
    String.Buffer = v23;
    if ( v23 )
    {
      v24 = 2 * wcslen(v23);
      if ( v24 >= 0xFFFE )
        LOWORD(v24) = -4;
      String.Length = v24;
      String.MaximumLength = v24 + 2;
    }
    if ( RtlCultureNameToLCID(&String, &Lcid) )
    {
      v18 = Lcid;
      goto LABEL_14;
    }
    return (unsigned int)-1073741595;
  }
  String.MaximumLength = 170;
  String.Buffer = (wchar_t *)v29;
  if ( RtlLCIDToCultureName(v11, &String) )
  {
    if ( *((_DWORD *)v10 + 30) >= 0x3E8u )
    {
      Buffer = String.Buffer;
      if ( (int)RtlpIsALicensedRegularLanguage(v10, String.Buffer) < 0
        && (int)RtlpIsALicensedLIPLanguage(v10, Buffer) < 0 )
      {
        *a5 = 1;
      }
    }
    else
    {
      LOBYTE(v19) = 1;
      if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v10, String.Buffer, v19, v26) < 0 )
        *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v5;
}
