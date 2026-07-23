/*
 * XREFs of HalpDmaForceAllocation @ 0x14058BAA0
 * Callers:
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x14058B44C (HalpDmaAllocateMapRegistersAtHighLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaForceAllocation(__int64 a1, __int64 *a2, __int64 **a3, int a4, char a5, _DWORD *a6)
{
  __int64 *v6; // r10
  unsigned int *v7; // r11
  __int64 v9; // rbx
  int v10; // r9d
  unsigned int v11; // edi
  __int64 result; // rax
  unsigned int v13; // esi
  char i; // bp
  __int64 v15; // r15
  unsigned int v16; // r12d
  __int64 v17; // rcx

  v6 = *a3;
  v7 = (unsigned int *)(a3 + 1);
  if ( !*a3 )
  {
    if ( *v7 == -1 )
    {
      v9 = 0LL;
      v10 = 0;
      v11 = 0;
      goto LABEL_4;
    }
    *a3 = a2;
    v6 = a2;
    *v7 = 0;
  }
  v13 = *v7;
  v11 = 0;
  for ( i = 1; ; i = 0 )
  {
    v15 = 0LL;
    v9 = 0LL;
    v10 = 0;
    while ( v6 )
    {
      v16 = *((_DWORD *)v6 + 2);
      v11 = v13;
      v17 = v6[2] + 72LL * v13;
      while ( v11 < v16 )
      {
        if ( (*(_QWORD *)(v17 + 48) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        {
          if ( v9 )
            *(_QWORD *)(v15 + 8) = v17;
          else
            v9 = v17;
          ++v10;
          v15 = v17;
          if ( v10 == a4 )
            goto LABEL_4;
        }
        else if ( a5 )
        {
          v9 = 0LL;
          v10 = 0;
        }
        v17 += 72LL;
        ++v11;
      }
      v6 = (__int64 *)*v6;
      v13 = 0;
    }
    if ( !a5 )
      break;
    if ( !i || *a3 == a2 && !*v7 )
    {
      *a3 = a2;
      result = 0LL;
      *((_DWORD *)a3 + 2) = 0;
      return result;
    }
    v13 = 0;
    v6 = a2;
  }
LABEL_4:
  *a3 = v6;
  *((_DWORD *)a3 + 2) = v11;
  if ( !a5 )
  {
    if ( !v6 )
      *((_DWORD *)a3 + 2) = -1;
    *a6 = v10;
  }
  return v9;
}
