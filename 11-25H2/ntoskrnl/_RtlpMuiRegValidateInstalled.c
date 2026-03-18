/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x14081E934
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x14081DF7C (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlpGetNameFromLangInfoNode @ 0x1405E17B4 (RtlpGetNameFromLangInfoNode.c)
 *     _MuiRegAllocArray @ 0x1406974C4 (_MuiRegAllocArray.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140697730 (_RtlpRemovePendingDeleteLanguages.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpIsALicensedRegularLanguage @ 0x14081B64C (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14081C77C (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x14081CBAC (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlpMuiRegGetOrAddString @ 0x14081CC90 (RtlpMuiRegGetOrAddString.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x14081ECF4 (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x14081EF20 (_RtlpMuiRegValidatePartialLanguage.c)
 *     NtQueryInstallUILanguage @ 0x140A5AF10 (NtQueryInstallUILanguage.c)
 *     RtlLCIDToCultureName @ 0x140AB5EA0 (RtlLCIDToCultureName.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  int v2; // r15d
  void *v3; // r12
  __int16 v4; // si
  int v5; // edi
  unsigned __int16 v6; // r14
  unsigned int v7; // r13d
  __int64 result; // rax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v10; // rcx
  _WORD *v11; // rax
  __int64 v12; // r8
  bool v13; // sf
  __int16 v14; // ax
  __int64 v15; // rcx
  int v16; // r14d
  __int64 v17; // rsi
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int16 v20; // ax
  int v21; // r10d
  __int64 v22; // r8
  __int64 v23; // r11
  __int16 v24; // cx
  unsigned int v25; // edx
  int v26; // edi
  __int64 v27; // rsi
  __int16 v28[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v29; // [rsp+2Ch] [rbp-DCh] BYREF
  _WORD *v30; // [rsp+30h] [rbp-D8h]
  _DWORD v31[2]; // [rsp+38h] [rbp-D0h] BYREF
  _WORD *v32; // [rsp+40h] [rbp-C8h]
  __int128 v33; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v34[4]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v35[176]; // [rsp+78h] [rbp-90h] BYREF

  v28[0] = 0;
  v2 = 0;
  v31[1] = 0;
  v3 = 0LL;
  v30 = 0LL;
  v4 = -1;
  v29 = -1;
  v5 = -1;
  memset(v34, 0, 28);
  v33 = 0LL;
  memset_0(v35, 0, 0xAAuLL);
  v6 = *(_WORD *)(a1 + 4);
  v7 = PsUILanguageComitted == 0 ? 0xC0000034 : 0;
  if ( !v6 )
  {
    result = NtQueryInstallUILanguage(v28);
    if ( (int)result < 0 )
      return result;
    v6 = v28[0];
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v6, 0, &v29);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    v28[0] = -1;
    v11 = (_WORD *)MuiRegAllocArray(v10, 0x55u);
    v30 = v11;
    v3 = v11;
    if ( !v11 )
      return 3221225495LL;
    v32 = v11;
    v31[0] = 11141120;
    if ( (unsigned __int8)RtlLCIDToCultureName(v6, v31) )
    {
      LOBYTE(v12) = 1;
      v13 = (int)RtlpMuiRegGetOrAddString(a1, v32, v12, v28) < 0;
      v14 = -1;
      if ( !v13 )
        v14 = v28[0];
      HIWORD(v34[0]) = v14;
      LODWORD(v34[0]) = 49;
      WORD2(v34[0]) = v6;
      memset(&v34[1], 0, 20);
      if ( (int)RtlpMuiRegGetOrAddLangInfo((__int64 *)(a1 + 24), (__int64)v34, 0LL) >= 0 )
      {
        v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL) - 1;
        goto LABEL_15;
      }
    }
  }
  else if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v5 = v29;
LABEL_15:
    if ( v5 != -1 )
    {
      *((_QWORD *)&v33 + 1) = v35;
      WORD1(v33) = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v5 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v33) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage((_QWORD *)a1, *((wchar_t **)&v33 + 1)) >= 0 )
        {
          v2 = 1;
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v5) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v5) |= 0x8000u;
        }
      }
    }
  }
  if ( !v7 )
    v4 = v5;
  RtlpRemovePendingDeleteLanguages(a1, v4);
  v15 = *(_QWORD *)(a1 + 24);
  v16 = 0;
  if ( *(_WORD *)(v15 + 6) )
  {
    v17 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v17 + *(_QWORD *)(v15 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v16);
        v18 = v2 + 1;
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v20 = *(_WORD *)(v19 + v17);
        if ( (v20 & 0x1000) != 0 )
          v18 = v2;
        v2 = v18;
        if ( !v7 && v16 != v5 && v18 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v19 + v17) = v20 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v17) |= 0x8000u;
        }
      }
      v15 = *(_QWORD *)(a1 + 24);
      ++v16;
      v17 += 28LL;
    }
    while ( v16 < *(unsigned __int16 *)(v15 + 6) );
    v3 = v30;
  }
  v21 = 0;
  if ( *(_WORD *)(v15 + 6) )
  {
    v22 = 0LL;
    do
    {
      v23 = *(_QWORD *)(v15 + 16);
      v24 = *(_WORD *)(v23 + v22);
      if ( (v24 & 0x21) == 0x21 )
      {
        v25 = v2 + 1;
        if ( (v24 & 0x1000) != 0 )
          v25 = v2;
        v2 = v25;
        if ( !v7 && v21 != v5 && v25 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v23 + v22) = v24 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v22) |= 0x8000u;
        }
      }
      v15 = *(_QWORD *)(a1 + 24);
      ++v21;
      v22 += 28LL;
    }
    while ( v21 < *(unsigned __int16 *)(v15 + 6) );
    v3 = v30;
  }
  v26 = 0;
  if ( *(_WORD *)(v15 + 6) )
  {
    v27 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v27 + *(_QWORD *)(v15 + 16)) & 4) != 0 )
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v26);
      v15 = *(_QWORD *)(a1 + 24);
      ++v26;
      v27 += 28LL;
    }
    while ( v26 < *(unsigned __int16 *)(v15 + 6) );
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return 0LL;
}
