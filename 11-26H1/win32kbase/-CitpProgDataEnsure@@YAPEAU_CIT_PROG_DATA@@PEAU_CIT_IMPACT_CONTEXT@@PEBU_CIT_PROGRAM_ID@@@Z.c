/*
 * XREFs of ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x140249CA4
 * Callers:
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1401BE150 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1400D7B2C (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgDataFind@@YAPEAU_CIT_PROG_DATA@@PEBU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x140249F70 (-CitpProgDataFind@@YAPEAU_CIT_PROG_DATA@@PEBU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x14024A200 (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x14024A254 (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 */

struct _CIT_PROG_DATA *__fastcall CitpProgDataEnsure(struct _CIT_IMPACT_CONTEXT *a1, const struct _CIT_PROGRAM_ID *a2)
{
  __int64 v4; // rdx
  struct _CIT_PROG_DATA *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v9; // rax
  struct _CIT_IMPACT_CONTEXT *v10; // rbx
  __int64 v11; // rcx
  char *v12; // rsi
  char *v13; // rax
  char **v14; // rcx
  struct _CIT_PROG_DATA *i; // rcx
  unsigned int v16; // eax
  struct _CIT_IMPACT_CONTEXT *v17; // rcx
  struct _CIT_IMPACT_CONTEXT **v18; // rdx
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int64 v21; // xmm0_8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int128 v24; // [rsp+20h] [rbp-30h] BYREF
  __int128 v25; // [rsp+30h] [rbp-20h]
  __int64 v26; // [rsp+40h] [rbp-10h]
  __int64 v27; // [rsp+80h] [rbp+30h]
  __int64 v28; // [rsp+80h] [rbp+30h]

  v24 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v5 = CitpProgDataFind(a1, a2);
  if ( !v5 )
  {
    if ( (int)CitpProgramIdCopy((struct _CIT_PROGRAM_ID *)&v24, a2) < 0 )
    {
LABEL_3:
      v5 = 0LL;
      goto LABEL_4;
    }
    v9 = (_QWORD *)((char *)a1 + 8);
    v10 = (struct _CIT_IMPACT_CONTEXT *)*((_QWORD *)a1 + 1);
    if ( v10 == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 8) )
    {
      v12 = (char *)a1 + 24;
      if ( *(char **)v12 == v12 )
        goto LABEL_3;
      v13 = (char *)*((_QWORD *)a1 + 4);
      if ( *(char **)v13 != v12 )
        goto LABEL_24;
      v14 = (char **)*((_QWORD *)v13 + 1);
      if ( *v14 != v13 )
        goto LABEL_24;
      *((_QWORD *)a1 + 4) = v14;
      v5 = (struct _CIT_PROG_DATA *)(v13 - 16);
      *v14 = v12;
      --*((_DWORD *)a1 + 15);
      *((_QWORD *)v13 + 1) = v13;
      *(_QWORD *)v13 = v13;
      v13[18] = 0;
      v27 = *((_QWORD *)v13 - 1) & (-1LL << (*((_DWORD *)a1 + 19) & 0x1F));
      for ( i = (struct _CIT_PROG_DATA *)(*((_QWORD *)a1 + 10)
                                        + 8LL
                                        * (((*((_DWORD *)a1 + 19) >> 5) - 1) & (HIBYTE(v27)
                                                                              - 877075889
                                                                              + 442596621 * (unsigned __int8)v27
                                                                              + 37
                                                                              * (BYTE6(v27)
                                                                               + 37
                                                                               * (BYTE5(v27)
                                                                                + 37
                                                                                * (BYTE4(v27)
                                                                                 + 37
                                                                                 * (BYTE3(v27)
                                                                                  + 37
                                                                                  * (BYTE2(v27)
                                                                                   + 37 * (unsigned int)BYTE1(v27)))))))));
            (*(_QWORD *)i & 1) == 0;
            i = *(struct _CIT_PROG_DATA **)i )
      {
        if ( *(struct _CIT_PROG_DATA **)i == v5 )
        {
          *(_QWORD *)i = *(_QWORD *)v5;
          --*((_DWORD *)a1 + 18);
          break;
        }
      }
      *(_QWORD *)v5 = 0LL;
      CitpProgDataReinitialize(v5);
    }
    else
    {
      if ( *((_QWORD **)v10 + 1) != v9 )
        goto LABEL_24;
      v11 = *(_QWORD *)v10;
      if ( *(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)v10 + 8LL) != v10 )
        goto LABEL_24;
      *v9 = v11;
      v12 = (char *)a1 + 24;
      *(_QWORD *)(v11 + 8) = v9;
      v5 = (struct _CIT_IMPACT_CONTEXT *)((char *)v10 - 16);
    }
    v16 = *((_DWORD *)a1 + 16);
    v17 = (struct _CIT_PROG_DATA *)((char *)v5 + 16);
    if ( v16 >= *((_DWORD *)a1 + 17) )
    {
      ++*((_DWORD *)a1 + 15);
      v19 = *(_QWORD *)v12;
      if ( *(char **)(*(_QWORD *)v12 + 8LL) == v12 )
      {
        *(_QWORD *)v17 = v19;
        *((_QWORD *)v5 + 3) = v12;
        *(_QWORD *)(v19 + 8) = v17;
        *(_QWORD *)v12 = v17;
        *((_BYTE *)v5 + 34) = 1;
        goto LABEL_23;
      }
    }
    else
    {
      *((_DWORD *)a1 + 16) = v16 + 1;
      v18 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 6);
      if ( *v18 == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 40) )
      {
        *(_QWORD *)v17 = (char *)a1 + 40;
        *((_QWORD *)v5 + 3) = v18;
        *v18 = v17;
        *((_QWORD *)a1 + 6) = v17;
        *((_BYTE *)v5 + 35) = 1;
LABEL_23:
        v20 = v25;
        *(_OWORD *)((char *)v5 + 40) = v24;
        v21 = v26;
        v26 = 0LL;
        *(_OWORD *)((char *)v5 + 56) = v20;
        *((_QWORD *)v5 + 9) = v21;
        v22 = *((_QWORD *)v5 + 7);
        *((_QWORD *)v5 + 1) = v22;
        v6 = *((_DWORD *)a1 + 19) >> 5;
        v28 = v22 & (-1LL << (*((_DWORD *)a1 + 19) & 0x1F));
        v24 = 0LL;
        v25 = 0LL;
        v23 = *((_QWORD *)a1 + 10);
        v4 = ((_DWORD)v6 - 1) & (HIBYTE(v28)
                               + 37
                               * (BYTE6(v28)
                                + 37
                                * (BYTE5(v28)
                                 + 37
                                 * (BYTE4(v28)
                                  + 37
                                  * (BYTE3(v28)
                                   + 374026047
                                   + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * (unsigned int)(unsigned __int8)v28)))))));
        *(_QWORD *)v5 = *(_QWORD *)(v23 + 8 * v4);
        *(_QWORD *)(v23 + 8 * v4) = v5;
        ++*((_DWORD *)a1 + 18);
        goto LABEL_4;
      }
    }
LABEL_24:
    __fastfail(3u);
  }
LABEL_4:
  CitpProgramIdCleanup((char **)&v24, v4, v6, v7);
  return v5;
}
