/*
 * XREFs of ?vSolidFillRow1@@YAXPEAU_ROW@@KJPEAEKJK@Z @ 0x140197330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidFillRow1(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  __int64 v8; // r15
  unsigned __int8 *v9; // r9
  char v10; // r14
  int v11; // ebp
  int v12; // edx
  __int64 v13; // r10
  __int64 v14; // rbp
  __int64 v15; // rdx
  int v16; // edi
  int v17; // ebx
  int v18; // edx
  unsigned int v19; // ecx
  unsigned __int8 *v20; // r10
  unsigned __int64 v21; // r8
  int v22; // [rsp+0h] [rbp-38h]
  __int64 v23; // [rsp+58h] [rbp+20h]

  if ( a2 )
  {
    v8 = a2;
    v9 = &a4[a6 * a3];
    v10 = 5 - a7;
    while ( 1 )
    {
      v11 = *((_DWORD *)a1 + 1);
      v12 = v11 - *(_DWORD *)a1;
      v13 = (unsigned int)(*(int *)a1 >> v10);
      v14 = (unsigned int)(v11 >> v10);
      v23 = (*(_DWORD *)a1 << a7) & 0x1F;
      v15 = ((unsigned __int8)(*(_DWORD *)a1 << a7) + (unsigned __int8)(v12 << a7)) & 0x1F;
      v22 = v15;
      v16 = *((_DWORD *)&aulMsk + v15);
      v17 = ~v16;
      if ( (_DWORD)v13 == (_DWORD)v14 || (_DWORD)v23 )
      {
        v18 = v17 & *((_DWORD *)&aulMsk + v23);
        if ( (_DWORD)v13 != (_DWORD)v14 )
          v18 = *((_DWORD *)&aulMsk + v23);
        *(_DWORD *)&v9[4 * v13] = a5 & v18 | *(_DWORD *)&v9[4 * v13] & ~v18;
        if ( (_DWORD)v13 == (_DWORD)v14 )
          goto LABEL_16;
        v13 = (unsigned int)(v13 + 1);
      }
      v19 = 4 * (v14 - v13);
      if ( v19 )
      {
        v20 = &v9[4 * v13];
        v21 = (unsigned __int64)v19 >> 2;
        if ( v21 )
        {
          if ( ((unsigned __int8)v20 & 4) == 0 )
            goto LABEL_12;
          *(_DWORD *)v20 = a5;
          if ( --v21 )
            break;
        }
      }
LABEL_14:
      if ( v22 )
        *(_DWORD *)&v9[4 * v14] = a5 & v17 | v16 & *(_DWORD *)&v9[4 * v14];
LABEL_16:
      a1 = (struct _ROW *)((char *)a1 + 8);
      v9 += a6;
      if ( !--v8 )
        return;
    }
    v20 += 4;
LABEL_12:
    memset64(v20, a5 | ((unsigned __int64)a5 << 32), v21 >> 1);
    if ( (v21 & 1) != 0 )
      *(_DWORD *)&v20[4 * v21 - 4] = a5;
    goto LABEL_14;
  }
}
