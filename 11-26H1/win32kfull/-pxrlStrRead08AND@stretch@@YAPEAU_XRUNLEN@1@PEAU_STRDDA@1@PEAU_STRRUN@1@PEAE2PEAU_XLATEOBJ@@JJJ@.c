/*
 * XREFs of ?pxrlStrRead08AND@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14021D870
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
  int v7; // esi
  unsigned __int8 *v8; // r8
  unsigned int *v9; // r11
  __int64 v10; // rbx
  __int64 v11; // r10
  __int64 v12; // r9
  _DWORD *v14; // rdi
  __int64 v15; // r9
  __int64 v16; // rcx
  _DWORD *v17; // r10

  v7 = 0;
  v8 = (unsigned __int8 *)a3 + (int)a6;
  *((_DWORD *)a2 + 2) = *(_DWORD *)this;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - *(_DWORD *)this;
  if ( (_DWORD)a6 != a7 )
  {
    v9 = (unsigned int *)((char *)this + 32);
    v10 = (unsigned int)(a7 - (_DWORD)a6);
    if ( a5 )
    {
      v11 = 0LL;
      do
      {
        v12 = *v9++;
        if ( (_DWORD)v12 )
        {
          v7 += v12;
          v14 = (_DWORD *)((char *)a2 + 4 * v11 + 16);
          v11 += v12;
          do
          {
            *v14++ &= *(_DWORD *)(*((_QWORD *)a5 + 2) + 4LL * *v8);
            LODWORD(v12) = v12 - 1;
          }
          while ( (_DWORD)v12 );
        }
        else
        {
          *((_DWORD *)a2 + v11 + 4) &= *(_DWORD *)(*((_QWORD *)a5 + 2) + 4LL * *v8);
        }
        ++v8;
        --v10;
      }
      while ( v10 );
    }
    else
    {
      v15 = 0LL;
      do
      {
        v16 = *v9++;
        if ( (_DWORD)v16 )
        {
          v7 += v16;
          v17 = (_DWORD *)((char *)a2 + 4 * v15 + 16);
          v15 += v16;
          do
          {
            *v17++ &= *v8;
            LODWORD(v16) = v16 - 1;
          }
          while ( (_DWORD)v16 );
        }
        else
        {
          *((_DWORD *)a2 + v15 + 4) &= *v8;
        }
        ++v8;
        --v10;
      }
      while ( v10 );
    }
  }
  return (struct stretch::_STRDDA *)((char *)a2 + 4 * v7 + 16);
}
