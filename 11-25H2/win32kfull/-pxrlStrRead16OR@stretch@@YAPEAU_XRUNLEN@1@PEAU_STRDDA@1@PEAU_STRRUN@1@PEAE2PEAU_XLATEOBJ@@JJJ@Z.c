/*
 * XREFs of ?pxrlStrRead16OR@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1403141F0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1400D08C0 (XLATEOBJ_iXlate.c)
 */

struct stretch::_XRUNLEN *__fastcall stretch::pxrlStrRead16OR(
        stretch *this,
        struct stretch::_STRDDA *a2,
        struct stretch::_STRRUN *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        struct _XLATEOBJ *a6,
        int a7)
{
  int v8; // r14d
  unsigned __int16 *v9; // rdi
  __int64 v10; // r8
  unsigned int *v11; // r9
  __int64 v12; // r10
  __int64 v13; // rcx
  _DWORD *v14; // rdx
  __int64 v15; // rbp
  unsigned int *v16; // r13
  __int64 v17; // r15
  __int64 v18; // rsi
  ULONG v19; // eax
  _DWORD *v20; // rcx

  v8 = 0;
  *((_DWORD *)a2 + 2) = *(_DWORD *)this;
  v9 = (unsigned __int16 *)((char *)a3 + 2 * (int)a6);
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - *(_DWORD *)this;
  if ( (_DWORD)a6 != a7 )
  {
    if ( pxlo )
    {
      v15 = 0LL;
      v16 = (unsigned int *)((char *)this + 32);
      v17 = (unsigned int)(a7 - (_DWORD)a6);
      do
      {
        v18 = *v16++;
        v19 = XLATEOBJ_iXlate(pxlo, *v9);
        if ( (_DWORD)v18 )
        {
          v8 += v18;
          v20 = (_DWORD *)((char *)a2 + 4 * v15 + 16);
          v15 += v18;
          do
          {
            *v20++ |= v19;
            LODWORD(v18) = v18 - 1;
          }
          while ( (_DWORD)v18 );
        }
        else
        {
          *((_DWORD *)a2 + v15 + 4) |= v19;
        }
        ++v9;
        --v17;
      }
      while ( v17 );
    }
    else
    {
      v10 = 0LL;
      v11 = (unsigned int *)((char *)this + 32);
      v12 = (unsigned int)(a7 - (_DWORD)a6);
      do
      {
        v13 = *v11++;
        if ( (_DWORD)v13 )
        {
          v8 += v13;
          v14 = (_DWORD *)((char *)a2 + 4 * v10 + 16);
          v10 += v13;
          do
          {
            *v14++ |= *v9;
            LODWORD(v13) = v13 - 1;
          }
          while ( (_DWORD)v13 );
        }
        else
        {
          *((_DWORD *)a2 + v10 + 4) |= *v9;
        }
        ++v9;
        --v12;
      }
      while ( v12 );
    }
  }
  return (struct stretch::_STRDDA *)((char *)a2 + 4 * v8 + 16);
}
