/*
 * XREFs of ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400994C4
 * Callers:
 *     GreExtCreateRegion @ 0x140096D00 (GreExtCreateRegion.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x140098DA0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400113C0 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x140099D60 (-bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV-$umptr_r@U_POINTL@@@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x140099EA4 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     ?addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z @ 0x14009A0C4 (-addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAA_NXZ @ 0x14009A930 (-bCloseFigure@EPATHOBJ@@QEAA_NXZ.c)
 */

__int64 __fastcall RGNOBJ::bOutline(RGNOBJ *this, struct EPATHOBJ *a2, const struct EXFORMOBJR *a3)
{
  const struct EXFORMOBJR *v4; // rdi
  struct SCAN *pScan; // r13
  int v7; // ecx
  int v8; // eax
  int v9; // r14d
  LONG v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // r10d
  struct SCAN *v13; // rsi
  struct SCAN *v14; // rdi
  int v15; // r12d
  int v16; // r8d
  LONG v17; // edx
  int v18; // ebx
  unsigned int v19; // r9d
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rcx
  LONG v29; // eax
  __int64 v30; // rcx
  LONG v31; // eax
  signed int v32; // r14d
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  struct SCAN *v36; // rdi
  int v37; // r12d
  int v38; // r8d
  LONG v39; // edx
  unsigned int v40; // r9d
  int v41; // ebx
  int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  __int64 v52; // rcx
  int v53; // ecx
  int v54; // eax
  LONG v56; // eax
  int v57; // eax
  int v58; // [rsp+20h] [rbp-40h]
  int v59; // [rsp+24h] [rbp-3Ch]
  struct _POINTL v60; // [rsp+28h] [rbp-38h] BYREF
  int v61; // [rsp+30h] [rbp-30h]
  int v62; // [rsp+34h] [rbp-2Ch]
  struct _POINTL *v63; // [rsp+38h] [rbp-28h] BYREF
  __int64 v64; // [rsp+40h] [rbp-20h]
  __int64 v65; // [rsp+48h] [rbp-18h]
  __int16 v66; // [rsp+50h] [rbp-10h]
  int v67; // [rsp+58h] [rbp-8h]
  int v68; // [rsp+5Ch] [rbp-4h]
  unsigned int v69; // [rsp+A0h] [rbp+40h]
  int v71; // [rsp+B8h] [rbp+58h]

  v4 = a3;
  pScan = REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)this + 24LL), a2);
  v7 = *(_DWORD *)(*(_QWORD *)this + 48LL);
LABEL_2:
  v59 = v7 - 1;
  if ( !v7 )
    return 1LL;
  v8 = *(_DWORD *)pScan;
  v9 = 0;
  v58 = *(_DWORD *)pScan;
  while ( 1 )
  {
    v71 = v9;
    if ( v9 == v8 )
    {
      pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
      v7 = v59;
      goto LABEL_2;
    }
    if ( *((int *)pScan + v9 + 3) <= 0x7FFFFFF )
      break;
LABEL_47:
    v8 = v58;
    ++v9;
  }
  v60.x = *((_DWORD *)pScan + v9 + 3);
  v65 = 0LL;
  v10 = *((_DWORD *)pScan + 1);
  v66 = 0;
  v11 = *((_QWORD *)a2 + 1);
  v60.y = v10;
  v63 = &v60;
  v64 = 1LL;
  if ( v11 && (unsigned __int8)PATH_CORE::bMoveTo(v11 + 24, v4, &v63) )
  {
    v12 = v9 & 1;
    v69 = v12;
    v13 = pScan;
    v14 = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
    *((_DWORD *)pScan + v9 + 3) += 0x10000000;
    while ( 1 )
    {
      v15 = 1;
      while ( *(_DWORD *)v14 )
      {
        v16 = *((_DWORD *)v13 + v9 + 3);
        v17 = v16;
        if ( v16 > 0x7FFFFFF )
          v17 = v16 - 0x10000000;
        v18 = *(_DWORD *)v14 - v12 - 1;
        v19 = v12;
        v20 = *((_DWORD *)v14 + v12 + 3);
        if ( v20 > 0x7FFFFFF )
          v20 -= 0x10000000;
        if ( v20 > v17 )
        {
          v18 = v12;
        }
        else
        {
          v21 = *((_DWORD *)v14 + v18 + 3);
          if ( v21 > 0x7FFFFFF )
            v21 -= 0x10000000;
          if ( v21 <= v17 )
            break;
          v22 = (unsigned int)(*(_DWORD *)v14 - 1) >> 1;
          if ( (_DWORD)v22 != v12 )
          {
            do
            {
              v23 = *((_DWORD *)v14 + v22 + 3);
              if ( v23 > 0x7FFFFFF )
                v23 -= 0x10000000;
              if ( v23 > v17 )
                v18 = v22;
              else
                v19 = v22;
              v22 = (v18 + v19) >> 1;
            }
            while ( (_DWORD)v22 != v19 );
          }
        }
        if ( (v18 & 1) == v12 )
        {
          v24 = *((_DWORD *)v14 + v18 + 3);
          if ( v24 > 0x7FFFFFF )
            v24 -= 0x10000000;
          v25 = *((_DWORD *)v13 + v9 + 4);
          if ( v25 > 0x7FFFFFF )
            v25 -= 0x10000000;
          if ( v24 >= v25 )
            break;
        }
        else
        {
          --v18;
          if ( v9 )
          {
            v53 = *((_DWORD *)v14 + v18 + 3);
            if ( v53 > 0x7FFFFFF )
              v53 -= 0x10000000;
            v54 = *((_DWORD *)v13 + v9 + 2);
            if ( v54 > 0x7FFFFFF )
              v54 -= 0x10000000;
            if ( v53 < v54 )
            {
              v15 = -1;
              break;
            }
          }
        }
        v26 = *((_DWORD *)v14 + v18 + 3);
        v27 = v26;
        if ( v26 > 0x7FFFFFF )
          v27 = v26 - 0x10000000;
        if ( v17 != v27 )
          goto LABEL_34;
        if ( v16 > 0x7FFFFFF )
          v16 -= 0x10000000;
        if ( v16 != v27 )
          goto LABEL_34;
        if ( v26 > 0x7FFFFFF )
          v26 -= 0x10000000;
        if ( v26 != v27 )
        {
LABEL_34:
          v60.x = v17;
          v60.y = *((_DWORD *)v13 + 2);
          v62 = *((_DWORD *)v13 + 2);
          v28 = *((_QWORD *)a2 + 1);
          v61 = v27;
          if ( !v28 )
            return 0LL;
          v65 = 0LL;
          v67 = 0;
          v66 = 0;
          v63 = &v60;
          v64 = 2LL;
          v68 = 2;
          if ( !PATH_CORE::addpoints((PATH_CORE *)(v28 + 24), a3, (struct PATHDATAL *)&v63) )
            return 0LL;
          *((_DWORD *)a2 + 1) += 2;
          *(_DWORD *)a2 &= ~2u;
          v12 = v69;
        }
        v13 = v14;
        v9 = v18;
        v14 = (struct SCAN *)((char *)v14 + (unsigned int)(4 * *(_DWORD *)v14 + 16));
        *((_DWORD *)v13 + v18 + 3) += 0x10000000;
      }
      v31 = *((_DWORD *)v13 + v9 + 3);
      if ( v31 > 0x7FFFFFF )
        v31 -= 0x10000000;
      v60.x = v31;
      v32 = v15 + v9;
      v60.y = *((_DWORD *)v13 + 2);
      v62 = *((_DWORD *)v13 + 2);
      v33 = *((_DWORD *)v13 + v32 + 3);
      if ( v33 > 0x7FFFFFF )
        v33 -= 0x10000000;
      v34 = *((_QWORD *)a2 + 1);
      v61 = v33;
      if ( !v34 )
        break;
      v65 = 0LL;
      v67 = 0;
      v66 = 0;
      v63 = &v60;
      v64 = 2LL;
      v68 = 2;
      if ( !PATH_CORE::addpoints((PATH_CORE *)(v34 + 24), a3, (struct PATHDATAL *)&v63) )
        break;
      *((_DWORD *)a2 + 1) += 2;
      *(_DWORD *)a2 &= ~2u;
      v35 = *((_DWORD *)v13 - 1);
      *((_DWORD *)v13 + v32 + 3) += 0x10000000;
      v36 = (struct SCAN *)((char *)v13 - (unsigned int)(4 * v35 + 16));
      v37 = -1;
      while ( *(_DWORD *)v36 )
      {
        v38 = *((_DWORD *)v13 + v32 + 3);
        v39 = v38;
        if ( v38 > 0x7FFFFFF )
          v39 = v38 - 0x10000000;
        v40 = v69;
        v41 = *(_DWORD *)v36 - v69 - 1;
        v42 = *((_DWORD *)v36 + v41 + 3);
        if ( v42 > 0x7FFFFFF )
          v42 -= 0x10000000;
        if ( v42 >= v39 )
        {
          v43 = *((_DWORD *)v36 + v69 + 3);
          if ( v43 > 0x7FFFFFF )
            v43 -= 0x10000000;
          if ( v43 >= v39 )
            break;
          v44 = (unsigned int)(*(_DWORD *)v36 - 1) >> 1;
          if ( (_DWORD)v44 != v69 )
          {
            do
            {
              v45 = *((_DWORD *)v36 + v44 + 3);
              if ( v45 > 0x7FFFFFF )
                v45 -= 0x10000000;
              if ( v45 >= v39 )
                v41 = v44;
              else
                v40 = v44;
              v44 = (v41 + v40) >> 1;
            }
            while ( (_DWORD)v44 != v40 );
          }
          v41 = v40;
        }
        if ( (v41 & 1) == v69 )
        {
          ++v41;
          if ( v32 < (unsigned int)(*(_DWORD *)v13 - 1) )
          {
            v46 = *((_DWORD *)v36 + v41 + 3);
            if ( v46 > 0x7FFFFFF )
              v46 -= 0x10000000;
            v47 = *((_DWORD *)v13 + v32 + 4);
            if ( v47 > 0x7FFFFFF )
              v47 -= 0x10000000;
            if ( v46 > v47 )
            {
              v37 = 1;
              break;
            }
          }
        }
        else
        {
          v48 = *((_DWORD *)v36 + v41 + 3);
          if ( v48 > 0x7FFFFFF )
            v48 -= 0x10000000;
          v49 = *((_DWORD *)v13 + v32 + 2);
          if ( v49 > 0x7FFFFFF )
            v49 -= 0x10000000;
          if ( v48 <= v49 )
            break;
        }
        v50 = *((_DWORD *)v36 + v41 + 3);
        v51 = v50;
        if ( v50 > 0x7FFFFFF )
          v51 = v50 - 0x10000000;
        if ( v39 != v51 )
          goto LABEL_87;
        if ( v38 > 0x7FFFFFF )
          v38 -= 0x10000000;
        if ( v38 != v51 )
          goto LABEL_87;
        if ( v50 > 0x7FFFFFF )
          v50 -= 0x10000000;
        if ( v50 != v51 )
        {
LABEL_87:
          v60.x = v39;
          v60.y = *((_DWORD *)v13 + 1);
          v62 = *((_DWORD *)v13 + 1);
          v52 = *((_QWORD *)a2 + 1);
          v61 = v51;
          if ( !v52 )
            return 0LL;
          v65 = 0LL;
          v67 = 0;
          v66 = 0;
          v63 = &v60;
          v64 = 2LL;
          v68 = 2;
          if ( !PATH_CORE::addpoints((PATH_CORE *)(v52 + 24), a3, (struct PATHDATAL *)&v63) )
            return 0LL;
          *((_DWORD *)a2 + 1) += 2;
          *(_DWORD *)a2 &= ~2u;
        }
        v13 = v36;
        v32 = v41;
        v36 = (struct SCAN *)((char *)v36 - (unsigned int)(4 * *((_DWORD *)v36 - 1) + 16));
        *((_DWORD *)v13 + v41 + 3) += 0x10000000;
      }
      if ( pScan == v13 && v71 == v32 - 1 )
      {
        v29 = *((_DWORD *)v13 + v32 + 3);
        if ( v29 > 0x7FFFFFF )
          v29 -= 0x10000000;
        v30 = *((_QWORD *)a2 + 1);
        v60.x = v29;
        v60.y = *((_DWORD *)v13 + 1);
        if ( v30 )
        {
          v65 = 0LL;
          v67 = 0;
          v4 = a3;
          v66 = 0;
          v63 = &v60;
          v64 = 1LL;
          v68 = 1;
          if ( PATH_CORE::addpoints((PATH_CORE *)(v30 + 24), a3, (struct PATHDATAL *)&v63) )
          {
            ++*((_DWORD *)a2 + 1);
            *(_DWORD *)a2 &= ~2u;
            if ( EPATHOBJ::bCloseFigure(a2) )
            {
              v9 = v71;
              goto LABEL_47;
            }
          }
        }
        return 0LL;
      }
      v56 = *((_DWORD *)v13 + v32 + 3);
      if ( v56 > 0x7FFFFFF )
        v56 -= 0x10000000;
      v60.x = v56;
      v9 = v37 + v32;
      v60.y = *((_DWORD *)v13 + 1);
      v62 = *((_DWORD *)v13 + 1);
      v57 = *((_DWORD *)v13 + v9 + 3);
      if ( v57 > 0x7FFFFFF )
        v57 -= 0x10000000;
      v61 = v57;
      if ( !EPATHOBJ::bPolyLineTo(a2, a3, &v60, 2u) )
        return 0LL;
      v12 = v69;
      v14 = (struct SCAN *)((char *)v13 + (unsigned int)(4 * *(_DWORD *)v13 + 16));
      *((_DWORD *)v13 + v9 + 3) += 0x10000000;
    }
  }
  return 0LL;
}
