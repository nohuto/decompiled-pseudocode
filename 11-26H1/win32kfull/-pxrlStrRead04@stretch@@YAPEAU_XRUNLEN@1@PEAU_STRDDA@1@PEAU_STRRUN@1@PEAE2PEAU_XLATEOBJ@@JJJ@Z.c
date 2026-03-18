/*
 * XREFs of ?pxrlStrRead04@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1401BEBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct stretch::_XRUNLEN *__fastcall stretch::pxrlStrRead04(
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
  _DWORD *v9; // r10
  int v10; // ebx
  __int64 v12; // rsi
  _DWORD *v13; // r9
  int v14; // ebp
  unsigned __int8 *v15; // rdi
  unsigned int *v16; // r15
  int v17; // r13d
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r14
  unsigned int v21; // eax
  __int64 v22; // rdx
  int v23; // esi
  int v24; // ecx
  _DWORD *v25; // rax
  int v26; // eax
  __int64 v28; // r14
  __int64 v29; // rdx
  int v30; // esi
  int v31; // ecx
  _DWORD *v32; // rax
  int v33; // eax
  unsigned int *v34; // rdi
  __int64 v35; // rcx
  int v36; // eax
  _DWORD *v37; // rdi
  __int64 i; // rcx
  int v39; // r8d
  int v40; // ebp
  unsigned __int8 *v41; // rdi
  int v42; // r15d
  int v43; // eax
  _DWORD *v44; // r13
  __int64 v45; // r14
  __int64 v46; // rdx
  __int64 v47; // r14
  __int64 v48; // r15
  __int64 v49; // rcx
  __int64 v50; // rax
  _DWORD *v51; // rdi
  int v52; // esi
  int v53; // r15d
  int v54; // edx
  _DWORD *v55; // rax
  int v56; // ecx
  unsigned __int8 *v57; // rax
  unsigned __int8 *v58; // [rsp+0h] [rbp-48h]
  __int64 v59; // [rsp+8h] [rbp-40h]
  int v60; // [rsp+58h] [rbp+10h]
  __int64 v61; // [rsp+60h] [rbp+18h]
  __int64 v62; // [rsp+68h] [rbp+20h]
  int v63; // [rsp+78h] [rbp+30h]

  v8 = (int)a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = *(_DWORD *)this;
  v12 = (unsigned __int8)a6 & 7;
  v13 = (_DWORD *)((char *)a3 + 4 * ((__int64)(int)a6 >> 3));
  if ( a4 )
  {
    v39 = 0;
    v40 = a8 & 0x1F;
    v41 = &a4[4 * ((__int64)a8 >> 5)];
    v42 = *(_DWORD *)v41;
    v63 = *(_DWORD *)v41;
    v58 = v41;
    if ( v8 < a7 )
    {
      v43 = *v13;
      v44 = (_DWORD *)((char *)this + 32);
      v60 = *v13;
      v61 = 0LL;
      v45 = v12;
      v62 = v12;
      v46 = a8 & 0x1F;
      while ( 1 )
      {
        v47 = (v43 & (unsigned int)dword_140370F20[v45]) >> dword_140370F40[v62];
        if ( a5 )
          LODWORD(v47) = *(_DWORD *)(*((_QWORD *)a5 + 2) + 4 * v47);
        if ( (v42 & dword_140361820[v46]) != 0 )
        {
          v48 = (unsigned int)*v44;
          if ( (_DWORD)v48 )
          {
            v49 = (unsigned int)v48;
            v50 = v61 + 2;
            v39 += v48;
            v61 += v48;
            v51 = &v9[v50];
            while ( v49 )
            {
              *v51++ = v47;
              --v49;
            }
            v41 = v58;
          }
        }
        else
        {
          if ( v39 > 0 )
          {
            *v9 = v10;
            v10 += v39;
            v9[1] = v39;
            v9 += v39 + 2;
            v39 = 0;
            v61 = 0LL;
          }
          v10 += *v44;
        }
        ++v8;
        v59 = v46 + 1;
        v52 = v12 + 1;
        v53 = v40 + 1;
        ++v44;
        if ( v8 >= a7 )
          break;
        if ( (v52 & 8) != 0 )
          v60 = v13[1];
        v45 = 0LL;
        if ( (v52 & 8) == 0 )
          v45 = v62 + 1;
        v54 = 0;
        v62 = v45;
        v55 = v13 + 1;
        if ( (v52 & 8) == 0 )
        {
          v55 = v13;
          v54 = v52;
        }
        v13 = v55;
        v56 = v53 & 0x20;
        if ( (v53 & 0x20) != 0 )
          v63 = *((_DWORD *)v41 + 1);
        v57 = v41 + 4;
        LODWORD(v12) = v54;
        if ( (v53 & 0x20) == 0 )
          v57 = v41;
        v40 = 0;
        v58 = v57;
        v41 = v57;
        v43 = v60;
        if ( (v53 & 0x20) == 0 )
          v40 = v53;
        v42 = v63;
        v46 = 0LL;
        if ( !v56 )
          v46 = v59;
      }
      if ( v39 > 0 )
      {
        *v9 = v10;
        v9[1] = v39;
        v9 += v39 + 2;
      }
    }
    return (struct stretch::_XRUNLEN *)v9;
  }
  else
  {
    *v9 = v10;
    v14 = 0;
    *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - v10;
    if ( (int)a6 < a7 )
    {
      v15 = a5;
      v16 = (unsigned int *)((char *)this + 32);
      v17 = *v13;
      v18 = 0LL;
      v19 = (unsigned __int8)a6 & 7;
      if ( a5 )
      {
        while ( 1 )
        {
          v28 = *v16++;
          if ( (_DWORD)v28 )
          {
            v36 = *(_DWORD *)(*((_QWORD *)v15 + 2)
                            + 4 * ((unsigned __int64)(v17 & (unsigned int)dword_140370F20[v19]) >> dword_140370F40[v19]));
            v37 = &v9[v18 + 2];
            for ( i = v28; i; --i )
              *v37++ = v36;
            v15 = a5;
            v14 += v28;
            v18 += v28;
          }
          ++v8;
          v29 = v19 + 1;
          v30 = v12 + 1;
          if ( v8 >= a7 )
            break;
          v31 = v30 & 8;
          if ( (v30 & 8) != 0 )
            v17 = v13[1];
          v32 = v13 + 1;
          if ( (v30 & 8) == 0 )
            v32 = v13;
          v13 = v32;
          v33 = 0;
          if ( (v30 & 8) == 0 )
            v33 = v30;
          v19 = 0LL;
          LODWORD(v12) = v33;
          if ( !v31 )
            v19 = v29;
        }
      }
      else
      {
        while ( 1 )
        {
          v20 = *v16++;
          v21 = (v17 & (unsigned int)dword_140370F20[v19]) >> dword_140370F40[v19];
          if ( (_DWORD)v20 )
          {
            v34 = &v9[v18 + 2];
            v35 = v20;
            v14 += v20;
            while ( v35 )
            {
              *v34++ = v21;
              --v35;
            }
            v18 += v20;
          }
          ++v8;
          v22 = v19 + 1;
          v23 = v12 + 1;
          if ( v8 >= a7 )
            break;
          v24 = v23 & 8;
          if ( (v23 & 8) != 0 )
            v17 = v13[1];
          v25 = v13 + 1;
          if ( (v23 & 8) == 0 )
            v25 = v13;
          v13 = v25;
          v26 = 0;
          if ( (v23 & 8) == 0 )
            v26 = v23;
          v19 = 0LL;
          LODWORD(v12) = v26;
          if ( !v24 )
            v19 = v22;
        }
      }
    }
    return (struct stretch::_XRUNLEN *)&v9[v14 + 2];
  }
}
