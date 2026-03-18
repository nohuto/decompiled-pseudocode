/*
 * XREFs of ?pxrlStrRead08AND@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1401E8770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct stretch::_XRUNLEN *__fastcall stretch::pxrlStrRead08AND(
        stretch *this,
        struct stretch::_STRDDA *a2,
        struct stretch::_STRRUN *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _XLATEOBJ *a6,
        int a7)
{
  int v7; // edi
  unsigned __int8 *v8; // r8
  __int64 v9; // r11
  unsigned int *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r9
  _DWORD *v14; // r10
  __int64 v15; // r10
  unsigned int *v16; // r11
  __int64 v17; // rbx
  __int64 v18; // rcx
  _DWORD *v19; // r9

  v7 = 0;
  v8 = (unsigned __int8 *)a3 + (int)a6;
  *((_DWORD *)a2 + 2) = *(_DWORD *)this;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - *(_DWORD *)this;
  if ( (_DWORD)a6 != a7 )
  {
    if ( a5 )
    {
      v9 = 0LL;
      v10 = (unsigned int *)((char *)this + 32);
      v11 = (unsigned int)(a7 - (_DWORD)a6);
      do
      {
        v12 = *v10++;
        if ( (_DWORD)v12 )
        {
          v7 += v12;
          v14 = (_DWORD *)((char *)a2 + 4 * v9 + 16);
          v9 += v12;
          do
          {
            *v14++ &= *(_DWORD *)(*((_QWORD *)a5 + 2) + 4LL * *v8);
            LODWORD(v12) = v12 - 1;
          }
          while ( (_DWORD)v12 );
        }
        else
        {
          *((_DWORD *)a2 + v9 + 4) &= *(_DWORD *)(*((_QWORD *)a5 + 2) + 4LL * *v8);
        }
        ++v8;
        --v11;
      }
      while ( v11 );
    }
    else
    {
      v15 = 0LL;
      v16 = (unsigned int *)((char *)this + 32);
      v17 = (unsigned int)(a7 - (_DWORD)a6);
      do
      {
        v18 = *v16++;
        if ( (_DWORD)v18 )
        {
          v7 += v18;
          v19 = (_DWORD *)((char *)a2 + 4 * v15 + 16);
          v15 += v18;
          do
          {
            *v19++ &= *v8;
            LODWORD(v18) = v18 - 1;
          }
          while ( (_DWORD)v18 );
        }
        else
        {
          *((_DWORD *)a2 + v15 + 4) &= *v8;
        }
        ++v8;
        --v17;
      }
      while ( v17 );
    }
  }
  return (struct stretch::_STRDDA *)((char *)a2 + 4 * v7 + 16);
}
