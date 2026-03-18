/*
 * XREFs of ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18012E3B0
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18012DEDC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800ED070 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x18012EE20 (-Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Intersect(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r10
  int *v4; // r15
  __int64 v5; // r9
  const struct FastRegion::Internal::CStripe *v6; // r11
  int *v8; // rbx
  const struct FastRegion::Internal::CStripe *v9; // r12
  const struct FastRegion::Internal::CStripe *v11; // rdx
  char *v12; // r13
  int v13; // r9d
  int v14; // ecx
  int v15; // eax
  const struct FastRegion::Internal::CStripe *v16; // rdi
  const struct FastRegion::Internal::CStripe *v17; // r14
  __int64 v18; // rbp
  int *v19; // rcx
  char *v20; // rax
  char *v21; // r11
  int *v22; // rdx
  int *v23; // rcx
  int v24; // edx
  bool i; // zf
  int v26; // ecx
  const struct FastRegion::Internal::CStripe *v27; // r9
  int v28; // eax
  const struct FastRegion::Internal::CStripe *v29; // rdx
  const struct FastRegion::Internal::CStripe *v30; // r8
  __int64 v31; // rcx
  _DWORD *v32; // rcx
  int *v33; // rax
  int *v34; // r11
  int *v35; // rdx
  int *v36; // rbp
  int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 j; // rcx
  __int64 v41; // rax
  int *v42; // rcx
  _DWORD *v43; // rdx
  _DWORD *v44; // r8
  int v45; // eax
  const struct FastRegion::Internal::CStripe *v46; // r8
  bool v47; // cc
  int *v48; // rcx
  __int64 v49; // r11
  int *v50; // rdx
  _DWORD *v51; // rax
  int *v52; // rbp
  int v53; // eax
  char *v54; // rdx
  int *v55; // rcx
  int *v56; // rdx
  int *v57; // r10
  int *v58; // r11
  _DWORD *v59; // rax
  int v60; // eax
  int *v61; // r10
  int v62; // r9d
  int v63; // r8d
  int *v64; // rax
  int *v65; // rcx
  _DWORD *v66; // rdx
  int v67; // r9d
  int v68; // r8d
  int v69; // r9d
  int v70; // r9d
  int v71; // r8d
  int *v72; // rdx
  int *v73; // rax
  _DWORD *v74; // rcx
  int v75; // r9d
  int v76; // r8d
  int v77; // r9d
  int *v78; // r10
  int *v79; // r10
  int v80; // r9d
  int v81; // r8d
  int *v82; // rdx
  int *v83; // rcx
  _DWORD *v84; // rax
  int v85; // r9d
  int v86; // r8d
  int v87; // r9d
  int v88; // r9d
  int v89; // r8d
  int *v90; // rdx
  int *v91; // rcx
  _DWORD *v92; // rax
  int v93; // r9d
  int v94; // r8d
  int v95; // r9d

  v3 = *(int *)a2;
  v4 = (int *)((char *)this + 12);
  v5 = *(int *)a3;
  v6 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
  v8 = (int *)((char *)this + 12);
  v9 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 8 * v3 + 12);
  v11 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v12 = (char *)a3 + 8 * v5 + 12;
  v13 = 2 * (v5 + v3);
  *((_DWORD *)this + 4) = v13 * 4;
  v14 = *((_DWORD *)a3 + 3);
  v15 = *(_DWORD *)v6;
  if ( *(_DWORD *)v6 < v14 )
  {
    v17 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    while ( 1 )
    {
      v46 = v17;
      if ( *(_DWORD *)v17 >= v14 )
        break;
      v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
      if ( v17 == v9 )
        goto LABEL_25;
    }
    v16 = (const struct FastRegion::Internal::CStripe *)((char *)v11 + 8);
    if ( *(_DWORD *)v17 <= v14 )
    {
      v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
      if ( v17 == v9 )
        goto LABEL_25;
    }
    else
    {
      v46 = (const struct FastRegion::Internal::CStripe *)((char *)v17 - 8);
    }
    goto LABEL_137;
  }
  v16 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
  if ( v15 > v14 )
  {
    while ( 1 )
    {
      v46 = v16;
      v47 = v15 <= *(_DWORD *)v16;
      if ( v15 < *(_DWORD *)v16 )
      {
        *v4 = v15;
        v17 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
        v48 = (int *)((char *)v6 + *((int *)v6 + 1));
        v49 = (__int64)v6 + *((int *)v6 + 3) + 8;
        v50 = (int *)((char *)v16 + *((int *)v16 - 1) - 8);
        v51 = (int *)((char *)v4 + v4[1]);
        v52 = (int *)((char *)v16 + *((int *)v16 + 1));
        if ( v50 == v52 || v48 == (int *)v49 )
          goto LABEL_38;
        while ( 1 )
        {
          v79 = v8;
          while ( 1 )
          {
            v80 = *v50;
            v81 = *v48;
            if ( *v48 < *v50 )
            {
              v83 = v48 + 1;
              goto LABEL_105;
            }
            v82 = v50 + 1;
            if ( v80 < v81 )
            {
              v8 = v79;
              goto LABEL_100;
            }
LABEL_95:
            v83 = v48 + 1;
LABEL_96:
            *v51 = v81;
            v84 = v51 + 1;
            v85 = *v82;
            v8 = v79;
            v86 = *v83;
            if ( *v83 < *v82 )
            {
              *v84 = v86;
              v48 = v83 + 1;
              v51 = v84 + 1;
              if ( v48 != (int *)v49 )
                goto LABEL_100;
              goto LABEL_38;
            }
            v50 = v82 + 1;
            if ( v85 < v86 )
              break;
            *v84 = v86;
            v48 = v83 + 1;
            v51 = v84 + 1;
            if ( v48 == (int *)v49 || v50 == v52 )
              goto LABEL_38;
          }
          *v84 = v85;
          v51 = v84 + 1;
          if ( v50 == v52 )
            goto LABEL_38;
LABEL_105:
          v81 = *v50;
          if ( *v83 < *v50 )
          {
            v48 = v83 + 1;
            v8 = v79;
            if ( v48 != (int *)v49 )
              continue;
LABEL_38:
            v23 = v8 + 2;
            v53 = (_DWORD)v51 - ((_DWORD)v8 + 8);
            v8[3] = v53;
            i = v53 - v8[1] == -8;
            goto LABEL_6;
          }
          v82 = v50 + 1;
          if ( v81 < *v83 )
            goto LABEL_96;
          v48 = v83 + 1;
          v8 = v79;
          if ( v48 == (int *)v49 )
            goto LABEL_38;
LABEL_100:
          v87 = *v82;
          v81 = *v48;
          if ( *v48 < *v82 )
            goto LABEL_95;
          v50 = v82 + 1;
          if ( v87 >= v81 )
          {
            v83 = v48 + 1;
            if ( v50 == v52 )
              goto LABEL_38;
            goto LABEL_105;
          }
          if ( v50 == v52 )
            goto LABEL_38;
        }
      }
      v54 = (char *)v16 + 8;
      v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
      if ( v47 )
        break;
      if ( v54 == v12 )
        goto LABEL_25;
    }
    v17 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    if ( v54 == v12 )
      goto LABEL_25;
    v11 = v6;
LABEL_137:
    FastRegion::Internal::CStripe::Intersect((FastRegion::Internal::CStripe *)v4, v11, v46);
    v23 = v4 + 2;
    i = v4[3] - v4[1] == -8;
    goto LABEL_6;
  }
  *v4 = v15;
  v17 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
  v18 = (__int64)v6 + *((int *)v6 + 3) + 8;
  v19 = (int *)((char *)v6 + *((int *)v6 + 1));
  v20 = (char *)a3 + *((int *)a3 + 4) + 12;
  v21 = (char *)a3 + *((int *)a3 + 6) + 20;
  v22 = &v4[v13];
  if ( v20 != v21 && v19 != (int *)v18 )
  {
LABEL_53:
    while ( 2 )
    {
      v61 = v8;
      while ( 1 )
      {
        v62 = *(_DWORD *)v20;
        v63 = *v19;
        if ( *v19 < *(_DWORD *)v20 )
        {
          v65 = v19 + 1;
          goto LABEL_66;
        }
        v64 = (int *)(v20 + 4);
        if ( v62 < v63 )
        {
          v8 = v61;
          goto LABEL_61;
        }
LABEL_56:
        v65 = v19 + 1;
LABEL_57:
        *v22 = v63;
        v66 = v22 + 1;
        v67 = *v64;
        v8 = v61;
        v68 = *v65;
        if ( *v65 < *v64 )
        {
          *v66 = v68;
          v19 = v65 + 1;
          v22 = v66 + 1;
          if ( v19 != (int *)v18 )
            goto LABEL_61;
          goto LABEL_5;
        }
        v20 = (char *)(v64 + 1);
        if ( v67 < v68 )
          break;
        *v66 = v68;
        v19 = v65 + 1;
        v22 = v66 + 1;
        if ( v19 == (int *)v18 || v20 == v21 )
          goto LABEL_5;
      }
      *v66 = v67;
      v22 = v66 + 1;
      if ( v20 != v21 )
      {
        while ( 1 )
        {
LABEL_66:
          v63 = *(_DWORD *)v20;
          if ( *v65 < *(_DWORD *)v20 )
          {
            v19 = v65 + 1;
            v8 = v61;
            if ( v19 != (int *)v18 )
              goto LABEL_53;
            goto LABEL_5;
          }
          v64 = (int *)(v20 + 4);
          if ( v63 < *v65 )
            goto LABEL_57;
          v19 = v65 + 1;
          v8 = v61;
          if ( v19 == (int *)v18 )
            goto LABEL_5;
LABEL_61:
          v69 = *v64;
          v63 = *v19;
          if ( *v19 < *v64 )
            goto LABEL_56;
          v20 = (char *)(v64 + 1);
          if ( v69 < v63 )
            break;
          v65 = v19 + 1;
          if ( v20 == v21 )
            goto LABEL_5;
        }
        if ( v20 != v21 )
          continue;
      }
      break;
    }
  }
LABEL_5:
  v23 = v8 + 2;
  v24 = (_DWORD)v22 - ((_DWORD)v8 + 8);
  v8[3] = v24;
  for ( i = (_DWORD)this + v24 - *((_DWORD *)this + 4) - (_DWORD)v8 + 20 == 0; ; i = v8[3] - v8[1] == -8 )
  {
LABEL_6:
    if ( !i )
      v8 = v23;
    while ( 1 )
    {
LABEL_8:
      v26 = *(_DWORD *)v16;
      v27 = v16;
      v28 = *(_DWORD *)v17;
      v29 = v17;
      v30 = v16;
      if ( *(_DWORD *)v17 < *(_DWORD *)v16 )
      {
        v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
        *v8 = v28;
        if ( v17 == v9 )
          goto LABEL_21;
        v55 = (int *)((char *)v17 + *((int *)v17 - 1) - 8);
        v56 = (int *)((char *)v16 + *((int *)v16 - 1) - 8);
        v57 = (int *)((char *)v17 + *((int *)v17 + 1));
        v58 = (int *)((char *)v16 + *((int *)v16 + 1));
        v59 = (int *)((char *)v8 + v8[1]);
        if ( v56 == v58 || v55 == v57 )
          goto LABEL_46;
        while ( 1 )
        {
          while ( 1 )
          {
            v88 = *v56;
            v89 = *v55;
            if ( *v55 < *v56 )
            {
              v91 = v55 + 1;
              goto LABEL_124;
            }
            v90 = v56 + 1;
            if ( v88 >= v89 )
              break;
            while ( 1 )
            {
LABEL_119:
              v95 = *v90;
              v89 = *v55;
              if ( *v55 < *v90 )
                goto LABEL_116;
              v56 = v90 + 1;
              if ( v95 < v89 )
                goto LABEL_129;
              v91 = v55 + 1;
              if ( v56 == v58 )
                goto LABEL_46;
LABEL_124:
              v89 = *v56;
              if ( *v91 < *v56 )
                break;
              v90 = v56 + 1;
              if ( v89 < *v91 )
                goto LABEL_117;
              v55 = v91 + 1;
              if ( v55 == v57 )
                goto LABEL_46;
            }
            v55 = v91 + 1;
            if ( v55 == v57 )
              goto LABEL_46;
          }
LABEL_116:
          v91 = v55 + 1;
LABEL_117:
          *v59 = v89;
          v92 = v59 + 1;
          v93 = *v90;
          v94 = *v91;
          if ( *v91 < *v90 )
            break;
          v56 = v90 + 1;
          if ( v93 < v94 )
          {
            *v92 = v93;
            v59 = v92 + 1;
            if ( v56 != v58 )
              goto LABEL_124;
LABEL_46:
            v60 = (_DWORD)v59 - ((_DWORD)v8 + 8);
            v8[3] = v60;
            if ( v8 == v4 )
            {
              if ( v60 - v8[1] != -8 )
                v8 += 2;
            }
            else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v8) )
            {
              v8 = v78;
            }
            goto LABEL_8;
          }
          *v92 = v94;
          v55 = v91 + 1;
          v59 = v92 + 1;
          if ( v55 == v57 )
            goto LABEL_46;
LABEL_129:
          if ( v56 == v58 )
            goto LABEL_46;
        }
        *v92 = v94;
        v55 = v91 + 1;
        v59 = v92 + 1;
        if ( v55 != v57 )
          goto LABEL_119;
        goto LABEL_46;
      }
      v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
      if ( v28 > v26 )
        break;
      v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
      if ( v17 == v9 || v16 == (const struct FastRegion::Internal::CStripe *)v12 )
      {
        *v8 = v28;
        if ( v8 != v4 && (char *)v8 + v8[1] != (char *)v8 + *(v8 - 1) - 8 )
          goto LABEL_23;
        goto LABEL_25;
      }
      v31 = v8[1];
      *v8 = v28;
      v32 = (int *)((char *)v8 + v31);
      v33 = (int *)((char *)v29 + *((int *)v29 + 1));
      v34 = (int *)((char *)v17 + *((int *)v17 + 1));
      v35 = (int *)((char *)v30 + *((int *)v30 + 1));
      v36 = (int *)((char *)v16 + *((int *)v16 + 1));
      if ( v35 == v36 || v33 == v34 )
        goto LABEL_14;
LABEL_73:
      v70 = *v35;
      v71 = *v33;
      if ( *v33 >= *v35 )
      {
        v72 = v35 + 1;
        if ( v70 < v71 )
          goto LABEL_78;
LABEL_75:
        v73 = v33 + 1;
        goto LABEL_76;
      }
      v73 = v33 + 1;
      while ( 1 )
      {
        v71 = *v35;
        if ( *v73 < *v35 )
        {
          v33 = v73 + 1;
          if ( v33 == v34 )
            goto LABEL_14;
          goto LABEL_73;
        }
        v72 = v35 + 1;
        if ( v71 >= *v73 )
        {
          v33 = v73 + 1;
          if ( v33 == v34 )
            goto LABEL_14;
LABEL_78:
          v77 = *v72;
          v71 = *v33;
          if ( *v33 < *v72 )
            goto LABEL_75;
          v35 = v72 + 1;
          if ( v77 >= v71 )
          {
            v73 = v33 + 1;
            if ( v35 != v36 )
              continue;
            goto LABEL_14;
          }
LABEL_88:
          if ( v35 == v36 )
            goto LABEL_14;
          goto LABEL_73;
        }
LABEL_76:
        *v32 = v71;
        v74 = v32 + 1;
        v75 = *v72;
        v76 = *v73;
        if ( *v73 < *v72 )
          break;
        v35 = v72 + 1;
        if ( v75 >= v76 )
        {
          *v74 = v76;
          v33 = v73 + 1;
          v32 = v74 + 1;
          if ( v33 == v34 )
            goto LABEL_14;
          goto LABEL_88;
        }
        *v74 = v75;
        v32 = v74 + 1;
        if ( v35 == v36 )
          goto LABEL_14;
      }
      *v74 = v76;
      v33 = v73 + 1;
      v32 = v74 + 1;
      if ( v33 != v34 )
        goto LABEL_78;
LABEL_14:
      v37 = (_DWORD)v32 - ((_DWORD)v8 + 8);
      v8[3] = v37;
      v38 = v8[1];
      if ( v8 == v4 )
      {
        if ( v37 - (_DWORD)v38 == -8 )
          continue;
LABEL_40:
        v8 += 2;
        continue;
      }
      v39 = (int)((v38 - (*(v8 - 1) - 8LL)) >> 2);
      if ( v39 != (v37 - v38 + 8) >> 2 )
        goto LABEL_40;
      for ( j = 0LL; j < v39; ++j )
      {
        if ( *(int *)((char *)&v8[j] + v38) != *(int *)((char *)&v8[j - 2] + *(v8 - 1)) )
          goto LABEL_40;
      }
    }
    if ( v16 == (const struct FastRegion::Internal::CStripe *)v12 )
      break;
    FastRegion::Internal::CStripe::Intersect(
      (FastRegion::Internal::CStripe *)v8,
      v27,
      (const struct FastRegion::Internal::CStripe *)((char *)v17 - 8));
    if ( v8 != v4 )
    {
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v8) )
        v8 += 2;
      goto LABEL_8;
    }
    v23 = v8 + 2;
  }
  *v8 = v26;
LABEL_21:
  if ( v8 != v4 && (char *)v8 + v8[1] != (char *)v8 + *(v8 - 1) - 8 )
LABEL_23:
    v8 += 2;
LABEL_25:
  v41 = ((char *)v8 - (char *)this - 12) >> 3;
  *(_DWORD *)this = v41;
  if ( (_DWORD)v41 )
  {
    v42 = v8 - 4;
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    if ( v8 - 4 >= v4 )
    {
      v43 = (int *)((char *)v8 + *(v8 - 1) - 8);
      do
      {
        v44 = v43;
        v43 = (int *)((char *)v42 + v42[1]);
        if ( v43 != v44 )
        {
          if ( *((_DWORD *)this + 1) > *v43 )
            *((_DWORD *)this + 1) = *v43;
          v45 = *(v44 - 1);
          if ( *((_DWORD *)this + 2) < v45 )
            *((_DWORD *)this + 2) = v45;
        }
        v42 -= 2;
      }
      while ( v42 >= v4 );
    }
  }
}
