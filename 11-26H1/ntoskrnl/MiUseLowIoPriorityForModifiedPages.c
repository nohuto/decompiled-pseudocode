/*
 * XREFs of MiUseLowIoPriorityForModifiedPages @ 0x140406A70
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1403E0ED8 (MiStoreUpdateMemoryConditions.c)
 *     MiModifiedWriterDeterminePriority @ 0x1404069D8 (MiModifiedWriterDeterminePriority.c)
 *     MiAdjustModifiedPageLoad @ 0x1404BC438 (MiAdjustModifiedPageLoad.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140406B20 (MiGetAvailablePagesBelowPriority.c)
 */

_BOOL8 __fastcall MiUseLowIoPriorityForModifiedPages(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned int v5; // r9d
  __int64 v6; // r10
  unsigned __int64 v7; // rbx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  _DWORD *v10; // r10

  if ( *(_DWORD *)(a1 + 912) )
    return 0LL;
  if ( *(_DWORD *)(a1 + 1296) )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 22288);
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL, a3, 0LL);
  v7 = v3 >> 2;
  if ( *(_QWORD *)(v6 + 23456) >= 3 * v7 || AvailablePagesBelowPriority <= 0x40000 && AvailablePagesBelowPriority <= v7 )
    return 0LL;
  v8 = *(_DWORD *)(v6 + 18420);
  v9 = 7LL;
  v10 = (_DWORD *)(v6 + 7588);
  do
  {
    v5 += *v10++;
    --v9;
  }
  while ( v9 );
  return (v8 < v5 ? v5 - v8 : 0) < AvailablePagesBelowPriority >> 2;
}
