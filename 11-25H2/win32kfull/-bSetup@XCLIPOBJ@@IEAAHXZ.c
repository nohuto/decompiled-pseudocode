/*
 * XREFs of ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1400F4200
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x14006C4E8 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 * Callees:
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1400F3E60 (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400F4924 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1400F4C68 (-bFindFirstScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1400F5B88 (-bFindNextScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?vUnflip@DDA_CLIPLINE@@QEBAXPEAJ0@Z @ 0x1400F5C9C (-vUnflip@DDA_CLIPLINE@@QEBAXPEAJ0@Z.c)
 *     ?yCompute@DDA_CLIPLINE@@QEAAJJ@Z @ 0x1400F5CD0 (-yCompute@DDA_CLIPLINE@@QEAAJJ@Z.c)
 *     ?bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z @ 0x1400F5D10 (-bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400F5D98 (-bFindNextSegment@XCLIPOBJ@@IEAAHXZ.c)
 */

__int64 __fastcall XCLIPOBJ::bSetup(XCLIPOBJ *this)
{
  _DWORD *v1; // rdx
  int v3; // r9d
  _DWORD *v4; // rcx
  int v5; // edx
  unsigned int v6; // edx
  _DWORD *v7; // rcx
  __int64 v8; // r10
  LONG v9; // r8d
  LONG v10; // edx
  LONG *v11; // rcx
  LONG v12; // eax
  DDA_CLIPLINE *v13; // r9
  int v14; // ecx
  __int64 v15; // r10
  int v16; // r11d
  __int64 v17; // r9
  int v18; // edx
  int v19; // ecx
  int v20; // r10d
  LONG v21; // eax
  __int64 v22; // r11
  LONG v23; // r10d
  LONG v24; // edx
  LONG *v25; // rcx
  LONG v26; // eax
  __int64 v27; // r11
  int v28; // edx
  DDA_CLIPLINE *v29; // r9
  int v30; // ecx
  int v31; // r10d
  LONG v32; // eax
  LONG y; // eax
  __int64 v34; // r11
  __int64 v35; // rdi
  int v36; // edx
  DDA_CLIPLINE *v37; // r9
  int v38; // ecx
  LONG v39; // r10d
  int v40; // r11d
  DDA_CLIPLINE *v41; // r9
  int v42; // ecx
  LONG v43; // eax
  LONG v44; // eax
  __int64 v45; // r11
  __int64 v46; // rdi
  int v47; // edx
  DDA_CLIPLINE *v48; // r9
  int v49; // ecx
  LONG v50; // r10d
  int v51; // r11d
  int i; // eax
  int NextSegment; // eax
  __int64 v55; // rax
  __int64 v56; // r8
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // r11
  unsigned __int64 v60; // rcx
  int v61; // r11d
  __int64 v62; // rax
  __int64 v63; // r8
  unsigned __int64 v64; // rcx
  int v65; // r11d
  __int64 v66; // r9
  int v67; // ecx
  LONG v68; // eax
  __int64 v69; // rax
  __int64 v70; // r8
  unsigned __int64 v71; // rcx
  int v72; // r11d
  __int64 v73; // rax
  __int64 v74; // r8
  unsigned __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // r8
  unsigned __int64 v78; // rcx
  unsigned int v79; // ecx
  __int64 v80; // rax
  __int64 v81; // r10
  unsigned __int64 v82; // rcx
  struct _POINTL v83; // [rsp+50h] [rbp+20h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 18);
  if ( (v1[6] & 0x20000) != 0 )
  {
    XCLIPOBJ::bRecordRun(this, v1 + 8);
    NextSegment = XCLIPOBJ::bFindNextSegment(this);
    goto LABEL_54;
  }
  v3 = -1;
  v1[40] = -1;
  v4 = (_DWORD *)*((_QWORD *)this + 18);
  v5 = v4[6];
  if ( v4[28] > v4[30] )
  {
    v6 = v5 & 0xFFBFFFFF;
  }
  else
  {
    v3 = 1;
    v6 = v5 | 0x400000;
  }
  v4[6] = v6;
  *((_DWORD *)this + 25) = v3;
  v7 = (_DWORD *)*((_QWORD *)this + 18);
  if ( v7[29] <= v7[31] )
    v7[6] |= 0x800000u;
  v8 = *((_QWORD *)this + 18);
  v9 = *((_DWORD *)this + 2);
  v10 = *(_DWORD *)(v8 + 116);
  v11 = (LONG *)(v8 + 124);
  if ( v10 >= v9 || *v11 >= v9 )
  {
    v12 = *((_DWORD *)this + 4);
    if ( v10 < v12 || *v11 < v12 )
    {
      if ( (*(_DWORD *)(v8 + 24) & 0x800000) != 0 )
      {
        if ( v10 < v9 )
        {
          v13 = (DDA_CLIPLINE *)(v8 + 64);
          v14 = *(_DWORD *)(v8 + 64);
          if ( (v14 & 8) != 0 )
            v9 = 1 - v9;
          if ( (v14 & 5) != 0 )
          {
            v83.x = v9;
            v83.y = DDA_CLIPLINE::yCompute((DDA_CLIPLINE *)(v8 + 64), v9);
          }
          else
          {
            v58 = *(int *)(v8 + 80);
            v59 = v58 * (v9 - *(_DWORD *)(v8 + 72)) - *(_QWORD *)(v8 + 88) - 1;
            if ( v59 >= 0xFFFFFFFFLL )
              v60 = (v58 * (v9 - *(_DWORD *)(v8 + 72)) - *(_QWORD *)(v8 + 88) - 1)
                  / (unsigned __int64)*(unsigned int *)(v8 + 76);
            else
              LODWORD(v60) = (unsigned int)v59 / *(_DWORD *)(v8 + 76);
            v61 = v60 + *(_DWORD *)(v8 + 68);
            v83.y = v9;
            v83.x = v61 + 1;
          }
          DDA_CLIPLINE::vUnflip(v13, (int *)&v83, &v83.y);
          *(_DWORD *)(v15 + 160) = v16;
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v83;
        }
        v17 = *((_QWORD *)this + 18);
        v18 = *((_DWORD *)this + 4);
        if ( *(_DWORD *)(v17 + 124) >= v18 )
        {
          v19 = *(_DWORD *)(v17 + 64);
          v20 = 1 - v18;
          if ( (v19 & 8) == 0 )
            v20 = *((_DWORD *)this + 4);
          if ( (v19 & 5) != 0 )
          {
            v83.x = v20 - 1;
            v21 = DDA_CLIPLINE::yCompute((DDA_CLIPLINE *)(v17 + 64), v20 - 1);
          }
          else
          {
            v55 = *(int *)(v17 + 80);
            v56 = v55 * (v20 - *(_DWORD *)(v17 + 72)) - *(_QWORD *)(v17 + 88) - 1;
            if ( v56 >= 0xFFFFFFFFLL )
              v57 = (v55 * (v20 - *(_DWORD *)(v17 + 72)) - *(_QWORD *)(v17 + 88) - 1)
                  / (unsigned __int64)*(unsigned int *)(v17 + 76);
            else
              LODWORD(v57) = (unsigned int)v56 / *(_DWORD *)(v17 + 76);
            v21 = v20 - 1;
            v83.x = *(_DWORD *)(v17 + 68) + v57;
          }
          v83.y = v21;
          DDA_CLIPLINE::vUnflip((DDA_CLIPLINE *)(v17 + 64), (int *)&v83, &v83.y);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v83;
        }
      }
      else
      {
        if ( *v11 < v9 )
        {
          v66 = v8 + 64;
          v67 = *(_DWORD *)(v8 + 64);
          if ( (v67 & 8) != 0 )
            v9 = 1 - v9;
          if ( (v67 & 5) != 0 )
          {
            v83.x = v9 - 1;
            v68 = DDA_CLIPLINE::yCompute((DDA_CLIPLINE *)(v8 + 64), v9 - 1);
          }
          else
          {
            v79 = *(_DWORD *)(v8 + 76);
            v80 = *(int *)(v8 + 80);
            v81 = v80 * (v9 - *(_DWORD *)(v8 + 72)) - *(_QWORD *)(v8 + 88) - 1;
            if ( v81 >= 0xFFFFFFFFLL )
              v82 = (v80 * (v9 - *(_DWORD *)(v66 + 8)) - *(_QWORD *)(v66 + 24) - 1)
                  / (unsigned __int64)*(unsigned int *)(v66 + 12);
            else
              LODWORD(v82) = (unsigned int)v81 / v79;
            v68 = v9 - 1;
            v83.x = *(_DWORD *)(v66 + 4) + v82;
          }
          v83.y = v68;
          DDA_CLIPLINE::vUnflip((DDA_CLIPLINE *)v66, (int *)&v83, &v83.y);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v83;
        }
        v35 = *((_QWORD *)this + 18);
        v36 = *((_DWORD *)this + 4);
        if ( *(_DWORD *)(v35 + 116) >= v36 )
        {
          v37 = (DDA_CLIPLINE *)(v35 + 64);
          v38 = *(_DWORD *)(v35 + 64);
          v39 = 1 - v36;
          if ( (v38 & 8) == 0 )
            v39 = *((_DWORD *)this + 4);
          if ( (v38 & 5) != 0 )
          {
            v83.x = v39;
            v83.y = DDA_CLIPLINE::yCompute((DDA_CLIPLINE *)(v35 + 64), v39);
          }
          else
          {
            v62 = *(int *)(v35 + 80);
            v63 = v62 * (v39 - *(_DWORD *)(v35 + 72)) - *(_QWORD *)(v35 + 88) - 1;
            if ( v63 >= 0xFFFFFFFFLL )
              v64 = (v62 * (v39 - *(_DWORD *)(v35 + 72)) - *(_QWORD *)(v35 + 88) - 1)
                  / (unsigned __int64)*(unsigned int *)(v35 + 76);
            else
              LODWORD(v64) = (unsigned int)v63 / *(_DWORD *)(v35 + 76);
            v65 = v64 + *(_DWORD *)(v35 + 68);
            v83.y = v39;
            v83.x = v65 + 1;
          }
          DDA_CLIPLINE::vUnflip(v37, (int *)&v83, &v83.y);
          *(_DWORD *)(v35 + 160) = v40;
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v83;
        }
      }
      v22 = *((_QWORD *)this + 18);
      v23 = *((_DWORD *)this + 1);
      v24 = *(_DWORD *)(v22 + 112);
      v25 = (LONG *)(v22 + 120);
      if ( v24 >= v23 || *v25 >= v23 )
      {
        v26 = *((_DWORD *)this + 3);
        if ( v24 < v26 || *v25 < v26 )
        {
          if ( (*(_DWORD *)(v22 + 24) & 0x400000) != 0 )
          {
            if ( v24 < v23 )
            {
              v83 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v23, 0LL, &v83, (int *)(v22 + 160));
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v83;
            }
            v27 = *((_QWORD *)this + 18);
            v28 = *((_DWORD *)this + 3);
            if ( *(_DWORD *)(v27 + 120) >= v28 )
            {
              v29 = (DDA_CLIPLINE *)(v27 + 64);
              v30 = *(_DWORD *)(v27 + 64);
              v31 = 1 - v28;
              if ( (v30 & 0x20) == 0 )
                v31 = *((_DWORD *)this + 3);
              if ( (v30 & 5) != 0 )
              {
                v76 = *(int *)(v27 + 80);
                v77 = v76 * (v31 - *(_DWORD *)(v27 + 72)) - *(_QWORD *)(v27 + 88) - 1;
                if ( v77 >= 0xFFFFFFFFLL )
                  v78 = (v76 * (v31 - *(_DWORD *)(v27 + 72)) - *(_QWORD *)(v27 + 88) - 1)
                      / (unsigned __int64)*(unsigned int *)(v27 + 76);
                else
                  LODWORD(v78) = (unsigned int)v77 / *(_DWORD *)(v27 + 76);
                v32 = v31 - 1;
                v83.x = v78 + *(_DWORD *)(v27 + 68);
              }
              else
              {
                v83.x = v31 - 1;
                v32 = DDA_CLIPLINE::yCompute((DDA_CLIPLINE *)(v27 + 64), v31 - 1);
              }
              v83.y = v32;
              DDA_CLIPLINE::vUnflip(v29, (int *)&v83, &v83.y);
              y = v83.y;
              *(_DWORD *)(v34 + 120) = v83.x;
              *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) = y;
            }
          }
          else
          {
            if ( *v25 < v23 )
            {
              v41 = (DDA_CLIPLINE *)(v22 + 64);
              v42 = *(_DWORD *)(v22 + 64);
              if ( (v42 & 0x20) != 0 )
                v23 = 1 - v23;
              if ( (v42 & 5) != 0 )
              {
                v73 = *(int *)(v22 + 80);
                v74 = v73 * (v23 - *(_DWORD *)(v22 + 72)) - *(_QWORD *)(v22 + 88) - 1;
                if ( v74 >= 0xFFFFFFFFLL )
                  v75 = (v73 * (v23 - *(_DWORD *)(v22 + 72)) - *(_QWORD *)(v22 + 88) - 1)
                      / (unsigned __int64)*(unsigned int *)(v22 + 76);
                else
                  LODWORD(v75) = (unsigned int)v74 / *(_DWORD *)(v22 + 76);
                v43 = v23 - 1;
                v83.x = v75 + *(_DWORD *)(v22 + 68);
              }
              else
              {
                v83.x = v23 - 1;
                v43 = DDA_CLIPLINE::yCompute((DDA_CLIPLINE *)(v22 + 64), v23 - 1);
              }
              v83.y = v43;
              DDA_CLIPLINE::vUnflip(v41, (int *)&v83, &v83.y);
              v44 = v83.y;
              *(_DWORD *)(v45 + 120) = v83.x;
              *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) = v44;
            }
            v46 = *((_QWORD *)this + 18);
            v47 = *((_DWORD *)this + 3);
            if ( *(_DWORD *)(v46 + 112) >= v47 )
            {
              v48 = (DDA_CLIPLINE *)(v46 + 64);
              v49 = *(_DWORD *)(v46 + 64);
              v50 = 1 - v47;
              if ( (v49 & 0x20) == 0 )
                v50 = *((_DWORD *)this + 3);
              if ( (v49 & 5) != 0 )
              {
                v69 = *(int *)(v46 + 80);
                v70 = v69 * (v50 - *(_DWORD *)(v46 + 72)) - *(_QWORD *)(v46 + 88) - 1;
                if ( v70 >= 0xFFFFFFFFLL )
                  v71 = (v69 * (v50 - *(_DWORD *)(v46 + 72)) - *(_QWORD *)(v46 + 88) - 1)
                      / (unsigned __int64)*(unsigned int *)(v46 + 76);
                else
                  LODWORD(v71) = (unsigned int)v70 / *(_DWORD *)(v46 + 76);
                v72 = v71 + *(_DWORD *)(v46 + 68);
                v83.y = v50;
                v83.x = v72 + 1;
              }
              else
              {
                v83.x = v50;
                v83.y = DDA_CLIPLINE::yCompute((DDA_CLIPLINE *)(v46 + 64), v50);
              }
              DDA_CLIPLINE::vUnflip(v48, (int *)&v83, &v83.y);
              *(_DWORD *)(v46 + 160) = v51;
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v83;
            }
          }
          *(_DWORD *)(*((_QWORD *)this + 18) + 152LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 112LL);
          *(_DWORD *)(*((_QWORD *)this + 18) + 156LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 116LL);
          *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) |= 0x20000u;
          for ( i = XCLIPOBJ::bFindFirstScan(this); i; i = XCLIPOBJ::bFindNextScan(this) )
          {
            NextSegment = XCLIPOBJ::bFindFirstSegment(this);
LABEL_54:
            if ( NextSegment )
              return 1LL;
          }
        }
      }
    }
  }
  return 0LL;
}
