/*
 * XREFs of ?pxrlStrRead08@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1401D2860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct stretch::_XRUNLEN *__fastcall stretch::pxrlStrRead08(
        stretch *this,
        struct stretch::_STRDDA *a2,
        struct stretch::_STRRUN *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _XLATEOBJ *a6,
        int a7,
        int a8)
{
  int v8; // esi
  _DWORD *v9; // r10
  int v11; // r9d
  unsigned __int8 *v12; // r11
  int v13; // r8d
  unsigned int *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rdi
  _DWORD *v18; // rbx
  __int64 v20; // rbx
  __int64 v21; // rcx
  _DWORD *v22; // rdi
  int v23; // ebp
  unsigned __int8 *v24; // r12
  int v25; // edx
  _DWORD *v26; // r14
  __int64 v27; // r13
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // r15
  int v31; // eax
  __int64 v32; // rcx
  _DWORD *v33; // rdi
  __int64 v34; // rax
  int v35; // edx
  __int64 v36; // r15
  int v37; // ecx
  unsigned __int8 *v38; // rax
  __int64 v39; // [rsp+38h] [rbp+10h]
  int v40; // [rsp+58h] [rbp+30h]

  v8 = (int)a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v11 = *(_DWORD *)this;
  v12 = (unsigned __int8 *)a3 + (int)a6;
  v13 = 0;
  if ( a4 )
  {
    v23 = a8 & 0x1F;
    v24 = &a4[4 * ((__int64)a8 >> 5)];
    v25 = *(_DWORD *)v24;
    v40 = *(_DWORD *)v24;
    if ( v8 < a7 )
    {
      v39 = 0LL;
      v26 = (_DWORD *)((char *)this + 32);
      v27 = a8 & 0x1F;
      v28 = 0LL;
      while ( 1 )
      {
        v29 = *v12++;
        if ( a5 )
          LODWORD(v29) = *(_DWORD *)(*((_QWORD *)a5 + 2) + 4 * v29);
        if ( (v25 & dword_140361820[v27]) != 0 )
        {
          v30 = (unsigned int)*v26;
          if ( (_DWORD)v30 )
          {
            v31 = v29;
            v32 = (unsigned int)v30;
            v13 += v30;
            v39 += v30;
            v33 = &v9[v28 + 2];
            while ( v32 )
            {
              *v33++ = v31;
              --v32;
            }
            v28 = v39;
          }
        }
        else
        {
          if ( v13 > 0 )
          {
            *v9 = v11;
            v11 += v13;
            v9[1] = v13;
            v34 = v13;
            v13 = 0;
            v9 += v34 + 2;
            v28 = 0LL;
            v39 = 0LL;
          }
          v11 += *v26;
        }
        ++v8;
        v35 = v23 + 1;
        ++v26;
        v36 = v27 + 1;
        if ( v8 >= a7 )
          break;
        v37 = v35 & 0x20;
        if ( (v35 & 0x20) != 0 )
          v40 = *((_DWORD *)v24 + 1);
        v38 = v24 + 4;
        if ( (v35 & 0x20) == 0 )
          v38 = v24;
        v23 = 0;
        v24 = v38;
        if ( (v35 & 0x20) == 0 )
          v23 = v35;
        v25 = v40;
        v27 = 0LL;
        if ( !v37 )
          v27 = v36;
      }
      if ( v13 > 0 )
      {
        *v9 = v11;
        v9[1] = v13;
        v9 += v13 + 2;
      }
    }
    return (struct stretch::_XRUNLEN *)v9;
  }
  else
  {
    *v9 = v11;
    *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - *(_DWORD *)this;
    if ( (_DWORD)a6 != a7 )
    {
      v14 = (unsigned int *)((char *)this + 32);
      v15 = (unsigned int)(a7 - (_DWORD)a6);
      if ( a5 )
      {
        v16 = 0LL;
        do
        {
          v17 = *v14++;
          if ( (_DWORD)v17 )
          {
            v13 += v17;
            v18 = &v9[v16 + 2];
            v16 += v17;
            do
            {
              *v18++ = *(_DWORD *)(*((_QWORD *)a5 + 2) + 4LL * *v12);
              LODWORD(v17) = v17 - 1;
            }
            while ( (_DWORD)v17 );
          }
          ++v12;
          --v15;
        }
        while ( v15 );
      }
      else
      {
        v20 = 0LL;
        do
        {
          v21 = *v14++;
          if ( (_DWORD)v21 )
          {
            v13 += v21;
            v22 = &v9[v20 + 2];
            v20 += v21;
            do
            {
              *v22++ = *v12;
              LODWORD(v21) = v21 - 1;
            }
            while ( (_DWORD)v21 );
          }
          ++v12;
          --v15;
        }
        while ( v15 );
      }
    }
    return (struct stretch::_XRUNLEN *)&v9[v13 + 2];
  }
}
