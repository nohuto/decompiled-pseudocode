/*
 * XREFs of sub_180002C84 @ 0x180002C84
 * Callers:
 *     sub_180022770 @ 0x180022770 (sub_180022770.c)
 * Callees:
 *     sub_18000155C @ 0x18000155C (sub_18000155C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180002C84(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9,
        void **a10,
        void **a11,
        __int64 a12,
        void **a13,
        void **a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        void **a25)
{
  __int64 v26; // rdx
  int v27; // r8d
  _BYTE *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  _BYTE *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  _BYTE *v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  _BYTE *v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  _BYTE *v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rcx
  _BYTE *v44; // rcx
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v47; // [rsp+50h] [rbp-B0h]
  int v48; // [rsp+58h] [rbp-A8h]
  int v49; // [rsp+5Ch] [rbp-A4h]
  __int64 v50; // [rsp+60h] [rbp-A0h]
  __int64 v51; // [rsp+68h] [rbp-98h]
  __int64 v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h]
  __int64 v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h]
  __int64 v56; // [rsp+90h] [rbp-70h]
  __int64 v57; // [rsp+98h] [rbp-68h]
  _BYTE *v58; // [rsp+A0h] [rbp-60h]
  int v59; // [rsp+A8h] [rbp-58h]
  int v60; // [rsp+ACh] [rbp-54h]
  _BYTE *v61; // [rsp+B0h] [rbp-50h]
  int v62; // [rsp+B8h] [rbp-48h]
  int v63; // [rsp+BCh] [rbp-44h]
  __int64 v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  _BYTE *v66; // [rsp+D0h] [rbp-30h]
  int v67; // [rsp+D8h] [rbp-28h]
  int v68; // [rsp+DCh] [rbp-24h]
  _BYTE *v69; // [rsp+E0h] [rbp-20h]
  int v70; // [rsp+E8h] [rbp-18h]
  int v71; // [rsp+ECh] [rbp-14h]
  __int64 v72; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+F8h] [rbp-8h]
  __int64 v74; // [rsp+100h] [rbp+0h]
  __int64 v75; // [rsp+108h] [rbp+8h]
  __int64 v76; // [rsp+110h] [rbp+10h]
  __int64 v77; // [rsp+118h] [rbp+18h]
  __int64 v78; // [rsp+120h] [rbp+20h]
  __int64 v79; // [rsp+128h] [rbp+28h]
  __int64 v80; // [rsp+130h] [rbp+30h]
  __int64 v81; // [rsp+138h] [rbp+38h]
  __int64 v82; // [rsp+140h] [rbp+40h]
  __int64 v83; // [rsp+148h] [rbp+48h]
  __int64 v84; // [rsp+150h] [rbp+50h]
  __int64 v85; // [rsp+158h] [rbp+58h]
  __int64 v86; // [rsp+160h] [rbp+60h]
  __int64 v87; // [rsp+168h] [rbp+68h]
  __int64 v88; // [rsp+170h] [rbp+70h]
  __int64 v89; // [rsp+178h] [rbp+78h]
  __int64 v90; // [rsp+180h] [rbp+80h]
  __int64 v91; // [rsp+188h] [rbp+88h]
  _BYTE *v92; // [rsp+190h] [rbp+90h]
  int v93; // [rsp+198h] [rbp+98h]
  int v94; // [rsp+19Ch] [rbp+9Ch]

  v26 = -1LL;
  v27 = 1;
  v28 = *a25;
  if ( *a25 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v28 = &unk_1800F9DE0;
    v30 = 1;
  }
  v93 = v30;
  v90 = a24;
  v88 = a23;
  v86 = a22;
  v84 = a21;
  v82 = a20;
  v80 = a19;
  v78 = a18;
  v76 = a17;
  v74 = a16;
  v72 = a15;
  v92 = v28;
  v94 = 0;
  v91 = 4LL;
  v31 = *a14;
  v89 = 4LL;
  v87 = 4LL;
  v85 = 4LL;
  v83 = 8LL;
  v81 = 8LL;
  v79 = 8LL;
  v77 = 8LL;
  v75 = 8LL;
  v73 = 8LL;
  if ( v31 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( v31[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v31 = &unk_1800F9DE0;
    v33 = 1;
  }
  v70 = v33;
  v69 = v31;
  v71 = 0;
  v34 = *a13;
  if ( *a13 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( v34[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v34 = &unk_1800F9DE0;
    v36 = 1;
  }
  v67 = v36;
  v64 = a12;
  v66 = v34;
  v68 = 0;
  v65 = 4LL;
  v37 = *a11;
  if ( *a11 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( v37[v38] );
    v39 = v38 + 1;
  }
  else
  {
    v37 = &unk_1800F9DE0;
    v39 = 1;
  }
  v62 = v39;
  v61 = v37;
  v63 = 0;
  v40 = *a10;
  if ( *a10 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( v40[v41] );
    v42 = v41 + 1;
  }
  else
  {
    v40 = &unk_1800F9DE0;
    v42 = 1;
  }
  v59 = v42;
  v58 = v40;
  v60 = 0;
  v57 = 16LL;
  v56 = *a9;
  v55 = 16LL;
  v53 = 16LL;
  v54 = *a8;
  v51 = 4LL;
  v43 = *a7;
  v50 = a6;
  v52 = v43;
  v44 = *a5;
  if ( *a5 )
  {
    do
      ++v26;
    while ( v44[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v44 = &unk_1800F9DE0;
  }
  v47 = v44;
  v48 = v27;
  v49 = 0;
  return sub_18000155C((__int64)&dword_1801BD1C0, a2, 0LL, 0LL, 0x17u, &v46);
}
