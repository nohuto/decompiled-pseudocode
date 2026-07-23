/*
 * XREFs of PsspHandleDumper @ 0x1800E67E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 */

char __fastcall PsspHandleDumper(
        __int64 *a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        __int64 a7,
        void *Src,
        size_t Size)
{
  char v10; // r11
  _WORD *v11; // r10
  unsigned int v12; // ebx
  __int64 v13; // rdx
  void *v14; // r9
  __int64 v15; // r12
  char v16; // cl
  __int64 v17; // r12
  unsigned int v18; // eax
  char result; // al
  _WORD *v20; // r11
  void *v21; // rax
  _WORD *v22; // [rsp+20h] [rbp-58h]
  char *v23; // [rsp+28h] [rbp-50h]
  _WORD *v24; // [rsp+30h] [rbp-48h]
  void *v25; // [rsp+38h] [rbp-40h]
  __int64 v26; // [rsp+80h] [rbp+8h]

  v26 = 0LL;
  v22 = 0LL;
  v10 = a4;
  v23 = 0LL;
  v11 = 0LL;
  v24 = 0LL;
  v12 = 16;
  v13 = *a1;
  v14 = 0LL;
  v25 = 0LL;
  v15 = 0LL;
  v16 = 0;
  if ( a5 && *((_QWORD *)a5 + 1) )
  {
    v11 = (_WORD *)(v13 + 16);
    v14 = (void *)(v13 + 18);
    v12 = *a5 + 20;
    v26 = v13 + 18;
    v16 = 1;
  }
  if ( a6 && *((_QWORD *)a6 + 1) )
  {
    v16 |= 2u;
    v22 = (_WORD *)(v13 + v12);
    v23 = (char *)(v22 + 1);
    v12 += *a6 + 4;
  }
  if ( a7 )
  {
    v17 = v12;
    v12 += 56;
    v15 = v13 + v17;
    v16 |= 4u;
  }
  if ( Src && (_DWORD)Size )
  {
    v20 = (_WORD *)(v13 + v12);
    v12 += Size + 2;
    v24 = v20;
    v16 |= 8u;
    v21 = v20 + 1;
    v10 = a4;
    v25 = v21;
  }
  v18 = *((_DWORD *)a1 + 3);
  if ( v18 + v12 < v18 || v18 + v12 > *((_DWORD *)a1 + 2) )
    return 0;
  *(_DWORD *)v13 = a3;
  *(_BYTE *)(v13 + 4) = v16;
  *(_BYTE *)(v13 + 5) = v10;
  *(_QWORD *)(v13 + 8) = MEMORY[0x7FFE0014];
  if ( a5 && *((_QWORD *)a5 + 1) )
  {
    *v11 = *a5 + 2;
    memmove(v14, *((const void **)a5 + 1), *a5);
    *(_WORD *)(*a5 + v26) = 0;
  }
  if ( a6 && *((_QWORD *)a6 + 1) )
  {
    *v22 = *a6 + 2;
    memmove(v23, *((const void **)a6 + 1), *a6);
    *(_WORD *)&v23[*a6] = 0;
  }
  if ( a7 )
  {
    *(_OWORD *)v15 = *(_OWORD *)a7;
    *(_OWORD *)(v15 + 16) = *(_OWORD *)(a7 + 16);
    *(_OWORD *)(v15 + 32) = *(_OWORD *)(a7 + 32);
    *(_QWORD *)(v15 + 48) = *(_QWORD *)(a7 + 48);
  }
  if ( Src )
  {
    if ( (_DWORD)Size )
    {
      *v24 = Size;
      memmove(v25, Src, (unsigned int)Size);
    }
  }
  *((_DWORD *)a1 + 3) += v12;
  result = 1;
  *a1 += v12;
  ++*((_DWORD *)a1 + 4);
  return result;
}
