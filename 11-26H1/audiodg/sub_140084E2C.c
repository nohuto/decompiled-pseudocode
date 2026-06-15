/*
 * XREFs of sub_140084E2C @ 0x140084E2C
 * Callers:
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 * Callees:
 *     sub_14000253C @ 0x14000253C (sub_14000253C.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000FFB0 @ 0x14000FFB0 (sub_14000FFB0.c)
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_140030584 @ 0x140030584 (sub_140030584.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_14005D3B4 @ 0x14005D3B4 (sub_14005D3B4.c)
 *     sub_140066304 @ 0x140066304 (sub_140066304.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_140084E2C(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // r11
  int v9; // ebx
  __int64 v10; // r10
  __int64 v11; // r11
  char *v12; // r10
  __int64 v13; // r10
  __int64 v14; // r10
  int v15; // edx
  char *v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r11
  char *v19; // rcx
  __int64 v20; // r10
  char *v21; // r12
  _DWORD *v22; // rax
  _DWORD *v23; // r13
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // edx
  unsigned __int64 v28; // rax
  unsigned int v29; // edi
  _DWORD *v30; // rsi
  __int64 **v31; // rax
  __int64 *v32; // rbx
  unsigned __int64 v33; // rax
  unsigned int v34; // edi
  _DWORD *v35; // rsi
  unsigned __int64 v36; // rax
  unsigned int v37; // edi
  __int64 *v38; // rsi
  unsigned __int64 v39; // r14
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned int v42; // edi
  _QWORD *v43; // rsi
  _QWORD *v44; // r14
  _QWORD *v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // edi
  int v48; // eax
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  int v51; // r9d
  int v52; // edx
  __int64 *v53; // rcx
  unsigned int v54; // edi
  _QWORD *v55; // rsi
  _QWORD *v56; // r14
  _QWORD *v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // edi
  int v60; // eax
  __int64 v61; // rax
  _QWORD **v62; // rax
  unsigned __int64 v63; // rdx
  int v64; // r9d
  int v65; // edx
  unsigned int v66; // edi
  _QWORD *v67; // rsi
  _QWORD *v68; // rax
  _QWORD *v69; // rcx
  __int64 v70; // rax
  _DWORD *v71; // rcx
  __int64 v73; // [rsp+30h] [rbp-18h] BYREF
  void *v74[2]; // [rsp+38h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+40h]
  char *v77; // [rsp+98h] [rbp+50h] BYREF
  __int64 v78; // [rsp+A0h] [rbp+58h]
  _QWORD *v79; // [rsp+A8h] [rbp+60h]

  v79 = a4;
  v78 = a3;
  v6 = 8LL;
  v74[0] = *(void **)a2;
  v7 = 0LL;
  if ( v74[0] )
  {
    while ( 1 )
    {
      v8 = *sub_1400265D8(a1, (_QWORD **)v74);
      if ( v6 >= 0xFFFFFFFFFFFFFFFCuLL )
        break;
      v77 = 0LL;
      v9 = sub_140030584(*(_QWORD *)(v8 + 192), 8uLL, (__int64 *)&v77);
      if ( v9 < 0 )
      {
        v15 = 2620;
        goto LABEL_110;
      }
      v12 = &v77[v10];
      if ( v12 < v77 )
      {
        v15 = 2621;
        goto LABEL_109;
      }
      if ( (unsigned __int64)(v12 + 4) < 4 )
      {
        v15 = 2625;
        goto LABEL_109;
      }
      v77 = 0LL;
      v9 = sub_140030584(*(_QWORD *)(v11 + 224), 8uLL, (__int64 *)&v77);
      if ( v9 < 0 )
      {
        v15 = 2629;
        goto LABEL_110;
      }
      if ( &v77[v13] < v77 )
      {
        v15 = 2630;
        goto LABEL_109;
      }
      v6 = (unsigned __int64)&v77[v13 + 8];
      if ( v6 < 8 )
      {
        v15 = 2634;
        goto LABEL_109;
      }
      if ( !v74[0] )
        goto LABEL_10;
    }
    v15 = 2616;
    goto LABEL_109;
  }
LABEL_10:
  if ( v6 >= 0xFFFFFFFFFFFFFFFCuLL )
  {
    v15 = 2641;
    goto LABEL_109;
  }
  v77 = 0LL;
  v9 = sub_140030584(*(_QWORD *)(a2 + 64), 8uLL, (__int64 *)&v77);
  if ( v9 < 0 )
  {
    v15 = 2646;
LABEL_110:
    sub_14000C2A8((int)retaddr, v15, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v9);
    return (unsigned int)v9;
  }
  v16 = &v77[v14];
  if ( &v77[v14] < v77 )
  {
    v15 = 2648;
    goto LABEL_109;
  }
  if ( &v16[(_QWORD)v77] < v77 )
  {
    v15 = 2649;
    goto LABEL_109;
  }
  if ( (unsigned __int64)&v16[(_QWORD)v77 + 4] < 4 )
  {
    v15 = 2655;
    goto LABEL_109;
  }
  v77 = 0LL;
  v9 = sub_140030584(*(_QWORD *)(a2 + 112), 8uLL, (__int64 *)&v77);
  if ( v9 < 0 )
  {
    v15 = 2660;
    goto LABEL_110;
  }
  v19 = &v77[v17];
  if ( &v77[v17] < v77 )
  {
    v15 = 2662;
    goto LABEL_109;
  }
  if ( &v19[(_QWORD)v77] < v77 )
  {
    v15 = 2663;
    goto LABEL_109;
  }
  if ( &v19[(_QWORD)v77] >= (char *)0xFFFFFFFFFFFFFFFCLL )
  {
    v15 = 2669;
    goto LABEL_109;
  }
  v77 = 0LL;
  v9 = sub_140030584(*(_QWORD *)(v18 + 16), 8uLL, (__int64 *)&v77);
  if ( v9 < 0 )
  {
    v15 = 2673;
    goto LABEL_110;
  }
  v21 = &v77[v20];
  if ( &v77[v20] < v77 )
  {
    v15 = 2674;
    goto LABEL_109;
  }
  if ( (unsigned __int64)v21 > 0xFFFFFFFF )
  {
    v15 = 2678;
LABEL_109:
    v9 = -2147024362;
    goto LABEL_110;
  }
  v22 = CoTaskMemAlloc((SIZE_T)&v77[v20]);
  v23 = v22;
  v74[0] = v22;
  if ( !v22 )
  {
    v9 = -2147024882;
    v27 = 2681;
    goto LABEL_98;
  }
  memset(v22, 0, (size_t)v21);
  if ( (unsigned int)v21 < 4 )
  {
    v9 = -2147024774;
    v27 = 2691;
LABEL_98:
    sub_14000C2A8((int)retaddr, v27, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v9);
LABEL_99:
    sub_140008C08(v74, 0LL);
    return (unsigned int)v9;
  }
  *v23 = 1;
  v28 = *(_QWORD *)(a2 + 16);
  if ( v28 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    v27 = 2699;
    goto LABEL_98;
  }
  if ( (unsigned int)((_DWORD)v21 - 4) < 4 )
  {
    v9 = -2147024774;
    v27 = 2700;
    goto LABEL_98;
  }
  v23[1] = v28;
  v29 = (_DWORD)v21 - 8;
  v30 = v23 + 2;
  v77 = *(char **)a2;
  if ( v77 )
  {
    while ( 1 )
    {
      v31 = (__int64 **)sub_1400265D8(v24, (_QWORD **)&v77);
      v32 = *v31;
      v33 = (*v31)[24];
      if ( v33 > 0xFFFFFFFF )
      {
        v9 = -2147024362;
        v27 = 2711;
        goto LABEL_98;
      }
      if ( v29 < 4 )
      {
        v9 = -2147024774;
        v27 = 2712;
        goto LABEL_98;
      }
      *v30 = v33;
      v34 = v29 - 4;
      v35 = v30 + 1;
      if ( v32[24] )
        break;
LABEL_44:
      v36 = v32[28];
      if ( v36 > 0xFFFFFFFF )
      {
        v9 = -2147024362;
        v27 = 2728;
        goto LABEL_98;
      }
      if ( v34 < 4 )
      {
        v9 = -2147024774;
        v27 = 2729;
        goto LABEL_98;
      }
      *v35 = v36;
      v37 = v34 - 4;
      v38 = (__int64 *)(v35 + 1);
      v39 = 0LL;
      if ( v32[28] )
      {
        while ( v37 >= 8 )
        {
          *v38 = *(_QWORD *)sub_14000FFB0(v32 + 27, v39);
          v37 -= 8;
          ++v38;
          if ( ++v39 >= v32[28] )
            goto LABEL_49;
        }
        v9 = -2147024774;
        v27 = 2737;
        goto LABEL_98;
      }
LABEL_49:
      v40 = sub_140066304(v32);
      if ( v37 < 8 )
      {
        v9 = -2147024774;
        v27 = 2744;
        goto LABEL_98;
      }
      *v38 = v40;
      v29 = v37 - 8;
      v30 = v38 + 1;
      v7 = 0LL;
      if ( !v77 )
        goto LABEL_51;
    }
    while ( v34 >= 8 )
    {
      *(_QWORD *)v35 = *(_QWORD *)sub_14000FFB0(v32 + 23, v7);
      v34 -= 8;
      v35 += 2;
      if ( ++v7 >= v32[24] )
        goto LABEL_44;
    }
    v9 = -2147024774;
    v27 = 2720;
    goto LABEL_98;
  }
LABEL_51:
  v41 = *(_QWORD *)(a2 + 64);
  if ( v41 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    v27 = 2753;
    goto LABEL_98;
  }
  if ( v29 < 4 )
  {
    v9 = -2147024774;
    v27 = 2754;
    goto LABEL_98;
  }
  *v30 = v41;
  v42 = v29 - 4;
  v43 = v30 + 1;
  v44 = *(_QWORD **)(a2 + 48);
  if ( v44 )
  {
    while ( 1 )
    {
      v45 = v44;
      v44 = (_QWORD *)*v44;
      v46 = v45[2];
      if ( v42 < 8 )
      {
        v9 = -2147024774;
        v27 = 2762;
        goto LABEL_98;
      }
      *v43 = *(_QWORD *)(v46 + 112);
      v47 = v42 - 8;
      v77 = 0LL;
      v48 = sub_14005D3B4((_QWORD *)(v46 + 120));
      v9 = v48;
      if ( v48 < 0 )
        break;
      v49 = sub_1400B6010(v77);
      if ( v47 < 8 )
      {
        v9 = -2147024774;
        v51 = -2147024774;
        v52 = 2768;
        goto LABEL_71;
      }
      v43[1] = v49;
      v42 = v47 - 8;
      v43 += 2;
      sub_140056130((__int64 *)&v77);
      if ( !v44 )
        goto LABEL_66;
    }
    v51 = v48;
    v52 = 2765;
LABEL_71:
    sub_14000C2A8((int)retaddr, v52, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v51);
    v53 = (__int64 *)&v77;
LABEL_72:
    sub_140056130(v53);
    goto LABEL_99;
  }
LABEL_66:
  v50 = *(_QWORD *)(a2 + 112);
  if ( v50 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    v27 = 2778;
    goto LABEL_98;
  }
  if ( v42 < 4 )
  {
    v9 = -2147024774;
    v27 = 2779;
    goto LABEL_98;
  }
  *(_DWORD *)v43 = v50;
  v54 = v42 - 4;
  v55 = (_QWORD *)((char *)v43 + 4);
  v56 = *(_QWORD **)(a2 + 96);
  if ( v56 )
  {
    while ( 1 )
    {
      v57 = v56;
      v56 = (_QWORD *)*v56;
      v58 = v57[2];
      if ( v54 < 8 )
        break;
      *v55 = *(_QWORD *)(v58 + 112);
      v59 = v54 - 8;
      v73 = 0LL;
      v60 = sub_14005D3B4((_QWORD *)(v58 + 120));
      v9 = v60;
      if ( v60 < 0 )
      {
        v64 = v60;
        v65 = 2790;
        goto LABEL_84;
      }
      v61 = sub_1400B6010(v73);
      if ( v59 < 8 )
      {
        v9 = -2147024774;
        v64 = -2147024774;
        v65 = 2793;
LABEL_84:
        sub_14000C2A8((int)retaddr, v65, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v64);
        v53 = &v73;
        goto LABEL_72;
      }
      v55[1] = v61;
      v54 = v59 - 8;
      v55 += 2;
      sub_140056130(&v73);
      if ( !v56 )
        goto LABEL_79;
    }
    v9 = -2147024774;
    v27 = 2787;
    goto LABEL_98;
  }
LABEL_79:
  v62 = (_QWORD **)v78;
  v63 = *(_QWORD *)(v78 + 16);
  if ( v63 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    v27 = 2801;
    goto LABEL_98;
  }
  if ( v54 < 4 )
  {
    v9 = -2147024774;
    v27 = 2802;
    goto LABEL_98;
  }
  *(_DWORD *)v55 = v63;
  v66 = v54 - 4;
  v67 = (_QWORD *)((char *)v55 + 4);
  v68 = *v62;
  if ( v68 )
  {
    while ( 1 )
    {
      v69 = (_QWORD *)*v68;
      v70 = v68[2];
      if ( v66 < 8 )
        break;
      *v67 = *(_QWORD *)(v70 + 112);
      v66 -= 8;
      ++v67;
      v68 = v69;
      if ( !v69 )
        goto LABEL_89;
    }
    v9 = -2147024774;
    v27 = 2810;
    goto LABEL_98;
  }
LABEL_89:
  v71 = *(_DWORD **)(a1 + 1080);
  if ( *v71 > 5u )
  {
    LODWORD(v77) = v63;
    sub_14000253C((__int64)v71, (__int64)&unk_1400D28A7, v25, v26, (__int64)&v77);
  }
  v74[0] = 0LL;
  *v79 = v23;
  *a5 = (unsigned int)v21;
  sub_140008C08(v74, 0LL);
  return 0LL;
}
