/*
 * XREFs of ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18002A150
 * Callers:
 *     ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18002B340 (-IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUn.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180089340 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18012D6D0 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x1801E62F8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CRgnData::Intersects(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  char *v2; // rdi
  int v3; // r9d
  __int64 v5; // rax
  int v6; // edx
  char *v7; // rsi
  char *v8; // rdi
  char *v9; // rdx
  int *v10; // rax
  char *v11; // r10
  int *v12; // r8
  char *v13; // rbx
  int *v14; // r11
  int v15; // ecx
  int v16; // r9d
  int *v17; // r8
  int v18; // ecx
  bool v19; // cc
  char *v20; // r10
  char *v21; // rbx
  int *v22; // r8
  int *v23; // r11
  int v24; // ecx
  char *v25; // r9
  int *v26; // r8
  char *v27; // r10
  int *v28; // rcx
  int v29; // r11d
  int v30; // ebx
  int *v31; // r8
  int v32; // r11d
  char *v34; // r10
  char *v35; // rbx
  int *v36; // r8
  int *v37; // r11
  int v38; // ecx
  int v39; // r9d
  int *v40; // r8
  int v41; // ecx
  _DWORD *v42; // r9
  int v43; // ecx
  int v44; // r9d
  int *v45; // r8
  int v46; // ecx
  char *v47; // r9
  int *v48; // r8
  char *v49; // r10
  int *v50; // rcx
  int v51; // r11d
  int v52; // ebx
  int *v53; // r8
  int v54; // r11d
  char *v55; // r11
  int *v56; // r8
  char *v57; // rbx
  int *v58; // r10
  int v59; // r9d
  int v60; // ecx
  int *v61; // r8
  int v62; // r9d
  char *v63; // r9
  int *v64; // r8
  char *v65; // rbx
  int *v66; // r11
  int v67; // ecx
  int v68; // r10d
  int *v69; // r8
  int v70; // ecx
  char *v71; // r9
  int *v72; // r8
  char *v73; // rbx
  int *v74; // r11
  int v75; // ecx
  int v76; // r10d
  int *v77; // r8
  int v78; // ecx

  v2 = (char *)a2 + 12;
  v3 = *((_DWORD *)a2 + 3);
  v5 = *(int *)a2;
  v6 = *((_DWORD *)a1 + 3);
  v7 = (char *)a1 + 8 * *(int *)a1 + 12;
  v8 = &v2[8 * v5];
  if ( v6 >= v3 )
  {
    v10 = (int *)((char *)a2 + 20);
    if ( v6 <= v3 )
    {
      v9 = (char *)a1 + 20;
      v34 = (char *)a1 + *((int *)a1 + 4) + 12;
      v35 = (char *)a1 + *((int *)a1 + 6) + 20;
      v36 = (int *)((char *)a2 + *((int *)a2 + 4) + 12);
      v37 = (int *)((char *)v10 + v10[1]);
      if ( v36 == v37 || v34 == v35 )
      {
        do
        {
LABEL_18:
          while ( 1 )
          {
            v24 = *v10;
            if ( *(_DWORD *)v9 < *v10 )
              break;
            v10 += 2;
            if ( *(_DWORD *)v9 > v24 )
            {
              if ( v10 == (int *)v8 )
                return 0;
              v47 = &v9[*((int *)v9 - 1) - 8];
              v48 = (int *)((char *)v10 + *(v10 - 1) - 8);
              v49 = &v9[*((int *)v9 + 1)];
              v50 = (int *)((char *)v10 + v10[1]);
              if ( v48 != v50 && v47 != v49 )
              {
LABEL_74:
                v51 = *v48;
LABEL_75:
                v52 = *(_DWORD *)v47;
                if ( *(_DWORD *)v47 < v51 )
                {
                  while ( 1 )
                  {
                    v51 = *v48;
                    if ( *((_DWORD *)v47 + 1) > *v48 )
                      break;
                    if ( *((_DWORD *)v47 + 1) < v51 )
                    {
                      v47 += 8;
                      if ( v47 == v49 )
                        goto LABEL_18;
                      goto LABEL_75;
                    }
                    v47 += 8;
                    v53 = v48 + 1;
                    if ( v47 == v49 )
                      goto LABEL_18;
                    v52 = *(_DWORD *)v47;
LABEL_78:
                    v54 = *v53;
                    if ( v52 < *v53 )
                      return 1;
                    v48 = v53 + 1;
                    if ( v54 < *(_DWORD *)v47 )
                    {
                      if ( v48 != v50 )
                        goto LABEL_74;
                      goto LABEL_18;
                    }
                    if ( v48 == v50 )
                      goto LABEL_18;
                  }
                }
                else if ( *v48 < v52 )
                {
                  v53 = v48 + 1;
                  goto LABEL_78;
                }
                return 1;
              }
            }
            else
            {
              v9 += 8;
              if ( v9 == v7 || v10 == (int *)v8 )
                return 0;
              v25 = &v9[*((int *)v9 - 1) - 8];
              v26 = (int *)((char *)v10 + *(v10 - 1) - 8);
              v27 = &v9[*((int *)v9 + 1)];
              v28 = (int *)((char *)v10 + v10[1]);
              if ( v26 != v28 && v25 != v27 )
              {
LABEL_24:
                v29 = *v26;
                while ( 1 )
                {
                  v30 = *(_DWORD *)v25;
                  if ( *(_DWORD *)v25 >= v29 )
                    break;
                  while ( 1 )
                  {
                    v29 = *v26;
                    if ( *((_DWORD *)v25 + 1) < *v26 )
                      break;
                    if ( *((_DWORD *)v25 + 1) > v29 )
                      return 1;
                    v25 += 8;
                    v31 = v26 + 1;
                    if ( v25 == v27 )
                      goto LABEL_18;
                    v30 = *(_DWORD *)v25;
LABEL_28:
                    v32 = *v31;
                    if ( v30 < *v31 )
                      return 1;
                    v26 = v31 + 1;
                    if ( v32 < *(_DWORD *)v25 )
                    {
                      if ( v26 != v28 )
                        goto LABEL_24;
                      goto LABEL_18;
                    }
                    if ( v26 == v28 )
                      goto LABEL_18;
                  }
                  v25 += 8;
                  if ( v25 == v27 )
                    goto LABEL_18;
                }
                if ( *v26 < v30 )
                {
                  v31 = v26 + 1;
                  goto LABEL_28;
                }
                return 1;
              }
            }
          }
          v9 += 8;
          if ( v9 == v7 )
            return 0;
          v63 = &v9[*((int *)v9 - 1) - 8];
          v64 = (int *)((char *)v10 + *(v10 - 1) - 8);
          v65 = &v9[*((int *)v9 + 1)];
          v66 = (int *)((char *)v10 + v10[1]);
        }
        while ( v64 == v66 || v63 == v65 );
LABEL_104:
        v67 = *v64;
LABEL_105:
        v68 = *(_DWORD *)v63;
        if ( *(_DWORD *)v63 < v67 )
        {
          while ( 1 )
          {
            v67 = *v64;
            if ( *((_DWORD *)v63 + 1) > *v64 )
              break;
            if ( *((_DWORD *)v63 + 1) < v67 )
            {
              v63 += 8;
              if ( v63 == v65 )
                goto LABEL_18;
              goto LABEL_105;
            }
            v63 += 8;
            v69 = v64 + 1;
            if ( v63 == v65 )
              goto LABEL_18;
            v68 = *(_DWORD *)v63;
LABEL_108:
            v70 = *v69;
            if ( v68 < *v69 )
              return 1;
            v64 = v69 + 1;
            if ( v70 < *(_DWORD *)v63 )
            {
              if ( v64 != v66 )
                goto LABEL_104;
              goto LABEL_18;
            }
            if ( v64 == v66 )
              goto LABEL_18;
          }
        }
        else if ( *v64 < v68 )
        {
          v69 = v64 + 1;
          goto LABEL_108;
        }
      }
      else
      {
LABEL_41:
        v38 = *v36;
LABEL_42:
        v39 = *(_DWORD *)v34;
        if ( *(_DWORD *)v34 < v38 )
        {
          while ( 1 )
          {
            v38 = *v36;
            if ( *((_DWORD *)v34 + 1) > *v36 )
              break;
            if ( *((_DWORD *)v34 + 1) < v38 )
            {
              v34 += 8;
              if ( v34 == v35 )
                goto LABEL_18;
              goto LABEL_42;
            }
            v34 += 8;
            v40 = v36 + 1;
            if ( v34 == v35 )
              goto LABEL_18;
            v39 = *(_DWORD *)v34;
LABEL_45:
            v41 = *v40;
            if ( v39 < *v40 )
              return 1;
            v36 = v40 + 1;
            if ( v41 < *(_DWORD *)v34 )
            {
              if ( v36 == v37 )
                goto LABEL_18;
              goto LABEL_41;
            }
            if ( v36 == v37 )
              goto LABEL_18;
          }
        }
        else if ( *v36 < v39 )
        {
          v40 = v36 + 1;
          goto LABEL_45;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v19 = v6 <= *v10;
        if ( v6 < *v10 )
        {
          v9 = (char *)a1 + 20;
          v20 = (char *)a1 + *((int *)a1 + 4) + 12;
          v21 = (char *)a1 + *((int *)a1 + 6) + 20;
          v22 = (int *)((char *)v10 + *(v10 - 1) - 8);
          v23 = (int *)((char *)v10 + v10[1]);
          if ( v22 == v23 || v20 == v21 )
            goto LABEL_18;
LABEL_53:
          v43 = *v22;
LABEL_54:
          v44 = *(_DWORD *)v20;
          if ( *(_DWORD *)v20 < v43 )
          {
            while ( 1 )
            {
              v43 = *v22;
              if ( *((_DWORD *)v20 + 1) > *v22 )
                break;
              if ( *((_DWORD *)v20 + 1) < v43 )
              {
                v20 += 8;
                if ( v20 == v21 )
                  goto LABEL_18;
                goto LABEL_54;
              }
              v20 += 8;
              v45 = v22 + 1;
              if ( v20 == v21 )
                goto LABEL_18;
              v44 = *(_DWORD *)v20;
LABEL_57:
              v46 = *v45;
              if ( v44 < *v45 )
                return 1;
              v22 = v45 + 1;
              if ( v46 < *(_DWORD *)v20 )
              {
                if ( v22 == v23 )
                  goto LABEL_18;
                goto LABEL_53;
              }
              if ( v22 == v23 )
                goto LABEL_18;
            }
          }
          else if ( *v22 < v44 )
          {
            v45 = v22 + 1;
            goto LABEL_57;
          }
          return 1;
        }
        v42 = v10 + 2;
        v10 += 2;
        if ( v19 )
          break;
        if ( v10 == (int *)v8 )
          return 0;
      }
      v9 = (char *)a1 + 20;
      if ( v42 == (_DWORD *)v8 )
        return 0;
      v55 = (char *)a1 + *((int *)a1 + 4) + 12;
      v56 = (_DWORD *)((char *)v42 + *(v42 - 1) - 8);
      v57 = (char *)a1 + *((int *)a1 + 6) + 20;
      v58 = (_DWORD *)((char *)v42 + (int)v42[1]);
      if ( v56 == v58 || v55 == v57 )
        goto LABEL_18;
LABEL_89:
      v59 = *v56;
LABEL_90:
      v60 = *(_DWORD *)v55;
      if ( *(_DWORD *)v55 < v59 )
      {
        while ( 1 )
        {
          v59 = *v56;
          if ( *((_DWORD *)v55 + 1) > *v56 )
            break;
          if ( *((_DWORD *)v55 + 1) < v59 )
          {
            v55 += 8;
            if ( v55 == v57 )
              goto LABEL_18;
            goto LABEL_90;
          }
          v55 += 8;
          v61 = v56 + 1;
          if ( v55 == v57 )
            goto LABEL_18;
          v60 = *(_DWORD *)v55;
LABEL_93:
          v62 = *v61;
          if ( v60 < *v61 )
            return 1;
          v56 = v61 + 1;
          if ( v62 < *(_DWORD *)v55 )
          {
            if ( v56 == v58 )
              goto LABEL_18;
            goto LABEL_89;
          }
          if ( v56 == v58 )
            goto LABEL_18;
        }
      }
      else if ( *v56 < v60 )
      {
        v61 = v56 + 1;
        goto LABEL_93;
      }
    }
    return 1;
  }
  v9 = (char *)a1 + 20;
  while ( *(_DWORD *)v9 < v3 )
  {
    v9 += 8;
    if ( v9 == v7 )
      return 0;
  }
  v10 = (int *)((char *)a2 + 20);
  if ( *(_DWORD *)v9 > v3 )
  {
    v11 = &v9[*((int *)v9 - 1) - 8];
    v12 = (int *)((char *)a2 + *((int *)a2 + 4) + 12);
    v13 = &v9[*((int *)v9 + 1)];
    v14 = (int *)((char *)v10 + v10[1]);
    if ( v12 == v14 || v11 == v13 )
      goto LABEL_18;
LABEL_7:
    v15 = *v12;
LABEL_8:
    v16 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 < v15 )
    {
      while ( 1 )
      {
        v15 = *v12;
        if ( *((_DWORD *)v11 + 1) > *v12 )
          break;
        if ( *((_DWORD *)v11 + 1) < v15 )
        {
          v11 += 8;
          if ( v11 == v13 )
            goto LABEL_18;
          goto LABEL_8;
        }
        v11 += 8;
        v17 = v12 + 1;
        if ( v11 == v13 )
          goto LABEL_18;
        v16 = *(_DWORD *)v11;
LABEL_11:
        v18 = *v17;
        if ( v16 < *v17 )
          return 1;
        v12 = v17 + 1;
        if ( v18 < *(_DWORD *)v11 )
        {
          if ( v12 == v14 )
            goto LABEL_18;
          goto LABEL_7;
        }
        if ( v12 == v14 )
          goto LABEL_18;
      }
    }
    else if ( *v12 < v16 )
    {
      v17 = v12 + 1;
      goto LABEL_11;
    }
    return 1;
  }
  v9 += 8;
  if ( v9 != v7 )
  {
    v71 = &v9[*((int *)v9 - 1) - 8];
    v72 = (int *)((char *)a2 + *((int *)a2 + 4) + 12);
    v73 = &v9[*((int *)v9 + 1)];
    v74 = (int *)((char *)v10 + v10[1]);
    if ( v72 == v74 || v71 == v73 )
      goto LABEL_18;
LABEL_135:
    v75 = *v72;
LABEL_136:
    v76 = *(_DWORD *)v71;
    if ( *(_DWORD *)v71 < v75 )
    {
      while ( 1 )
      {
        v75 = *v72;
        if ( *((_DWORD *)v71 + 1) > *v72 )
          break;
        if ( *((_DWORD *)v71 + 1) < v75 )
        {
          v71 += 8;
          if ( v71 == v73 )
            goto LABEL_18;
          goto LABEL_136;
        }
        v71 += 8;
        v77 = v72 + 1;
        if ( v71 == v73 )
          goto LABEL_18;
        v76 = *(_DWORD *)v71;
LABEL_139:
        v78 = *v77;
        if ( v76 < *v77 )
          return 1;
        v72 = v77 + 1;
        if ( v78 < *(_DWORD *)v71 )
        {
          if ( v72 == v74 )
            goto LABEL_18;
          goto LABEL_135;
        }
        if ( v72 == v74 )
          goto LABEL_18;
      }
    }
    else if ( *v72 < v76 )
    {
      v77 = v72 + 1;
      goto LABEL_139;
    }
    return 1;
  }
  return 0;
}
