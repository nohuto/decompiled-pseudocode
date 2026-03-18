/*
 * XREFs of ConfigureFeature @ 0x140288C30
 * Callers:
 *     IsFeatureEnabledUncached @ 0x140289AE4 (IsFeatureEnabledUncached.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ConfigureFeatureDefaults @ 0x140288E80 (ConfigureFeatureDefaults.c)
 */

__int64 __fastcall ConfigureFeature(__int64 a1, ULONG a2, __int64 a3)
{
  unsigned __int16 *v6; // rsi
  unsigned int v7; // ecx
  char v8; // al
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  char v12; // dl
  char v13; // al
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _UNICODE_STRING String; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+58h] [rbp-A8h]
  wchar_t *Buffer; // [rsp+60h] [rbp-A0h]
  __int128 v23; // [rsp+68h] [rbp-98h]
  __int128 v24; // [rsp+78h] [rbp-88h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  int v26; // [rsp+90h] [rbp-70h]
  const wchar_t *v27; // [rsp+98h] [rbp-68h]
  int *v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h]
  __int128 v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  const wchar_t *v33; // [rsp+D0h] [rbp-30h]
  unsigned int *v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+E0h] [rbp-20h]
  __int128 v36; // [rsp+E8h] [rbp-18h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  int v38; // [rsp+100h] [rbp+0h]
  const wchar_t *v39; // [rsp+108h] [rbp+8h]
  unsigned int *v40; // [rsp+110h] [rbp+10h]
  int v41; // [rsp+118h] [rbp+18h]
  __int128 v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+130h] [rbp+30h]
  int v44; // [rsp+138h] [rbp+38h]
  const wchar_t *v45; // [rsp+140h] [rbp+40h]
  int *v46; // [rsp+148h] [rbp+48h]
  int v47; // [rsp+150h] [rbp+50h]
  __int128 v48; // [rsp+158h] [rbp+58h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  int v50; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  __int128 v52; // [rsp+180h] [rbp+80h]
  __int128 v53; // [rsp+190h] [rbp+90h]
  char v54; // [rsp+1A0h] [rbp+A0h] BYREF

  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v6 = (unsigned __int16 *)(*(_QWORD *)(a1 + 8 * ((unsigned __int64)a2 >> 28) + 736) + 6LL * (a2 & 0xFFFFFFF));
  ConfigureFeatureDefaults(a1, a2, a3, v6);
  if ( *(_QWORD *)(a1 + 864) )
  {
    v7 = *((unsigned __int8 *)v6 + 4);
    v8 = *((_BYTE *)v6 + 4);
    *(_QWORD *)&String.Length = 0x200000LL;
    v18 = v8 & 1;
    v15 = *v6;
    v16 = v6[1];
    v17 = (v7 >> 1) & 1;
    String.Buffer = (wchar_t *)&v54;
    RtlIntegerToUnicodeString(a2, 0xAu, &String);
    Buffer = String.Buffer;
    v20 = 0LL;
    v29 = 67108868;
    v26 = 288;
    v27 = L"Enabled";
    v32 = 288;
    v28 = &v18;
    v33 = L"MinVersion";
    v34 = &v15;
    v39 = L"MaxVersion";
    v40 = &v16;
    v45 = L"AllowExperimental";
    v35 = 67108868;
    v38 = 288;
    v41 = 67108868;
    v44 = 288;
    v9 = *(_QWORD *)(a1 + 864);
    v47 = 67108868;
    v46 = &v17;
    v21 = 1;
    v23 = 0LL;
    v25 = 0LL;
    v24 = 0LL;
    v31 = 0LL;
    v30 = 0LL;
    v37 = 0LL;
    v36 = 0LL;
    v43 = 0LL;
    v42 = 0LL;
    v49 = 0LL;
    v48 = 0LL;
    v50 = 0;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    RtlQueryRegistryValuesEx(0x40000000LL, v9, &v20, 0LL, 0LL);
    v10 = v15;
    if ( v15 < *v6 )
      v10 = *v6;
    v11 = v16;
    if ( v16 > v6[1] )
      v11 = v6[1];
    if ( v11 < v10 )
    {
      LOWORD(v10) = *v6;
      LOWORD(v11) = v6[1];
    }
    v12 = v17;
    v6[1] = v11;
    v13 = v6[2] & 0xFC;
    *v6 = v10;
    *((_BYTE *)v6 + 4) = v18 & 1 | v13 | (2 * (v12 & 1));
  }
  return ExReleasePushLockExclusiveEx(a1, 0LL);
}
