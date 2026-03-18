/*
 * XREFs of ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1400E248C
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1400E1A18 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 * Callees:
 *     ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1400E1654 (-bFindNextScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z @ 0x1400E2258 (-bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400E22E0 (-bFindNextSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?vUnflip@DDA_CLIPLINE@@QEBAXPEAJ0@Z @ 0x1400E2C4C (-vUnflip@DDA_CLIPLINE@@QEBAXPEAJ0@Z.c)
 *     ?yCompute@DDA_CLIPLINE@@QEAAJJ@Z @ 0x1400E2C80 (-yCompute@DDA_CLIPLINE@@QEAAJJ@Z.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400E2CC4 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1400E2FFC (-bFindFirstScan@XCLIPOBJ@@IEAAHXZ.c)
 */

__int64 __fastcall XCLIPOBJ::bSetup(XCLIPOBJ *this)
{
  _DWORD *v1; // rdx
  _DWORD *v3; // rdx
  int v4; // r9d
  unsigned int v5; // ecx
  bool v6; // cc
  int v7; // eax
  _DWORD *v8; // rcx
  __int64 v9; // r11
  int v10; // r9d
  int v11; // edx
  int *v12; // rcx
  int *v13; // r8
  __int64 v14; // r10
  int v15; // eax
  DDA_CLIPLINE *v16; // r10
  int v17; // ecx
  int v18; // r9d
  int v19; // edi
  __int64 v20; // r11
  __int64 v21; // r9
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // eax
  __int64 v26; // r11
  int v27; // r10d
  int v28; // edx
  int *v29; // rcx
  int *v30; // r8
  __int64 v31; // rdi
  int v32; // eax
  DDA_CLIPLINE *v33; // r9
  int v34; // ecx
  int v35; // r10d
  __int64 v36; // r11
  __int64 v37; // r10
  int v38; // edx
  DDA_CLIPLINE *v39; // r9
  int v40; // ecx
  int v41; // r8d
  int v42; // eax
  int v43; // eax
  __int64 v44; // r10
  int NextScan; // eax
  int v47; // ecx
  int v48; // r8d
  int v49; // eax
  __int64 v50; // rdi
  int v51; // edx
  DDA_CLIPLINE *v52; // r9
  int v53; // ecx
  int v54; // r11d
  int v55; // r10d
  DDA_CLIPLINE *v56; // r9
  int v57; // ecx
  int v58; // r8d
  int v59; // eax
  int v60; // eax
  __int64 v61; // r11
  int v62; // edx
  DDA_CLIPLINE *v63; // r9
  int v64; // ecx
  int v65; // r10d
  int v66; // r10d
  __int64 v67; // r11
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  __int64 v70; // rax
  unsigned __int64 v71; // rcx
  int v72; // edi
  int v73; // eax
  __int64 v74; // rax
  unsigned __int64 v75; // rcx
  int v76; // r10d
  __int64 v77; // rax
  unsigned __int64 v78; // rcx
  __int64 v79; // rax
  unsigned __int64 v80; // rcx
  __int64 v81; // rax
  unsigned __int64 v82; // rcx
  int v83; // edx
  __int64 v84; // rax
  unsigned __int64 v85; // rcx
  int v86; // edx
  __int64 v87; // rax
  unsigned __int64 v88; // rcx
  int v89; // [rsp+40h] [rbp+20h] BYREF
  int v90; // [rsp+44h] [rbp+24h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 18);
  if ( (v1[6] & 0x20000) != 0 )
  {
    XCLIPOBJ::bRecordRun(this, v1 + 8);
    if ( (unsigned int)XCLIPOBJ::bFindNextSegment(this) )
      return 1LL;
    NextScan = XCLIPOBJ::bFindNextScan(this);
  }
  else
  {
    v1[40] = -1;
    v3 = (_DWORD *)*((_QWORD *)this + 18);
    v4 = v3[28];
    v5 = v3[6] | 0x400000;
    v6 = v4 <= v3[30];
    if ( v4 > v3[30] )
      v5 = v3[6] & 0xFFBFFFFF;
    v7 = 1;
    v3[6] = v5;
    if ( !v6 )
      v7 = -1;
    *((_DWORD *)this + 25) = v7;
    v8 = (_DWORD *)*((_QWORD *)this + 18);
    if ( v8[29] <= v8[31] )
      v8[6] |= 0x800000u;
    v9 = *((_QWORD *)this + 18);
    v10 = *((_DWORD *)this + 2);
    v11 = *(_DWORD *)(v9 + 116);
    v12 = (int *)(v9 + 124);
    if ( v11 < v10 && *v12 < v10 )
      return 0LL;
    v13 = (int *)((char *)this + 16);
    v14 = *((_QWORD *)this + 18);
    v15 = *((_DWORD *)this + 4);
    if ( v11 >= v15 && *v12 >= v15 )
      return 0LL;
    if ( (*(_DWORD *)(v9 + 24) & 0x800000) != 0 )
    {
      if ( v11 < v10 )
      {
        v16 = (DDA_CLIPLINE *)(v9 + 64);
        v17 = *(_DWORD *)(v9 + 64);
        if ( (v17 & 8) != 0 )
          v10 = 1 - v10;
        if ( (v17 & 5) != 0 )
        {
          v89 = v10;
          v90 = DDA_CLIPLINE::yCompute((DDA_CLIPLINE *)(v9 + 64), v10);
          v19 = v18 - *((_DWORD *)v16 + 8) - 1;
        }
        else
        {
          v70 = (v10 - *(_DWORD *)(v9 + 72)) * (__int64)*(int *)(v9 + 80) - *(_QWORD *)(v9 + 88) - 1;
          if ( v70 >= 0xFFFFFFFFLL )
            v71 = ((v10 - *(_DWORD *)(v9 + 72)) * (__int64)*(int *)(v9 + 80) - *(_QWORD *)(v9 + 88) - 1)
                / (unsigned __int64)*(unsigned int *)(v9 + 76);
          else
            LODWORD(v71) = (unsigned int)v70 / *(_DWORD *)(v9 + 76);
          v72 = v71 + *(_DWORD *)(v9 + 68);
          v90 = v10;
          v73 = v72 + 1;
          v19 = v72 - *(_DWORD *)(v9 + 96);
          v89 = v73;
        }
        DDA_CLIPLINE::vUnflip(v16, &v89, &v90);
        *(_DWORD *)(v20 + 160) = v19;
        v13 = (int *)((char *)this + 16);
        *(_DWORD *)(*((_QWORD *)this + 18) + 112LL) = v89;
        *(_DWORD *)(*((_QWORD *)this + 18) + 116LL) = v90;
      }
      v21 = *((_QWORD *)this + 18);
      v22 = *v13;
      if ( *(_DWORD *)(v21 + 124) >= *v13 )
      {
        v23 = *(_DWORD *)(v21 + 64);
        v24 = 1 - v22;
        if ( (v23 & 8) == 0 )
          v24 = v22;
        if ( (v23 & 5) != 0 )
        {
          v89 = v24 - 1;
          v25 = DDA_CLIPLINE::yCompute((DDA_CLIPLINE *)(v21 + 64), v24 - 1);
        }
        else
        {
          v68 = (v24 - *(_DWORD *)(v21 + 72)) * (__int64)*(int *)(v21 + 80) - *(_QWORD *)(v21 + 88) - 1;
          if ( v68 >= 0xFFFFFFFFLL )
            v69 = ((v24 - *(_DWORD *)(v21 + 72)) * (__int64)*(int *)(v21 + 80) - *(_QWORD *)(v21 + 88) - 1)
                / (unsigned __int64)*(unsigned int *)(v21 + 76);
          else
            LODWORD(v69) = (unsigned int)v68 / *(_DWORD *)(v21 + 76);
          v25 = v24 - 1;
          v89 = *(_DWORD *)(v21 + 68) + v69;
        }
        v90 = v25;
        DDA_CLIPLINE::vUnflip((DDA_CLIPLINE *)(v21 + 64), &v89, &v90);
        *(_DWORD *)(*((_QWORD *)this + 18) + 120LL) = v89;
        *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) = v90;
      }
    }
    else
    {
      if ( *v12 < v10 )
      {
        v47 = *(_DWORD *)(v9 + 64);
        v48 = 1 - v10;
        if ( (v47 & 8) == 0 )
          v48 = *((_DWORD *)this + 2);
        if ( (v47 & 5) != 0 )
        {
          v89 = v48 - 1;
          v49 = DDA_CLIPLINE::yCompute((DDA_CLIPLINE *)(v9 + 64), v48 - 1);
        }
        else
        {
          v77 = (v48 - *(_DWORD *)(v9 + 72)) * (__int64)*(int *)(v9 + 80) - *(_QWORD *)(v9 + 88) - 1;
          if ( v77 >= 0xFFFFFFFFLL )
            v78 = ((v48 - *(_DWORD *)(v14 + 72)) * (__int64)*(int *)(v14 + 80) - *(_QWORD *)(v14 + 88) - 1)
                / (unsigned __int64)*(unsigned int *)(v14 + 76);
          else
            LODWORD(v78) = (unsigned int)v77 / *(_DWORD *)(v9 + 76);
          v49 = v48 - 1;
          v89 = *(_DWORD *)(v9 + 68) + v78;
        }
        v90 = v49;
        DDA_CLIPLINE::vUnflip((DDA_CLIPLINE *)(v14 + 64), &v89, &v90);
        *(_DWORD *)(*((_QWORD *)this + 18) + 120LL) = v89;
        *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) = v90;
      }
      v50 = *((_QWORD *)this + 18);
      v51 = *((_DWORD *)this + 4);
      if ( *(_DWORD *)(v50 + 116) >= v51 )
      {
        v52 = (DDA_CLIPLINE *)(v50 + 64);
        v53 = *(_DWORD *)(v50 + 64);
        v54 = 1 - v51;
        if ( (v53 & 8) == 0 )
          v54 = *((_DWORD *)this + 4);
        if ( (v53 & 5) != 0 )
        {
          v89 = v54;
          v90 = DDA_CLIPLINE::yCompute((DDA_CLIPLINE *)(v50 + 64), v54);
        }
        else
        {
          v74 = (v54 - *(_DWORD *)(v50 + 72)) * (__int64)*(int *)(v50 + 80) - *(_QWORD *)(v50 + 88) - 1;
          if ( v74 >= 0xFFFFFFFFLL )
            v75 = ((v54 - *(_DWORD *)(v50 + 72)) * (__int64)*(int *)(v50 + 80) - *(_QWORD *)(v50 + 88) - 1)
                / (unsigned __int64)*(unsigned int *)(v50 + 76);
          else
            LODWORD(v75) = (unsigned int)v74 / *(_DWORD *)(v50 + 76);
          v76 = v75 + *(_DWORD *)(v50 + 68);
          v90 = v54;
          v89 = v76 + 1;
        }
        DDA_CLIPLINE::vUnflip(v52, &v89, &v90);
        *(_DWORD *)(v50 + 160) = v55;
        *(_DWORD *)(*((_QWORD *)this + 18) + 112LL) = v89;
        *(_DWORD *)(*((_QWORD *)this + 18) + 116LL) = v90;
      }
    }
    v26 = *((_QWORD *)this + 18);
    v27 = *((_DWORD *)this + 1);
    v28 = *(_DWORD *)(v26 + 112);
    v29 = (int *)(v26 + 120);
    if ( v28 < v27 && *v29 < v27 )
      return 0LL;
    v30 = (int *)((char *)this + 12);
    v31 = *((_QWORD *)this + 18);
    v32 = *((_DWORD *)this + 3);
    if ( v28 >= v32 && *v29 >= v32 )
      return 0LL;
    if ( (*(_DWORD *)(v26 + 24) & 0x400000) != 0 )
    {
      if ( v28 < v27 )
      {
        v33 = (DDA_CLIPLINE *)(v26 + 64);
        v34 = *(_DWORD *)(v26 + 64);
        if ( (v34 & 0x20) != 0 )
          v27 = 1 - v27;
        if ( (v34 & 5) != 0 )
        {
          v81 = (v27 - *(_DWORD *)(v26 + 72)) * (__int64)*(int *)(v26 + 80) - *(_QWORD *)(v26 + 88) - 1;
          if ( v81 >= 0xFFFFFFFFLL )
            v82 = ((v27 - *(_DWORD *)(v26 + 72)) * (__int64)*(int *)(v26 + 80) - *(_QWORD *)(v26 + 88) - 1)
                / (unsigned __int64)*(unsigned int *)(v26 + 76);
          else
            LODWORD(v82) = (unsigned int)v81 / *(_DWORD *)(v26 + 76);
          v83 = v82 + *(_DWORD *)(v26 + 68);
          v90 = v27;
          v89 = v83 + 1;
        }
        else
        {
          v89 = v27;
          v90 = DDA_CLIPLINE::yCompute((DDA_CLIPLINE *)(v26 + 64), v27);
        }
        DDA_CLIPLINE::vUnflip(v33, &v89, &v90);
        *(_DWORD *)(v36 + 160) = v35;
        v30 = (int *)((char *)this + 12);
        *(_DWORD *)(*((_QWORD *)this + 18) + 112LL) = v89;
        *(_DWORD *)(*((_QWORD *)this + 18) + 116LL) = v90;
      }
      v37 = *((_QWORD *)this + 18);
      v38 = *v30;
      if ( *(_DWORD *)(v37 + 120) >= *v30 )
      {
        v39 = (DDA_CLIPLINE *)(v37 + 64);
        v40 = *(_DWORD *)(v37 + 64);
        v41 = 1 - v38;
        if ( (v40 & 0x20) == 0 )
          v41 = v38;
        if ( (v40 & 5) != 0 )
        {
          v79 = (v41 - *(_DWORD *)(v37 + 72)) * (__int64)*(int *)(v37 + 80) - *(_QWORD *)(v37 + 88) - 1;
          if ( v79 >= 0xFFFFFFFFLL )
            v80 = ((v41 - *(_DWORD *)(v37 + 72)) * (__int64)*(int *)(v37 + 80) - *(_QWORD *)(v37 + 88) - 1)
                / (unsigned __int64)*(unsigned int *)(v37 + 76);
          else
            LODWORD(v80) = (unsigned int)v79 / *(_DWORD *)(v37 + 76);
          v42 = v41 - 1;
          v89 = v80 + *(_DWORD *)(v37 + 68);
        }
        else
        {
          v89 = v41 - 1;
          v42 = DDA_CLIPLINE::yCompute((DDA_CLIPLINE *)(v37 + 64), v41 - 1);
        }
        v90 = v42;
        DDA_CLIPLINE::vUnflip(v39, &v89, &v90);
        v43 = v90;
        *(_DWORD *)(v44 + 120) = v89;
        *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) = v43;
      }
    }
    else
    {
      if ( *v29 < v27 )
      {
        v56 = (DDA_CLIPLINE *)(v26 + 64);
        v57 = *(_DWORD *)(v26 + 64);
        v58 = 1 - v27;
        if ( (v57 & 0x20) == 0 )
          v58 = *((_DWORD *)this + 1);
        if ( (v57 & 5) != 0 )
        {
          v87 = (v58 - *(_DWORD *)(v31 + 72)) * (__int64)*(int *)(v31 + 80) - *(_QWORD *)(v31 + 88) - 1;
          if ( v87 >= 0xFFFFFFFFLL )
            v88 = ((v58 - *(_DWORD *)(v26 + 72)) * (__int64)*(int *)(v26 + 80) - *(_QWORD *)(v26 + 88) - 1)
                / (unsigned __int64)*(unsigned int *)(v26 + 76);
          else
            LODWORD(v88) = (unsigned int)v87 / *(_DWORD *)(v31 + 76);
          v59 = v58 - 1;
          v89 = v88 + *(_DWORD *)(v31 + 68);
        }
        else
        {
          v89 = v58 - 1;
          v59 = DDA_CLIPLINE::yCompute((DDA_CLIPLINE *)(v31 + 64), v58 - 1);
          v31 = *((_QWORD *)this + 18);
        }
        v90 = v59;
        DDA_CLIPLINE::vUnflip(v56, &v89, &v90);
        v60 = v90;
        *(_DWORD *)(v31 + 120) = v89;
        *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) = v60;
      }
      v61 = *((_QWORD *)this + 18);
      v62 = *((_DWORD *)this + 3);
      if ( *(_DWORD *)(v61 + 112) >= v62 )
      {
        v63 = (DDA_CLIPLINE *)(v61 + 64);
        v64 = *(_DWORD *)(v61 + 64);
        v65 = 1 - v62;
        if ( (v64 & 0x20) == 0 )
          v65 = *((_DWORD *)this + 3);
        if ( (v64 & 5) != 0 )
        {
          v84 = (v65 - *(_DWORD *)(v61 + 72)) * (__int64)*(int *)(v61 + 80) - *(_QWORD *)(v61 + 88) - 1;
          if ( v84 >= 0xFFFFFFFFLL )
            v85 = ((v65 - *(_DWORD *)(v61 + 72)) * (__int64)*(int *)(v61 + 80) - *(_QWORD *)(v61 + 88) - 1)
                / (unsigned __int64)*(unsigned int *)(v61 + 76);
          else
            LODWORD(v85) = (unsigned int)v84 / *(_DWORD *)(v61 + 76);
          v86 = v85 + *(_DWORD *)(v61 + 68);
          v90 = v65;
          v89 = v86 + 1;
        }
        else
        {
          v89 = v65;
          v90 = DDA_CLIPLINE::yCompute((DDA_CLIPLINE *)(v61 + 64), v65);
        }
        DDA_CLIPLINE::vUnflip(v63, &v89, &v90);
        *(_DWORD *)(v67 + 160) = v66;
        *(_DWORD *)(*((_QWORD *)this + 18) + 112LL) = v89;
        *(_DWORD *)(*((_QWORD *)this + 18) + 116LL) = v90;
      }
    }
    *(_DWORD *)(*((_QWORD *)this + 18) + 152LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 112LL);
    *(_DWORD *)(*((_QWORD *)this + 18) + 156LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 116LL);
    *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) |= 0x20000u;
    NextScan = XCLIPOBJ::bFindFirstScan(this);
  }
  if ( NextScan )
  {
    while ( !(unsigned int)XCLIPOBJ::bFindFirstSegment(this) )
    {
      if ( !(unsigned int)XCLIPOBJ::bFindNextScan(this) )
        return 0LL;
    }
    return 1LL;
  }
  return 0LL;
}
