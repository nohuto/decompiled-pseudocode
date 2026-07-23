/*
 * XREFs of McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer @ 0x14049890C
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x140AE8544 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        __int64 a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        char a10,
        const wchar_t *a11,
        char a12,
        const wchar_t *a13,
        const wchar_t *a14,
        char a15,
        char a16,
        const wchar_t *a17,
        const wchar_t *a18)
{
  __int64 v18; // rcx
  int v20; // edx
  __int64 v21; // rax
  int v22; // eax
  const wchar_t *v23; // rax
  __int64 v24; // r8
  int v25; // r8d
  const wchar_t *v26; // rax
  __int64 v27; // r8
  int v28; // r8d
  const wchar_t *v29; // rax
  __int64 v30; // r8
  int v31; // r8d
  const wchar_t *v32; // r8
  __int64 v33; // rax
  int v34; // eax
  const wchar_t *v35; // r8
  __int64 v36; // rax
  int v37; // eax
  const wchar_t *v38; // rax
  __int64 v39; // r8
  int v40; // r8d
  const wchar_t *v41; // r8
  __int64 v42; // rax
  int v43; // eax
  const wchar_t *v44; // rax
  __int64 v45; // r8
  int v46; // r8d
  const wchar_t *v47; // rax
  bool v48; // zf
  _BYTE v50[16]; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v51; // [rsp+40h] [rbp-C0h]
  int v52; // [rsp+48h] [rbp-B8h]
  int v53; // [rsp+4Ch] [rbp-B4h]
  const wchar_t *v54; // [rsp+50h] [rbp-B0h]
  int v55; // [rsp+58h] [rbp-A8h]
  int v56; // [rsp+5Ch] [rbp-A4h]
  __int64 v57; // [rsp+60h] [rbp-A0h]
  __int64 v58; // [rsp+68h] [rbp-98h]
  const wchar_t *v59; // [rsp+70h] [rbp-90h]
  int v60; // [rsp+78h] [rbp-88h]
  int v61; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v62; // [rsp+80h] [rbp-80h]
  int v63; // [rsp+88h] [rbp-78h]
  int v64; // [rsp+8Ch] [rbp-74h]
  const wchar_t *v65; // [rsp+90h] [rbp-70h]
  int v66; // [rsp+98h] [rbp-68h]
  int v67; // [rsp+9Ch] [rbp-64h]
  char *v68; // [rsp+A0h] [rbp-60h]
  __int64 v69; // [rsp+A8h] [rbp-58h]
  const wchar_t *v70; // [rsp+B0h] [rbp-50h]
  int v71; // [rsp+B8h] [rbp-48h]
  int v72; // [rsp+BCh] [rbp-44h]
  char *v73; // [rsp+C0h] [rbp-40h]
  __int64 v74; // [rsp+C8h] [rbp-38h]
  const wchar_t *v75; // [rsp+D0h] [rbp-30h]
  int v76; // [rsp+D8h] [rbp-28h]
  int v77; // [rsp+DCh] [rbp-24h]
  const wchar_t *v78; // [rsp+E0h] [rbp-20h]
  int v79; // [rsp+E8h] [rbp-18h]
  int v80; // [rsp+ECh] [rbp-14h]
  char *v81; // [rsp+F0h] [rbp-10h]
  __int64 v82; // [rsp+F8h] [rbp-8h]
  char *v83; // [rsp+100h] [rbp+0h]
  __int64 v84; // [rsp+108h] [rbp+8h]
  const wchar_t *v85; // [rsp+110h] [rbp+10h]
  int v86; // [rsp+118h] [rbp+18h]
  int v87; // [rsp+11Ch] [rbp+1Ch]
  const wchar_t *v88; // [rsp+120h] [rbp+20h]
  int v89; // [rsp+128h] [rbp+28h]
  int v90; // [rsp+12Ch] [rbp+2Ch]

  v18 = -1LL;
  v20 = 10;
  if ( a4 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a4[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v52 = v22;
  v23 = a5;
  if ( !a4 )
    a4 = L"NULL";
  v53 = 0;
  v51 = a4;
  if ( a5 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a5[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v55 = v25;
  v56 = 0;
  if ( !a5 )
    v23 = L"NULL";
  v58 = 16LL;
  v54 = v23;
  v57 = a6;
  v26 = a7;
  if ( a7 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a7[v27] );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v28 = 10;
  }
  v60 = v28;
  v61 = 0;
  if ( !a7 )
    v26 = L"NULL";
  v59 = v26;
  v29 = a8;
  if ( a8 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a8[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v31 = 10;
  }
  v63 = v31;
  v32 = a9;
  if ( !a8 )
    v29 = L"NULL";
  v64 = 0;
  v62 = v29;
  if ( a9 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a9[v33] );
    v34 = 2 * v33 + 2;
  }
  else
  {
    v34 = 10;
  }
  v66 = v34;
  v67 = 0;
  if ( !a9 )
    v32 = L"NULL";
  v68 = &a10;
  v65 = v32;
  v35 = a11;
  v69 = 4LL;
  if ( a11 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a11[v36] );
    v37 = 2 * v36 + 2;
  }
  else
  {
    v37 = 10;
  }
  v71 = v37;
  v72 = 0;
  if ( !a11 )
    v35 = L"NULL";
  v73 = &a12;
  v38 = a13;
  v70 = v35;
  v74 = 4LL;
  if ( a13 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a13[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    v40 = 10;
  }
  v76 = v40;
  v41 = a14;
  if ( !a13 )
    v38 = L"NULL";
  v77 = 0;
  v75 = v38;
  if ( a14 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( a14[v42] );
    v43 = 2 * v42 + 2;
  }
  else
  {
    v43 = 10;
  }
  v79 = v43;
  v80 = 0;
  v81 = &a15;
  if ( !a14 )
    v41 = L"NULL";
  v78 = v41;
  v83 = &a16;
  v44 = a17;
  v82 = 4LL;
  v84 = 4LL;
  if ( a17 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( a17[v45] );
    v46 = 2 * v45 + 2;
  }
  else
  {
    v46 = 10;
  }
  v86 = v46;
  v87 = 0;
  if ( !a17 )
    v44 = L"NULL";
  v85 = v44;
  v47 = a18;
  v48 = a18 == 0LL;
  if ( a18 )
  {
    do
      ++v18;
    while ( a18[v18] );
    v20 = 2 * v18 + 2;
    v48 = a18 == 0LL;
  }
  if ( v48 )
    v47 = L"NULL";
  v89 = v20;
  v88 = v47;
  v90 = 0;
  return McGenEventWrite_EtwWriteTransfer(&MS_KernelPnP_Provider_Context, a2, 0LL, 16LL, v50);
}
