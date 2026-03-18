/*
 * XREFs of ?vSolidXorRow1@@YAXPEAU_ROW@@KJPEAEKJK@Z @ 0x140229740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidXorRow1(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  __int64 v8; // r14
  unsigned __int8 *v9; // r10
  char v10; // bp
  int v11; // ebx
  int v12; // edx
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v15; // rbx
  char v16; // r9
  int v17; // edx
  __int64 v18; // r9
  int v19; // r8d
  int v20; // ecx
  unsigned __int8 *v21; // rdx
  int v22; // eax

  if ( a2 )
  {
    v8 = a2;
    v9 = &a4[a6 * a3];
    v10 = 5 - a7;
    do
    {
      v11 = *((_DWORD *)a1 + 1);
      v12 = v11 - *(_DWORD *)a1;
      v13 = (unsigned int)(*(int *)a1 >> v10);
      v14 = (*(_DWORD *)a1 << a7) & 0x1F;
      v15 = (unsigned int)(v11 >> v10);
      v16 = (v12 << a7) + (*(_DWORD *)a1 << a7);
      v17 = *((_DWORD *)&aulMsk + v14);
      v18 = v16 & 0x1F;
      v19 = ~*((_DWORD *)&aulMsk + v18);
      if ( (_DWORD)v13 == (_DWORD)v15 || (_DWORD)v14 )
      {
        v22 = v19 & v17;
        if ( (_DWORD)v13 != (_DWORD)v15 )
          v22 = v17;
        *(_DWORD *)&v9[4 * v13] ^= a5 & v22;
        if ( (_DWORD)v13 == (_DWORD)v15 )
          goto LABEL_10;
        v13 = (unsigned int)(v13 + 1);
      }
      v20 = v15 - v13;
      if ( (_DWORD)v15 != (_DWORD)v13 )
      {
        v21 = &v9[4 * v13];
        do
        {
          *(_DWORD *)v21 ^= a5;
          v21 += 4;
          --v20;
        }
        while ( v20 );
      }
      if ( (_DWORD)v18 )
        *(_DWORD *)&v9[4 * v15] ^= a5 & v19;
LABEL_10:
      a1 = (struct _ROW *)((char *)a1 + 8);
      v9 += a6;
      --v8;
    }
    while ( v8 );
  }
}
