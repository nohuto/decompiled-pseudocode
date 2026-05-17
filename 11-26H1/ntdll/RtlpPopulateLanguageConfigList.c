/*
 * XREFs of RtlpPopulateLanguageConfigList @ 0x18000D360
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x18000CA10 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlpMuiRegGetOrAddString @ 0x180002080 (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18000D2DC (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegValidateConfigNode @ 0x1800E0750 (RtlpMuiRegValidateConfigNode.c)
 *     RtlpMuiRegConfigListAddLanguage @ 0x1800E9B18 (RtlpMuiRegConfigListAddLanguage.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     ZwEnumerateValueKey @ 0x18015F1A0 (ZwEnumerateValueKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpPopulateLanguageConfigList(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v4; // r15
  __int64 *v5; // rsi
  __int64 v6; // rdi
  signed int v7; // ebx
  int v8; // eax
  unsigned __int64 v9; // r12
  wchar_t v10; // r13
  size_t v11; // rax
  __int16 v12; // cx
  __int16 v13; // r15
  __int16 v14; // r15
  const wchar_t *v15; // rsi
  int v16; // r13d
  unsigned __int16 i; // r12
  size_t v18; // rax
  __int16 v19; // dx
  __int16 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  const wchar_t *v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 LanguageConfigList; // rax
  int v28; // eax
  __int64 v29; // rax
  __int16 v30[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v31; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v32; // [rsp+38h] [rbp-C8h]
  __int64 *v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h]
  int v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h]
  unsigned __int16 v38[2]; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+6Ch] [rbp-94h]
  wchar_t *v40; // [rsp+70h] [rbp-90h]
  unsigned __int16 v41[2]; // [rsp+78h] [rbp-88h] BYREF
  int v42; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v43; // [rsp+80h] [rbp-80h]
  _QWORD v44[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v45[4]; // [rsp+98h] [rbp-68h] BYREF
  int v46; // [rsp+9Ch] [rbp-64h]
  int v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A4h] [rbp-5Ch]
  wchar_t String[4]; // [rsp+A8h] [rbp-58h] BYREF

  v3 = 0;
  v35 = a3;
  v4 = a3;
  v33 = a2;
  v37 = a1;
  v36 = 0;
  v5 = a2;
  memset(v44, 0, 12);
  v6 = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    v7 = -1073741811;
    goto LABEL_39;
  }
  v6 = *a2;
  v34 = *a2;
  v7 = 0;
  v32 = 0;
LABEL_8:
  while ( 2 )
  {
    if ( v7 == -2147483622 )
    {
      v7 = 0;
      goto LABEL_39;
    }
    v8 = ZwEnumerateValueKey(a1, v3, 1LL, v45, 512, &v36);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v3 = v32;
      a1 = v37;
      if ( v46 != 7 )
        continue;
      v3 = v32;
      if ( (unsigned int)(*(_DWORD *)String + 24) > 0x200 )
        goto LABEL_7;
      v9 = (unsigned __int64)*(unsigned int *)String >> 1;
      v31 = 0;
      v30[0] = 0;
      v39 = 0;
      v10 = String[v9 + 2];
      String[v9 + 2] = 0;
      v40 = &String[2];
      v11 = 2 * wcslen(&String[2]);
      if ( v11 >= 0xFFFE )
        LOWORD(v11) = -4;
      v38[0] = v11;
      v38[1] = v11 + 2;
      if ( !RtlCultureNameToLCID(v38, &v31) )
      {
        v7 = -1073741811;
        goto LABEL_6;
      }
      v12 = v31;
      if ( ((v31 - 4096) & 0xFFFFFBFF) != 0 )
      {
        v13 = 1;
      }
      else
      {
        v7 = RtlpMuiRegGetOrAddString(v4, (__int64)&String[2], 1, v30);
        if ( v7 < 0 )
        {
          v30[0] = 0;
          goto LABEL_6;
        }
        v12 = v30[0];
        v13 = 3;
      }
      v14 = v13 << 14;
      String[v9 + 2] = v10;
      *(_QWORD *)((char *)v44 + 4) = 0LL;
      WORD1(v44[0]) = v14;
      LOWORD(v44[0]) = v12;
      v15 = (const wchar_t *)&v45[v47];
      if ( !v15 || !v48 )
      {
LABEL_57:
        v7 = -1073741811;
LABEL_58:
        v4 = v35;
LABEL_59:
        v5 = v33;
        goto LABEL_6;
      }
      v16 = 2 * v48;
      for ( i = 0; ; ++i )
      {
        if ( !v15 || !*v15 || v16 <= 0 || i >= 3u )
        {
          v4 = v35;
          v7 = RtlpMuiRegValidateConfigNode(v35, v44, 0LL);
          if ( v7 < 0 )
            goto LABEL_59;
          if ( v6 )
          {
            v5 = v33;
            goto LABEL_46;
          }
          LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(-1);
          v5 = v33;
          v34 = LanguageConfigList;
          v6 = LanguageConfigList;
          if ( !LanguageConfigList )
          {
            v7 = -1073741801;
            goto LABEL_39;
          }
          *v33 = LanguageConfigList;
LABEL_46:
          v28 = RtlpMuiRegConfigListAddLanguage(&v34, v44, 0LL);
          v6 = v34;
          v7 = v28;
          if ( v28 >= 0 )
            *v5 = v34;
LABEL_6:
          v3 = ++v32;
LABEL_7:
          a1 = v37;
          goto LABEL_8;
        }
        v31 = 0;
        v30[0] = 0;
        v42 = 0;
        v43 = v15;
        v18 = 2 * wcslen(v15);
        if ( v18 >= 0xFFFE )
          LOWORD(v18) = -4;
        v41[0] = v18;
        v41[1] = v18 + 2;
        if ( RtlCultureNameToLCID(v41, &v31) )
        {
          v19 = v31;
          if ( ((v31 - 4096) & 0xFFFFFBFF) != 0 )
          {
            v20 = 1;
LABEL_29:
            WORD1(v44[0]) = (v20 << (2 * i)) | v14 & ~(3 << (2 * i));
            *((_WORD *)v44 + i + 3) = v19;
            v14 = WORD1(v44[0]);
            goto LABEL_30;
          }
          if ( (int)RtlpMuiRegGetOrAddString(v35, (__int64)v15, 1, v30) >= 0 )
          {
            v19 = v30[0];
            v20 = 3;
            goto LABEL_29;
          }
          v30[0] = 0;
        }
LABEL_30:
        v21 = (unsigned __int64)v16 >> 1;
        if ( v21 > 0x7FFFFFFF )
          goto LABEL_57;
        v22 = (unsigned __int64)v16 >> 1;
        v23 = v15;
        if ( v21 )
        {
          do
          {
            if ( !*v23 )
              break;
            ++v23;
            --v22;
          }
          while ( v22 );
        }
        v7 = v22 == 0 ? 0xC000000D : 0;
        if ( v22 )
          v24 = v21 - v22;
        else
          v24 = 0LL;
        if ( !v22 )
          goto LABEL_58;
        v25 = 2 * v24;
        v15 = (const wchar_t *)((char *)v15 + v25 + 2);
        v16 += -2 - v25;
      }
    }
    break;
  }
  if ( v8 == -2147483622 )
    goto LABEL_6;
LABEL_39:
  if ( !v6 && v7 != -1073741811 )
  {
    v29 = RtlpMuiRegCreateLanguageConfigList(1);
    *v5 = v29;
    v6 = v29;
    if ( !v29 )
      v7 = -1073741801;
  }
  if ( v7 < 0 && v6 )
    *(_WORD *)(v6 + 4) = 0;
  return (unsigned int)v7;
}
