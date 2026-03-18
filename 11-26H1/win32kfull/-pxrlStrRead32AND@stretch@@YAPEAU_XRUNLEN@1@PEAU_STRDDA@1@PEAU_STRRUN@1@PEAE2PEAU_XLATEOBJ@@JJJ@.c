/*
 * XREFs of ?pxrlStrRead32AND@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14011B440
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14011C840 (XLATEOBJ_iXlate.c)
 */

struct stretch::_XRUNLEN *__fastcall stretch::pxrlStrRead32AND(
        stretch *this,
        struct stretch::_STRDDA *a2,
        struct stretch::_STRRUN *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        struct _XLATEOBJ *a6,
        int a7)
{
  char *v7; // r14
  int v8; // r13d
  ULONG *v9; // rbx
  unsigned int *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // r12
  ULONG v15; // eax
  __int64 v16; // r8
  __int64 v17; // rcx
  char *v18; // rdx
  char *v19; // rcx

  v7 = (char *)a2 + 8;
  v8 = 0;
  *((_DWORD *)a2 + 2) = *(_DWORD *)this;
  v9 = (ULONG *)((char *)a3 + 4 * (int)a6);
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - *(_DWORD *)this;
  if ( (_DWORD)a6 != a7 )
  {
    v11 = (unsigned int *)((char *)this + 32);
    v12 = (unsigned int)(a7 - (_DWORD)a6);
    if ( pxlo )
    {
      v13 = 0LL;
      do
      {
        v14 = *v11++;
        v15 = XLATEOBJ_iXlate(pxlo, *v9);
        if ( (_DWORD)v14 )
        {
          v8 += v14;
          v19 = &v7[4 * v13 + 8];
          v13 += v14;
          do
          {
            *(_DWORD *)v19 &= v15;
            v19 += 4;
            LODWORD(v14) = v14 - 1;
          }
          while ( (_DWORD)v14 );
        }
        else
        {
          *(_DWORD *)&v7[4 * v13 + 8] &= v15;
        }
        ++v9;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      v16 = 0LL;
      do
      {
        v17 = *v11++;
        if ( (_DWORD)v17 )
        {
          v8 += v17;
          v18 = &v7[4 * v16 + 8];
          v16 += v17;
          do
          {
            *(_DWORD *)v18 &= *v9;
            v18 += 4;
            LODWORD(v17) = v17 - 1;
          }
          while ( (_DWORD)v17 );
        }
        else
        {
          *(_DWORD *)&v7[4 * v16 + 8] &= *v9;
        }
        ++v9;
        --v12;
      }
      while ( v12 );
    }
  }
  return (struct stretch::_XRUNLEN *)&v7[4 * v8 + 8];
}
