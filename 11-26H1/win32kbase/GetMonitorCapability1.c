/*
 * XREFs of GetMonitorCapability1 @ 0x14002B614
 * Callers:
 *     GetMonitorCapability @ 0x140029B44 (GetMonitorCapability.c)
 * Callees:
 *     InsertModecapList @ 0x14002BB04 (InsertModecapList.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall GetMonitorCapability1(_BYTE *a1, __int64 a2, int *a3, char a4)
{
  __m128i si128; // xmm1
  __int64 v6; // r15
  __m128i v7; // xmm0
  int v8; // r12d
  unsigned int inserted; // r10d
  signed int v12; // edx
  unsigned __int8 v13; // al
  _DWORD *v14; // rdi
  int i; // ebx
  int v16; // eax
  unsigned __int8 *v17; // rbx
  int v18; // eax
  unsigned __int8 v19; // r8
  unsigned __int8 *v20; // rbx
  __int64 v21; // r15
  int v22; // edi
  unsigned __int8 v23; // al
  int v24; // ecx
  int v25; // edx
  unsigned int *v26; // rax
  unsigned int v27; // ecx
  unsigned __int8 v29; // al
  unsigned __int8 v30; // dl
  unsigned __int8 v31; // r9
  int v32; // r14d
  int v33; // r11d
  unsigned int v34; // eax
  unsigned __int8 *v35; // rdi
  __int64 v36; // r14
  int v37; // eax
  unsigned __int8 v38; // r8
  _DWORD v40[2]; // [rsp+28h] [rbp-D8h]
  __int128 v41; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C0h]
  __m128i v43; // [rsp+48h] [rbp-B8h]
  __m128i v44; // [rsp+58h] [rbp-A8h]
  int v45; // [rsp+70h] [rbp-90h]
  int v46; // [rsp+74h] [rbp-8Ch]
  int v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+7Ch] [rbp-84h] BYREF
  int v49; // [rsp+84h] [rbp-7Ch]
  int v50; // [rsp+88h] [rbp-78h]
  int v51; // [rsp+8Ch] [rbp-74h]
  int v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+94h] [rbp-6Ch]
  int v54; // [rsp+9Ch] [rbp-64h]
  int v55; // [rsp+A0h] [rbp-60h]
  int v56; // [rsp+A4h] [rbp-5Ch]
  int v57; // [rsp+A8h] [rbp-58h]
  __int64 v58; // [rsp+ACh] [rbp-54h]
  int v59; // [rsp+B4h] [rbp-4Ch]
  int v60; // [rsp+B8h] [rbp-48h]
  int v61; // [rsp+BCh] [rbp-44h]
  int v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+C4h] [rbp-3Ch]
  int v64; // [rsp+CCh] [rbp-34h]
  int v65; // [rsp+D0h] [rbp-30h]
  int v66; // [rsp+D4h] [rbp-2Ch]
  int v67; // [rsp+D8h] [rbp-28h]
  __int64 v68; // [rsp+DCh] [rbp-24h]
  int v69; // [rsp+E4h] [rbp-1Ch]
  int v70; // [rsp+E8h] [rbp-18h]
  int v71; // [rsp+ECh] [rbp-14h]
  int v72; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+F4h] [rbp-Ch]
  int v74; // [rsp+FCh] [rbp-4h]
  int v75; // [rsp+100h] [rbp+0h]
  int v76; // [rsp+104h] [rbp+4h]
  int v77; // [rsp+108h] [rbp+8h]
  __int64 v78; // [rsp+10Ch] [rbp+Ch]
  int v79; // [rsp+114h] [rbp+14h]
  int v80; // [rsp+118h] [rbp+18h]
  int v81; // [rsp+11Ch] [rbp+1Ch]
  int v82; // [rsp+120h] [rbp+20h]
  __int64 v83; // [rsp+124h] [rbp+24h]
  int v84; // [rsp+12Ch] [rbp+2Ch]
  int v85; // [rsp+130h] [rbp+30h]
  int v86; // [rsp+134h] [rbp+34h]
  int v87; // [rsp+138h] [rbp+38h]
  __int64 v88; // [rsp+13Ch] [rbp+3Ch]
  int v89; // [rsp+144h] [rbp+44h]
  int v90; // [rsp+148h] [rbp+48h]
  int v91; // [rsp+14Ch] [rbp+4Ch]
  int v92; // [rsp+150h] [rbp+50h]
  __int64 v93; // [rsp+154h] [rbp+54h]
  int v94; // [rsp+15Ch] [rbp+5Ch]
  int v95; // [rsp+160h] [rbp+60h]
  int v96; // [rsp+164h] [rbp+64h]
  int v97; // [rsp+168h] [rbp+68h]
  __int64 v98; // [rsp+16Ch] [rbp+6Ch]
  int v99; // [rsp+174h] [rbp+74h]
  int v100; // [rsp+178h] [rbp+78h]
  int v101; // [rsp+17Ch] [rbp+7Ch]
  int v102; // [rsp+180h] [rbp+80h]
  __int64 v103; // [rsp+184h] [rbp+84h]
  int v104; // [rsp+18Ch] [rbp+8Ch]
  int v105; // [rsp+190h] [rbp+90h]
  int v106; // [rsp+194h] [rbp+94h]
  int v107; // [rsp+198h] [rbp+98h]
  __int64 v108; // [rsp+19Ch] [rbp+9Ch]
  int v109; // [rsp+1A4h] [rbp+A4h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v40[0] = -256;
  v40[1] = 0xFFFFFF;
  a3[2] = 0;
  v42 = 0LL;
  v41 = 0LL;
  v6 = 8LL;
  v7 = _mm_load_si128((const __m128i *)&_xmm);
  a3[4] = 0;
  v8 = a4 == 0 ? 0x38 : 0;
  *a3 = v8;
  a3[1] = -1;
  a3[3] = -1;
  inserted = 0;
  a3[5] = -1;
  v12 = 0;
  v44 = si128;
  v43 = v7;
  while ( (unsigned int)v12 < 8 )
  {
    if ( a1[v12] != *((_BYTE *)v40 + v12) )
      return 0LL;
    ++v12;
  }
  v45 = 1280;
  v48 = 0LL;
  v51 = 768;
  v56 = 768;
  v61 = 768;
  v66 = 768;
  v46 = 1024;
  v50 = 1024;
  v55 = 1024;
  v60 = 1024;
  v65 = 1024;
  v49 = 0;
  v71 = 600;
  v76 = 600;
  v81 = 600;
  v86 = 600;
  v53 = 0LL;
  v54 = 0;
  v58 = 0LL;
  v59 = 0;
  v63 = 0LL;
  v64 = 0;
  v68 = 0LL;
  v69 = 0;
  v73 = 0LL;
  v74 = 0;
  v78 = 0LL;
  v79 = 0;
  v83 = 0LL;
  v84 = 0;
  v88 = 0LL;
  v89 = 0;
  v93 = 0LL;
  v94 = 0;
  v98 = 0LL;
  v99 = 0;
  v103 = 0LL;
  v104 = 0;
  v108 = 0LL;
  v109 = 0;
  v13 = a1[36];
  v70 = 800;
  v75 = 800;
  v80 = 800;
  v85 = 800;
  v47 = 75;
  v91 = 480;
  v96 = 480;
  v101 = 480;
  v106 = 480;
  v52 = 75;
  v57 = 70;
  v62 = 60;
  v67 = 87;
  v72 = 75;
  v77 = 72;
  v82 = 60;
  v87 = 56;
  v90 = 640;
  v92 = 75;
  v95 = 640;
  v97 = 72;
  v100 = 640;
  v102 = 67;
  v105 = 640;
  v107 = 60;
  a1[36] = v13 & 0x1F | (v13 >> 1) & 0x60;
  v14 = (_DWORD *)&v48 + 1;
  for ( i = 0; i < 13; ++i )
  {
    *(v14 - 1) = v8;
    *v14 = 0;
    v14[1] = -1;
    if ( ((a1[36 - i / 7u] >> (i % 7u)) & 1) != 0 )
      inserted = InsertModecapList(v14 - 4, a2, inserted);
    v14 += 6;
  }
  v16 = HIDWORD(v41);
  v17 = a1 + 38;
  LODWORD(v42) = 0;
  if ( !a4 )
    v16 = 56;
  HIDWORD(v42) = -1;
  HIDWORD(v41) = v16;
  do
  {
    v18 = *v17;
    if ( (unsigned __int8)v18 >= 2u )
    {
      v19 = v17[1];
      LODWORD(v41) = 8 * v18 + 248;
      DWORD2(v41) = (v19 & 0x3F) + 60;
      DWORD1(v41) = (unsigned int)(v43.m128i_i32[(unsigned __int64)v19 >> 6] * v41)
                  / v44.m128i_i32[(unsigned __int64)v19 >> 6];
      inserted = InsertModecapList(&v41, a2, inserted);
    }
    v17 += 2;
    --v6;
  }
  while ( v6 );
  v20 = a1 + 55;
  v21 = 4LL;
  do
  {
    v22 = *(v20 - 1);
    if ( *(_WORD *)(v20 - 1) && (v29 = v20[3]) != 0 )
    {
      v30 = v20[6];
      v31 = v20[3];
      v32 = v20[1] + 16 * (v29 & 0xF0);
      v33 = v20[4] + 16 * (v30 & 0xF0);
      *(_QWORD *)&v41 = __PAIR64__(v33, v32);
      if ( v32 && v33 )
      {
        v34 = 10000
            * (v22 + (*v20 << 8))
            / ((v32 + ((v29 & 0xF) << 8) + v20[2])
             * (v33 + ((v30 & 0xF) << 8) + (unsigned int)v20[5]));
        DWORD2(v41) = 10000
                    * (v22 + (*v20 << 8))
                    / ((v32 + ((v31 & 0xF) << 8) + v20[2])
                     * (v33 + ((v30 & 0xF) << 8) + (unsigned int)v20[5]));
        if ( (v20[16] & 0x80u) != 0 )
          DWORD2(v41) = v34 >> 1;
        inserted = InsertModecapList(&v41, a2, inserted);
      }
    }
    else
    {
      v23 = v20[2];
      if ( v23 == 0xFA )
      {
        v35 = v20 + 4;
        v36 = 6LL;
        do
        {
          v37 = *v35;
          if ( (unsigned __int8)v37 >= 2u )
          {
            v38 = v35[1];
            LODWORD(v41) = 8 * v37 + 248;
            DWORD2(v41) = (v38 & 0x3F) + 60;
            DWORD1(v41) = (unsigned int)(v43.m128i_i32[(unsigned __int64)v38 >> 6] * v41)
                        / v44.m128i_i32[(unsigned __int64)v38 >> 6];
            inserted = InsertModecapList(&v41, a2, inserted);
          }
          v35 += 2;
          --v36;
        }
        while ( v36 );
      }
      else if ( v23 == 0xFD )
      {
        *a3 = v20[4];
        a3[1] = v20[5];
        a3[2] = 1000 * v20[6];
        v24 = 1000 * v20[7];
        a3[4] = 0;
        a3[3] = v24;
        a3[5] = 10000000 * v20[8];
      }
    }
    v20 += 18;
    --v21;
  }
  while ( v21 );
  v25 = inserted - 2;
  if ( (int)(inserted - 2) >= 0 )
  {
    v26 = (unsigned int *)(a2 + 8 + 24LL * v25);
    do
    {
      v27 = v26[6];
      if ( *v26 < v27 )
        *v26 = v27;
      v26 -= 6;
      --v25;
    }
    while ( v25 >= 0 );
  }
  return inserted;
}
