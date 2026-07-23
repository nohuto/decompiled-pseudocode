/*
 * XREFs of PiDqQueryFreeActiveData @ 0x140950AA4
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x14094EF04 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14094F4E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqIrpQueryCreate @ 0x14094FA58 (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14094FD80 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x140950150 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryRelease @ 0x1409509D8 (PiDqQueryRelease.c)
 *     PiDqQueryAppendActionEntry @ 0x140968F98 (PiDqQueryAppendActionEntry.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x140479EC0 (RtlIsGenericTableEmptyAvl.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140950A70 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqActionDataFree @ 0x14095169C (PiDqActionDataFree.c)
 *     PiDqQueryActionQueueEntryFree @ 0x140968F58 (PiDqQueryActionQueueEntryFree.c)
 */

BOOLEAN __fastcall PiDqQueryFreeActiveData(__int64 a1)
{
  _RTL_AVL_TABLE *i; // rcx
  BOOLEAN result; // al
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  void *v6; // rcx
  _QWORD *v7; // rax

  for ( i = (_RTL_AVL_TABLE *)(a1 + 72); ; i = (_RTL_AVL_TABLE *)(a1 + 72) )
  {
    result = RtlIsGenericTableEmptyAvl(i);
    if ( result )
      break;
    PiDqQueryDeleteObjectFromResultSet(a1, *(void **)(*(_QWORD *)(a1 + 88) + 32LL));
  }
  v4 = (_QWORD **)(a1 + 192);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v7 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v7;
    v7[1] = v4;
    result = PiDqQueryActionQueueEntryFree(v5);
  }
  v6 = *(void **)(a1 + 184);
  *(_DWORD *)(a1 + 208) = 0;
  if ( v6 )
  {
    result = PiDqActionDataFree(v6);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  return result;
}
