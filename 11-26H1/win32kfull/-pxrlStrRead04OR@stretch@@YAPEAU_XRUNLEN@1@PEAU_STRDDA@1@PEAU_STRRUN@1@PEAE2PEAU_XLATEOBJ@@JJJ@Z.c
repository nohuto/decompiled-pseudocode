/*
 * XREFs of ?pxrlStrRead04OR@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x140337950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct stretch::_XRUNLEN *__fastcall stretch::pxrlStrRead04OR(
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
  __int64 v17; // rdi
  unsigned int v18; // ebx
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  __int64 v21; // rdx
  int v22; // esi
  int v23; // ecx
  _DWORD *v24; // rax
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rcx
  int v28; // edi
  _DWORD *v29; // rdx
  __int64 v30; // rdx
  int v31; // esi
  int v32; // ecx
  _DWORD *v33; // rax
  int v34; // eax

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
      v26 = (unsigned __int8)a6 & 7;
      while ( 1 )
      {
        v27 = *v15++;
        v28 = *(_DWORD *)(*((_QWORD *)a5 + 2)
                        + 4 * ((unsigned __int64)(v14 & (unsigned int)dword_140370F20[v26]) >> dword_140370F40[v26]));
        if ( (_DWORD)v27 )
        {
          v12 += v27;
          v29 = (_DWORD *)((char *)a2 + 4 * v16 + 16);
          v16 += v27;
          do
          {
            *v29++ |= v28;
            LODWORD(v27) = v27 - 1;
          }
          while ( (_DWORD)v27 );
        }
        else
        {
          *((_DWORD *)a2 + v16 + 4) |= v28;
        }
        ++v7;
        v30 = v26 + 1;
        v31 = v11 + 1;
        if ( v7 >= a7 )
          break;
        v32 = v31 & 8;
        if ( (v31 & 8) != 0 )
          v14 = v13[1];
        v33 = v13 + 1;
        if ( (v31 & 8) == 0 )
          v33 = v13;
        v13 = v33;
        v34 = 0;
        if ( (v31 & 8) == 0 )
          v34 = v31;
        v26 = 0LL;
        v11 = v34;
        if ( !v32 )
          v26 = v30;
      }
    }
    else
    {
      v17 = (unsigned __int8)a6 & 7;
      while ( 1 )
      {
        v18 = (v14 & (unsigned int)dword_140370F20[v17]) >> dword_140370F40[v17];
        v19 = *v15++;
        if ( (_DWORD)v19 )
        {
          v12 += v19;
          v20 = (_DWORD *)((char *)a2 + 4 * v16 + 16);
          v16 += v19;
          do
          {
            *v20++ |= v18;
            LODWORD(v19) = v19 - 1;
          }
          while ( (_DWORD)v19 );
        }
        else
        {
          *((_DWORD *)a2 + v16 + 4) |= v18;
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
  }
  return (struct stretch::_STRDDA *)((char *)a2 + 4 * v12 + 16);
}
