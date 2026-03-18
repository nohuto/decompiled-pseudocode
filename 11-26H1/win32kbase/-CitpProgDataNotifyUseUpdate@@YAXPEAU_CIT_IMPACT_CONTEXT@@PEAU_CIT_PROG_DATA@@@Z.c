/*
 * XREFs of ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x14024A074
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400D5DF8 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpProgDataNotifyUseUpdate(struct _CIT_IMPACT_CONTEXT *a1, struct _CIT_PROG_DATA *a2)
{
  char *v3; // r8
  __int64 v4; // rax
  char **v5; // rcx
  char *v6; // r11
  __int64 v7; // rax
  __int64 *v8; // r10
  __int64 *v9; // rax
  __int64 **v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  char **v13; // rax
  struct _CIT_IMPACT_CONTEXT **v14; // rcx
  char *v15; // rbx
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rcx

  if ( *((_BYTE *)a2 + 34) )
  {
    v3 = (char *)a2 + 16;
    v4 = *((_QWORD *)a2 + 2);
    if ( *(struct _CIT_PROG_DATA **)(v4 + 8) != (struct _CIT_PROG_DATA *)((char *)a2 + 16) )
      goto LABEL_21;
    v5 = (char **)*((_QWORD *)a2 + 3);
    if ( *v5 != v3 )
      goto LABEL_21;
    *v5 = (char *)v4;
    v6 = (char *)a1 + 24;
    *(_QWORD *)(v4 + 8) = v5;
    v7 = *((_QWORD *)a1 + 3);
    if ( *(struct _CIT_IMPACT_CONTEXT **)(v7 + 8) != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 24) )
      goto LABEL_21;
    *(_QWORD *)v3 = v7;
    *((_QWORD *)a2 + 3) = v6;
    *(_QWORD *)(v7 + 8) = v3;
    *(_QWORD *)v6 = v3;
    v8 = (__int64 *)*((_QWORD *)a1 + 6);
    if ( (__int64)(*((unsigned int *)a2 + 21)
                 + 30000 * (*((unsigned int *)a2 + 20) - (unsigned __int64)*((unsigned int *)v8 + 16))
                 - *((unsigned int *)v8 + 17)) < 0 )
      goto LABEL_13;
    v9 = (__int64 *)*v8;
    if ( *(__int64 **)(*v8 + 8) != v8 )
      goto LABEL_21;
    v10 = (__int64 **)v8[1];
    if ( *v10 != v8 )
      goto LABEL_21;
    *v10 = v9;
    v9[1] = (__int64)v10;
    v11 = *(_QWORD *)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 )
      goto LABEL_21;
    *v8 = v11;
    v8[1] = (__int64)v6;
    *(_QWORD *)(v11 + 8) = v8;
    *(_QWORD *)v6 = v8;
    *((_WORD *)v8 + 9) = 1;
    v12 = *(_QWORD *)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3
      || (v13 = (char **)*((_QWORD *)a2 + 3), *v13 != v3)
      || (*v13 = (char *)v12,
          *(_QWORD *)(v12 + 8) = v13,
          v14 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 6),
          *v14 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 40)) )
    {
LABEL_21:
      __fastfail(3u);
    }
    *(_QWORD *)v3 = (char *)a1 + 40;
    *((_QWORD *)a2 + 3) = v14;
    *v14 = (struct _CIT_IMPACT_CONTEXT *)v3;
    *((_QWORD *)a1 + 6) = v3;
    *((_WORD *)a2 + 17) = 256;
  }
LABEL_13:
  if ( *((_BYTE *)a2 + 35) )
  {
    v15 = (char *)a1 + 40;
    while ( 1 )
    {
      v16 = *((_QWORD *)a2 + 3);
      if ( (char *)v16 == v15
        || (__int64)(*((unsigned int *)a2 + 21)
                   + 30000 * (*((unsigned int *)a2 + 20) - (unsigned __int64)*(unsigned int *)(v16 + 64))
                   - *(unsigned int *)(v16 + 68)) < 0 )
      {
        break;
      }
      v17 = (_QWORD *)((char *)a2 + 16);
      v18 = *((_QWORD *)a2 + 2);
      if ( *(struct _CIT_PROG_DATA **)(v18 + 8) != (struct _CIT_PROG_DATA *)((char *)a2 + 16) )
        goto LABEL_21;
      if ( *(_QWORD **)v16 != v17 )
        goto LABEL_21;
      *(_QWORD *)v16 = v18;
      *(_QWORD *)(v18 + 8) = v16;
      v19 = *(_QWORD **)(v16 + 8);
      if ( *v19 != v16 )
        goto LABEL_21;
      *v17 = v16;
      *((_QWORD *)a2 + 3) = v19;
      *v19 = v17;
      *(_QWORD *)(v16 + 8) = v17;
    }
  }
}
