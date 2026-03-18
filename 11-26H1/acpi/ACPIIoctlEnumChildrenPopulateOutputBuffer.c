/*
 * XREFs of ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x140043C28
 * Callers:
 *     ACPIIoctlEnumChildren @ 0x140048808 (ACPIIoctlEnumChildren.c)
 * Callees:
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ACPIIoctlEnumChildrenPopulateOutputBuffer(_DWORD *a1, unsigned int a2, int *a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rbp
  unsigned int v10; // ecx
  __int64 v12; // rax
  _DWORD *v13; // r14
  _BYTE *v14; // rsi
  _BYTE *v15; // r12
  int v16; // edi
  __int64 v17; // r13
  __int64 v18; // rax
  size_t v19; // rbp
  int v20; // [rsp+60h] [rbp+18h]

  v4 = 0;
  *a3 = 0;
  if ( *(_QWORD *)(a4 + 16) > 0xFFFFFFFFuLL )
  {
    return (unsigned int)-1072431089;
  }
  else
  {
    v9 = *(unsigned int *)(a4 + 16);
    memset(a1, 0, a2);
    *a1 = 1198089537;
    v10 = *(_DWORD *)(a4 + 24) + 8 * (v9 + 1);
    if ( a2 >= v10 )
    {
      v12 = *(_QWORD *)(a4 + 8);
      v13 = a1 + 2;
      v14 = *(_BYTE **)(a4 + 32);
      v15 = *(_BYTE **)(v12 + 32);
      a1[1] = v9;
      v16 = 8;
      if ( (_DWORD)v9 )
      {
        v17 = v9;
        do
        {
          v18 = -1LL;
          do
            ++v18;
          while ( v14[v18] );
          v20 = v18 + 1;
          v19 = (unsigned int)(v18 + 1);
          memmove(v13 + 2, v14, v19);
          v13[1] = v20;
          if ( *v15 == 49 )
            *v13 = 1;
          v16 += v20 + 8;
          v13 = (_DWORD *)((char *)v13 + v19 + 8);
          v14 += v19;
          ++v15;
          --v17;
        }
        while ( v17 );
      }
      *a3 = v16;
    }
    else
    {
      v4 = -2147483643;
      a1[1] = v10;
      *a3 = 20;
    }
  }
  return v4;
}
