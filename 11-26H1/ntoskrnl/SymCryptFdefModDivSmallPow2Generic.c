/*
 * XREFs of SymCryptFdefModDivSmallPow2Generic @ 0x14056E530
 * Callers:
 *     SymCryptFdefModDivSmallPow2 @ 0x14056E4C8 (SymCryptFdefModDivSmallPow2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefModDivSmallPow2Generic(__int64 a1, _DWORD *a2, int a3, _DWORD *a4)
{
  char *v4; // r14
  unsigned int v5; // r10d
  __int64 v9; // rdx
  int v10; // ebp
  int v11; // r13d
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  unsigned int *v14; // r15
  signed __int64 v15; // rdi
  _DWORD *v16; // r12
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 result; // rax

  v4 = (char *)(a1 + 128);
  v5 = 16 * *(_DWORD *)(a1 + 4);
  do
  {
    v9 = (unsigned int)*a2;
    v10 = 1;
    v11 = -(*a2 & 1);
    v12 = (unsigned int)v9 + (*(_DWORD *)v4 & v11);
    v13 = (v9 + (unsigned __int64)(*(_DWORD *)v4 & (unsigned int)v11)) >> 32;
    if ( v5 > 1 )
    {
      v14 = a2 + 1;
      v15 = v4 - (char *)a2;
      v16 = a4;
      v17 = v5 - 1;
      v10 = v5;
      do
      {
        v18 = *v14;
        v19 = v11 & *(unsigned int *)((char *)v14++ + v15);
        v20 = v18 + v19 + v13;
        v13 = HIDWORD(v20);
        v21 = v12 | (v20 << 32);
        v22 = v21 >> 1;
        v12 = HIDWORD(v21);
        *v16++ = v22;
        --v17;
      }
      while ( v17 );
    }
    result = (unsigned int)(v10 - 1);
    a2 = a4;
    a4[result] = (v12 >> 1) | ((_DWORD)v13 << 31);
    --a3;
  }
  while ( a3 );
  return result;
}
