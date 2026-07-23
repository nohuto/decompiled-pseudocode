/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x1408B0A68
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1408B00B4 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlpGetNameFromLangInfoNode @ 0x1406207D4 (RtlpGetNameFromLangInfoNode.c)
 *     _MuiRegAllocArray @ 0x140724EAC (_MuiRegAllocArray.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140725134 (_RtlpRemovePendingDeleteLanguages.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x140779488 (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1408AEC08 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegGetOrAddString @ 0x1408AF03C (RtlpMuiRegGetOrAddString.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x1408B0E44 (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x1408B1070 (_RtlpMuiRegValidatePartialLanguage.c)
 *     NtQueryInstallUILanguage @ 0x140B29800 (NtQueryInstallUILanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x140B300BC (RtlpIsALicensedRegularLanguage.c)
 *     RtlLCIDToCultureName @ 0x140B60060 (RtlLCIDToCultureName.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  __int16 v2; // si
  int v3; // r14d
  unsigned int v4; // edi
  wchar_t *v5; // r13
  LANGID v6; // dx
  NTSTATUS result; // eax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v9; // rcx
  __int64 v10; // r15
  wchar_t *v11; // rax
  __int64 v12; // r8
  int v13; // eax
  __int16 v14; // cx
  int v15; // r12d
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // r15d
  __int64 v19; // rsi
  int v20; // r13d
  unsigned int v21; // r12d
  __int64 v22; // rcx
  __int16 v23; // ax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r10
  __int16 v27; // cx
  int v28; // edi
  __int64 v29; // rsi
  LANGID InstallUILanguageId[2]; // [rsp+28h] [rbp-E0h] BYREF
  int v31; // [rsp+2Ch] [rbp-DCh] BYREF
  __int16 v32; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v33[12]; // [rsp+34h] [rbp-D4h]
  UNICODE_STRING String; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING v35; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v36[5]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v37[176]; // [rsp+88h] [rbp-80h] BYREF

  InstallUILanguageId[0] = 0;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  v2 = -1;
  LOWORD(v31) = -1;
  *(_QWORD *)&v33[4] = 0LL;
  v3 = -1;
  v4 = 0;
  memset(v36, 0, 28);
  v5 = 0LL;
  v35 = 0LL;
  memset_0(v37, 0, 0xAAuLL);
  v6 = *(_WORD *)(a1 + 4);
  *(_QWORD *)v33 = PspSiloMonitorLock.CurrentRunTime == 0 ? 0xC0000034 : 0;
  if ( v6 )
  {
    InstallUILanguageId[0] = v6;
  }
  else
  {
    result = NtQueryInstallUILanguage(InstallUILanguageId);
    if ( result < 0 )
      return result;
    v6 = InstallUILanguageId[0];
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v6, 0, &v31);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    v32 = -1;
    v11 = (wchar_t *)MuiRegAllocArray(v9, 0x55u);
    *(_QWORD *)&v33[4] = v11;
    v5 = v11;
    if ( !v11 )
      return -1073741801;
    String.Buffer = v11;
    *(_DWORD *)&String.Length = 11141120;
    if ( RtlLCIDToCultureName(InstallUILanguageId[0], &String) )
    {
      LOBYTE(v12) = 1;
      v13 = RtlpMuiRegGetOrAddString(a1, String.Buffer, v12, &v32);
      v14 = -1;
      if ( v13 >= 0 )
        v14 = v32;
      WORD2(v36[0]) = InstallUILanguageId[0];
      HIWORD(v36[0]) = v14;
      LODWORD(v36[0]) = 49;
      memset(&v36[1], 0, 20);
      v10 = a1 + 24;
      if ( (int)RtlpMuiRegGetOrAddLangInfo((__int64 *)(a1 + 24), (__int64)v36, 0LL) >= 0 )
      {
        v3 = *(unsigned __int16 *)(*(_QWORD *)v10 + 6LL) - 1;
        goto LABEL_16;
      }
    }
  }
  else if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v3 = (__int16)v31;
    v10 = a1 + 24;
LABEL_16:
    if ( v3 != -1 )
    {
      v35.Buffer = (wchar_t *)v37;
      v35.MaximumLength = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + *(_QWORD *)(*(_QWORD *)v10 + 16LL), &v35) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage(a1, v35.Buffer) >= 0 )
        {
          v4 = 1;
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v10 + 16LL) + 28LL * v3) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v10 + 16LL) + 28LL * v3) |= 0x8000u;
        }
      }
    }
  }
  v15 = *(_DWORD *)v33;
  if ( !*(_DWORD *)v33 )
    v2 = v3;
  RtlpRemovePendingDeleteLanguages(a1, v2);
  v17 = *(_QWORD *)(a1 + 24);
  v18 = 0;
  if ( *(_WORD *)(v17 + 6) )
  {
    v19 = 0LL;
    v20 = v15;
    do
    {
      v21 = v4;
      if ( (*(_BYTE *)(v19 + *(_QWORD *)(v17 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v18);
        ++v4;
        v22 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v23 = *(_WORD *)(v22 + v19);
        if ( (v23 & 0x1000) != 0 )
          v4 = v21;
        if ( !v20 && v18 != v3 && v4 > *(_DWORD *)(a1 + 120) )
        {
          v16 = 65503LL;
          *(_WORD *)(v22 + v19) = v23 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v19) |= 0x8000u;
        }
      }
      v17 = *(_QWORD *)(a1 + 24);
      ++v18;
      v19 += 28LL;
    }
    while ( v18 < *(unsigned __int16 *)(v17 + 6) );
    v5 = *(wchar_t **)&v33[4];
    v15 = *(_DWORD *)v33;
  }
  v24 = 0LL;
  if ( *(_WORD *)(v17 + 6) )
  {
    v25 = 0LL;
    do
    {
      v26 = *(_QWORD *)(v17 + 16);
      v16 = v4;
      v27 = *(_WORD *)(v26 + v25);
      if ( (v27 & 0x21) == 0x21 )
      {
        ++v4;
        if ( (v27 & 0x1000) != 0 )
          v4 = v16;
        if ( !v15 && (_DWORD)v24 != v3 && v4 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v26 + v25) = v27 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v25) |= 0x8000u;
        }
      }
      v17 = *(_QWORD *)(a1 + 24);
      v24 = (unsigned int)(v24 + 1);
      v25 += 28LL;
    }
    while ( (int)v24 < *(unsigned __int16 *)(v17 + 6) );
    v5 = *(wchar_t **)&v33[4];
  }
  v28 = 0;
  if ( *(_WORD *)(v17 + 6) )
  {
    v29 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v29 + *(_QWORD *)(v17 + 16)) & 4) != 0 )
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v28, v16, v24);
      v17 = *(_QWORD *)(a1 + 24);
      ++v28;
      v29 += 28LL;
    }
    while ( v28 < *(unsigned __int16 *)(v17 + 6) );
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return 0;
}
