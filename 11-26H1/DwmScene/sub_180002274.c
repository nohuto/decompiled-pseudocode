/*
 * XREFs of sub_180002274 @ 0x180002274
 * Callers:
 *     sub_180023490 @ 0x180023490 (sub_180023490.c)
 * Callees:
 *     sub_18000155C @ 0x18000155C (sub_18000155C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180002274(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        void **a9,
        void **a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
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
        __int64 a25)
{
  __int64 v26; // rdx
  int v27; // r8d
  _BYTE *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  _BYTE *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  _BYTE *v35; // rcx
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v38; // [rsp+50h] [rbp-B0h]
  int v39; // [rsp+58h] [rbp-A8h]
  int v40; // [rsp+5Ch] [rbp-A4h]
  __int64 v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+68h] [rbp-98h]
  __int64 v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h]
  __int64 v45; // [rsp+80h] [rbp-80h]
  __int64 v46; // [rsp+88h] [rbp-78h]
  _BYTE *v47; // [rsp+90h] [rbp-70h]
  int v48; // [rsp+98h] [rbp-68h]
  int v49; // [rsp+9Ch] [rbp-64h]
  _BYTE *v50; // [rsp+A0h] [rbp-60h]
  int v51; // [rsp+A8h] [rbp-58h]
  int v52; // [rsp+ACh] [rbp-54h]
  __int64 v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  __int64 v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  __int64 v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  __int64 v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  __int64 v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  __int64 v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  __int64 v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  __int64 v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  __int64 v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  __int64 v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  __int64 v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  __int64 v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  __int64 v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]
  __int64 v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  __int64 v81; // [rsp+190h] [rbp+90h]
  __int64 v82; // [rsp+198h] [rbp+98h]

  v81 = a25;
  v26 = -1LL;
  v79 = a24;
  v27 = 1;
  v77 = a23;
  v75 = a22;
  v73 = a21;
  v71 = a20;
  v69 = a19;
  v67 = a18;
  v65 = a17;
  v63 = a16;
  v61 = a15;
  v59 = a14;
  v57 = a13;
  v55 = a12;
  v53 = a11;
  v82 = 4LL;
  v80 = 4LL;
  v78 = 4LL;
  v28 = *a10;
  v76 = 4LL;
  v74 = 8LL;
  v72 = 8LL;
  v70 = 8LL;
  v68 = 8LL;
  v66 = 8LL;
  v64 = 8LL;
  v62 = 4LL;
  v60 = 4LL;
  v58 = 4LL;
  v56 = 4LL;
  v54 = 8LL;
  if ( v28 )
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
  v51 = v30;
  v50 = v28;
  v52 = 0;
  v31 = *a9;
  if ( *a9 )
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
  v48 = v33;
  v47 = v31;
  v49 = 0;
  v46 = 16LL;
  v45 = *a8;
  v44 = 16LL;
  v42 = 4LL;
  v34 = *a7;
  v41 = a6;
  v43 = v34;
  v35 = *a5;
  if ( *a5 )
  {
    do
      ++v26;
    while ( v35[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v35 = &unk_1800F9DE0;
  }
  v38 = v35;
  v39 = v27;
  v40 = 0;
  return sub_18000155C((__int64)&dword_1801BD1C0, a2, 0LL, 0LL, 0x17u, &v37);
}
