/*
 * XREFs of ?ReadCommitLimitInformation@VIDMM_GLOBAL@@SAXXZ @ 0x14012122C
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x14011FA24 (-ReadConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

void VIDMM_GLOBAL::ReadCommitLimitInformation(void)
{
  int v0; // edx
  int v1; // ecx
  int v2; // eax
  int v3; // [rsp+30h] [rbp-D0h] BYREF
  int v4; // [rsp+34h] [rbp-CCh] BYREF
  int v5; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v6; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+44h] [rbp-BCh] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  int v10; // [rsp+4Ch] [rbp-B4h] BYREF
  int v11; // [rsp+50h] [rbp-B0h] BYREF
  int v12; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+68h] [rbp-98h]
  const wchar_t *v15; // [rsp+70h] [rbp-90h]
  int *v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+80h] [rbp-80h]
  int *v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  int v21; // [rsp+A0h] [rbp-60h]
  const wchar_t *v22; // [rsp+A8h] [rbp-58h]
  unsigned int *v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+B8h] [rbp-48h]
  int *v25; // [rsp+C0h] [rbp-40h]
  int v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  int v28; // [rsp+D8h] [rbp-28h]
  const wchar_t *v29; // [rsp+E0h] [rbp-20h]
  unsigned int *v30; // [rsp+E8h] [rbp-18h]
  int v31; // [rsp+F0h] [rbp-10h]
  int *v32; // [rsp+F8h] [rbp-8h]
  int v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  int v35; // [rsp+110h] [rbp+10h]
  const wchar_t *v36; // [rsp+118h] [rbp+18h]
  int *v37; // [rsp+120h] [rbp+20h]
  int v38; // [rsp+128h] [rbp+28h]
  int *v39; // [rsp+130h] [rbp+30h]
  int v40; // [rsp+138h] [rbp+38h]
  __int64 v41; // [rsp+140h] [rbp+40h]
  int v42; // [rsp+148h] [rbp+48h]
  const wchar_t *v43; // [rsp+150h] [rbp+50h]
  int *v44; // [rsp+158h] [rbp+58h]
  int v45; // [rsp+160h] [rbp+60h]
  int *v46; // [rsp+168h] [rbp+68h]
  int v47; // [rsp+170h] [rbp+70h]
  __int128 v48; // [rsp+178h] [rbp+78h]
  __int128 v49; // [rsp+188h] [rbp+88h]
  __int128 v50; // [rsp+198h] [rbp+98h]
  __int64 v51; // [rsp+1A8h] [rbp+A8h]

  v14 = 288;
  v17 = 67108868;
  v21 = 288;
  v24 = 67108868;
  v19 = 4;
  v9 = 50;
  v6 = 50;
  v10 = 80;
  v7 = 80;
  v15 = L"PinnedBackingStoreLimit";
  v16 = &v3;
  v18 = &v8;
  v22 = L"SystemPartitionCommitLimitPercentage";
  v23 = &v6;
  v25 = &v9;
  v29 = L"SecondaryPartitionCommitLimitPercentage";
  v30 = &v7;
  v32 = &v10;
  v36 = L"MinimumSystemMemoryCommitLimit";
  v37 = &v4;
  v39 = &v11;
  v43 = L"SmallSystemMemorySize";
  v44 = &v5;
  v46 = &v12;
  v26 = 4;
  v28 = 288;
  v31 = 67108868;
  v33 = 4;
  v35 = 288;
  v38 = 67108868;
  v40 = 4;
  v42 = 288;
  v45 = 67108868;
  v47 = 4;
  v51 = 0LL;
  v8 = 0;
  v3 = 0;
  v11 = 0;
  v4 = 0;
  v12 = 0;
  v5 = 0;
  qword_14008A330 = 0LL;
  v13 = 0LL;
  v20 = 0LL;
  v27 = 0LL;
  v34 = 0LL;
  v41 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", &v13, 0LL, 0LL);
  v0 = v4 << 20;
  qword_14008A330 = (unsigned int)(v3 << 20);
  if ( (unsigned int)(v4 << 20) <= 0x4000000 )
    v0 = 0x4000000;
  v1 = v6;
  if ( v6 >= 0x64 )
  {
    v1 = 100;
  }
  else if ( v6 <= 5 )
  {
    v1 = 5;
  }
  v2 = v7;
  if ( v7 >= 0x64 )
  {
    v2 = 100;
  }
  else if ( v7 <= 5 )
  {
    v2 = 5;
  }
  dword_14008A648 = v0;
  dword_14008A64C = v5 << 20;
  dword_14008A650 = v1;
  dword_14008A654 = v2;
  if ( !(v3 << 20) )
    qword_14008A330 = (unsigned __int64)qword_14008A318 >> 3;
}
