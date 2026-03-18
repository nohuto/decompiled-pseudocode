/*
 * XREFs of ?pxrlStrRead01@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x140131520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct stretch::_XRUNLEN *__fastcall stretch::pxrlStrRead01(
        stretch *this,
        struct stretch::_STRDDA *a2,
        struct stretch::_STRRUN *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _XLATEOBJ *a6,
        int a7,
        int a8)
{
  int v8; // r11d
  _DWORD *v9; // r12
  unsigned int v11; // r10d
  _DWORD *v12; // r9
  int v13; // ebx
  __int64 v14; // r8
  int v15; // r13d
  int v16; // ebp
  unsigned int *v17; // rsi
  __int64 v18; // rbx
  unsigned int v19; // edx
  __int64 v20; // rdi
  _DWORD *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int *v24; // rdi
  int *v26; // rax
  int v27; // esi
  int v28; // r14d
  unsigned __int8 *v29; // rdx
  int v30; // edi
  _DWORD *v31; // r13
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rbp
  __int64 v35; // rcx
  int *v36; // rdi
  __int64 v37; // rcx
  int *v38; // rdi
  __int64 v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // r10
  int v42; // edi
  int v43; // ecx
  _DWORD *v44; // rax
  int v45; // ecx
  unsigned __int8 *v46; // rax
  unsigned __int8 *v47; // [rsp+0h] [rbp-48h]
  __int64 v48; // [rsp+8h] [rbp-40h]
  int v50; // [rsp+58h] [rbp+10h]
  unsigned __int8 *i; // [rsp+60h] [rbp+18h]
  int v52; // [rsp+60h] [rbp+18h]
  _DWORD *v53; // [rsp+68h] [rbp+20h]
  int v54; // [rsp+70h] [rbp+28h]
  int v55; // [rsp+78h] [rbp+30h]

  v8 = (int)a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v53 = (_DWORD *)((char *)a2 + 8);
  v11 = (unsigned __int8)a6 & 0x1F;
  v12 = (_DWORD *)((char *)a3 + 4 * ((__int64)(int)a6 >> 5));
  if ( a5 )
  {
    v26 = (int *)*((_QWORD *)a5 + 2);
    v55 = v26[1];
    v54 = *v26;
  }
  else
  {
    v54 = 0;
    v55 = 1;
  }
  v13 = *(_DWORD *)this;
  v14 = v11;
  if ( a4 )
  {
    v27 = 0;
    v28 = a8 & 0x1F;
    v29 = &a4[4 * ((__int64)a8 >> 5)];
    v30 = *(_DWORD *)v29;
    v52 = *(_DWORD *)v29;
    v47 = v29;
    if ( v8 < a7 )
    {
      v31 = (_DWORD *)((char *)this + 32);
      v50 = *v12;
      v32 = a8 & 0x1F;
      v33 = 0LL;
      while ( 1 )
      {
        v48 = v32;
        if ( (v30 & dword_140361820[v32]) != 0 )
        {
          v34 = (unsigned int)*v31;
          if ( (dword_140361820[v14] & v50) != 0 )
          {
            if ( (_DWORD)v34 )
            {
              v35 = (unsigned int)v34;
              v29 = v47;
              v27 += v34;
              v36 = &v53[v33 + 2];
              v33 += v34;
              while ( v35 )
              {
                *v36++ = v55;
                --v35;
              }
            }
          }
          else if ( (_DWORD)v34 )
          {
            v37 = (unsigned int)*v31;
            v29 = v47;
            v27 += v34;
            v38 = &v53[v33 + 2];
            v33 += v34;
            while ( v37 )
            {
              *v38++ = v54;
              --v37;
            }
          }
        }
        else
        {
          if ( v27 > 0 )
          {
            *v53 = v13;
            v13 += v27;
            v53[1] = v27;
            v39 = (__int64)&v53[v27 + 2];
            v27 = 0;
            v53 = (_DWORD *)v39;
            v33 = 0LL;
          }
          v13 += *v31;
        }
        v40 = v11 + 1;
        v41 = v14 + 1;
        ++v8;
        v42 = v28 + 1;
        ++v31;
        if ( v8 >= a7 )
          break;
        v43 = v40 & 0x20;
        if ( (v40 & 0x20) != 0 )
          v50 = v12[1];
        v14 = 0LL;
        if ( (v40 & 0x20) == 0 )
          v14 = v41;
        v11 = 0;
        if ( (v40 & 0x20) == 0 )
          v11 = v40;
        v44 = v12 + 1;
        if ( !v43 )
          v44 = v12;
        v12 = v44;
        v45 = v42 & 0x20;
        if ( (v42 & 0x20) != 0 )
          v52 = *((_DWORD *)v29 + 1);
        v46 = v29 + 4;
        if ( (v42 & 0x20) == 0 )
          v46 = v29;
        v28 = 0;
        v47 = v46;
        v29 = v46;
        if ( (v42 & 0x20) == 0 )
          v28 = v42;
        v30 = v52;
        v32 = 0LL;
        if ( !v45 )
          v32 = v48 + 1;
      }
      v9 = v53;
      if ( v27 > 0 )
      {
        *v53 = v13;
        v53[1] = v27;
        return (struct stretch::_XRUNLEN *)&v53[v27 + 2];
      }
    }
    return (struct stretch::_XRUNLEN *)v9;
  }
  v15 = 0;
  *v9 = v13;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - v13;
  if ( v8 >= a7 )
    return (struct stretch::_XRUNLEN *)&v9[v15 + 2];
  v16 = *v12;
  v17 = (unsigned int *)((char *)this + 32);
  for ( i = 0LL; ; a4 = i )
  {
    v18 = *v17;
    if ( (v16 & dword_140361820[v14]) != 0 )
    {
      if ( !(_DWORD)v18 )
        goto LABEL_8;
      v22 = v55;
    }
    else
    {
      if ( !(_DWORD)v18 )
        goto LABEL_8;
      v22 = v54;
    }
    v15 += v18;
    i += v18;
    v23 = *v17;
    v24 = (int *)((char *)a2 + 4 * (_QWORD)(a4 + 4));
    while ( v23 )
    {
      *v24++ = v22;
      --v23;
    }
LABEL_8:
    ++v8;
    v19 = v11 + 1;
    v20 = v14 + 1;
    if ( v8 >= a7 )
      break;
    if ( (v19 & 0x20) != 0 )
      v16 = v12[1];
    ++v17;
    v21 = v12 + 1;
    if ( (v19 & 0x20) == 0 )
      v21 = v12;
    v11 = 0;
    v12 = v21;
    if ( (v19 & 0x20) == 0 )
      v11 = v19;
    v14 = 0LL;
    if ( (v19 & 0x20) == 0 )
      v14 = v20;
  }
  v9 = v53;
  return (struct stretch::_XRUNLEN *)&v9[v15 + 2];
}
