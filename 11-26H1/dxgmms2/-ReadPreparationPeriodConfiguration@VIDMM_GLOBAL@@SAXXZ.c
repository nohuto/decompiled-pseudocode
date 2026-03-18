/*
 * XREFs of ?ReadPreparationPeriodConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x14011ECE0
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x14011FA24 (-ReadConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

void VIDMM_GLOBAL::ReadPreparationPeriodConfiguration(void)
{
  unsigned int v0; // [rsp+30h] [rbp-D0h] BYREF
  int v1; // [rsp+34h] [rbp-CCh] BYREF
  int v2; // [rsp+38h] [rbp-C8h] BYREF
  int v3; // [rsp+3Ch] [rbp-C4h] BYREF
  int v4; // [rsp+40h] [rbp-C0h] BYREF
  int v5; // [rsp+44h] [rbp-BCh] BYREF
  int v6; // [rsp+48h] [rbp-B8h] BYREF
  int v7; // [rsp+4Ch] [rbp-B4h] BYREF
  int v8; // [rsp+50h] [rbp-B0h] BYREF
  int v9; // [rsp+54h] [rbp-ACh] BYREF
  int v10; // [rsp+58h] [rbp-A8h] BYREF
  int v11; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v12; // [rsp+60h] [rbp-A0h] BYREF
  int v13; // [rsp+68h] [rbp-98h]
  const wchar_t *v14; // [rsp+70h] [rbp-90h]
  unsigned int *v15; // [rsp+78h] [rbp-88h]
  int v16; // [rsp+80h] [rbp-80h]
  int *v17; // [rsp+88h] [rbp-78h]
  int v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  int v20; // [rsp+A0h] [rbp-60h]
  const wchar_t *v21; // [rsp+A8h] [rbp-58h]
  int *v22; // [rsp+B0h] [rbp-50h]
  int v23; // [rsp+B8h] [rbp-48h]
  int *v24; // [rsp+C0h] [rbp-40h]
  int v25; // [rsp+C8h] [rbp-38h]
  __int64 v26; // [rsp+D0h] [rbp-30h]
  int v27; // [rsp+D8h] [rbp-28h]
  const wchar_t *v28; // [rsp+E0h] [rbp-20h]
  int *v29; // [rsp+E8h] [rbp-18h]
  int v30; // [rsp+F0h] [rbp-10h]
  int *v31; // [rsp+F8h] [rbp-8h]
  int v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  int v34; // [rsp+110h] [rbp+10h]
  const wchar_t *v35; // [rsp+118h] [rbp+18h]
  int *v36; // [rsp+120h] [rbp+20h]
  int v37; // [rsp+128h] [rbp+28h]
  int *v38; // [rsp+130h] [rbp+30h]
  int v39; // [rsp+138h] [rbp+38h]
  __int64 v40; // [rsp+140h] [rbp+40h]
  int v41; // [rsp+148h] [rbp+48h]
  const wchar_t *v42; // [rsp+150h] [rbp+50h]
  int *v43; // [rsp+158h] [rbp+58h]
  int v44; // [rsp+160h] [rbp+60h]
  int *v45; // [rsp+168h] [rbp+68h]
  int v46; // [rsp+170h] [rbp+70h]
  __int64 v47; // [rsp+178h] [rbp+78h]
  int v48; // [rsp+180h] [rbp+80h]
  const wchar_t *v49; // [rsp+188h] [rbp+88h]
  int *v50; // [rsp+190h] [rbp+90h]
  int v51; // [rsp+198h] [rbp+98h]
  int *v52; // [rsp+1A0h] [rbp+A0h]
  int v53; // [rsp+1A8h] [rbp+A8h]
  __int128 v54; // [rsp+1B0h] [rbp+B0h]
  __int128 v55; // [rsp+1C0h] [rbp+C0h]
  __int128 v56; // [rsp+1D0h] [rbp+D0h]
  __int64 v57; // [rsp+1E0h] [rbp+E0h]

  v6 = 1;
  v0 = 1;
  v3 = 1;
  v9 = 1;
  v1 = 4;
  v2 = 64;
  v8 = 64;
  v4 = 32;
  v10 = 32;
  v5 = 0x7FFFFFFF;
  v11 = 0x7FFFFFFF;
  v14 = L"PreparationPeriod";
  v15 = &v0;
  v17 = &v6;
  v21 = L"Period.MinimumPolicyHeldPeriod";
  v22 = &v7;
  v24 = &v1;
  v28 = L"Period.MaximumPolicyHeldPeriod";
  v29 = &v8;
  v31 = &v2;
  v35 = L"Period.AlwaysForceMemReset";
  v36 = &v9;
  v38 = &v3;
  v42 = L"Period.EvictionThresholdForMemReset";
  v43 = &v10;
  v45 = &v4;
  v49 = L"Period.NbOfAllocationsThresholdToMRU";
  v50 = &v11;
  v52 = &v5;
  v7 = 4;
  v12 = 0LL;
  v13 = 288;
  v16 = 67108868;
  v18 = 4;
  v19 = 0LL;
  v20 = 288;
  v23 = 67108868;
  v25 = 4;
  v26 = 0LL;
  v27 = 288;
  v30 = 67108868;
  v32 = 4;
  v33 = 0LL;
  v34 = 288;
  v37 = 67108868;
  v39 = 4;
  v40 = 0LL;
  v41 = 288;
  v44 = 67108868;
  v46 = 4;
  v47 = 0LL;
  v48 = 288;
  v51 = 67108868;
  v53 = 4;
  v57 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", &v12, 0LL, 0LL);
  dword_14008A3D0 = v1;
  dword_14008A3D4 = v2;
  dword_14008A3D8 = v3;
  dword_14008A3DC = v4 << 20;
  qword_14008A3C8 = 10000000LL * v0;
  dword_14008A3E0 = v5;
}
