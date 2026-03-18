/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x1403CF940
 * Callers:
 *     RtlIsNameInExpression @ 0x1403CF800 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1403CF880 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     Feature_3842719032__private_IsEnabledDeviceUsageNoInline @ 0x140619394 (Feature_3842719032__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  __int64 v5; // r11
  unsigned __int16 v6; // si
  unsigned __int16 *v10; // rbp
  unsigned __int16 v11; // r8
  _WORD *v12; // rax
  char *v13; // r14
  char *v14; // r12
  unsigned int v15; // r13d
  _OWORD *v16; // r9
  __int16 v17; // r11
  unsigned __int16 v18; // r10
  unsigned __int16 *v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int16 *v21; // r10
  unsigned __int16 v22; // dx
  unsigned __int16 *i; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  unsigned __int16 v28; // dx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rbx
  unsigned int v32; // edi
  __int16 v33; // ax
  unsigned int v34; // r15d
  unsigned int v35; // edx
  __int16 v36; // si
  __int64 v37; // rbp
  char v38; // cl
  unsigned int v39; // r14d
  _OWORD *Pool2; // rax
  __int128 v41; // xmm1
  char *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdi
  unsigned __int16 v45; // dx
  unsigned __int16 v46; // ax
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdi
  char v51; // dl
  __int16 v52; // si
  __int64 v53; // rax
  unsigned __int16 v54; // r15
  __int64 v55; // rax
  unsigned int v56; // r8d
  char *v57; // rax
  unsigned __int16 v58; // cx
  __int64 v59; // rax
  __int16 v60; // bx
  char v61; // [rsp+20h] [rbp-B8h]
  __int16 v62; // [rsp+22h] [rbp-B6h]
  unsigned __int16 v64; // [rsp+26h] [rbp-B2h]
  unsigned __int16 v66; // [rsp+2Ah] [rbp-AEh]
  unsigned int v68; // [rsp+3Ch] [rbp-9Ch]
  PVOID P; // [rsp+48h] [rbp-90h]
  char *v71; // [rsp+50h] [rbp-88h]
  _WORD v72[16]; // [rsp+60h] [rbp-78h] BYREF
  char v73; // [rsp+80h] [rbp-58h] BYREF

  v5 = *a2;
  v6 = 0;
  v10 = a1;
  v64 = 0;
  P = 0LL;
  v61 = 0;
  if ( !(_WORD)v5 )
    return (_DWORD)v5 + *a1 == 0;
  v11 = *a1;
  if ( !*a1 )
    return (_DWORD)v5 + *a1 == 0;
  v12 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( v11 == 2 )
  {
    if ( *v12 != 42 )
      goto LABEL_5;
    return 1;
  }
  if ( *v12 == 42 )
  {
    v21 = v12 + 1;
    v22 = *(_OWORD *)a1 - 2;
    if ( (unsigned __int16)*(_OWORD *)a1 != 2 )
    {
      for ( i = &v21[((unsigned __int64)v22 >> 1) - 1]; i >= v21; --i )
      {
        v24 = *i;
        if ( (_DWORD)v24 == 92 )
          break;
        if ( (unsigned int)v24 < 0x40 && (*((_BYTE *)qword_140017750 + v24) & 8) != 0 )
          goto LABEL_5;
      }
    }
    if ( (unsigned __int16)v5 < (unsigned __int16)(v11 - 2) )
      return 0;
    v25 = (v5 - (unsigned __int64)v22) >> 1;
    if ( !a3 )
      return memcmp(v21, (const void *)(*((_QWORD *)a2 + 1) + 2LL * (unsigned int)v25), v22) == 0;
    v28 = v22 >> 1;
    if ( v28 )
    {
      v29 = *((_QWORD *)a2 + 1);
      do
      {
        v30 = v21[v6];
        if ( a4 )
          LOWORD(v30) = *(_WORD *)(a5 + 2 * v30);
        if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(v29 + 2LL * ((unsigned int)v25 + v6))) != (_WORD)v30 )
          return 0;
        ++v6;
      }
      while ( v6 < v28 );
    }
    return 1;
  }
LABEL_5:
  v13 = (char *)v72;
  v72[0] = 0;
  v71 = (char *)v72;
  v14 = &v73;
  v15 = 1;
  v66 = 0;
  if ( (unsigned int)Feature_3842719032__private_IsEnabledDeviceUsageNoInline() && *v10 > 0x7FFFu )
    return 0;
  v16 = 0LL;
  v17 = 2 * *v10;
  v18 = 0;
  v62 = v17;
  while ( 2 )
  {
    v19 = a2;
    if ( v18 >= *a2 )
    {
      v61 = 1;
      if ( *(_WORD *)&v13[2 * v15 - 2] == v17 )
        goto LABEL_87;
    }
    else
    {
      v20 = v18;
      v18 += 2;
      v66 = v18;
      v64 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * (v20 >> 1));
    }
    v68 = 0;
    LODWORD(v31) = 0;
    v32 = 0;
    while ( 2 )
    {
      v33 = 0;
      v34 = ((unsigned int)*(unsigned __int16 *)&v13[2 * (unsigned int)v31] + 1) >> 1;
      v31 = (unsigned int)(v31 + 1);
      while ( 1 )
      {
        v35 = *v10;
        if ( (_WORD)v34 == (_WORD)v35 )
        {
          v51 = v61;
          goto LABEL_63;
        }
        LOWORD(v34) = v33 + v34;
        v36 = 2 * v34;
        if ( (_WORD)v34 == (_WORD)v35 )
          break;
        v37 = *(unsigned __int16 *)(*((_QWORD *)v10 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v34 >> 1));
        v38 = a3;
        if ( a3 && a4 )
          LOWORD(v37) = *(_WORD *)(a5 + 2 * v37);
        if ( v32 >= 0xE && !v16 )
        {
          v39 = v35 >> 1;
          Pool2 = (_OWORD *)ExAllocatePool2(0x40uLL);
          P = Pool2;
          if ( !Pool2 )
            RtlRaiseStatus(-1073741801);
          v19 = a2;
          v18 = v66;
          *Pool2 = *(_OWORD *)v14;
          v41 = *((_OWORD *)v14 + 1);
          v14 = (char *)Pool2;
          v13 = (char *)Pool2 + 4 * v39 + 4;
          v16 = Pool2;
          Pool2[1] = v41;
          v42 = v71;
          v71 = v13;
          *(_OWORD *)v13 = *(_OWORD *)v42;
          *((_OWORD *)v13 + 1) = *((_OWORD *)v42 + 1);
          v38 = a3;
        }
        if ( (_WORD)v37 == 42 )
        {
          v10 = a1;
          v43 = v32;
          v44 = v32 + 1;
          *(_WORD *)&v14[2 * v43] = v36;
          v33 = 2;
          *(_WORD *)&v14[2 * v44] = v36 + 3;
          v32 = v44 + 1;
        }
        else if ( (_WORD)v37 == 60 )
        {
          if ( v61 || v64 != 46 )
            goto LABEL_51;
          v45 = *v19;
          v46 = v18;
          if ( v18 >= *v19 )
          {
LABEL_50:
            v10 = a1;
            v48 = v32++;
            *(_WORD *)&v14[2 * v48] = v36 + 3;
            v33 = 2;
          }
          else
          {
            v47 = *((_QWORD *)v19 + 1);
            while ( *(_WORD *)(v47 + 2 * ((unsigned __int64)v46 >> 1)) != 46 )
            {
              v46 += 2;
              if ( v46 >= v45 )
              {
                v19 = a2;
                goto LABEL_50;
              }
            }
LABEL_51:
            v19 = a2;
            v10 = a1;
            v49 = v32;
            v50 = v32 + 1;
            *(_WORD *)&v14[2 * v49] = v36;
            v33 = 2;
            *(_WORD *)&v14[2 * v50] = v36 + 3;
            v32 = v50 + 1;
          }
        }
        else
        {
          v51 = v61;
          v52 = v36 + 4;
          if ( (_WORD)v37 == 62 )
          {
            v33 = 2;
            v10 = a1;
            if ( !v61 && v64 != 46 )
            {
              v53 = v32++;
              *(_WORD *)&v14[2 * v53] = v52;
LABEL_63:
              v17 = v62;
              goto LABEL_64;
            }
          }
          else
          {
            if ( (_WORD)v37 != 34 )
            {
              if ( !v61 )
              {
                if ( (_WORD)v37 != 63 )
                {
                  v54 = v64;
                  goto LABEL_76;
                }
LABEL_61:
                v55 = v32++;
                *(_WORD *)&v14[2 * v55] = v52;
              }
LABEL_62:
              v10 = a1;
              goto LABEL_63;
            }
            if ( !v61 )
            {
              v54 = v64;
              if ( v64 == 46 )
                goto LABEL_61;
LABEL_76:
              if ( v38 )
                v58 = *(_WORD *)(a5 + 2LL * v54);
              else
                v58 = v54;
              if ( (_WORD)v37 == v58 )
                goto LABEL_61;
              goto LABEL_62;
            }
            v33 = 2;
            v10 = a1;
          }
        }
      }
      v17 = v62;
      v51 = v61;
      v59 = v32++;
      *(_WORD *)&v14[2 * v59] = v62;
LABEL_64:
      if ( (unsigned int)v31 < v15 )
      {
        v56 = v68;
        while ( v56 < v32 )
        {
          do
          {
            if ( *(_WORD *)&v13[2 * v31] >= *(_WORD *)&v14[2 * v56] )
              break;
            v31 = (unsigned int)(v31 + 1);
          }
          while ( (unsigned int)v31 < v15 );
          v68 = ++v56;
          if ( (unsigned int)v31 >= v15 )
            goto LABEL_70;
        }
        v19 = a2;
        continue;
      }
      break;
    }
LABEL_70:
    if ( v32 )
    {
      v71 = v14;
      v57 = v13;
      v13 = v14;
      v14 = v57;
      v15 = v32;
      if ( v51 )
      {
LABEL_87:
        v60 = *(_WORD *)&v13[2 * v15 - 2];
        if ( P )
          ExFreePoolWithTag(P, 0);
        return v60 == v62;
      }
      continue;
    }
    break;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0;
}
