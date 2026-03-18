/*
 * XREFs of ?pxrlStrRead24@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1400D03C0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1400D08C0 (XLATEOBJ_iXlate.c)
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
  int v9; // r13d
  _DWORD *v10; // rdx
  int v11; // esi
  char *v12; // rbx
  unsigned int v13; // ebp
  __int64 v14; // r15
  __int64 v15; // r14
  unsigned int *v16; // rsi
  __int64 v17; // rbp
  ULONG v18; // eax
  __int64 v19; // rcx
  ULONG *v20; // rdi
  __int64 v22; // r11
  __int64 v23; // r9
  unsigned int *v24; // r8
  __int64 v25; // r10
  _DWORD *v26; // rdi
  int *v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // r11
  int v30; // r15d
  int v31; // r13d
  unsigned __int8 *v32; // r9
  char *v33; // r8
  __int64 v34; // r10
  __int16 v35; // ax
  char v36; // cl
  ULONG v37; // eax
  ULONG v38; // ecx
  __int64 v39; // r9
  ULONG v40; // eax
  __int64 v41; // rcx
  ULONG *v42; // rdi
  int v43; // edx
  __int64 v44; // rdi
  unsigned __int8 *v45; // rax
  __int64 v46; // [rsp+20h] [rbp-58h]
  char *v47; // [rsp+28h] [rbp-50h]
  __int64 v48; // [rsp+30h] [rbp-48h]
  ULONG v49; // [rsp+88h] [rbp+10h]
  _DWORD *v50; // [rsp+90h] [rbp+18h]
  unsigned __int8 *v51; // [rsp+98h] [rbp+20h]
  ULONG iColora; // [rsp+A8h] [rbp+30h]

  v8 = iColor;
  v9 = 0;
  v10 = (_DWORD *)((char *)a2 + 8);
  v11 = *(_DWORD *)this;
  v50 = v10;
  v12 = (char *)a3 + 2 * iColor + iColor;
  HIBYTE(iColor) = 0;
  HIBYTE(v49) = 0;
  if ( a4 )
  {
    v29 = 0LL;
    v30 = 0;
    v31 = a8 & 0x1F;
    v32 = &a4[4 * ((__int64)a8 >> 5)];
    iColora = *(_DWORD *)v32;
    v51 = v32;
    if ( v8 < a7 )
    {
      v33 = (char *)this + 32;
      v46 = 0LL;
      v47 = (char *)this + 32;
      v34 = a8 & 0x1F;
      while ( 1 )
      {
        v35 = *(_WORD *)v12;
        v36 = v12[2];
        v12 += 3;
        LOWORD(v49) = v35;
        BYTE2(v49) = v36;
        v48 = v34;
        if ( pxlo )
        {
          v37 = XLATEOBJ_iXlate(pxlo, v49);
          v33 = v47;
          v38 = v37;
          v34 = v48;
          v32 = v51;
          v29 = v46;
          HIBYTE(v49) = HIBYTE(v37);
        }
        else
        {
          v38 = v49;
        }
        if ( (dword_140355080[v34] & iColora) != 0 )
        {
          v39 = *(unsigned int *)v33;
          if ( (_DWORD)v39 )
          {
            v30 += v39;
            v40 = v38;
            v41 = (unsigned int)v39;
            v42 = &v50[v29 + 2];
            v29 += v39;
            v46 = v29;
            while ( v41 )
            {
              *v42++ = v40;
              --v41;
            }
          }
          v32 = v51;
        }
        else
        {
          if ( v30 > 0 )
          {
            *v50 = v11;
            v11 += v30;
            v50[1] = v30;
            v50 += v30 + 2;
            v30 = 0;
            v46 = 0LL;
            v29 = 0LL;
          }
          v11 += *(_DWORD *)v33;
        }
        v33 += 4;
        v43 = v31 + 1;
        ++v8;
        v47 = v33;
        v44 = v34 + 1;
        if ( v8 >= a7 )
          break;
        if ( (v43 & 0x20) != 0 )
          iColora = *((_DWORD *)v32 + 1);
        v45 = v32 + 4;
        if ( (v43 & 0x20) == 0 )
          v45 = v32;
        v32 = v45;
        v51 = v45;
        v31 = 0;
        v34 = 0LL;
        if ( (v43 & 0x20) == 0 )
        {
          v31 = v43;
          v34 = v44;
        }
      }
      v10 = v50;
      if ( v30 > 0 )
      {
        *v50 = v11;
        v50[1] = v30;
        return (struct stretch::_XRUNLEN *)&v50[v30 + 2];
      }
    }
    return (struct stretch::_XRUNLEN *)v10;
  }
  else
  {
    *v10 = v11;
    v10[1] = *((_DWORD *)this + 2) - *(_DWORD *)this;
    if ( v8 != a7 )
    {
      v13 = a7 - v8;
      if ( pxlo )
      {
        v14 = 0LL;
        v15 = v13;
        v16 = (unsigned int *)((char *)this + 32);
        do
        {
          v17 = *v16++;
          if ( (_DWORD)v17 )
          {
            LOWORD(iColor) = *(_WORD *)v12;
            BYTE2(iColor) = v12[2];
            v18 = XLATEOBJ_iXlate(pxlo, iColor);
            v19 = (unsigned int)v17;
            HIBYTE(iColor) = HIBYTE(v18);
            v9 += v17;
            v20 = &v50[v14 + 2];
            v14 += v17;
            while ( v19 )
            {
              *v20++ = v18;
              --v19;
            }
          }
          v12 += 3;
          --v15;
        }
        while ( v15 );
        v10 = v50;
      }
      else
      {
        v22 = 0LL;
        v23 = v13;
        v24 = (unsigned int *)((char *)this + 32);
        do
        {
          v25 = *v24++;
          LOWORD(iColor) = *(_WORD *)v12;
          BYTE2(iColor) = v12[2];
          if ( (_DWORD)v25 )
          {
            v26 = v10 + 2;
            v10 = v50;
            v27 = &v26[v22];
            v28 = v25;
            v9 += v25;
            while ( v28 )
            {
              *v27++ = iColor;
              --v28;
            }
            v22 += v25;
          }
          v12 += 3;
          --v23;
        }
        while ( v23 );
      }
    }
    return (struct stretch::_XRUNLEN *)&v10[v9 + 2];
  }
}
