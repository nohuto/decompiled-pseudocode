/*
 * XREFs of GetMonitorCapability1 @ 0x14008178C
 * Callers:
 *     GetMonitorCapability @ 0x140081188 (GetMonitorCapability.c)
 * Callees:
 *     InsertModecapList @ 0x140081C80 (InsertModecapList.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall GetMonitorCapability1(_BYTE *a1, __int64 a2, int *a3, char a4)
{
  __m128i si128; // xmm1
  __int64 v6; // r15
  __m128i v7; // xmm0
  int v8; // r12d
  unsigned int inserted; // r10d
  int v12; // edx
  unsigned __int8 v13; // al
  _DWORD *v14; // rsi
  int i; // ebx
  unsigned __int8 *v16; // rbx
  int v17; // eax
  int v18; // eax
  unsigned __int8 v19; // r8
  unsigned __int8 *v20; // rbx
  __int64 v21; // r15
  int v22; // esi
  unsigned __int8 v23; // al
  int v24; // ecx
  int v25; // edx
  unsigned int *v26; // rax
  unsigned int v27; // ecx
  unsigned __int8 v29; // al
  unsigned __int8 v30; // r9
  unsigned __int8 v31; // dl
  int v32; // r14d
  int v33; // r11d
  unsigned int v34; // eax
  unsigned __int8 *v35; // rsi
  __int64 v36; // r14
  int v37; // eax
  unsigned __int8 v38; // r8
  __int128 v40; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-C8h]
  int v42; // [rsp+40h] [rbp-C0h]
  int v43; // [rsp+44h] [rbp-BCh]
  int v44; // [rsp+48h] [rbp-B8h]
  __int64 v45; // [rsp+4Ch] [rbp-B4h] BYREF
  int v46; // [rsp+54h] [rbp-ACh]
  int v47; // [rsp+58h] [rbp-A8h]
  int v48; // [rsp+5Ch] [rbp-A4h]
  int v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+64h] [rbp-9Ch]
  int v51; // [rsp+6Ch] [rbp-94h]
  int v52; // [rsp+70h] [rbp-90h]
  int v53; // [rsp+74h] [rbp-8Ch]
  int v54; // [rsp+78h] [rbp-88h]
  __int64 v55; // [rsp+7Ch] [rbp-84h]
  int v56; // [rsp+84h] [rbp-7Ch]
  int v57; // [rsp+88h] [rbp-78h]
  int v58; // [rsp+8Ch] [rbp-74h]
  int v59; // [rsp+90h] [rbp-70h]
  __int64 v60; // [rsp+94h] [rbp-6Ch]
  int v61; // [rsp+9Ch] [rbp-64h]
  int v62; // [rsp+A0h] [rbp-60h]
  int v63; // [rsp+A4h] [rbp-5Ch]
  int v64; // [rsp+A8h] [rbp-58h]
  __int64 v65; // [rsp+ACh] [rbp-54h]
  int v66; // [rsp+B4h] [rbp-4Ch]
  int v67; // [rsp+B8h] [rbp-48h]
  int v68; // [rsp+BCh] [rbp-44h]
  int v69; // [rsp+C0h] [rbp-40h]
  __int64 v70; // [rsp+C4h] [rbp-3Ch]
  int v71; // [rsp+CCh] [rbp-34h]
  int v72; // [rsp+D0h] [rbp-30h]
  int v73; // [rsp+D4h] [rbp-2Ch]
  int v74; // [rsp+D8h] [rbp-28h]
  __int64 v75; // [rsp+DCh] [rbp-24h]
  int v76; // [rsp+E4h] [rbp-1Ch]
  int v77; // [rsp+E8h] [rbp-18h]
  int v78; // [rsp+ECh] [rbp-14h]
  int v79; // [rsp+F0h] [rbp-10h]
  __int64 v80; // [rsp+F4h] [rbp-Ch]
  int v81; // [rsp+FCh] [rbp-4h]
  int v82; // [rsp+100h] [rbp+0h]
  int v83; // [rsp+104h] [rbp+4h]
  int v84; // [rsp+108h] [rbp+8h]
  __int64 v85; // [rsp+10Ch] [rbp+Ch]
  int v86; // [rsp+114h] [rbp+14h]
  int v87; // [rsp+118h] [rbp+18h]
  int v88; // [rsp+11Ch] [rbp+1Ch]
  int v89; // [rsp+120h] [rbp+20h]
  __int64 v90; // [rsp+124h] [rbp+24h]
  int v91; // [rsp+12Ch] [rbp+2Ch]
  int v92; // [rsp+130h] [rbp+30h]
  int v93; // [rsp+134h] [rbp+34h]
  int v94; // [rsp+138h] [rbp+38h]
  __int64 v95; // [rsp+13Ch] [rbp+3Ch]
  int v96; // [rsp+144h] [rbp+44h]
  int v97; // [rsp+148h] [rbp+48h]
  int v98; // [rsp+14Ch] [rbp+4Ch]
  int v99; // [rsp+150h] [rbp+50h]
  __int64 v100; // [rsp+154h] [rbp+54h]
  int v101; // [rsp+15Ch] [rbp+5Ch]
  int v102; // [rsp+160h] [rbp+60h]
  int v103; // [rsp+164h] [rbp+64h]
  int v104; // [rsp+168h] [rbp+68h]
  __int64 v105; // [rsp+16Ch] [rbp+6Ch]
  int v106; // [rsp+174h] [rbp+74h]
  __m128i v107; // [rsp+180h] [rbp+80h]
  __m128i v108; // [rsp+190h] [rbp+90h]
  _DWORD v109[2]; // [rsp+1A0h] [rbp+A0h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v109[0] = -256;
  v109[1] = 0xFFFFFF;
  a3[2] = 0;
  v41 = 0LL;
  v40 = 0LL;
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
  v108 = si128;
  v107 = v7;
  while ( (unsigned __int64)v12 < 8 )
  {
    if ( a1[v12] != *((_BYTE *)v109 + v12) )
      return 0LL;
    ++v12;
  }
  v42 = 1280;
  v45 = 0LL;
  v48 = 768;
  v53 = 768;
  v58 = 768;
  v63 = 768;
  v43 = 1024;
  v47 = 1024;
  v52 = 1024;
  v57 = 1024;
  v62 = 1024;
  v46 = 0;
  v68 = 600;
  v73 = 600;
  v78 = 600;
  v83 = 600;
  v50 = 0LL;
  v51 = 0;
  v55 = 0LL;
  v56 = 0;
  v60 = 0LL;
  v61 = 0;
  v65 = 0LL;
  v66 = 0;
  v70 = 0LL;
  v71 = 0;
  v75 = 0LL;
  v76 = 0;
  v80 = 0LL;
  v81 = 0;
  v85 = 0LL;
  v86 = 0;
  v90 = 0LL;
  v91 = 0;
  v95 = 0LL;
  v96 = 0;
  v100 = 0LL;
  v101 = 0;
  v105 = 0LL;
  v106 = 0;
  v13 = a1[36];
  v67 = 800;
  v72 = 800;
  v77 = 800;
  v82 = 800;
  v44 = 75;
  v88 = 480;
  v93 = 480;
  v98 = 480;
  v103 = 480;
  v49 = 75;
  v54 = 70;
  v59 = 60;
  v64 = 87;
  v69 = 75;
  v74 = 72;
  v79 = 60;
  v84 = 56;
  v87 = 640;
  v89 = 75;
  v92 = 640;
  v94 = 72;
  v97 = 640;
  v99 = 67;
  v102 = 640;
  v104 = 60;
  a1[36] = v13 & 0x1F | (v13 >> 1) & 0x60;
  v14 = (_DWORD *)&v45 + 1;
  for ( i = 0; i < 13; ++i )
  {
    v14[1] = -1;
    *(v14 - 1) = v8;
    *v14 = 0;
    if ( ((a1[36 - i / 7u] >> (i % 7u)) & 1) != 0 )
      inserted = InsertModecapList(v14 - 4, a2, inserted);
    v14 += 6;
  }
  v16 = a1 + 38;
  v17 = HIDWORD(v40);
  if ( !a4 )
    v17 = 56;
  v41 = 0xFFFFFFFF00000000uLL;
  HIDWORD(v40) = v17;
  do
  {
    v18 = *v16;
    if ( (unsigned __int8)v18 >= 2u )
    {
      v19 = v16[1];
      LODWORD(v40) = 8 * v18 + 248;
      DWORD2(v40) = (v19 & 0x3F) + 60;
      DWORD1(v40) = (unsigned int)(v107.m128i_i32[(unsigned __int64)v19 >> 6] * v40)
                  / v108.m128i_i32[(unsigned __int64)v19 >> 6];
      inserted = InsertModecapList(&v40, a2, inserted);
    }
    v16 += 2;
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
      *(_QWORD *)&v40 = __PAIR64__(v33, v32);
      if ( v32 && v33 )
      {
        v34 = 10000
            * (v22 + (*v20 << 8))
            / ((v33 + ((v30 & 0xF) << 8) + v20[5])
             * (v32 + ((v29 & 0xF) << 8) + (unsigned int)v20[2]));
        DWORD2(v40) = 10000
                    * (v22 + (*v20 << 8))
                    / ((v33 + ((v30 & 0xF) << 8) + v20[5])
                     * (v32 + ((v31 & 0xF) << 8) + (unsigned int)v20[2]));
        if ( (v20[16] & 0x80u) != 0 )
          DWORD2(v40) = v34 >> 1;
        inserted = InsertModecapList(&v40, a2, inserted);
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
            LODWORD(v40) = 8 * v37 + 248;
            DWORD2(v40) = (v38 & 0x3F) + 60;
            DWORD1(v40) = (unsigned int)(v107.m128i_i32[(unsigned __int64)v38 >> 6] * v40)
                        / v108.m128i_i32[(unsigned __int64)v38 >> 6];
            inserted = InsertModecapList(&v40, a2, inserted);
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
