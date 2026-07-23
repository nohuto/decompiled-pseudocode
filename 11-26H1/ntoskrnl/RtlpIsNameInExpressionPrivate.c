/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x1402FA970
 * Callers:
 *     RtlIsNameInExpression @ 0x1402FA830 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1402FA8B0 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  unsigned __int16 v5; // r11
  unsigned __int16 v6; // si
  char v7; // r10
  unsigned __int16 *v9; // r14
  unsigned __int16 *v10; // rbp
  void *v11; // r9
  unsigned __int16 v12; // r15
  _WORD *v13; // rax
  _WORD *v14; // r8
  int v15; // r11d
  _OWORD *v16; // r12
  unsigned int v17; // r13d
  unsigned __int16 *v18; // r10
  unsigned __int16 v19; // dx
  unsigned __int16 *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // r9
  bool v23; // zf
  unsigned __int16 v25; // dx
  __int64 v26; // rcx
  __int16 v27; // r15
  unsigned __int64 v28; // rcx
  __int64 v29; // rbx
  unsigned int v30; // edi
  __int16 v31; // ax
  unsigned int v32; // r15d
  unsigned int v33; // edx
  __int16 v34; // si
  __int64 v35; // rbp
  char v36; // cl
  unsigned int v37; // r14d
  _OWORD *Pool2; // rax
  _OWORD *v39; // rcx
  __int128 v40; // xmm1
  _OWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdi
  unsigned __int16 v44; // ax
  __int64 v45; // rax
  __int16 v46; // si
  __int64 v47; // rax
  unsigned __int16 v48; // dx
  __int64 v49; // rax
  unsigned int v50; // r9d
  _OWORD *v51; // rax
  unsigned __int16 v52; // cx
  __int64 v53; // rax
  __int64 v54; // rax
  __int16 v55; // bx
  __int16 v56; // [rsp+20h] [rbp-B8h]
  char v57; // [rsp+22h] [rbp-B6h]
  unsigned __int16 v59; // [rsp+24h] [rbp-B4h]
  int v62; // [rsp+38h] [rbp-A0h]
  unsigned int v63; // [rsp+3Ch] [rbp-9Ch]
  void *v64; // [rsp+40h] [rbp-98h]
  _WORD *v65; // [rsp+48h] [rbp-90h]
  _WORD v67[16]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v68[32]; // [rsp+80h] [rbp-58h] BYREF

  v5 = *a2;
  v6 = 0;
  v7 = 0;
  v9 = a2;
  v59 = 0;
  v10 = a1;
  v64 = 0LL;
  v11 = 0LL;
  v57 = 0;
  if ( !*a2 )
    return v5 + *a1 == 0;
  v12 = *a1;
  if ( !*a1 )
    return v5 + *a1 == 0;
  v13 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( v12 != 2 )
  {
    if ( *v13 == 42 )
    {
      v18 = v13 + 1;
      v19 = *(_OWORD *)a1 - 2;
      if ( (unsigned __int16)*(_OWORD *)a1 == 2 || (v20 = &v18[((unsigned __int64)v19 >> 1) - 1], v20 < v18) )
      {
LABEL_13:
        if ( v5 < (unsigned __int16)(v12 - 2) )
          return 0;
        v22 = (v5 - (unsigned __int64)v19) >> 1;
        if ( !a3 )
          return memcmp(v18, (const void *)(*((_QWORD *)v9 + 1) + 2LL * (unsigned int)v22), v19) == 0;
        v25 = v19 >> 1;
        if ( v25 )
        {
          do
          {
            v26 = v18[v6];
            if ( a4 )
              LOWORD(v26) = *(_WORD *)(a5 + 2 * v26);
            if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v9 + 1) + 2LL * ((unsigned int)v22 + v6))) != (_WORD)v26 )
              return 0;
            ++v6;
          }
          while ( v6 < v25 );
        }
        return 1;
      }
      while ( 1 )
      {
        v21 = *v20;
        if ( (_DWORD)v21 == 92 )
          goto LABEL_13;
        if ( (unsigned int)v21 < 0x40 && (*((_BYTE *)qword_140017650 + v21) & 8) != 0 )
          break;
        if ( --v20 < v18 )
          goto LABEL_13;
      }
      v7 = 0;
    }
    v67[0] = 0;
    v62 = 0;
    v14 = v67;
    v65 = v67;
    v16 = v68;
    v17 = 1;
    v15 = 0;
    if ( v12 > 0x7FFFu )
      return 0;
    goto LABEL_25;
  }
  if ( *v13 == 42 )
    return 1;
  v14 = v67;
  v67[0] = 0;
  v15 = 0;
  v65 = v67;
  v62 = 0;
  v16 = v68;
  v17 = 1;
LABEL_25:
  v27 = 2 * v12;
  v56 = v27;
  while ( 2 )
  {
    if ( (unsigned __int16)v15 >= *v9 )
    {
      v7 = 1;
      v57 = 1;
      if ( v14[v17 - 1] == v27 )
        goto LABEL_83;
    }
    else
    {
      v28 = (unsigned __int64)(unsigned __int16)v15 >> 1;
      LOWORD(v15) = v15 + 2;
      v62 = v15;
      v59 = *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * v28);
    }
    v63 = 0;
    LODWORD(v29) = 0;
    v30 = 0;
    while ( 2 )
    {
      v31 = 0;
      v32 = ((unsigned int)(unsigned __int16)v14[(unsigned int)v29] + 1) >> 1;
      v29 = (unsigned int)(v29 + 1);
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v33 = *v10;
              if ( (_WORD)v32 == (_WORD)v33 )
                goto LABEL_60;
              LOWORD(v32) = v31 + v32;
              v34 = 2 * v32;
              if ( (_WORD)v32 == (_WORD)v33 )
              {
                v27 = v56;
                v54 = v30++;
                *((_WORD *)v16 + v54) = v56;
                goto LABEL_61;
              }
              v35 = *(unsigned __int16 *)(*((_QWORD *)v10 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v32 >> 1));
              v36 = a3;
              if ( a3 && a4 )
                LOWORD(v35) = *(_WORD *)(a5 + 2 * v35);
              if ( v30 >= 0xE && !v11 )
              {
                v37 = v33 >> 1;
                Pool2 = (_OWORD *)ExAllocatePool2(0x40uLL);
                v64 = Pool2;
                v11 = Pool2;
                if ( !Pool2 )
                  RtlRaiseStatus(-1073741801);
                v7 = v57;
                v15 = v62;
                v39 = (_OWORD *)((char *)Pool2 + 4 * v37 + 4);
                v9 = a2;
                *Pool2 = *v16;
                v40 = v16[1];
                v16 = Pool2;
                Pool2[1] = v40;
                v41 = v65;
                v65 = v39;
                *v39 = *v41;
                v39[1] = v41[1];
                v36 = a3;
              }
              if ( (_WORD)v35 != 42 )
                break;
LABEL_41:
              v10 = a1;
              v42 = v30;
              v43 = v30 + 1;
              *((_WORD *)v16 + v42) = v34;
              v31 = 2;
              *((_WORD *)v16 + v43) = v34 + 3;
              v30 = v43 + 1;
            }
            if ( (_WORD)v35 != 60 )
              break;
            if ( v7 || v59 != 46 )
              goto LABEL_41;
            v44 = v15;
            if ( (unsigned __int16)v15 < *v9 )
            {
              while ( *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)v44 >> 1)) != 46 )
              {
                v44 += 2;
                if ( v44 >= *v9 )
                  goto LABEL_48;
              }
              goto LABEL_41;
            }
LABEL_48:
            v10 = a1;
            v45 = v30++;
            *((_WORD *)v16 + v45) = v34 + 3;
            v31 = 2;
          }
          v46 = v34 + 4;
          if ( (_WORD)v35 != 62 )
            break;
          v31 = 2;
          v10 = a1;
          if ( !v7 && v59 != 46 )
          {
            v47 = v30++;
            *((_WORD *)v16 + v47) = v46;
LABEL_60:
            v27 = v56;
            goto LABEL_61;
          }
        }
        if ( (_WORD)v35 != 34 )
        {
          if ( !v7 )
          {
            if ( (_WORD)v35 != 63 )
            {
              v48 = v59;
              goto LABEL_73;
            }
LABEL_58:
            v49 = v30++;
            *((_WORD *)v16 + v49) = v46;
          }
          v10 = a1;
          goto LABEL_60;
        }
        if ( !v7 )
          break;
        v31 = 2;
        v10 = a1;
      }
      v48 = v59;
      if ( v59 == 46 )
        goto LABEL_58;
LABEL_73:
      if ( v36 )
        v52 = *(_WORD *)(a5 + 2LL * v48);
      else
        v52 = v48;
      v27 = v56;
      v23 = (_WORD)v35 == v52;
      v10 = a1;
      if ( v23 )
      {
        v53 = v30++;
        *((_WORD *)v16 + v53) = v46;
      }
LABEL_61:
      v14 = v65;
      if ( (unsigned int)v29 < v17 )
      {
        v50 = v63;
        while ( v50 < v30 )
        {
          do
          {
            if ( v65[v29] >= *((_WORD *)v16 + v50) )
              break;
            v29 = (unsigned int)(v29 + 1);
          }
          while ( (unsigned int)v29 < v17 );
          v63 = ++v50;
          if ( (unsigned int)v29 >= v17 )
            goto LABEL_67;
        }
        v11 = v64;
        continue;
      }
      break;
    }
LABEL_67:
    v11 = v64;
    if ( v30 )
    {
      v65 = v16;
      v51 = v14;
      v14 = v16;
      v16 = v51;
      v17 = v30;
      if ( v7 )
      {
LABEL_83:
        v55 = v14[v17 - 1];
        if ( v11 )
          ExFreePoolWithTag(v11, 0);
        return v55 == v27;
      }
      continue;
    }
    break;
  }
  if ( v64 )
    ExFreePoolWithTag(v64, 0);
  return 0;
}
