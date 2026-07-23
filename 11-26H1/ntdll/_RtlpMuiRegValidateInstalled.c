/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x18014E6A8
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x180122270 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlpMuiRegGetOrAddString @ 0x18004D7B0 (RtlpMuiRegGetOrAddString.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x18004E02C (_RtlpMuiRegAddNeutralLanguage.c)
 *     _MuiRegAllocArray @ 0x18004E1E0 (_MuiRegAllocArray.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x1800505A0 (RtlpInitAndCallLcidToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180051900 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180056240 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800CA5C0 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x18014D72C (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x18014EA6C (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x18014ECA0 (_RtlpMuiRegValidatePartialLanguage.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x18014EDE0 (_RtlpRemovePendingDeleteLanguages.c)
 *     NtIsUILanguageComitted @ 0x180160FB0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1801619D0 (NtQueryInstallUILanguage.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  unsigned __int16 v2; // si
  int v3; // r14d
  int v4; // edi
  wchar_t *v5; // r13
  NTSTATUS IsUILanguageComitted; // eax
  unsigned __int16 v7; // dx
  NTSTATUS result; // eax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v10; // rcx
  __int64 v11; // r15
  wchar_t *v12; // rax
  int v13; // eax
  __int16 v14; // cx
  int v15; // r12d
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // r15d
  __int64 v19; // rsi
  unsigned int v20; // eax
  __int16 v21; // cx
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r10
  __int16 v25; // cx
  unsigned int v26; // eax
  int v27; // edi
  __int64 v28; // rsi
  LANGID InstallUILanguageId[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v30[2]; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v31; // [rsp+30h] [rbp-D8h]
  wchar_t *v32; // [rsp+38h] [rbp-D0h]
  _UNICODE_STRING v33; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING v34; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v35[5]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v36[176]; // [rsp+88h] [rbp-80h] BYREF

  InstallUILanguageId[0] = 0;
  v2 = -1;
  v30[0] = -1;
  v32 = 0LL;
  v3 = -1;
  v4 = 0;
  v34 = 0LL;
  v5 = 0LL;
  memset(v35, 0, 28);
  v33 = 0LL;
  memset_thunk_772440563353939046(v36, 0, 0xAAuLL);
  IsUILanguageComitted = NtIsUILanguageComitted();
  v7 = *(_WORD *)(a1 + 4);
  LODWORD(v31) = IsUILanguageComitted;
  if ( v7 )
  {
    InstallUILanguageId[0] = v7;
  }
  else
  {
    result = NtQueryInstallUILanguage(InstallUILanguageId);
    if ( result < 0 )
      return result;
    v7 = InstallUILanguageId[0];
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v7, 0, v30);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    v30[0] = -1;
    v12 = (wchar_t *)MuiRegAllocArray(v10, 0x55u);
    v32 = v12;
    v5 = v12;
    if ( !v12 )
      return -1073741801;
    if ( RtlpInitAndCallLcidToCultureName(&v34, v12, InstallUILanguageId[0]) )
    {
      v13 = RtlpMuiRegGetOrAddString(a1, v34.Buffer, 1, v30);
      v14 = -1;
      if ( v13 >= 0 )
        v14 = v30[0];
      HIWORD(v35[0]) = v14;
      WORD2(v35[0]) = InstallUILanguageId[0];
      LODWORD(v35[0]) = 49;
      LOWORD(v35[1]) = 0;
      *(_QWORD *)((char *)&v35[1] + 4) = 0LL;
      *(_QWORD *)((char *)&v35[2] + 4) = 0LL;
      RtlpMuiRegAddNeutralLanguage(a1, (__int64)v35, v34.Buffer);
      v11 = a1 + 24;
      if ( (int)RtlpMuiRegGetOrAddLangInfo((__int64 *)(a1 + 24), (__int64)v35, 0LL) >= 0 )
      {
        v3 = *(unsigned __int16 *)(*(_QWORD *)v11 + 6LL) - 1;
        goto LABEL_16;
      }
    }
  }
  else if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v3 = v30[0];
    v11 = a1 + 24;
LABEL_16:
    if ( v3 != -1 )
    {
      v33.Buffer = (wchar_t *)v36;
      v33.MaximumLength = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + *(_QWORD *)(*(_QWORD *)v11 + 16LL), &v33) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage((_QWORD *)a1, v33.Buffer) >= 0 )
        {
          v4 = 1;
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v11 + 16LL) + 28LL * v3) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v11 + 16LL) + 28LL * v3) |= 0x8000u;
        }
      }
    }
  }
  v15 = v31;
  if ( !(_DWORD)v31 )
    v2 = v3;
  RtlpRemovePendingDeleteLanguages(a1, v2);
  v17 = *(_QWORD *)(a1 + 24);
  v18 = 0;
  if ( *(_WORD *)(v17 + 6) )
  {
    v19 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v19 + *(_QWORD *)(v17 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v18);
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v20 = v4 + 1;
        v21 = *(_WORD *)(v16 + v19);
        if ( (v21 & 0x1000) != 0 )
          v20 = v4;
        v4 = v20;
        if ( !v15 && v18 != v3 && v20 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v16 + v19) = v21 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v19) |= 0x8000u;
        }
      }
      v17 = *(_QWORD *)(a1 + 24);
      ++v18;
      v19 += 28LL;
    }
    while ( v18 < *(unsigned __int16 *)(v17 + 6) );
    v5 = v32;
  }
  v22 = 0LL;
  if ( *(_WORD *)(v17 + 6) )
  {
    v23 = 0LL;
    do
    {
      v24 = *(_QWORD *)(v17 + 16);
      v25 = *(_WORD *)(v24 + v23);
      if ( (v25 & 0x21) == 0x21 )
      {
        v26 = v4 + 1;
        if ( (v25 & 0x1000) != 0 )
          v26 = v4;
        v4 = v26;
        v16 = v26;
        if ( !v15 && (_DWORD)v22 != v3 && v26 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v24 + v23) = v25 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v23) |= 0x8000u;
        }
      }
      v17 = *(_QWORD *)(a1 + 24);
      v22 = (unsigned int)(v22 + 1);
      v23 += 28LL;
    }
    while ( (int)v22 < *(unsigned __int16 *)(v17 + 6) );
    v5 = v32;
  }
  v27 = 0;
  if ( *(_WORD *)(v17 + 6) )
  {
    v28 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v28 + *(_QWORD *)(v17 + 16)) & 4) != 0 )
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v27, v16, v22);
      v17 = *(_QWORD *)(a1 + 24);
      ++v27;
      v28 += 28LL;
    }
    while ( v27 < *(unsigned __int16 *)(v17 + 6) );
  }
  if ( v5 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0;
}
