/*
 * XREFs of IcRemovePossibleReference @ 0x1400BEC94
 * Callers:
 *     IrqArbAddAllocation @ 0x1400BD7C0 (IrqArbAddAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1400BE070 (IrqArbBacktrackAllocation.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1400C3308 (IrqArbpUnreferenceArbitrationList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcRemovePossibleReference(unsigned int a1, char a2)
{
  __int64 i; // r8
  __int64 result; // rax
  unsigned int v4; // eax
  __int64 v5; // rcx

  for ( i = IcListHead; ; i = *(_QWORD *)i )
  {
    result = (__int64)&IcListHead;
    if ( &IcListHead == (__int64 *)i )
      break;
    if ( *(int *)(i + 28) >= 0 )
    {
      v4 = *(_DWORD *)(i + 16);
      if ( v4 <= a1 && *(_DWORD *)(i + 20) >= a1 )
      {
        v5 = 200LL * (a1 - v4);
        result = 0xFFFFFFFFLL;
        --*(_DWORD *)(v5 + i + 36);
        if ( a2 )
          --*(_DWORD *)(v5 + i + 44);
        return result;
      }
    }
  }
  return result;
}
