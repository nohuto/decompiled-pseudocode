/*
 * XREFs of _RtlpMuiRegAddBaseLanguage @ 0x1408AFCF4
 * Callers:
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1408B01E4 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x140779488 (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x1408AEF70 (RtlpMuiRegGetLanguageSpec.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x140B2FD94 (_RtlpMuiRegInitAnyLanguage.c)
 *     RtlpLangNameInMultiSzString @ 0x140B30150 (RtlpLangNameInMultiSzString.c)
 */

__int64 __fastcall RtlpMuiRegAddBaseLanguage(__int64 *a1, _WORD *a2, unsigned int a3, __int64 a4, wchar_t *Str2)
{
  char v6; // r14
  wchar_t *v7; // rbx
  char v8; // di
  unsigned __int64 v9; // r12
  __int16 v10; // ax
  __int64 v11; // r9
  wchar_t *Buffer; // r8
  int LanguageSpec; // edi
  __int16 v14; // ax
  int v15; // r15d
  __int64 *v16; // r13
  char v17; // di
  int v18; // r12d
  __int16 v19; // ax
  __int16 v20; // dx
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int16 v23; // dx
  __int64 v24; // r8
  _WORD *v25; // rcx
  char v27; // [rsp+30h] [rbp-51h] BYREF
  char v28[3]; // [rsp+31h] [rbp-50h] BYREF
  __int16 v29[2]; // [rsp+34h] [rbp-4Dh] BYREF
  __int16 v30; // [rsp+38h] [rbp-49h]
  __int16 v31; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 *v32; // [rsp+40h] [rbp-41h]
  int inited; // [rsp+48h] [rbp-39h]
  signed int v34; // [rsp+4Ch] [rbp-35h]
  _WORD *v35; // [rsp+50h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-29h] BYREF
  __int128 v37; // [rsp+68h] [rbp-19h] BYREF
  __int64 v38; // [rsp+78h] [rbp-9h]
  int v39; // [rsp+80h] [rbp-1h]

  v32 = a1;
  v34 = a3;
  v35 = a2;
  v38 = 0LL;
  v39 = 0;
  v27 = 0;
  v28[0] = 0;
  v31 = 0;
  DestinationString = 0LL;
  v37 = 0LL;
  if ( a1 && a2 && a4 && a3 <= 3 )
  {
    v6 = 1;
    v7 = (wchar_t *)(a4 + *(unsigned int *)(a4 + 8));
    if ( !*(_DWORD *)(a4 + 12) || !v7 || (v8 = 1, !*v7) )
      v8 = 0;
    v9 = (unsigned __int64)*(unsigned int *)(a4 + 16) >> 1;
    v10 = *(_WORD *)(a4 + 2 * v9 + 20);
    *(_WORD *)(a4 + 2 * v9 + 20) = 0;
    v30 = v10;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a4 + 20));
    v29[0] = 0;
    if ( v8 )
    {
      Buffer = DestinationString.Buffer;
      v7[(unsigned __int64)*(unsigned int *)(a4 + 12) >> 1] = 0;
      inited = RtlpMuiRegInitAnyLanguage(v32, &v37, Buffer, 1026LL);
      LanguageSpec = inited;
      if ( inited < 0 )
        return (unsigned int)LanguageSpec;
      v14 = v30;
      LOBYTE(v30) = 0;
      LOWORD(v37) = v37 & 0xFFE7 | *v35 & 0x18;
      *(_WORD *)(a4 + 2 * v9 + 20) = v14;
      v15 = 0;
      if ( Str2 && *Str2 && (unsigned __int8)RtlpLangNameInMultiSzString(v7, Str2) )
      {
        v16 = v32;
        if ( (int)RtlpMuiRegGetLanguageSpec((__int64)v32, Str2, v28, 0LL, &v31) >= 0 )
        {
          LOBYTE(v30) = 1;
          v15 = 1;
          WORD6(v37) = v31;
          WORD4(v37) = WORD4(v37) & 0xFFFC | v28[0] & 3;
        }
      }
      else
      {
        v16 = v32;
      }
      if ( v7 )
      {
        v17 = v28[0];
        v18 = 2 * v15;
        v32 = (__int64 *)((char *)&v37 + 2 * (unsigned int)v15 + 12);
        do
        {
          if ( !*v7 || v18 >= 8 )
            break;
          if ( (int)RtlpMuiRegGetLanguageSpec((__int64)v16, v7, &v27, 0LL, v29) >= 0
            && (!(_BYTE)v30 || v17 != v27 || v31 != v29[0]) )
          {
            ++v15;
            v19 = (v27 & 3) << v18;
            v20 = WORD4(v37) & ~(3 << v18);
            v18 += 2;
            v21 = v32;
            WORD4(v37) = v19 | v20;
            *(_WORD *)v32 = v29[0];
            v32 = (__int64 *)((char *)v21 + 2);
          }
          v22 = -1LL;
          do
            ++v22;
          while ( v7[v22] );
          v7 += v22 + 1;
        }
        while ( v7 );
        LanguageSpec = inited;
      }
      if ( v15 < 0 )
      {
        v23 = WORD2(v37);
        if ( WORD2(v37) )
        {
LABEL_40:
          v24 = v34;
          v25 = v35;
          v35[4] = v35[4] & ~(3 << (2 * v34)) | ((v6 & 3) << (2 * v34));
          v25[v24 + 6] = v23;
          return (unsigned int)LanguageSpec;
        }
        v23 = WORD3(v37);
        if ( SWORD3(v37) > 0 )
        {
          v6 = 3;
          goto LABEL_40;
        }
        return (unsigned int)-1073741823;
      }
      LOWORD(v37) = v37 & 0xFFDF;
      LanguageSpec = RtlpMuiRegGetOrAddLangInfo(v16 + 3, (__int64)&v37, v29);
      if ( LanguageSpec < 0 )
        return (unsigned int)LanguageSpec;
      v6 = 2;
    }
    else
    {
      LanguageSpec = RtlpMuiRegGetLanguageSpec((__int64)v32, DestinationString.Buffer, &v27, v11, v29);
      if ( LanguageSpec < 0 )
        return (unsigned int)LanguageSpec;
      v6 = v27;
    }
    v23 = v29[0];
    goto LABEL_40;
  }
  return 3221225485LL;
}
