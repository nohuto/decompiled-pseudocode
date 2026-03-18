/*
 * XREFs of ?pxrlStrRead04AND@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x14021D090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct stretch::_XRUNLEN *__fastcall stretch::pxrlStrRead04AND(
        stretch *this,
        struct stretch::_STRDDA *a2,
        struct stretch::_STRRUN *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        struct _XLATEOBJ *a6,
        int a7)
{
  int v7; // r10d
  int v10; // ecx
  int v11; // esi
  int v12; // ebp
  _DWORD *v13; // r11
  int v14; // r14d
  unsigned int *v15; // r13
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // edi
  _DWORD *v20; // rdx
  __int64 v21; // rdx
  int v22; // esi
  int v23; // ecx
  _DWORD *v24; // rax
  int v25; // eax
  __int64 v27; // rdi
  unsigned int v28; // ebx
  __int64 v29; // rcx
  _DWORD *v30; // rdx
  __int64 v31; // rdx
  int v32; // esi
  int v33; // ecx
  _DWORD *v34; // rax
  int v35; // eax

  v7 = (int)a6;
  v10 = *(_DWORD *)this;
  *((_DWORD *)a2 + 2) = v10;
  v11 = (unsigned __int8)a6 & 7;
  v12 = 0;
  v13 = (_DWORD *)((char *)a3 + 4 * ((__int64)(int)a6 >> 3));
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - v10;
  if ( (int)a6 < a7 )
  {
    v14 = *v13;
    v15 = (unsigned int *)((char *)this + 32);
    v16 = 0LL;
    if ( a5 )
    {
      v17 = (unsigned __int8)a6 & 7;
      while ( 1 )
      {
        v18 = *v15++;
        v19 = *(_DWORD *)(*((_QWORD *)a5 + 2)
                        + 4 * ((unsigned __int64)(v14 & (unsigned int)dword_140370F20[v17]) >> dword_140370F40[v17]));
        if ( (_DWORD)v18 )
        {
          v12 += v18;
          v20 = (_DWORD *)((char *)a2 + 4 * v16 + 16);
          v16 += v18;
          do
          {
            *v20++ &= v19;
            LODWORD(v18) = v18 - 1;
          }
          while ( (_DWORD)v18 );
        }
        else
        {
          *((_DWORD *)a2 + v16 + 4) &= v19;
        }
        ++v7;
        v21 = v17 + 1;
        v22 = v11 + 1;
        if ( v7 >= a7 )
          break;
        v23 = v22 & 8;
        if ( (v22 & 8) != 0 )
          v14 = v13[1];
        v24 = v13 + 1;
        if ( (v22 & 8) == 0 )
          v24 = v13;
        v13 = v24;
        v25 = 0;
        if ( (v22 & 8) == 0 )
          v25 = v22;
        v17 = 0LL;
        v11 = v25;
        if ( !v23 )
          v17 = v21;
      }
    }
    else
    {
      v27 = (unsigned __int8)a6 & 7;
      while ( 1 )
      {
        v28 = (v14 & (unsigned int)dword_140370F20[v27]) >> dword_140370F40[v27];
        v29 = *v15++;
        if ( (_DWORD)v29 )
        {
          v12 += v29;
          v30 = (_DWORD *)((char *)a2 + 4 * v16 + 16);
          v16 += v29;
          do
          {
            *v30++ &= v28;
            LODWORD(v29) = v29 - 1;
          }
          while ( (_DWORD)v29 );
        }
        else
        {
          *((_DWORD *)a2 + v16 + 4) &= v28;
        }
        ++v7;
        v31 = v27 + 1;
        v32 = v11 + 1;
        if ( v7 >= a7 )
          break;
        v33 = v32 & 8;
        if ( (v32 & 8) != 0 )
          v14 = v13[1];
        v34 = v13 + 1;
        if ( (v32 & 8) == 0 )
          v34 = v13;
        v13 = v34;
        v35 = 0;
        if ( (v32 & 8) == 0 )
          v35 = v32;
        v27 = 0LL;
        v11 = v35;
        if ( !v33 )
          v27 = v31;
      }
    }
  }
  return (struct stretch::_STRDDA *)((char *)a2 + 4 * v12 + 16);
}
