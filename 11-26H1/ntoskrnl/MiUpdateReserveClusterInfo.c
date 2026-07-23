/*
 * XREFs of MiUpdateReserveClusterInfo @ 0x14049E3C8
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x1404B5B78 (MiAdjustModifiedPageLoad.c)
 *     MiFinishPageFileExtension @ 0x140508B3C (MiFinishPageFileExtension.c)
 *     MiInsertPageFileInList @ 0x14087206C (MiInsertPageFileInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateReserveClusterInfo(__int64 a1, signed __int32 *a2, int a3)
{
  if ( a2 )
    return (unsigned int)_InterlockedCompareExchange(
                           (volatile signed __int32 *)(a1 + 1000),
                           a3 ^ (a3 ^ *a2) & 0xFFFFFC00,
                           *a2);
  else
    return (unsigned int)_InterlockedExchange(
                           (volatile __int32 *)(a1 + 1000),
                           (*(_DWORD *)(a1 + 1000) & 0xFFFFFC00 | 0x200) + 1024);
}
