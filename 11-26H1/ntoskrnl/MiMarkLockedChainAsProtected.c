/*
 * XREFs of MiMarkLockedChainAsProtected @ 0x1402AD0B0
 * Callers:
 *     MiExclusiveInsertPfnChainInList @ 0x1402AE1C8 (MiExclusiveInsertPfnChainInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMarkLockedChainAsProtected(__int64 *a1)
{
  __int64 i; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax

  for ( i = *a1; i != 0x3FFFFFFFFFLL; i = v3 & 0xFFFFFFFFFFLL )
  {
    v2 = 6 * i;
    v3 = *(_QWORD *)(48 * i - 0x220000000000LL);
    *(_DWORD *)(8 * v2 - 0x220000000000LL + 32) |= 0x8000000u;
    result = 0xFFFFFFFFFFLL;
  }
  return result;
}
