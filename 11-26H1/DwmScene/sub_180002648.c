/*
 * XREFs of sub_180002648 @ 0x180002648
 * Callers:
 *     sub_180023850 @ 0x180023850 (sub_180023850.c)
 * Callees:
 *     sub_18000155C @ 0x18000155C (sub_18000155C.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180002648(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 a9,
        __int64 a10,
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
        void **a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        void **a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34)
{
  __int64 v35; // rdx
  int v36; // r8d
  _BYTE *v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  _WORD *v40; // rcx
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
  __int64 v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+A8h] [rbp-58h]
  __int64 v60; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+B8h] [rbp-48h]
  __int64 v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+C8h] [rbp-38h]
  __int64 v64; // [rsp+D0h] [rbp-30h]
  __int64 v65; // [rsp+D8h] [rbp-28h]
  __int64 v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  __int64 v68; // [rsp+F0h] [rbp-10h]
  __int64 v69; // [rsp+F8h] [rbp-8h]
  __int64 v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+108h] [rbp+8h]
  __int64 v72; // [rsp+110h] [rbp+10h]
  __int64 v73; // [rsp+118h] [rbp+18h]
  __int64 v74; // [rsp+120h] [rbp+20h]
  __int64 v75; // [rsp+128h] [rbp+28h]
  __int64 v76; // [rsp+130h] [rbp+30h]
  __int64 v77; // [rsp+138h] [rbp+38h]
  __int64 v78; // [rsp+140h] [rbp+40h]
  __int64 v79; // [rsp+148h] [rbp+48h]
  __int64 v80; // [rsp+150h] [rbp+50h]
  __int64 v81; // [rsp+158h] [rbp+58h]
  _WORD *v82; // [rsp+160h] [rbp+60h]
  int v83; // [rsp+168h] [rbp+68h]
  int v84; // [rsp+16Ch] [rbp+6Ch]
  __int64 v85; // [rsp+170h] [rbp+70h]
  __int64 v86; // [rsp+178h] [rbp+78h]
  __int64 v87; // [rsp+180h] [rbp+80h]
  __int64 v88; // [rsp+188h] [rbp+88h]
  __int64 v89; // [rsp+190h] [rbp+90h]
  __int64 v90; // [rsp+198h] [rbp+98h]
  __int64 v91; // [rsp+1A0h] [rbp+A0h]
  __int64 v92; // [rsp+1A8h] [rbp+A8h]
  _BYTE *v93; // [rsp+1B0h] [rbp+B0h]
  int v94; // [rsp+1B8h] [rbp+B8h]
  int v95; // [rsp+1BCh] [rbp+BCh]
  __int64 v96; // [rsp+1C0h] [rbp+C0h]
  __int64 v97; // [rsp+1C8h] [rbp+C8h]
  __int64 v98; // [rsp+1D0h] [rbp+D0h]
  __int64 v99; // [rsp+1D8h] [rbp+D8h]
  __int64 v100; // [rsp+1E0h] [rbp+E0h]
  __int64 v101; // [rsp+1E8h] [rbp+E8h]
  __int64 v102; // [rsp+1F0h] [rbp+F0h]
  __int64 v103; // [rsp+1F8h] [rbp+F8h]
  __int64 v104; // [rsp+200h] [rbp+100h]
  __int64 v105; // [rsp+208h] [rbp+108h]
  __int64 v106; // [rsp+210h] [rbp+110h]
  __int64 v107; // [rsp+218h] [rbp+118h]
  __int64 v108; // [rsp+220h] [rbp+120h]
  __int64 v109; // [rsp+228h] [rbp+128h]

  v108 = a34;
  v35 = -1LL;
  v106 = a33;
  v36 = 1;
  v104 = a32;
  v102 = a31;
  v100 = a30;
  v98 = a29;
  v96 = a28;
  v109 = 4LL;
  v107 = 4LL;
  v105 = 4LL;
  v37 = *a27;
  v103 = 4LL;
  v101 = 4LL;
  v99 = 4LL;
  v97 = 4LL;
  if ( v37 )
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
  v94 = v39;
  v91 = a26;
  v89 = a25;
  v87 = a24;
  v85 = a23;
  v93 = v37;
  v95 = 0;
  v92 = 8LL;
  v40 = *a22;
  v90 = 4LL;
  v88 = 4LL;
  v86 = 8LL;
  if ( v40 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( v40[v41] );
    v42 = 2 * v41 + 2;
  }
  else
  {
    v40 = &unk_1800FAA68;
    v42 = 2;
  }
  v83 = v42;
  v80 = a21;
  v78 = a20;
  v76 = a19;
  v74 = a18;
  v72 = a17;
  v70 = a16;
  v68 = a15;
  v66 = a14;
  v64 = a13;
  v62 = a12;
  v60 = a11;
  v58 = a10;
  v56 = a9;
  v82 = v40;
  v84 = 0;
  v81 = 8LL;
  v54 = *a8;
  v79 = 8LL;
  v77 = 8LL;
  v43 = *a7;
  v50 = a6;
  v52 = v43;
  v75 = 8LL;
  v73 = 8LL;
  v44 = *a5;
  v71 = 8LL;
  v69 = 4LL;
  v67 = 4LL;
  v65 = 4LL;
  v63 = 4LL;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 4LL;
  v55 = 16LL;
  v53 = 16LL;
  v51 = 4LL;
  if ( v44 )
  {
    do
      ++v35;
    while ( v44[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v44 = &unk_1800F9DE0;
  }
  v47 = v44;
  v48 = v36;
  v49 = 0;
  return sub_18000155C((__int64)&dword_1801BD1C0, a2, 0LL, 0LL, 0x20u, &v46);
}
