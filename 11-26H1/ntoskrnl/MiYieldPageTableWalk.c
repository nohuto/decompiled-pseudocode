/*
 * XREFs of MiYieldPageTableWalk @ 0x140364BF0
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 *     MiWalkPageTablesEvaluatePte @ 0x140329B60 (MiWalkPageTablesEvaluatePte.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiReleaseWalkLocks @ 0x140364CA0 (MiReleaseWalkLocks.c)
 *     MiSkipWalkLock @ 0x140451F40 (MiSkipWalkLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiYieldPageTableWalk(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // esi
  unsigned int v6; // edi
  unsigned int v7; // ecx
  unsigned __int64 v9; // rdx

  v3 = *(_QWORD *)(a1 + 176);
  v4 = a2;
  *(_DWORD *)(a1 + 4) |= 0x20u;
  if ( v3 )
    v6 = guard_dispatch_icall_no_overrides(a1, a2, a3);
  else
    v6 = 0;
  v7 = *(_DWORD *)(a1 + 4) & 0xFFFFFFDF;
  *(_DWORD *)(a1 + 4) = v7;
  if ( (v7 & 1) != 0 || (int)v6 >= 4 || !v4 )
    return v6;
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    if ( *(_QWORD *)(a1 + 56) )
    {
      *(_DWORD *)(a1 + 4) = v7 | 2;
      if ( !(unsigned int)MiSkipWalkLock(a1) )
        MiUnlockPageTableInternal(*(_QWORD *)(a1 + 32), v9);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    return v6;
  }
  MiReleaseWalkLocks(a1);
  return v6;
}
