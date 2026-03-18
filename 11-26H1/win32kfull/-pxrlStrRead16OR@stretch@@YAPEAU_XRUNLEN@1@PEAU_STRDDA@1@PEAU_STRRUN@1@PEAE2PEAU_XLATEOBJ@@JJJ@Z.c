/*
 * XREFs of ?pxrlStrRead16OR@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x140337D20
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14011C840 (XLATEOBJ_iXlate.c)
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
  int v8; // r12d
  unsigned __int16 *v9; // rdi
  unsigned int *v10; // r15
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // r8
  __int64 v15; // rbp
  __int64 v16; // rsi
  ULONG v17; // eax
  _DWORD *v18; // rcx

  v8 = 0;
  *((_DWORD *)a2 + 2) = *(_DWORD *)this;
  v9 = (unsigned __int16 *)((char *)a3 + 2 * (int)a6);
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - *(_DWORD *)this;
  if ( (_DWORD)a6 != a7 )
  {
    v10 = (unsigned int *)((char *)this + 32);
    v11 = (unsigned int)(a7 - (_DWORD)a6);
    if ( pxlo )
    {
      v15 = 0LL;
      do
      {
        v16 = *v10++;
        v17 = XLATEOBJ_iXlate(pxlo, *v9);
        if ( (_DWORD)v16 )
        {
          v8 += v16;
          v18 = (_DWORD *)((char *)a2 + 4 * v15 + 16);
          v15 += v16;
          do
          {
            *v18++ |= v17;
            LODWORD(v16) = v16 - 1;
          }
          while ( (_DWORD)v16 );
        }
        else
        {
          *((_DWORD *)a2 + v15 + 4) |= v17;
        }
        ++v9;
        --v11;
      }
      while ( v11 );
    }
    else
    {
      v12 = 0LL;
      do
      {
        v13 = *v10++;
        if ( (_DWORD)v13 )
        {
          v8 += v13;
          v14 = (_DWORD *)((char *)a2 + 4 * v12 + 16);
          v12 += v13;
          do
          {
            *v14++ |= *v9;
            LODWORD(v13) = v13 - 1;
          }
          while ( (_DWORD)v13 );
        }
        else
        {
          *((_DWORD *)a2 + v12 + 4) |= *v9;
        }
        ++v9;
        --v11;
      }
      while ( v11 );
    }
  }
  return (struct stretch::_STRDDA *)((char *)a2 + 4 * v8 + 16);
}
