/*
 * XREFs of RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x18013EB30
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbLengthW @ 0x1800DB9A0 (RtlStringCbLengthW.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpConvertRelativeToAbsoluteSecurityAttribute(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rbp
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // r13d
  unsigned int v12; // r11d
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int k; // edx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  unsigned int i; // r15d
  __int64 v20; // rcx
  unsigned int v21; // r11d
  unsigned int j; // ecx
  unsigned int v23; // edx
  unsigned int v24; // ebx
  int v25; // ecx
  char *v26; // r15
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // r12d
  char *v35; // rbp
  unsigned int m; // r13d
  unsigned int *v37; // rdx
  unsigned int v38; // ecx
  unsigned int v39; // eax
  __int64 v40; // r15
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  char *v43; // r15
  unsigned int v44; // r12d
  unsigned int n; // r13d
  __int64 v46; // r11
  unsigned int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // ecx
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v53; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = a2;
  v53 = 0LL;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  if ( a2 < 0x14 )
    return (unsigned int)-1073741705;
  if ( a2 < *a1 )
    return (unsigned int)-1073741705;
  v10 = a2 - *a1;
  if ( v10 < 4 )
    return (unsigned int)-1073741705;
  v9 = RtlStringCbLengthW((unsigned int *)((char *)a1 + *a1), v10, &v53);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v11 = v53 + 2;
  if ( (int)v53 + 2 < (unsigned int)v53 )
    return (unsigned int)-1073741675;
  if ( (int)v53 + 5 < (unsigned int)(v53 + 2) )
    return (unsigned int)-1073741675;
  v12 = ((v53 + 5) & 0xFFFFFFFC) + 32;
  if ( v12 < 0x20 )
    return (unsigned int)-1073741675;
  v13 = a1[3];
  if ( (unsigned __int64)(4 * v13) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (int)v5 - 16 < (unsigned int)(4 * v13) )
    return (unsigned int)-1073741705;
  switch ( *((_WORD *)a1 + 2) )
  {
    case 1:
    case 2:
      goto LABEL_43;
    case 3:
      if ( (unsigned __int64)(8 * v13) > 0xFFFFFFFF || v12 + 8 * (_DWORD)v13 < v12 )
        return (unsigned int)-1073741675;
      v12 += 8 * v13;
      for ( i = 0; i < a1[3]; ++i )
      {
        v20 = a1[i + 4];
        if ( (unsigned int)v5 < (unsigned int)v20 || (unsigned int)(v5 - v20) < 2 )
          return (unsigned int)-1073741705;
        v9 = RtlStringCbLengthW((unsigned int *)((char *)a1 + v20), (unsigned int)(v5 - v20), &v53);
        if ( v9 < 0 )
          return (unsigned int)v9;
        if ( (int)v53 + 2 < (unsigned int)v53
          || (int)v53 + 5 < (unsigned int)(v53 + 2)
          || (((_DWORD)v53 + 5) & 0xFFFFFFFC) + v21 < v21 )
        {
          return (unsigned int)-1073741675;
        }
        v12 = ((v53 + 5) & 0xFFFFFFFC) + v21;
      }
      goto LABEL_49;
    case 5:
      goto LABEL_19;
    case 6:
LABEL_43:
      if ( (unsigned __int64)(8 * v13) > 0xFFFFFFFF || v12 + 8 * (_DWORD)v13 < v12 )
        return (unsigned int)-1073741675;
      v12 += 8 * v13;
      for ( j = 0; j < (unsigned int)v13; ++j )
      {
        v23 = a1[j + 4];
        if ( (unsigned int)v5 < v23 || (unsigned int)v5 - v23 < 8 )
          return (unsigned int)-1073741705;
      }
      goto LABEL_49;
  }
  if ( *((_WORD *)a1 + 2) != 16 )
    goto LABEL_49;
LABEL_19:
  v14 = 16 * v13;
  if ( (unsigned __int64)(16 * v13) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v15 = v14 + v12;
  if ( v14 + v12 < v12 )
    return (unsigned int)-1073741675;
  for ( k = 0; ; ++k )
  {
    v12 = v15;
    if ( k >= (unsigned int)v13 )
      break;
    v17 = a1[k + 4];
    if ( (unsigned int)v5 < (unsigned int)v17 || (unsigned int)(v5 - v17) < 4 )
      return (unsigned int)-1073741705;
    v18 = *(unsigned int *)((char *)a1 + v17);
    if ( (int)v17 + 4 < (unsigned int)v17 )
      return (unsigned int)-1073741675;
    if ( (int)v5 - ((int)v17 + 4) < v18 )
      return (unsigned int)-1073741705;
    if ( v18 + 3 < v18 )
      return (unsigned int)-1073741675;
    v15 = ((v18 + 3) & 0xFFFFFFFC) + v12;
    if ( v15 < v12 )
      return (unsigned int)-1073741675;
  }
LABEL_49:
  if ( *a4 < v12 )
  {
    *a4 = v12;
    return (unsigned int)-1073741789;
  }
  if ( !a3 )
    return (unsigned int)-1073741811;
  *a4 = v12;
  memset_thunk_772440563353939046(a3, 0, v12);
  *((_WORD *)a3 + 4) = *((_WORD *)a1 + 2);
  *((_WORD *)a3 + 5) = *((_WORD *)a1 + 3);
  a3[3] = a1[2];
  a3[4] = a1[3];
  if ( v11 >= 0xFFFFFFE0 || v11 + 35 < v11 + 32 )
    return (unsigned int)-1073741675;
  v24 = (v11 + 35) & 0xFFFFFFFC;
  memmove(a3 + 8, (char *)a1 + *a1, v11);
  v25 = *((unsigned __int16 *)a3 + 4);
  v26 = (char *)a3 + v24;
  *(_QWORD *)a3 = a3 + 8;
  v27 = v25 - 1;
  if ( !v27 )
    goto LABEL_78;
  v28 = v27 - 1;
  if ( !v28 )
    goto LABEL_78;
  v29 = v28 - 1;
  if ( v29 )
  {
    v30 = v29 - 2;
    if ( !v30 )
    {
LABEL_60:
      v32 = 16LL * a3[4];
      if ( v32 <= 0xFFFFFFFF )
      {
        v33 = (unsigned int)v32 + v24;
        if ( (unsigned int)v33 >= v24 )
        {
          v34 = v32 + v24;
          v35 = (char *)a3 + v33;
          v9 = 0;
          *((_QWORD *)a3 + 3) = v26;
          for ( m = 0; m < a3[4]; ++m )
          {
            v37 = &a1[m];
            v38 = *(unsigned int *)((char *)a1 + v37[4]);
            LODWORD(v53) = v38;
            v39 = v38 + v34;
            if ( v38 + v34 < v34 || v39 + 3 < v39 )
              return (unsigned int)-1073741675;
            v40 = 2LL * m;
            v34 = (v39 + 3) & 0xFFFFFFFC;
            v9 = 0;
            *(_QWORD *)(*((_QWORD *)a3 + 3) + 16LL * m) = 0LL;
            if ( v38 )
            {
              memmove(v35, (char *)a1 + v37[4] + 4, v38);
              v38 = v53;
              *(_QWORD *)(*((_QWORD *)a3 + 3) + 16LL * m) = v35;
            }
            v35 = (char *)a3 + v34;
            *(_DWORD *)(*((_QWORD *)a3 + 3) + 8 * v40 + 8) = v38;
          }
          return (unsigned int)v9;
        }
      }
      return (unsigned int)-1073741675;
    }
    v31 = v30 - 1;
    if ( v31 )
    {
      if ( v31 == 10 )
        goto LABEL_60;
      return (unsigned int)-1073741705;
    }
LABEL_78:
    v49 = a3[4];
    v50 = 8LL * v49;
    if ( v50 <= 0xFFFFFFFF && v24 + (unsigned int)v50 >= v24 )
    {
      *((_QWORD *)a3 + 3) = v26;
      v9 = 0;
      if ( v49 )
      {
        do
        {
          v51 = v4++;
          *(_QWORD *)(*((_QWORD *)a3 + 3) + 8 * v51) = *(_QWORD *)((char *)a1 + a1[v51 + 4]);
        }
        while ( v4 < a3[4] );
      }
      return (unsigned int)v9;
    }
    return (unsigned int)-1073741675;
  }
  v41 = 8LL * a3[4];
  if ( v41 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v42 = (unsigned int)v41 + v24;
  if ( (unsigned int)v42 < v24 )
    return (unsigned int)-1073741675;
  *((_QWORD *)a3 + 3) = v26;
  v9 = 0;
  v43 = (char *)a3 + v42;
  v44 = v42;
  for ( n = 0; n < a3[4]; ++n )
  {
    v9 = RtlStringCbLengthW((unsigned int *)((char *)a1 + a1[n + 4]), v5, &v53);
    if ( v9 < 0 )
      break;
    v47 = v53 + 2;
    if ( (int)v53 + 2 < (unsigned int)v53 )
      return (unsigned int)-1073741675;
    v48 = v47 + v44;
    if ( v47 + v44 < v44 || v48 + 3 < v48 )
      return (unsigned int)-1073741675;
    v9 = 0;
    v44 = (v48 + 3) & 0xFFFFFFFC;
    memmove(v43, (char *)a1 + a1[v46 + 4], v47);
    *(_QWORD *)(*((_QWORD *)a3 + 3) + 8LL * n) = v43;
    v43 = (char *)a3 + v44;
  }
  return (unsigned int)v9;
}
