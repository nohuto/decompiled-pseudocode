/*
 * XREFs of ?pxrlStrRead32@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14011BA00
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14011C840 (XLATEOBJ_iXlate.c)
 */

struct stretch::_XRUNLEN *__fastcall stretch::pxrlStrRead32(
        stretch *this,
        struct stretch::_STRDDA *a2,
        struct stretch::_STRRUN *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        struct _XLATEOBJ *a6,
        int a7,
        int a8)
{
  int v8; // r13d
  _DWORD *v9; // rbx
  int v10; // ebp
  ULONG *v11; // r14
  int v12; // r15d
  unsigned int *v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rcx
  ULONG *v17; // rdx
  __int64 v19; // r13
  __int64 v20; // r12
  ULONG v21; // eax
  ULONG *v22; // rdi
  __int64 v23; // rcx
  int v24; // esi
  int v25; // r15d
  unsigned __int8 *v26; // r11
  char *v27; // r8
  __int64 v28; // rdi
  __int64 v29; // r10
  ULONG v30; // ecx
  ULONG v31; // eax
  __int64 v32; // r9
  ULONG v33; // eax
  __int64 v34; // rcx
  ULONG *v35; // rdi
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // r9
  unsigned __int8 *v39; // rax
  __int64 v40; // [rsp+20h] [rbp-48h]
  __int64 v41; // [rsp+78h] [rbp+10h]
  char *v42; // [rsp+80h] [rbp+18h]
  unsigned __int8 *v43; // [rsp+88h] [rbp+20h]
  int v44; // [rsp+98h] [rbp+30h]

  v8 = (int)a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = *(_DWORD *)this;
  v11 = (ULONG *)((char *)a3 + 4 * (int)a6);
  if ( a4 )
  {
    v24 = 0;
    v25 = a8 & 0x1F;
    v26 = &a4[4 * ((__int64)a8 >> 5)];
    v44 = *(_DWORD *)v26;
    v43 = v26;
    if ( v8 < a7 )
    {
      v27 = (char *)this + 32;
      v41 = 0LL;
      v42 = (char *)this + 32;
      v28 = 0LL;
      v29 = a8 & 0x1F;
      while ( 1 )
      {
        v30 = *v11++;
        v40 = v29;
        if ( pxlo )
        {
          v31 = XLATEOBJ_iXlate(pxlo, v30);
          v27 = v42;
          v30 = v31;
          v29 = v40;
          v26 = v43;
        }
        if ( (dword_140361820[v29] & v44) != 0 )
        {
          v32 = *(unsigned int *)v27;
          if ( (_DWORD)v32 )
          {
            v33 = v30;
            v34 = (unsigned int)v32;
            v24 += v32;
            v41 += v32;
            v35 = &v9[v28 + 2];
            while ( v34 )
            {
              *v35++ = v33;
              --v34;
            }
            v28 = v41;
          }
        }
        else
        {
          if ( v24 > 0 )
          {
            *v9 = v10;
            v10 += v24;
            v9[1] = v24;
            v36 = v24;
            v24 = 0;
            v9 += v36 + 2;
            v28 = 0LL;
            v41 = 0LL;
          }
          v10 += *(_DWORD *)v27;
        }
        v27 += 4;
        v37 = v25 + 1;
        ++v8;
        v42 = v27;
        v38 = v29 + 1;
        if ( v8 >= a7 )
          break;
        if ( (v37 & 0x20) != 0 )
          v44 = *((_DWORD *)v26 + 1);
        v39 = v26 + 4;
        if ( (v37 & 0x20) == 0 )
          v39 = v26;
        v25 = 0;
        v43 = v39;
        v26 = v39;
        if ( (v37 & 0x20) == 0 )
          v25 = v37;
        v29 = 0LL;
        if ( (v37 & 0x20) == 0 )
          v29 = v38;
      }
      if ( v24 > 0 )
      {
        *v9 = v10;
        v9[1] = v24;
        v9 += v24 + 2;
      }
    }
    return (struct stretch::_XRUNLEN *)v9;
  }
  else
  {
    *v9 = v10;
    v12 = 0;
    *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - *(_DWORD *)this;
    if ( (_DWORD)a6 != a7 )
    {
      v13 = (unsigned int *)((char *)this + 32);
      v14 = (unsigned int)(a7 - (_DWORD)a6);
      if ( pxlo )
      {
        v19 = 0LL;
        do
        {
          v20 = *v13++;
          if ( (_DWORD)v20 )
          {
            v21 = XLATEOBJ_iXlate(pxlo, *v11);
            v22 = &v9[v19 + 2];
            v23 = (unsigned int)v20;
            v12 += v20;
            while ( v23 )
            {
              *v22++ = v21;
              --v23;
            }
            v19 += v20;
          }
          ++v11;
          --v14;
        }
        while ( v14 );
      }
      else
      {
        v15 = 0LL;
        do
        {
          v16 = *v13++;
          if ( (_DWORD)v16 )
          {
            v12 += v16;
            v17 = &v9[v15 + 2];
            v15 += v16;
            do
            {
              *v17++ = *v11;
              LODWORD(v16) = v16 - 1;
            }
            while ( (_DWORD)v16 );
          }
          ++v11;
          --v14;
        }
        while ( v14 );
      }
    }
    return (struct stretch::_XRUNLEN *)&v9[v12 + 2];
  }
}
