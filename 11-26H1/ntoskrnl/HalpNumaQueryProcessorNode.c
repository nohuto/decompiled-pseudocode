/*
 * XREFs of HalpNumaQueryProcessorNode @ 0x1405947B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptGetIdentifiers @ 0x1404F6820 (HalpInterruptGetIdentifiers.c)
 */

__int64 __fastcall HalpNumaQueryProcessorNode(int a1, int *a2, _WORD *a3)
{
  int v3; // r9d
  unsigned int v4; // ebx
  __int64 result; // rax
  unsigned int i; // ecx
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2;
  v4 = 0;
  v9 = 0;
  if ( v3 == -1 )
  {
    result = HalpInterruptGetIdentifiers(a1, &v9, 0LL);
    if ( (int)result < 0 )
      return result;
    v3 = v9;
    *a2 = v9;
  }
  if ( HalpAcpiSrat )
  {
    for ( i = 0; i < *(_DWORD *)(HalpNumaConfig + 60); ++i )
    {
      if ( *(_DWORD *)(*(_QWORD *)HalpNumaConfig + 4LL * i) == v3 )
      {
        while ( v4 < *(_DWORD *)(HalpNumaConfig + 56) )
        {
          if ( *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 24) + 4LL * v4) == *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 16)
                                                                                     + 4LL * i) )
          {
            *a3 = v4;
            return 0LL;
          }
          ++v4;
        }
        return 3221226021LL;
      }
    }
    return 3221226021LL;
  }
  else
  {
    *a3 = -1;
    return 0LL;
  }
}
