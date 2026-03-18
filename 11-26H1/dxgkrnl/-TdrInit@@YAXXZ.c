/*
 * XREFs of ?TdrInit@@YAXXZ @ 0x1401D9344
 * Callers:
 *     DriverEntry @ 0x14044C078 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?TdrHistoryInit@@YAXPEAU_TDR_HISTORY@@@Z @ 0x1403D06A0 (-TdrHistoryInit@@YAXPEAU_TDR_HISTORY@@@Z.c)
 */

void TdrInit(void)
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v8; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v9; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v10; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v11; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v12; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v13; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v14; // [rsp+54h] [rbp-B4h] BYREF
  int v15; // [rsp+58h] [rbp-B0h] BYREF
  int v16; // [rsp+5Ch] [rbp-ACh] BYREF
  int v17; // [rsp+60h] [rbp-A8h] BYREF
  int v18; // [rsp+64h] [rbp-A4h] BYREF
  int v19; // [rsp+68h] [rbp-A0h] BYREF
  int v20; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v21; // [rsp+70h] [rbp-98h] BYREF
  __int64 v22; // [rsp+78h] [rbp-90h] BYREF
  int v23; // [rsp+80h] [rbp-88h]
  const wchar_t *v24; // [rsp+88h] [rbp-80h]
  unsigned int *v25; // [rsp+90h] [rbp-78h]
  int v26; // [rsp+98h] [rbp-70h]
  int *v27; // [rsp+A0h] [rbp-68h]
  int v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  int v30; // [rsp+B8h] [rbp-50h]
  const wchar_t *v31; // [rsp+C0h] [rbp-48h]
  unsigned int *v32; // [rsp+C8h] [rbp-40h]
  int v33; // [rsp+D0h] [rbp-38h]
  int *v34; // [rsp+D8h] [rbp-30h]
  int v35; // [rsp+E0h] [rbp-28h]
  __int64 v36; // [rsp+E8h] [rbp-20h]
  int v37; // [rsp+F0h] [rbp-18h]
  const wchar_t *v38; // [rsp+F8h] [rbp-10h]
  unsigned int *v39; // [rsp+100h] [rbp-8h]
  int v40; // [rsp+108h] [rbp+0h]
  int *v41; // [rsp+110h] [rbp+8h]
  int v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  int v44; // [rsp+128h] [rbp+20h]
  const wchar_t *v45; // [rsp+130h] [rbp+28h]
  unsigned int *v46; // [rsp+138h] [rbp+30h]
  int v47; // [rsp+140h] [rbp+38h]
  int *v48; // [rsp+148h] [rbp+40h]
  int v49; // [rsp+150h] [rbp+48h]
  __int64 v50; // [rsp+158h] [rbp+50h]
  int v51; // [rsp+160h] [rbp+58h]
  const wchar_t *v52; // [rsp+168h] [rbp+60h]
  unsigned int *v53; // [rsp+170h] [rbp+68h]
  int v54; // [rsp+178h] [rbp+70h]
  int *v55; // [rsp+180h] [rbp+78h]
  int v56; // [rsp+188h] [rbp+80h]
  __int64 v57; // [rsp+190h] [rbp+88h]
  int v58; // [rsp+198h] [rbp+90h]
  const wchar_t *v59; // [rsp+1A0h] [rbp+98h]
  unsigned int *v60; // [rsp+1A8h] [rbp+A0h]
  int v61; // [rsp+1B0h] [rbp+A8h]
  int *v62; // [rsp+1B8h] [rbp+B0h]
  int v63; // [rsp+1C0h] [rbp+B8h]
  __int64 v64; // [rsp+1C8h] [rbp+C0h]
  int v65; // [rsp+1D0h] [rbp+C8h]
  const wchar_t *v66; // [rsp+1D8h] [rbp+D0h]
  unsigned int *v67; // [rsp+1E0h] [rbp+D8h]
  int v68; // [rsp+1E8h] [rbp+E0h]
  __int64 *v69; // [rsp+1F0h] [rbp+E8h]
  int v70; // [rsp+1F8h] [rbp+F0h]
  __int64 v71; // [rsp+200h] [rbp+F8h]
  int v72; // [rsp+208h] [rbp+100h]
  const wchar_t *v73; // [rsp+210h] [rbp+108h]
  unsigned int *v74; // [rsp+218h] [rbp+110h]
  int v75; // [rsp+220h] [rbp+118h]
  char *v76; // [rsp+228h] [rbp+120h]
  int v77; // [rsp+230h] [rbp+128h]
  __int64 v78; // [rsp+238h] [rbp+130h]
  int v79; // [rsp+240h] [rbp+138h]
  __int64 v80; // [rsp+248h] [rbp+140h]
  __int128 v81; // [rsp+250h] [rbp+148h]
  __int128 v82; // [rsp+260h] [rbp+158h]

  v21 = 0x20000003CLL;
  v12 = 0;
  v7 = 0;
  v8 = 0;
  v15 = 3;
  v24 = L"TdrLevel";
  v25 = &v12;
  v27 = &v15;
  v9 = 0;
  v16 = 2;
  v31 = L"TdrDelay";
  v17 = 2;
  v32 = &v7;
  v34 = &v16;
  v38 = L"TdrDodPresentDelay";
  v39 = &v8;
  v41 = &v17;
  v45 = L"TdrDodVSyncDelay";
  v46 = &v9;
  v48 = &v18;
  v52 = L"TdrDdiDelay";
  v53 = &v10;
  v55 = &v19;
  v59 = L"TdrLimitCount";
  v60 = &v13;
  v18 = 2;
  v19 = 5;
  v10 = 0;
  v11 = 0;
  v20 = 5;
  v13 = 0;
  v14 = 0;
  v22 = 0LL;
  v23 = 288;
  v26 = 67108868;
  v28 = 4;
  v29 = 0LL;
  v30 = 288;
  v33 = 67108868;
  v35 = 4;
  v36 = 0LL;
  v37 = 288;
  v40 = 67108868;
  v42 = 4;
  v43 = 0LL;
  v44 = 288;
  v47 = 67108868;
  v49 = 4;
  v50 = 0LL;
  v51 = 288;
  v54 = 67108868;
  v56 = 4;
  v57 = 0LL;
  v58 = 288;
  v61 = 67108868;
  v62 = &v20;
  v63 = 4;
  v66 = L"TdrLimitTime";
  v65 = 288;
  v67 = &v14;
  v69 = &v21;
  v73 = L"TdrDebugMode";
  v74 = &v11;
  v68 = 67108868;
  v70 = 4;
  v72 = 288;
  v75 = 67108868;
  v77 = 4;
  v76 = (char *)&v21 + 4;
  v64 = 0LL;
  v71 = 0LL;
  v78 = 0LL;
  v79 = 0;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
              &v22,
              0LL,
              0LL) < 0 )
  {
    v12 = 3;
    v7 = 2;
    v8 = 2;
    v9 = 2;
    v10 = 5;
    v11 = 2;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2236;
  }
  if ( v12 < 2 || v12 == 3 )
  {
    g_TdrConfig = v12;
  }
  else
  {
    g_TdrConfig = 3;
    WdLogSingleEntry2(3LL, v12, 3LL);
    WdLogGlobalForLineNumber = 2263;
  }
  v0 = v7;
  if ( v7 )
  {
    if ( v7 > 0x384 )
      v0 = 900;
    dword_140168AC4 = v0;
  }
  else
  {
    dword_140168AC4 = 1;
  }
  if ( dword_140168AC4 != v7 )
  {
    WdLogSingleEntry2(3LL, v7, (unsigned int)dword_140168AC4);
    WdLogGlobalForLineNumber = 2287;
  }
  v1 = v8;
  if ( v8 )
  {
    if ( v8 > 0x384 )
      v1 = 900;
    dword_140168AC8 = v1;
  }
  else
  {
    dword_140168AC8 = 1;
  }
  if ( dword_140168AC8 != v8 )
  {
    WdLogSingleEntry2(3LL, v8, (unsigned int)dword_140168AC8);
    WdLogGlobalForLineNumber = 2312;
  }
  v2 = v9;
  if ( v9 )
  {
    if ( v9 > 0x384 )
      v2 = 900;
    dword_140168ACC = v2;
  }
  else
  {
    dword_140168ACC = 1;
  }
  if ( dword_140168ACC != v9 )
  {
    WdLogSingleEntry2(3LL, v9, (unsigned int)dword_140168ACC);
    WdLogGlobalForLineNumber = 2337;
  }
  v3 = v10;
  if ( v10 )
  {
    if ( v10 > 0x384 )
      v3 = 900;
    dword_140168AD0 = v3;
  }
  else
  {
    dword_140168AD0 = 1;
  }
  if ( dword_140168AD0 != v10 )
  {
    WdLogSingleEntry2(3LL, v10, (unsigned int)dword_140168AD0);
    WdLogGlobalForLineNumber = 2362;
  }
  v4 = v13;
  if ( v13 <= 0x20 )
  {
    if ( !v13 )
      v4 = 1;
    dword_140168AD8 = v4;
  }
  else
  {
    dword_140168AD8 = 32;
  }
  if ( dword_140168AD8 != v13 )
  {
    WdLogSingleEntry2(3LL, v13, (unsigned int)dword_140168AD8);
    WdLogGlobalForLineNumber = 2387;
  }
  v5 = v14;
  v6 = 3600LL;
  if ( v14 <= 0xE10 )
  {
    if ( v14 < 5 )
      v5 = 5;
    dword_140168ADC = v5;
  }
  else
  {
    dword_140168ADC = 3600;
  }
  if ( dword_140168ADC != v14 )
  {
    WdLogSingleEntry2(3LL, v14, (unsigned int)dword_140168ADC);
    WdLogGlobalForLineNumber = 2412;
  }
  LOBYTE(v6) = 1;
  byte_140168AD4 = (unsigned __int8)WdIsDebuggerPresent(v6) != 0;
  if ( v11 < 2 || v11 - 2 < 2 )
    g_TdrDebugMode = v11;
  else
    g_TdrDebugMode = 2;
  if ( g_TdrDebugMode != v11 )
  {
    WdLogSingleEntry2(3LL, v11, g_TdrDebugMode);
    WdLogGlobalForLineNumber = 2443;
  }
  TdrHistoryInit(&g_TdrHistory);
}
