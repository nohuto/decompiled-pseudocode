/*
 * XREFs of MiSetPreviousStandbyPageSecondaryNoLockAsserts @ 0x1402AD100
 * Callers:
 *     MiExclusiveInsertPfnChainInList @ 0x1402AE1C8 (MiExclusiveInsertPfnChainInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetPreviousStandbyPageSecondaryNoLockAsserts(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // r10
  bool v5; // zf
  __int64 v6; // r8
  __int64 result; // rax
  signed __int64 v8; // rcx
  signed __int64 v9; // rax
  signed __int64 v10; // rcx

  v4 = a2 << 40;
  v5 = a3 == 0;
  v6 = a2 << 40;
  if ( v5 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v4 ^ (v8 ^ v6) & 0xF80000FFFFFFFFFFuLL, v8);
    if ( v8 != v9 )
    {
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(a1 + 24),
               v4 ^ (v9 ^ v4) & 0xF80000FFFFFFFFFFuLL,
               v9);
      }
      while ( v10 != v9 );
    }
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v4 ^ (*(_QWORD *)(a1 + 24) ^ v6) & 0xF80000FFFFFFFFFFuLL;
  }
  result = *(unsigned int *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = (a2 >> 19) ^ (result ^ (a2 >> 19)) & 0xFFE00000;
  return result;
}
