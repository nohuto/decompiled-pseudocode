/*
 * XREFs of ?pxrlStrRead24@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14011BE00
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14011C840 (XLATEOBJ_iXlate.c)
 */

struct stretch::_XRUNLEN *__fastcall stretch::pxrlStrRead24(
        stretch *this,
        struct stretch::_STRDDA *a2,
        struct stretch::_STRRUN *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int iColor,
        int a7,
        int a8)
{
  int v8; // r14d
  _DWORD *v9; // r10
  int v10; // r13d
  int v11; // esi
  char *v12; // rbx
  __int64 v13; // rbp
  unsigned int *v14; // rsi
  __int64 v15; // r15
  __int64 v16; // r14
  ULONG v17; // eax
  __int64 v18; // rcx
  ULONG *v19; // rdi
  __int64 v21; // r9
  __int64 v22; // r8
  int *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r11
  int v26; // r15d
  int v27; // r13d
  unsigned __int8 *v28; // r9
  char *v29; // r8
  __int64 v30; // r10
  __int16 v31; // ax
  char v32; // cl
  ULONG v33; // eax
  ULONG v34; // ecx
  __int64 v35; // r9
  ULONG v36; // eax
  __int64 v37; // rcx
  ULONG *v38; // rdi
  int v39; // edx
  __int64 v40; // rdi
  unsigned __int8 *v41; // rax
  __int64 v42; // [rsp+20h] [rbp-58h]
  char *v43; // [rsp+28h] [rbp-50h]
  __int64 v44; // [rsp+30h] [rbp-48h]
  ULONG v45; // [rsp+88h] [rbp+10h]
  _DWORD *v46; // [rsp+90h] [rbp+18h]
  unsigned __int8 *v47; // [rsp+98h] [rbp+20h]
  ULONG iColora; // [rsp+A8h] [rbp+30h]

  v8 = iColor;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = 0;
  v11 = *(_DWORD *)this;
  v46 = (_DWORD *)((char *)a2 + 8);
  v12 = (char *)a3 + 2 * iColor + iColor;
  HIBYTE(iColor) = 0;
  HIBYTE(v45) = 0;
  if ( a4 )
  {
    v25 = 0LL;
    v26 = 0;
    v27 = a8 & 0x1F;
    v28 = &a4[4 * ((__int64)a8 >> 5)];
    iColora = *(_DWORD *)v28;
    v47 = v28;
    if ( v8 < a7 )
    {
      v29 = (char *)this + 32;
      v42 = 0LL;
      v43 = (char *)this + 32;
      v30 = a8 & 0x1F;
      while ( 1 )
      {
        v31 = *(_WORD *)v12;
        v32 = v12[2];
        v12 += 3;
        LOWORD(v45) = v31;
        BYTE2(v45) = v32;
        v44 = v30;
        if ( pxlo )
        {
          v33 = XLATEOBJ_iXlate(pxlo, v45);
          v29 = v43;
          v34 = v33;
          v30 = v44;
          v28 = v47;
          v25 = v42;
          HIBYTE(v45) = HIBYTE(v33);
        }
        else
        {
          v34 = v45;
        }
        if ( (dword_140361820[v30] & iColora) != 0 )
        {
          v35 = *(unsigned int *)v29;
          if ( (_DWORD)v35 )
          {
            v26 += v35;
            v36 = v34;
            v37 = (unsigned int)v35;
            v38 = &v46[v25 + 2];
            v25 += v35;
            v42 = v25;
            while ( v37 )
            {
              *v38++ = v36;
              --v37;
            }
          }
          v28 = v47;
        }
        else
        {
          if ( v26 > 0 )
          {
            *v46 = v11;
            v11 += v26;
            v46[1] = v26;
            v46 += v26 + 2;
            v26 = 0;
            v42 = 0LL;
            v25 = 0LL;
          }
          v11 += *(_DWORD *)v29;
        }
        v29 += 4;
        v39 = v27 + 1;
        ++v8;
        v43 = v29;
        v40 = v30 + 1;
        if ( v8 >= a7 )
          break;
        if ( (v39 & 0x20) != 0 )
          iColora = *((_DWORD *)v28 + 1);
        v41 = v28 + 4;
        if ( (v39 & 0x20) == 0 )
          v41 = v28;
        v28 = v41;
        v47 = v41;
        v27 = 0;
        v30 = 0LL;
        if ( (v39 & 0x20) == 0 )
        {
          v27 = v39;
          v30 = v40;
        }
      }
      v9 = v46;
      if ( v26 > 0 )
      {
        *v46 = v11;
        v46[1] = v26;
        return (struct stretch::_XRUNLEN *)&v46[v26 + 2];
      }
    }
    return (struct stretch::_XRUNLEN *)v9;
  }
  else
  {
    *v9 = v11;
    *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - *(_DWORD *)this;
    if ( v8 != a7 )
    {
      v13 = (unsigned int)(a7 - v8);
      v14 = (unsigned int *)((char *)this + 32);
      if ( pxlo )
      {
        v15 = 0LL;
        do
        {
          v16 = *v14++;
          if ( (_DWORD)v16 )
          {
            LOWORD(iColor) = *(_WORD *)v12;
            BYTE2(iColor) = v12[2];
            v17 = XLATEOBJ_iXlate(pxlo, iColor);
            v9 = v46;
            v18 = (unsigned int)v16;
            HIBYTE(iColor) = HIBYTE(v17);
            v10 += v16;
            v19 = &v46[v15 + 2];
            v15 += v16;
            while ( v18 )
            {
              *v19++ = v17;
              --v18;
            }
          }
          v12 += 3;
          --v13;
        }
        while ( v13 );
      }
      else
      {
        v21 = 0LL;
        do
        {
          v22 = *v14++;
          LOWORD(iColor) = *(_WORD *)v12;
          BYTE2(iColor) = v12[2];
          if ( (_DWORD)v22 )
          {
            v23 = (int *)((char *)a2 + 4 * v21 + 16);
            v24 = v22;
            v10 += v22;
            while ( v24 )
            {
              *v23++ = iColor;
              --v24;
            }
            v21 += v22;
          }
          v12 += 3;
          --v13;
        }
        while ( v13 );
      }
    }
    return (struct stretch::_XRUNLEN *)&v9[v10 + 2];
  }
}
