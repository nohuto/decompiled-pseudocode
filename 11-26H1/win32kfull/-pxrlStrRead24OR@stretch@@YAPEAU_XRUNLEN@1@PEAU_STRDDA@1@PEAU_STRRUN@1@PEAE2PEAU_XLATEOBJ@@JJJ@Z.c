/*
 * XREFs of ?pxrlStrRead24OR@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1401C8830
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14011C840 (XLATEOBJ_iXlate.c)
 */

struct stretch::_XRUNLEN *__fastcall stretch::pxrlStrRead24OR(
        stretch *this,
        struct stretch::_STRDDA *a2,
        struct stretch::_STRRUN *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int iColor,
        int a7)
{
  __int64 v7; // r9
  int v9; // r15d
  char *v10; // rdi
  unsigned int *v12; // r12
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rsi
  ULONG v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _DWORD *v19; // r8
  _DWORD *v20; // rcx

  v7 = iColor;
  HIBYTE(iColor) = 0;
  v9 = 0;
  *((_DWORD *)a2 + 2) = *(_DWORD *)this;
  v10 = (char *)a3 + 2 * v7 + v7;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - *(_DWORD *)this;
  if ( (_DWORD)v7 != a7 )
  {
    v12 = (unsigned int *)((char *)this + 32);
    v13 = (unsigned int)(a7 - v7);
    if ( pxlo )
    {
      v14 = 0LL;
      do
      {
        v15 = *v12++;
        LOWORD(iColor) = *(_WORD *)v10;
        BYTE2(iColor) = v10[2];
        v16 = XLATEOBJ_iXlate(pxlo, iColor);
        HIBYTE(iColor) = HIBYTE(v16);
        if ( (_DWORD)v15 )
        {
          v9 += v15;
          v20 = (_DWORD *)((char *)a2 + 4 * v14 + 16);
          v14 += v15;
          do
          {
            *v20++ |= v16;
            LODWORD(v15) = v15 - 1;
          }
          while ( (_DWORD)v15 );
        }
        else
        {
          *((_DWORD *)a2 + v14 + 4) |= v16;
        }
        v10 += 3;
        --v13;
      }
      while ( v13 );
    }
    else
    {
      v17 = 0LL;
      do
      {
        v18 = *v12++;
        LOWORD(iColor) = *(_WORD *)v10;
        BYTE2(iColor) = v10[2];
        if ( (_DWORD)v18 )
        {
          v9 += v18;
          v19 = (_DWORD *)((char *)a2 + 4 * v17 + 16);
          v17 += v18;
          do
          {
            *v19++ |= iColor;
            LODWORD(v18) = v18 - 1;
          }
          while ( (_DWORD)v18 );
        }
        else
        {
          *((_DWORD *)a2 + v17 + 4) |= iColor;
        }
        v10 += 3;
        --v13;
      }
      while ( v13 );
    }
  }
  return (struct stretch::_STRDDA *)((char *)a2 + 4 * v9 + 16);
}
