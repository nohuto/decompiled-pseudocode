/*
 * XREFs of MiCompactServiceTable @ 0x14088106C
 * Callers:
 *     MmCompactServiceTable @ 0x140881670 (MmCompactServiceTable.c)
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiSetImageProtection @ 0x14038D6E0 (MiSetImageProtection.c)
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     KeCompactServiceTable @ 0x1405EBF24 (KeCompactServiceTable.c)
 *     strcmp @ 0x140742840 (strcmp.c)
 *     MiSnapDriverRange @ 0x140ACB6BC (MiSnapDriverRange.c)
 */

__int64 __fastcall MiCompactServiceTable(__int64 a1)
{
  char *v1; // rsi
  int *v3; // rax
  int *v4; // rdi
  int v5; // r12d
  char *v6; // rcx
  int v7; // r15d
  int v8; // r15d
  int v9; // r14d
  int v10; // eax
  int *v11; // rcx
  char *v12; // rsi
  unsigned int *v13; // rax
  unsigned int *v14; // rdi
  int v15; // r12d
  char *v16; // rcx
  unsigned int v17; // r15d
  int v18; // r15d
  int v19; // r14d
  int v20; // eax
  unsigned int *v21; // rcx
  char *v22; // rsi
  unsigned __int8 *v23; // rax
  unsigned __int8 *v24; // rdi
  int v25; // r12d
  char *v26; // rcx
  int v27; // r15d
  int v28; // r15d
  int v29; // r14d
  int v30; // eax
  unsigned __int8 *v31; // rcx
  char *v32; // rsi
  int *v33; // rax
  int *v34; // rdi
  int v35; // r12d
  char *v36; // rcx
  int v37; // r15d
  int v38; // r15d
  int v39; // r14d
  int v40; // eax
  int *v41; // rcx
  char *v42; // rsi
  unsigned int *v43; // rax
  unsigned int *v44; // rdi
  int v45; // r12d
  char *v46; // rcx
  unsigned int v47; // r15d
  int v48; // r15d
  int v49; // r14d
  int v50; // eax
  unsigned int *v51; // r12
  char *v52; // rsi
  unsigned __int8 *v53; // rax
  unsigned __int8 *v54; // rdi
  char *v55; // rcx
  int v56; // r15d
  signed int v57; // eax
  signed int v58; // r15d
  int v59; // r14d
  int v60; // eax
  unsigned __int8 *v61; // rsi
  int v62; // edi
  unsigned __int64 v63; // r14
  __int64 v64; // rcx
  __int64 v66; // [rsp+30h] [rbp-48h] BYREF
  char *v67; // [rsp+38h] [rbp-40h]
  __int64 v68; // [rsp+40h] [rbp-38h]
  int *v69; // [rsp+48h] [rbp-30h]
  int *v70; // [rsp+50h] [rbp-28h]
  unsigned int *v71; // [rsp+58h] [rbp-20h]
  unsigned __int8 *v72; // [rsp+60h] [rbp-18h]
  ULONG Size; // [rsp+C0h] [rbp+48h] BYREF
  char *v74; // [rsp+C8h] [rbp+50h] BYREF
  char *v75; // [rsp+D0h] [rbp+58h]
  __int64 v76; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *(char **)(a1 + 48);
  v76 = 0LL;
  v66 = 0LL;
  Size = 0;
  v3 = (int *)RtlImageDirectoryEntryToData(v1, 1u, 0, &Size);
  v4 = v3;
  if ( v3 )
  {
    v5 = 0;
    v6 = &v1[v3[8]];
    v7 = v3[6];
    v75 = &v1[v3[9]];
    v8 = v7 - 1;
    v74 = v6;
    while ( v8 >= v5 )
    {
      v9 = (v5 + v8) >> 1;
      v67 = (char *)v9;
      v10 = strcmp("W32pServiceTable", &v1[*(unsigned int *)&v6[4 * v9]]);
      if ( v10 >= 0 )
      {
        if ( v10 <= 0 )
        {
          if ( *(unsigned __int16 *)&v75[2 * (_QWORD)v67] < (unsigned int)v4[5] )
          {
            v11 = (int *)&v1[*(unsigned int *)&v1[4 * *(unsigned __int16 *)&v75[2 * (_QWORD)v67] + v4[7]]];
            v69 = v11;
            if ( v11 <= v4 || v11 >= (int *)((char *)v4 + Size) )
            {
              if ( v11 )
              {
                v12 = *(char **)(a1 + 48);
                Size = 0;
                v13 = (unsigned int *)RtlImageDirectoryEntryToData(v12, 1u, 0, &Size);
                v14 = v13;
                if ( v13 )
                {
                  v15 = 0;
                  v16 = &v12[v13[8]];
                  v17 = v13[6];
                  v75 = &v12[v13[9]];
                  v18 = v17 - 1;
                  v74 = v16;
                  while ( v18 >= v15 )
                  {
                    v19 = (v15 + v18) >> 1;
                    v67 = (char *)v19;
                    v20 = strcmp("W32pServiceLimit", &v12[*(unsigned int *)&v16[4 * v19]]);
                    if ( v20 >= 0 )
                    {
                      if ( v20 <= 0 )
                      {
                        if ( *(unsigned __int16 *)&v75[2 * (_QWORD)v67] < v14[5] )
                        {
                          v21 = (unsigned int *)&v12[*(unsigned int *)&v12[4
                                                                         * *(unsigned __int16 *)&v75[2 * (_QWORD)v67]
                                                                         + v14[7]]];
                          v71 = v21;
                          if ( v21 <= v14 || v21 >= (unsigned int *)((char *)v14 + Size) )
                          {
                            if ( v21 )
                            {
                              v22 = *(char **)(a1 + 48);
                              Size = 0;
                              v23 = (unsigned __int8 *)RtlImageDirectoryEntryToData(v22, 1u, 0, &Size);
                              v24 = v23;
                              if ( v23 )
                              {
                                v25 = 0;
                                v26 = &v22[*((unsigned int *)v23 + 8)];
                                v27 = *((_DWORD *)v23 + 6);
                                v75 = &v22[*((unsigned int *)v23 + 9)];
                                v28 = v27 - 1;
                                v74 = v26;
                                while ( v28 >= v25 )
                                {
                                  v29 = (v25 + v28) >> 1;
                                  v67 = (char *)v29;
                                  v30 = strcmp("W32pArgumentTable", &v22[*(unsigned int *)&v26[4 * v29]]);
                                  if ( v30 >= 0 )
                                  {
                                    if ( v30 <= 0 )
                                    {
                                      if ( (unsigned int)*(unsigned __int16 *)&v75[2 * (_QWORD)v67] < *((_DWORD *)v24 + 5) )
                                      {
                                        v31 = (unsigned __int8 *)&v22[*(unsigned int *)&v22[4
                                                                                          * *(unsigned __int16 *)&v75[2 * (_QWORD)v67]
                                                                                          + *((unsigned int *)v24 + 7)]];
                                        v72 = v31;
                                        if ( v31 <= v24 || v31 >= &v24[Size] )
                                        {
                                          if ( v31 )
                                          {
                                            v32 = *(char **)(a1 + 48);
                                            Size = 0;
                                            v33 = (int *)RtlImageDirectoryEntryToData(v32, 1u, 0, &Size);
                                            v34 = v33;
                                            if ( v33 )
                                            {
                                              v35 = 0;
                                              v36 = &v32[v33[8]];
                                              v37 = v33[6];
                                              v75 = &v32[v33[9]];
                                              v38 = v37 - 1;
                                              v74 = v36;
                                              while ( v38 >= v35 )
                                              {
                                                v39 = (v35 + v38) >> 1;
                                                v67 = (char *)v39;
                                                v40 = strcmp(
                                                        "W32pServiceTableFilter",
                                                        &v32[*(unsigned int *)&v36[4 * v39]]);
                                                if ( v40 >= 0 )
                                                {
                                                  if ( v40 <= 0 )
                                                  {
                                                    if ( *(unsigned __int16 *)&v75[2 * (_QWORD)v67] < (unsigned int)v34[5] )
                                                    {
                                                      v41 = (int *)&v32[*(unsigned int *)&v32[4
                                                                                            * *(unsigned __int16 *)&v75[2 * (_QWORD)v67]
                                                                                            + v34[7]]];
                                                      v70 = v41;
                                                      if ( v41 <= v34 || v41 >= (int *)((char *)v34 + Size) )
                                                      {
                                                        if ( v41 )
                                                        {
                                                          v42 = *(char **)(a1 + 48);
                                                          Size = 0;
                                                          v43 = (unsigned int *)RtlImageDirectoryEntryToData(
                                                                                  v42,
                                                                                  1u,
                                                                                  0,
                                                                                  &Size);
                                                          v44 = v43;
                                                          if ( v43 )
                                                          {
                                                            v45 = 0;
                                                            v46 = &v42[v43[8]];
                                                            v47 = v43[6];
                                                            v75 = &v42[v43[9]];
                                                            v48 = v47 - 1;
                                                            v74 = v46;
                                                            while ( v48 >= v45 )
                                                            {
                                                              v49 = (v45 + v48) >> 1;
                                                              v67 = (char *)v49;
                                                              v50 = strcmp(
                                                                      "W32pServiceLimitFilter",
                                                                      &v42[*(unsigned int *)&v46[4 * v49]]);
                                                              if ( v50 >= 0 )
                                                              {
                                                                if ( v50 <= 0 )
                                                                {
                                                                  if ( *(unsigned __int16 *)&v75[2 * (_QWORD)v67] < v44[5] )
                                                                  {
                                                                    v51 = (unsigned int *)&v42[*(unsigned int *)&v42[4 * *(unsigned __int16 *)&v75[2 * (_QWORD)v67] + v44[7]]];
                                                                    if ( v51 <= v44
                                                                      || v51 >= (unsigned int *)((char *)v44 + Size) )
                                                                    {
                                                                      if ( v51 )
                                                                      {
                                                                        v52 = *(char **)(a1 + 48);
                                                                        LODWORD(v74) = 0;
                                                                        v53 = (unsigned __int8 *)RtlImageDirectoryEntryToData(
                                                                                                   v52,
                                                                                                   1u,
                                                                                                   0,
                                                                                                   (PULONG)&v74);
                                                                        v54 = v53;
                                                                        if ( v53 )
                                                                        {
                                                                          v55 = &v52[*((unsigned int *)v53 + 8)];
                                                                          v56 = *((_DWORD *)v53 + 6);
                                                                          v67 = &v52[*((unsigned int *)v53 + 9)];
                                                                          v57 = 0;
                                                                          Size = 0;
                                                                          v58 = v56 - 1;
                                                                          v75 = v55;
                                                                          while ( v58 >= v57 )
                                                                          {
                                                                            v59 = (v57 + v58) >> 1;
                                                                            v68 = v59;
                                                                            v60 = strcmp(
                                                                                    "W32pArgumentTableFilter",
                                                                                    &v52[*(unsigned int *)&v55[4 * v59]]);
                                                                            if ( v60 >= 0 )
                                                                            {
                                                                              if ( v60 <= 0 )
                                                                              {
                                                                                if ( (unsigned int)*(unsigned __int16 *)&v67[2 * v68] < *((_DWORD *)v54 + 5) )
                                                                                {
                                                                                  v61 = (unsigned __int8 *)&v52[*(unsigned int *)&v52[4 * *(unsigned __int16 *)&v67[2 * v68] + *((unsigned int *)v54 + 7)]];
                                                                                  if ( v61 <= v54
                                                                                    || v61 >= &v54[(unsigned int)v74] )
                                                                                  {
                                                                                    if ( v61 )
                                                                                    {
                                                                                      MiSnapDriverRange(
                                                                                        a1,
                                                                                        0,
                                                                                        64,
                                                                                        (_DWORD)v69,
                                                                                        (__int64)&v66,
                                                                                        (__int64)&v76);
                                                                                      v62 = ((unsigned int)((v76 - v66) >> 3)
                                                                                           + 1) << 12;
                                                                                      v63 = v66 << 25 >> 16;
                                                                                      MiSetImageProtection(a1, v63, v62);
                                                                                      KeCompactServiceTable(
                                                                                        v70,
                                                                                        v61,
                                                                                        *v51,
                                                                                        3LL,
                                                                                        *(_QWORD *)(a1 + 48));
                                                                                      KeCompactServiceTable(
                                                                                        v69,
                                                                                        v72,
                                                                                        *v71,
                                                                                        1LL,
                                                                                        *(_QWORD *)(a1 + 48));
                                                                                      v64 = *(_QWORD *)(a1 + 112);
                                                                                      if ( v64 )
                                                                                        MiSectionControlArea(v64);
                                                                                      MiSetImageProtection(a1, v63, v62);
                                                                                      return 0LL;
                                                                                    }
                                                                                  }
                                                                                }
                                                                                return 3221225594LL;
                                                                              }
                                                                              v57 = v59 + 1;
                                                                              Size = v59 + 1;
                                                                            }
                                                                            else
                                                                            {
                                                                              if ( !v59 )
                                                                                return 3221225594LL;
                                                                              v57 = Size;
                                                                              v58 = v59 - 1;
                                                                            }
                                                                            v55 = v75;
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                  return 3221225594LL;
                                                                }
                                                                v45 = v49 + 1;
                                                              }
                                                              else
                                                              {
                                                                if ( !v49 )
                                                                  return 3221225594LL;
                                                                v48 = v49 - 1;
                                                              }
                                                              v46 = v74;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    return 3221225594LL;
                                                  }
                                                  v35 = v39 + 1;
                                                }
                                                else
                                                {
                                                  if ( !v39 )
                                                    return 3221225594LL;
                                                  v38 = v39 - 1;
                                                }
                                                v36 = v74;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      return 3221225594LL;
                                    }
                                    v25 = v29 + 1;
                                  }
                                  else
                                  {
                                    if ( !v29 )
                                      return 3221225594LL;
                                    v28 = v29 - 1;
                                  }
                                  v26 = v74;
                                }
                              }
                            }
                          }
                        }
                        return 3221225594LL;
                      }
                      v15 = v19 + 1;
                    }
                    else
                    {
                      if ( !v19 )
                        return 3221225594LL;
                      v18 = v19 - 1;
                    }
                    v16 = v74;
                  }
                }
              }
            }
          }
          return 3221225594LL;
        }
        v5 = v9 + 1;
      }
      else
      {
        if ( !v9 )
          return 3221225594LL;
        v8 = v9 - 1;
      }
      v6 = v74;
    }
  }
  return 3221225594LL;
}
