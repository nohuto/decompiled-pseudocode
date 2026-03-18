/*
 * XREFs of ?pxrlStrRead04OR@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x140313E00
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
  int v11; // ecx
  int v12; // esi
  int v13; // ebp
  _DWORD *v14; // r11
  int v15; // r14d
  __int64 v16; // r8
  __int64 v17; // rdi
  unsigned int *v18; // r15
  unsigned int v19; // ebx
  __int64 v20; // rcx
  _DWORD *v21; // rdx
  __int64 v22; // rdx
  int v23; // esi
  int v24; // ecx
  _DWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rbx
  int v28; // edi
  __int64 v29; // rcx
  _DWORD *v30; // rdx
  __int64 v31; // rdx
  int v32; // esi
  int v33; // ecx
  _DWORD *v34; // rax
  int v35; // eax
  unsigned __int8 *v37; // [rsp+40h] [rbp+28h]

  v7 = (int)a6;
  v11 = *(_DWORD *)this;
  *((_DWORD *)a2 + 2) = v11;
  v12 = (unsigned __int8)a6 & 7;
  v13 = 0;
  v14 = (_DWORD *)((char *)a3 + 4 * ((__int64)(int)a6 >> 3));
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 2) - v11;
  if ( (int)a6 < a7 )
  {
    v15 = *v14;
    v16 = 0LL;
    if ( a5 )
    {
      v27 = (unsigned __int8)a6 & 7;
      v37 = (unsigned __int8 *)this + 32;
      while ( 1 )
      {
        v28 = *(_DWORD *)(*((_QWORD *)a5 + 2)
                        + 4 * ((unsigned __int64)(v15 & (unsigned int)dword_140363A68[v27]) >> dword_140363A48[v27]));
        v29 = *(unsigned int *)v37;
        v37 += 4;
        if ( (_DWORD)v29 )
        {
          v13 += v29;
          v30 = (_DWORD *)((char *)a2 + 4 * v16 + 16);
          v16 += v29;
          do
          {
            *v30++ |= v28;
            LODWORD(v29) = v29 - 1;
          }
          while ( (_DWORD)v29 );
        }
        else
        {
          *((_DWORD *)a2 + v16 + 4) |= v28;
        }
        ++v7;
        v31 = v27 + 1;
        v32 = v12 + 1;
        if ( v7 >= a7 )
          break;
        v33 = v32 & 8;
        if ( (v32 & 8) != 0 )
          v15 = v14[1];
        v34 = v14 + 1;
        if ( (v32 & 8) == 0 )
          v34 = v14;
        v14 = v34;
        v35 = 0;
        if ( (v32 & 8) == 0 )
          v35 = v32;
        v27 = 0LL;
        v12 = v35;
        if ( !v33 )
          v27 = v31;
      }
    }
    else
    {
      v17 = (unsigned __int8)a6 & 7;
      v18 = (unsigned int *)((char *)this + 32);
      while ( 1 )
      {
        v19 = (v15 & (unsigned int)dword_140363A68[v17]) >> dword_140363A48[v17];
        v20 = *v18++;
        if ( (_DWORD)v20 )
        {
          v13 += v20;
          v21 = (_DWORD *)((char *)a2 + 4 * v16 + 16);
          v16 += v20;
          do
          {
            *v21++ |= v19;
            LODWORD(v20) = v20 - 1;
          }
          while ( (_DWORD)v20 );
        }
        else
        {
          *((_DWORD *)a2 + v16 + 4) |= v19;
        }
        ++v7;
        v22 = v17 + 1;
        v23 = v12 + 1;
        if ( v7 >= a7 )
          break;
        v24 = v23 & 8;
        if ( (v23 & 8) != 0 )
          v15 = v14[1];
        v25 = v14 + 1;
        if ( (v23 & 8) == 0 )
          v25 = v14;
        v14 = v25;
        v26 = 0;
        if ( (v23 & 8) == 0 )
          v26 = v23;
        v17 = 0LL;
        v12 = v26;
        if ( !v24 )
          v17 = v22;
      }
    }
  }
  return (struct stretch::_STRDDA *)((char *)a2 + 4 * v13 + 16);
}
