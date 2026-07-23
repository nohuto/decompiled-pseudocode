/*
 * XREFs of RtlpPopulateLanguageConfigList @ 0x1408AF744
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x1408ADEB4 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140478794 (RtlStringCbLengthW.c)
 *     RtlpMuiRegValidateConfigNode @ 0x140724CEC (RtlpMuiRegValidateConfigNode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x140728220 (ZwEnumerateValueKey.c)
 *     RtlpMuiRegConfigListAddLanguage @ 0x1408AE1AC (RtlpMuiRegConfigListAddLanguage.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x1408AE5BC (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x1408AEF70 (RtlpMuiRegGetLanguageSpec.c)
 */

__int64 __fastcall RtlpPopulateLanguageConfigList(HANDLE a1, __int64 *a2, __int64 a3)
{
  NTSTATUS v3; // r11d
  ULONG v4; // eax
  __int64 v5; // r15
  __int64 v7; // rdi
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  __int64 v10; // r9
  unsigned __int64 v11; // rsi
  WCHAR v12; // r12
  int LanguageSpec; // eax
  __int64 v14; // r9
  __int16 v15; // ax
  __int16 v16; // r13
  __int16 v17; // r13
  const WCHAR *v18; // rsi
  int v19; // r15d
  unsigned __int16 i; // r12
  int v21; // eax
  __int64 LanguageConfigList; // rax
  int v23; // eax
  __int64 v24; // rax
  unsigned __int8 v26; // [rsp+30h] [rbp-D0h] BYREF
  char v27[3]; // [rsp+31h] [rbp-CFh] BYREF
  __int16 v28; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v29[2]; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v30; // [rsp+3Ch] [rbp-C4h]
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h]
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h]
  size_t pcbLength; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v36[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+78h] [rbp-88h] BYREF
  int v38; // [rsp+7Ch] [rbp-84h]
  int v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+84h] [rbp-7Ch]
  unsigned int v41; // [rsp+88h] [rbp-78h]
  WCHAR v42[246]; // [rsp+8Ch] [rbp-74h] BYREF

  v3 = 0;
  v32 = a3;
  v4 = 0;
  KeyHandle = a1;
  v28 = 0;
  v5 = a3;
  v26 = 0;
  ResultLength = 0;
  memset(v36, 0, 12);
  v7 = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    v8 = -1073741811;
    goto LABEL_36;
  }
  v7 = *a2;
  v8 = 0;
  v31 = *a2;
  v30 = 0;
  while ( v8 != -2147483622 )
  {
    v9 = ZwEnumerateValueKey(a1, v4, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength);
    v3 = 0;
    v8 = v9;
    if ( v9 < 0 )
    {
      if ( v9 != -2147483622 )
        goto LABEL_36;
      goto LABEL_32;
    }
    v4 = v30;
    a1 = KeyHandle;
    if ( v38 == 7 )
    {
      v4 = v30;
      if ( v41 + 24 > 0x200 )
        goto LABEL_5;
      v11 = (unsigned __int64)v41 >> 1;
      v12 = v42[v11];
      v42[v11] = 0;
      LanguageSpec = RtlpMuiRegGetLanguageSpec(v5, v42, (char *)&v26, v10, &v28);
      v3 = 0;
      v8 = LanguageSpec;
      if ( LanguageSpec >= 0 )
      {
        v15 = v28;
        v16 = v26;
        v42[v11] = v12;
        v17 = v16 << 14;
        LOWORD(v36[0]) = v15;
        *(_QWORD *)((char *)v36 + 4) = 0LL;
        WORD1(v36[0]) = v17;
        pcbLength = 0LL;
        v27[0] = 0;
        v29[0] = 0;
        v18 = (const WCHAR *)&KeyValueInformation[v39];
        if ( v18 )
        {
          if ( v40 )
          {
            v19 = 2 * v40;
            for ( i = 0; v18 && *v18 != (_WORD)v3 && v19 > 0 && i < 3u; ++i )
            {
              if ( (int)RtlpMuiRegGetLanguageSpec(v32, v18, v27, v14, v29) >= 0 )
              {
                WORD1(v36[0]) = ((v27[0] & 3) << (2 * i)) | v17 & ~(3 << (2 * i));
                *((_WORD *)v36 + i + 3) = v29[0];
                v17 = WORD1(v36[0]);
              }
              v8 = RtlStringCbLengthW(v18, v19, &pcbLength);
              if ( v8 < 0 )
              {
                v5 = v32;
                goto LABEL_32;
              }
              v18 = (const WCHAR *)((char *)v18 + pcbLength + 2);
              v19 += -2 - pcbLength;
            }
            v5 = v32;
            v21 = RtlpMuiRegValidateConfigNode(v32, (unsigned __int16 *)v36);
            v3 = 0;
            v8 = v21;
            if ( v21 >= 0 )
            {
              if ( !v7 )
              {
                LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(-1);
                LOWORD(v3) = 0;
                v31 = LanguageConfigList;
                v7 = LanguageConfigList;
                if ( !LanguageConfigList )
                {
                  v8 = -1073741801;
                  goto LABEL_36;
                }
                *a2 = LanguageConfigList;
              }
              v23 = RtlpMuiRegConfigListAddLanguage(&v31, (__int16 *)v36);
              v7 = v31;
              v3 = 0;
              v8 = v23;
              if ( v23 >= 0 )
                *a2 = v31;
            }
            goto LABEL_32;
          }
          v5 = v32;
        }
        v8 = -1073741811;
      }
LABEL_32:
      v4 = ++v30;
LABEL_5:
      a1 = KeyHandle;
    }
  }
  v8 = v3;
LABEL_36:
  if ( !v7 && v8 != -1073741811 )
  {
    v24 = RtlpMuiRegCreateLanguageConfigList(1);
    LOWORD(v3) = 0;
    *a2 = v24;
    v7 = v24;
    if ( !v24 )
      v8 = -1073741801;
  }
  if ( v8 < 0 && v7 )
    *(_WORD *)(v7 + 4) = v3;
  return (unsigned int)v8;
}
