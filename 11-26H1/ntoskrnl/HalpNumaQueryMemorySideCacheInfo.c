/*
 * XREFs of HalpNumaQueryMemorySideCacheInfo @ 0x140787870
 * Callers:
 *     <none>
 * Callees:
 *     HalpNumaCompareMemorySideCacheNodeAndLevel @ 0x140787848 (HalpNumaCompareMemorySideCacheNodeAndLevel.c)
 */

__int64 __fastcall HalpNumaQueryMemorySideCacheInfo(unsigned int a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // r15
  unsigned int v6; // r10d
  int v7; // r14d
  int v8; // r11d
  __int64 v9; // rdi
  int v10; // ebp
  int v11; // eax

  v4 = HalpHmaConfig;
  if ( HalpHmaConfig )
  {
    if ( a4 == 40 )
    {
      v7 = 0;
      v8 = *(_DWORD *)(HalpHmaConfig + 8) - 1;
      v6 = -1073741275;
      while ( v7 <= v8 )
      {
        v9 = v4 + *(unsigned int *)(v4 + 20);
        v10 = (v7 + v8) >> 1;
        v11 = HalpNumaCompareMemorySideCacheNodeAndLevel(
                a1,
                a2,
                *(_DWORD *)(v9 + 40LL * v10),
                *(_DWORD *)(v9 + 40LL * v10 + 20));
        if ( v11 >= 0 )
        {
          if ( v11 <= 0 )
          {
            v6 = 0;
            *(_OWORD *)a3 = *(_OWORD *)(v9 + 40LL * v10);
            *(_OWORD *)(a3 + 16) = *(_OWORD *)(v9 + 40LL * v10 + 16);
            *(_QWORD *)(a3 + 32) = *(_QWORD *)(v9 + 40LL * v10 + 32);
            return v6;
          }
          v7 = v10 + 1;
        }
        else
        {
          v8 = v10 - 1;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741496;
  }
  return v6;
}
