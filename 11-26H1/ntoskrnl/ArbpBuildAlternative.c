/*
 * XREFs of ArbpBuildAlternative @ 0x14078C8F4
 * Callers:
 *     ArbBootAllocation @ 0x14078AAF0 (ArbBootAllocation.c)
 *     ArbQueryConflict @ 0x14078BCA0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x14078C1C0 (ArbRetestAllocation.c)
 *     ArbpBuildAllocationStack @ 0x14078C794 (ArbpBuildAllocationStack.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ArbpBuildAlternative(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v6; // edx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  char v9; // al
  int v10; // ecx

  *(_QWORD *)(a3 + 40) = a2;
  result = guard_dispatch_icall_no_overrides(a2, a3);
  v6 = 0;
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a3 + 36) = 0;
    if ( *(_BYTE *)(a2 + 2) == 3 )
    {
      *(_DWORD *)(a3 + 36) = 1;
      v6 = 1;
    }
    v7 = *(_QWORD *)(a3 + 8);
    v8 = *(_QWORD *)a3;
    if ( v7 - *(_QWORD *)a3 + 1 == *(_QWORD *)(a3 + 16) )
    {
      v6 |= 2u;
      *(_DWORD *)(a3 + 36) = v6;
    }
    v9 = *(_BYTE *)(a2 + 1);
    if ( v9 == 3 || (v10 = v6, v9 == 7) )
    {
      v10 = v6;
      if ( _bittest16((const signed __int16 *)(a2 + 4), 8u) )
      {
        v10 = v6 | 8;
        *(_DWORD *)(a3 + 36) = v6 | 8;
      }
    }
    if ( v7 < v8 )
      *(_DWORD *)(a3 + 36) = v10 | 4;
    return 0LL;
  }
  return result;
}
