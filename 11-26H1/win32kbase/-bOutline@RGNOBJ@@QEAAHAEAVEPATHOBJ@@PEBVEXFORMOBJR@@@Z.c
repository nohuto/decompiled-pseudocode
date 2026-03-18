/*
 * XREFs of ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400C116C
 * Callers:
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400237E0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x1400C0E94 (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1400C1C30 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAA_NXZ @ 0x1400C2A10 (-bCloseFigure@EPATHOBJ@@QEAA_NXZ.c)
 */

__int64 __fastcall RGNOBJ::bOutline(RGNOBJ *this, struct EPATHOBJ *a2, const struct EXFORMOBJR *a3)
{
  const struct EXFORMOBJR *v4; // r13
  EPATHOBJ *v5; // rsi
  struct SCAN *pScan; // r12
  int v7; // eax
  int v8; // eax
  int v9; // r15d
  struct SCAN *v10; // rdi
  int v11; // r14d
  __int64 v12; // r13
  struct SCAN *v13; // rsi
  int v14; // r15d
  int v15; // r8d
  LONG v16; // edx
  int v17; // r9d
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  LONG v27; // eax
  signed int v28; // r14d
  int v29; // eax
  int v30; // eax
  struct SCAN *v31; // rsi
  int v32; // r15d
  int v33; // r8d
  LONG v34; // edx
  int v35; // r9d
  int v36; // ebx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  LONG v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  int v47; // ecx
  int v48; // ecx
  int v49; // eax
  LONG v51; // eax
  int v52; // eax
  int v53; // [rsp+20h] [rbp-48h]
  struct _POINTL v54; // [rsp+28h] [rbp-40h] BYREF
  int v55; // [rsp+30h] [rbp-38h]
  int v56; // [rsp+34h] [rbp-34h]
  struct _POINTL *v57; // [rsp+38h] [rbp-30h] BYREF
  __int64 v58; // [rsp+40h] [rbp-28h]
  __int64 v59; // [rsp+48h] [rbp-20h]
  __int16 v60; // [rsp+50h] [rbp-18h]
  int v61; // [rsp+B0h] [rbp+48h]
  int v64; // [rsp+C8h] [rbp+60h]

  v4 = a3;
  v5 = a2;
  pScan = REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)this + 24LL));
  v7 = *(_DWORD *)(*(_QWORD *)this + 48LL);
LABEL_2:
  v53 = v7 - 1;
  if ( !v7 )
    return 1LL;
  v8 = *(_DWORD *)pScan;
  v9 = 0;
  v64 = *(_DWORD *)pScan;
  while ( 1 )
  {
    v61 = v9;
    if ( v9 == v8 )
    {
      v7 = v53;
      pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
      goto LABEL_2;
    }
    if ( *((int *)pScan + v9 + 3) <= 0x7FFFFFF )
      break;
LABEL_6:
    v8 = v64;
    ++v9;
  }
  v54.x = *((_DWORD *)pScan + v9 + 3);
  v54.y = *((_DWORD *)pScan + 1);
  v10 = pScan;
  v11 = v9;
  if ( EPATHOBJ::bMoveTo(v5, v4, &v54) )
  {
    v12 = v9 & 1;
    v13 = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
    *((_DWORD *)pScan + v9 + 3) += 0x10000000;
    while ( 1 )
    {
      v14 = 1;
      while ( *(_DWORD *)v13 )
      {
        v15 = *((_DWORD *)v10 + v11 + 3);
        v16 = v15;
        if ( v15 > 0x7FFFFFF )
          v16 = v15 - 0x10000000;
        v17 = v12;
        v18 = *(_DWORD *)v13 + ~(_DWORD)v12;
        v19 = *((_DWORD *)v13 + v12 + 3);
        if ( v19 > 0x7FFFFFF )
          v19 -= 0x10000000;
        if ( v19 > v16 )
        {
          v18 = v12;
        }
        else
        {
          v20 = *((_DWORD *)v13 + v18 + 3);
          if ( v20 > 0x7FFFFFF )
            v20 -= 0x10000000;
          if ( v20 <= v16 )
            break;
          v21 = (unsigned int)(v18 + v12) >> 1;
          if ( (_DWORD)v21 != (_DWORD)v12 )
          {
            do
            {
              v22 = *((_DWORD *)v13 + v21 + 3);
              if ( v22 > 0x7FFFFFF )
                v22 -= 0x10000000;
              if ( v22 > v16 )
                v18 = v21;
              else
                v17 = v21;
              v21 = (unsigned int)(v18 + v17) >> 1;
            }
            while ( (_DWORD)v21 != v17 );
          }
        }
        if ( (v18 & 1) == (_DWORD)v12 )
        {
          v23 = *((_DWORD *)v13 + v18 + 3);
          if ( v23 > 0x7FFFFFF )
            v23 -= 0x10000000;
          v24 = *((_DWORD *)v10 + v11 + 4);
          if ( v24 > 0x7FFFFFF )
            v24 -= 0x10000000;
          if ( v23 >= v24 )
            break;
        }
        else
        {
          --v18;
          if ( v11 )
          {
            v48 = *((_DWORD *)v13 + v18 + 3);
            if ( v48 > 0x7FFFFFF )
              v48 -= 0x10000000;
            v49 = *((_DWORD *)v10 + v11 + 2);
            if ( v49 > 0x7FFFFFF )
              v49 -= 0x10000000;
            if ( v48 < v49 )
            {
              v14 = -1;
              break;
            }
          }
        }
        v25 = *((_DWORD *)v13 + v18 + 3);
        v26 = v25;
        if ( v25 > 0x7FFFFFF )
          v26 = v25 - 0x10000000;
        if ( v16 != v26 )
          goto LABEL_118;
        if ( v15 > 0x7FFFFFF )
          v15 -= 0x10000000;
        if ( v15 != v26 )
          goto LABEL_118;
        if ( v25 > 0x7FFFFFF )
          v25 -= 0x10000000;
        if ( v25 != v26 )
        {
LABEL_118:
          v54.x = v16;
          v54.y = *((_DWORD *)v10 + 2);
          v56 = *((_DWORD *)v10 + 2);
          v57 = &v54;
          v55 = v26;
          v59 = 0LL;
          v60 = 0;
          v58 = 2LL;
          if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(a2, a3, &v57) )
            return 0LL;
        }
        v10 = v13;
        v11 = v18;
        v13 = (struct SCAN *)((char *)v13 + (unsigned int)(4 * *(_DWORD *)v13 + 16));
        *((_DWORD *)v10 + v18 + 3) += 0x10000000;
      }
      v27 = *((_DWORD *)v10 + v11 + 3);
      if ( v27 > 0x7FFFFFF )
        v27 -= 0x10000000;
      v54.x = v27;
      v28 = v14 + v11;
      v54.y = *((_DWORD *)v10 + 2);
      v56 = *((_DWORD *)v10 + 2);
      v29 = *((_DWORD *)v10 + v28 + 3);
      if ( v29 > 0x7FFFFFF )
        v29 -= 0x10000000;
      v55 = v29;
      v57 = &v54;
      v59 = 0LL;
      v60 = 0;
      v58 = 2LL;
      if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(a2, a3, &v57) )
        break;
      v30 = *((_DWORD *)v10 - 1);
      *((_DWORD *)v10 + v28 + 3) += 0x10000000;
      v31 = (struct SCAN *)((char *)v10 - (unsigned int)(4 * v30 + 16));
      v32 = -1;
      while ( *(_DWORD *)v31 )
      {
        v33 = *((_DWORD *)v10 + v28 + 3);
        v34 = v33;
        if ( v33 > 0x7FFFFFF )
          v34 = v33 - 0x10000000;
        v35 = v12;
        v36 = *(_DWORD *)v31 + ~(_DWORD)v12;
        v37 = *((_DWORD *)v31 + v36 + 3);
        if ( v37 > 0x7FFFFFF )
          v37 -= 0x10000000;
        if ( v37 >= v34 )
        {
          v38 = *((_DWORD *)v31 + v12 + 3);
          if ( v38 > 0x7FFFFFF )
            v38 -= 0x10000000;
          if ( v38 >= v34 )
            break;
          v39 = (unsigned int)(v36 + v12) >> 1;
          if ( (_DWORD)v39 != (_DWORD)v12 )
          {
            do
            {
              v40 = *((_DWORD *)v31 + v39 + 3);
              if ( v40 > 0x7FFFFFF )
                v40 -= 0x10000000;
              if ( v40 >= v34 )
                v36 = v39;
              else
                v35 = v39;
              v39 = (unsigned int)(v36 + v35) >> 1;
            }
            while ( (_DWORD)v39 != v35 );
          }
          v36 = v35;
        }
        if ( (v36 & 1) == (_DWORD)v12 )
        {
          ++v36;
          if ( v28 < (unsigned int)(*(_DWORD *)v10 - 1) )
          {
            v41 = *((_DWORD *)v31 + v36 + 3);
            if ( v41 > 0x7FFFFFF )
              v41 -= 0x10000000;
            v42 = *((_DWORD *)v10 + v28 + 4);
            if ( v42 > 0x7FFFFFF )
              v42 -= 0x10000000;
            if ( v41 > v42 )
            {
              v32 = 1;
              break;
            }
          }
        }
        else
        {
          v44 = *((_DWORD *)v31 + v36 + 3);
          if ( v44 > 0x7FFFFFF )
            v44 -= 0x10000000;
          v45 = *((_DWORD *)v10 + v28 + 2);
          if ( v45 > 0x7FFFFFF )
            v45 -= 0x10000000;
          if ( v44 <= v45 )
            break;
        }
        v46 = *((_DWORD *)v31 + v36 + 3);
        v47 = v46;
        if ( v46 > 0x7FFFFFF )
          v47 = v46 - 0x10000000;
        if ( v34 != v47 )
          goto LABEL_119;
        if ( v33 > 0x7FFFFFF )
          v33 -= 0x10000000;
        if ( v33 != v47 )
          goto LABEL_119;
        if ( v46 > 0x7FFFFFF )
          v46 -= 0x10000000;
        if ( v46 != v47 )
        {
LABEL_119:
          v54.x = v34;
          v54.y = *((_DWORD *)v10 + 1);
          v56 = *((_DWORD *)v10 + 1);
          v57 = &v54;
          v55 = v47;
          v58 = 2LL;
          v59 = 0LL;
          v60 = 0;
          if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(a2, a3, &v57) )
            return 0LL;
        }
        v10 = v31;
        v28 = v36;
        v31 = (struct SCAN *)((char *)v31 - (unsigned int)(4 * *((_DWORD *)v31 - 1) + 16));
        *((_DWORD *)v10 + v36 + 3) += 0x10000000;
      }
      if ( pScan == v10 && v61 == v28 - 1 )
      {
        v43 = *((_DWORD *)v10 + v28 + 3);
        if ( v43 > 0x7FFFFFF )
          v43 -= 0x10000000;
        v4 = a3;
        v5 = a2;
        v54.x = v43;
        v54.y = *((_DWORD *)v10 + 1);
        v57 = &v54;
        v58 = 1LL;
        v59 = 0LL;
        v60 = 0;
        if ( (unsigned __int8)EPATHOBJ::bPolyLineTo(a2, a3, &v57) && EPATHOBJ::bCloseFigure(a2) )
        {
          v9 = v61;
          goto LABEL_6;
        }
        return 0LL;
      }
      v51 = *((_DWORD *)v10 + v28 + 3);
      if ( v51 > 0x7FFFFFF )
        v51 -= 0x10000000;
      v54.x = v51;
      v11 = v32 + v28;
      v54.y = *((_DWORD *)v10 + 1);
      v56 = *((_DWORD *)v10 + 1);
      v52 = *((_DWORD *)v10 + v11 + 3);
      if ( v52 > 0x7FFFFFF )
        v52 -= 0x10000000;
      v55 = v52;
      v59 = 0LL;
      v57 = &v54;
      v60 = 0;
      v58 = 2LL;
      if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(a2, a3, &v57) )
        return 0LL;
      v13 = (struct SCAN *)((char *)v10 + (unsigned int)(4 * *(_DWORD *)v10 + 16));
      *((_DWORD *)v10 + v11 + 3) += 0x10000000;
    }
  }
  return 0LL;
}
