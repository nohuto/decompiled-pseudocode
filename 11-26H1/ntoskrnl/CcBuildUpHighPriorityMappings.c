/*
 * XREFs of CcBuildUpHighPriorityMappings @ 0x14050EC98
 * Callers:
 *     CcGetVirtualAddress @ 0x1402C2D60 (CcGetVirtualAddress.c)
 * Callees:
 *     MmReserveViewInSystemCache @ 0x140870EE8 (MmReserveViewInSystemCache.c)
 */

__int64 __fastcall CcBuildUpHighPriorityMappings(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // edx
  __int64 *v6; // r14
  unsigned int v7; // ebx
  unsigned int i; // edi

  result = LODWORD(EmpParseLock.PropagateBoostsEntry.Next);
  v4 = *(_DWORD *)(a1 + 1248);
  if ( v4 < LODWORD(EmpParseLock.PropagateBoostsEntry.Next) )
  {
    v6 = (__int64 *)(a2 + 16);
    v7 = LODWORD(EmpParseLock.PropagateBoostsEntry.Next) - v4;
    if ( LODWORD(EmpParseLock.PropagateBoostsEntry.Next) - v4 <= LODWORD(EmpParseLock.PropagateBoostsEntry.Next) )
    {
      for ( i = 0; i < v7; v6 += 5 )
      {
        if ( i >= 0xCCC )
          break;
        result = MmReserveViewInSystemCache(*(_QWORD *)(a1 + 8));
        *v6 = result;
        if ( !result )
          break;
        ++*(_DWORD *)(a2 + 4);
        ++i;
      }
    }
  }
  return result;
}
