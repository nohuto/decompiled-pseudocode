/*
 * XREFs of IcGetPossibleInput @ 0x1400A88FC
 * Callers:
 *     IrqArbAddAllocation @ 0x1400BD7C0 (IrqArbAddAllocation.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1400BE450 (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1400BE668 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1400C3308 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangePci @ 0x1400D2AC8 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcGetPossibleInput(unsigned int a1, __int64 a2, _BYTE *a3)
{
  __int64 i; // rdx
  unsigned int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  char v8; // r8
  int v9; // eax

  for ( i = IcListHead; ; i = *(_QWORD *)i )
  {
    if ( &IcListHead == (__int64 *)i )
      return 3221226021LL;
    if ( *(int *)(i + 28) >= 0 )
    {
      v5 = *(_DWORD *)(i + 16);
      if ( v5 <= a1 && *(_DWORD *)(i + 20) >= a1 )
        break;
    }
  }
  v6 = 200LL * (a1 - v5);
  if ( !*(_DWORD *)(v6 + i + 36) )
    return 3221226021LL;
  if ( a3 )
  {
    v7 = *(_DWORD *)(v6 + i + 148);
    if ( v7 == 3 )
    {
      v8 = 10;
    }
    else if ( v7 == 4 )
    {
      v8 = 8;
    }
    else
    {
      v8 = v7 != 2 ? 0 : 2;
    }
    *a3 = v8 | (*(_DWORD *)(v6 + i + 152) == 0);
  }
  v9 = *(_DWORD *)(v6 + i + 40);
  if ( v9 && v9 == *(_DWORD *)(v6 + i + 32) && *(_DWORD *)(v6 + i + 44) == *(_DWORD *)(v6 + i + 36) )
    return 263LL;
  else
    return *(_BYTE *)(v6 + i + 224) != 0 ? 0x107 : 0;
}
