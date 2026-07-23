/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x180021848
 * Callers:
 *     RtlIsNameInExpression @ 0x1800217D0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x180022770 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlDoesNameContainWildCards @ 0x180102000 (RtlDoesNameContainWildCards.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  unsigned __int16 *v5; // r13
  unsigned __int16 *v8; // rdx
  void *v9; // r8
  char v10; // r11
  unsigned __int16 v11; // si
  _WORD *v12; // rax
  unsigned __int16 *v13; // rdi
  unsigned __int16 v14; // bx
  unsigned __int64 v15; // rdx
  unsigned __int16 v17; // bx
  unsigned __int16 i; // r8
  __int64 v19; // rcx
  char *v21; // r9
  char *v22; // r14
  int v23; // edi
  unsigned __int16 v24; // r10
  __int16 v25; // si
  unsigned __int16 v26; // ax
  __int64 v27; // r12
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned int v30; // r15d
  __int16 j; // ax
  __int16 v32; // di
  __int16 v33; // bp
  char v34; // cl
  int v35; // r13d
  _OWORD *Heap_0; // rax
  __int64 v37; // rcx
  __int128 v38; // xmm1
  char *v39; // rax
  __int64 v40; // rax
  unsigned __int16 v41; // cx
  __int64 v42; // rax
  __int16 v43; // di
  unsigned __int16 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int16 v47; // cx
  __int64 v48; // rax
  unsigned int v49; // ebp
  char *v50; // rax
  __int16 v51; // bx
  char v52; // [rsp+20h] [rbp-B8h]
  unsigned __int16 v54; // [rsp+22h] [rbp-B6h]
  unsigned __int16 v56; // [rsp+2Ch] [rbp-ACh]
  unsigned int v57; // [rsp+30h] [rbp-A8h]
  unsigned int v58; // [rsp+34h] [rbp-A4h]
  char *v59; // [rsp+38h] [rbp-A0h]
  _UNICODE_STRING Expression; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int16 *v62; // [rsp+58h] [rbp-80h]
  _WORD v63[16]; // [rsp+60h] [rbp-78h] BYREF
  char v64; // [rsp+80h] [rbp-58h] BYREF

  v5 = a2;
  v62 = a2;
  v54 = 0;
  v8 = a1;
  v9 = 0LL;
  v10 = 0;
  v52 = 0;
  if ( !*v5 )
    return *a1 + *v5 == 0;
  v11 = *a1;
  if ( !*a1 )
    return *a1 + *v5 == 0;
  v12 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( v11 == 2 )
  {
    if ( *v12 != 42 )
      goto LABEL_18;
    return 1;
  }
  if ( *v12 == 42 )
  {
    v13 = v12 + 1;
    *(_QWORD *)&Expression.Length = *(_QWORD *)a1;
    v14 = Expression.Length - 2;
    Expression.Buffer = v12 + 1;
    Expression.MaximumLength -= 2;
    Expression.Length -= 2;
    if ( !RtlDoesNameContainWildCards(&Expression) )
    {
      if ( *v5 < (unsigned __int16)(v11 - 2) )
        return 0;
      v15 = (*v5 - (unsigned __int64)v14) >> 1;
      if ( a3 )
      {
        v17 = v14 >> 1;
        for ( i = 0; i < v17; ++i )
        {
          v19 = v13[i];
          if ( a4 )
            LOWORD(v19) = *(_WORD *)(a5 + 2 * v19);
          if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v5 + 1) + 2LL * ((unsigned int)v15 + i))) != (_WORD)v19 )
            return 0;
        }
        return 1;
      }
      return memcmp(v13, (const void *)(*((_QWORD *)v5 + 1) + 2LL * (unsigned int)v15), v14) == 0;
    }
    v8 = a1;
    v9 = 0LL;
    v10 = 0;
  }
LABEL_18:
  v63[0] = 0;
  v58 = 1;
  v21 = (char *)v63;
  v59 = (char *)v63;
  v22 = &v64;
  v56 = 0;
  v23 = 1;
  v24 = 0;
  if ( v11 > 0x7FFFu )
    return 0;
  v25 = 2 * v11;
  while ( 2 )
  {
    if ( v24 >= *v5 )
    {
      v52 = 1;
      v10 = 1;
      if ( *(_WORD *)&v21[2 * (v23 - 1)] == v25 )
        goto LABEL_79;
    }
    else
    {
      v26 = *(_WORD *)(*((_QWORD *)v5 + 1) + 2 * ((unsigned __int64)v24 >> 1));
      v24 += 2;
      v54 = v26;
      v56 = v24;
    }
    v57 = 0;
    LODWORD(v27) = 0;
    LODWORD(v28) = 0;
    while ( 2 )
    {
      v29 = (unsigned int)v27;
      v27 = (unsigned int)(v27 + 1);
      v30 = ((unsigned int)*(unsigned __int16 *)&v21[2 * v29] + 1) >> 1;
      for ( j = 0; ; j = 2 )
      {
        while ( 1 )
        {
          if ( (_WORD)v30 == *v8 )
            goto LABEL_65;
          LOWORD(v30) = j + v30;
          v32 = 2 * v30;
          if ( (_WORD)v30 == *v8 )
          {
            v48 = (unsigned int)v28;
            LODWORD(v28) = v28 + 1;
            *(_WORD *)&v22[2 * v48] = v25;
            goto LABEL_65;
          }
          v33 = *(_WORD *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v30 >> 1));
          v34 = a3;
          if ( a3 && a4 )
            v33 = *(_WORD *)(a5
                           + 2LL
                           * *(unsigned __int16 *)(*((_QWORD *)v8 + 1)
                                                 + 2 * ((unsigned __int64)(unsigned __int16)v30 >> 1)));
          if ( (unsigned int)v28 >= 0xE && !v9 )
          {
            v35 = *v8 >> 1;
            Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)(v35 + 1));
            v9 = Heap_0;
            if ( !Heap_0 )
              RtlRaiseStatus(-1073741801);
            v8 = a1;
            v37 = (unsigned int)(2 * v35 + 2);
            v5 = v62;
            v24 = v56;
            v21 = (char *)Heap_0 + 2 * v37;
            v10 = v52;
            *Heap_0 = *(_OWORD *)v22;
            v38 = *((_OWORD *)v22 + 1);
            v22 = (char *)Heap_0;
            Heap_0[1] = v38;
            v39 = v59;
            v59 = v21;
            *(_OWORD *)v21 = *(_OWORD *)v39;
            *((_OWORD *)v21 + 1) = *((_OWORD *)v39 + 1);
            v34 = a3;
          }
          if ( v33 == 42 )
          {
            v40 = (unsigned int)v28;
            v28 = (unsigned int)(v28 + 1);
            *(_WORD *)&v22[2 * v40] = v32;
            *(_WORD *)&v22[2 * v28] = v32 + 3;
LABEL_36:
            LODWORD(v28) = v28 + 1;
            goto LABEL_37;
          }
          if ( v33 == 60 )
          {
            if ( !v10 && v54 == 46 )
            {
              v41 = v24;
              if ( v24 >= *v5 )
              {
LABEL_44:
                *(_WORD *)&v22[2 * (unsigned int)v28] = v32 + 3;
LABEL_45:
                v8 = a1;
                goto LABEL_36;
              }
              while ( *(_WORD *)(*((_QWORD *)v5 + 1) + 2 * ((unsigned __int64)v41 >> 1)) != 46 )
              {
                v41 += 2;
                if ( v41 >= *v5 )
                  goto LABEL_44;
              }
            }
            v42 = (unsigned int)v28;
            v28 = (unsigned int)(v28 + 1);
            *(_WORD *)&v22[2 * v42] = v32;
            *(_WORD *)&v22[2 * v28] = v32 + 3;
            goto LABEL_45;
          }
          v43 = v32 + 4;
          if ( v33 != 62 )
            break;
          j = 2;
          if ( !v10 && v54 != 46 )
            goto LABEL_54;
        }
        if ( v33 != 34 )
          break;
        if ( !v10 )
        {
          v44 = v54;
          if ( v54 == 46 )
          {
LABEL_54:
            v45 = (unsigned int)v28;
            LODWORD(v28) = v28 + 1;
            *(_WORD *)&v22[2 * v45] = v43;
            goto LABEL_65;
          }
          goto LABEL_59;
        }
LABEL_37:
        ;
      }
      if ( v10 )
        goto LABEL_65;
      if ( v33 == 63 )
      {
        v46 = (unsigned int)v28;
        LODWORD(v28) = v28 + 1;
        *(_WORD *)&v22[2 * v46] = v43;
        goto LABEL_65;
      }
      v44 = v54;
LABEL_59:
      if ( v34 )
        v47 = *(_WORD *)(a5 + 2LL * v44);
      else
        v47 = v44;
      if ( v33 == v47 )
        goto LABEL_54;
LABEL_65:
      if ( (unsigned int)v27 < v58 )
      {
        v49 = v57;
        while ( v49 < (unsigned int)v28 )
        {
          for ( ; (unsigned int)v27 < v58; v27 = (unsigned int)(v27 + 1) )
          {
            if ( *(_WORD *)&v21[2 * v27] >= *(_WORD *)&v22[2 * v49] )
              break;
          }
          v57 = ++v49;
          if ( (unsigned int)v27 >= v58 )
            goto LABEL_72;
        }
        continue;
      }
      break;
    }
LABEL_72:
    if ( (_DWORD)v28 )
    {
      v59 = v22;
      v50 = v21;
      v58 = v28;
      v21 = v22;
      v22 = v50;
      v23 = v28;
      if ( v10 )
      {
LABEL_79:
        v51 = *(_WORD *)&v21[2 * (v23 - 1)];
        if ( v9 )
          RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v9);
        return v51 == v25;
      }
      continue;
    }
    break;
  }
  if ( v9 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v9);
  return 0;
}
