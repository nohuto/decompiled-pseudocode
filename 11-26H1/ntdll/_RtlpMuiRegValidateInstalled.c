/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x18014E7F8
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1801224D0 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlpMuiRegGetOrAddString @ 0x180002080 (RtlpMuiRegGetOrAddString.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800028FC (_RtlpMuiRegAddNeutralLanguage.c)
 *     _MuiRegAllocArray @ 0x180002AB0 (_MuiRegAllocArray.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x180004E70 (RtlpInitAndCallLcidToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800061D0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpIsALicensedRegularLanguage @ 0x18000AB10 (RtlpIsALicensedRegularLanguage.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800CCE50 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x18014D87C (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x18014EBBC (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x18014EDF0 (_RtlpMuiRegValidatePartialLanguage.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x18014EF30 (_RtlpRemovePendingDeleteLanguages.c)
 *     NtIsUILanguageComitted @ 0x1801610B0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180161AD0 (NtQueryInstallUILanguage.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  unsigned __int16 v2; // si
  int v3; // r14d
  int v4; // edi
  __int64 v5; // r13
  int IsUILanguageComitted; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 result; // rax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  int v14; // eax
  __int16 v15; // cx
  int v16; // r12d
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // r15d
  __int64 v20; // rsi
  unsigned int v21; // eax
  __int16 v22; // cx
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r10
  __int16 v26; // cx
  unsigned int v27; // eax
  int v28; // edi
  __int64 v29; // rsi
  int v30; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v31[2]; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v32; // [rsp+30h] [rbp-D8h]
  __int64 v33; // [rsp+38h] [rbp-D0h]
  __int128 v34; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v35; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v36[5]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v37[176]; // [rsp+88h] [rbp-80h] BYREF

  LOWORD(v30) = 0;
  v2 = -1;
  v31[0] = -1;
  v33 = 0LL;
  v3 = -1;
  v4 = 0;
  v35 = 0LL;
  v5 = 0LL;
  memset(v36, 0, 28);
  v34 = 0LL;
  memset_thunk_772440563353939046(v37, 0, 0xAAuLL);
  IsUILanguageComitted = NtIsUILanguageComitted();
  v8 = *(unsigned __int16 *)(a1 + 4);
  LODWORD(v32) = IsUILanguageComitted;
  if ( (_WORD)v8 )
  {
    LOWORD(v30) = v8;
  }
  else
  {
    result = NtQueryInstallUILanguage(&v30, v8, v7);
    if ( (int)result < 0 )
      return result;
    LOWORD(v8) = v30;
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v8, 0, v31);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    v31[0] = -1;
    v13 = MuiRegAllocArray(v11, 0x55u);
    v33 = v13;
    v5 = v13;
    if ( !v13 )
      return 3221225495LL;
    if ( (unsigned __int8)RtlpInitAndCallLcidToCultureName((__int64)&v35, v13, (unsigned __int16)v30) )
    {
      v14 = RtlpMuiRegGetOrAddString(a1, *((__int64 *)&v35 + 1), 1, v31);
      v15 = -1;
      if ( v14 >= 0 )
        v15 = v31[0];
      HIWORD(v36[0]) = v15;
      WORD2(v36[0]) = v30;
      LODWORD(v36[0]) = 49;
      LOWORD(v36[1]) = 0;
      *(_QWORD *)((char *)&v36[1] + 4) = 0LL;
      *(_QWORD *)((char *)&v36[2] + 4) = 0LL;
      RtlpMuiRegAddNeutralLanguage(a1, (__int64)v36, *((wchar_t **)&v35 + 1));
      v12 = a1 + 24;
      if ( (int)RtlpMuiRegGetOrAddLangInfo((__int64 *)(a1 + 24), (__int64)v36, 0LL) >= 0 )
      {
        v3 = *(unsigned __int16 *)(*(_QWORD *)v12 + 6LL) - 1;
        goto LABEL_16;
      }
    }
  }
  else if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v3 = v31[0];
    v12 = a1 + 24;
LABEL_16:
    if ( v3 != -1 )
    {
      *((_QWORD *)&v34 + 1) = v37;
      WORD1(v34) = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + *(_QWORD *)(*(_QWORD *)v12 + 16LL), (__int64)&v34) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage((_QWORD *)a1, *((wchar_t **)&v34 + 1)) >= 0 )
        {
          v4 = 1;
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v12 + 16LL) + 28LL * v3) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v12 + 16LL) + 28LL * v3) |= 0x8000u;
        }
      }
    }
  }
  v16 = v32;
  if ( !(_DWORD)v32 )
    v2 = v3;
  RtlpRemovePendingDeleteLanguages(a1, v2);
  v18 = *(_QWORD *)(a1 + 24);
  v19 = 0;
  if ( *(_WORD *)(v18 + 6) )
  {
    v20 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v20 + *(_QWORD *)(v18 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v19);
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v21 = v4 + 1;
        v22 = *(_WORD *)(v17 + v20);
        if ( (v22 & 0x1000) != 0 )
          v21 = v4;
        v4 = v21;
        if ( !v16 && v19 != v3 && v21 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v17 + v20) = v22 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v20) |= 0x8000u;
        }
      }
      v18 = *(_QWORD *)(a1 + 24);
      ++v19;
      v20 += 28LL;
    }
    while ( v19 < *(unsigned __int16 *)(v18 + 6) );
    v5 = v33;
  }
  v23 = 0LL;
  if ( *(_WORD *)(v18 + 6) )
  {
    v24 = 0LL;
    do
    {
      v25 = *(_QWORD *)(v18 + 16);
      v26 = *(_WORD *)(v25 + v24);
      if ( (v26 & 0x21) == 0x21 )
      {
        v27 = v4 + 1;
        if ( (v26 & 0x1000) != 0 )
          v27 = v4;
        v4 = v27;
        v17 = v27;
        if ( !v16 && (_DWORD)v23 != v3 && v27 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v25 + v24) = v26 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v24) |= 0x8000u;
        }
      }
      v18 = *(_QWORD *)(a1 + 24);
      v23 = (unsigned int)(v23 + 1);
      v24 += 28LL;
    }
    while ( (int)v23 < *(unsigned __int16 *)(v18 + 6) );
    v5 = v33;
  }
  v28 = 0;
  if ( *(_WORD *)(v18 + 6) )
  {
    v29 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v29 + *(_QWORD *)(v18 + 16)) & 4) != 0 )
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v28, v17, v23);
      v18 = *(_QWORD *)(a1 + 24);
      ++v28;
      v29 += 28LL;
    }
    while ( v28 < *(unsigned __int16 *)(v18 + 6) );
  }
  if ( v5 )
    RtlFreeHeap_0();
  return 0LL;
}
