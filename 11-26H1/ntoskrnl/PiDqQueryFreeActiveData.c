/*
 * XREFs of PiDqQueryFreeActiveData @ 0x140990044
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x14098E4A4 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14098EA84 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqIrpQueryCreate @ 0x14098EFF8 (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14098F320 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x14098F6F0 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryRelease @ 0x14098FF78 (PiDqQueryRelease.c)
 *     PiDqQueryAppendActionEntry @ 0x1409A8588 (PiDqQueryAppendActionEntry.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x140480580 (RtlIsGenericTableEmptyAvl.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140990010 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqActionDataFree @ 0x140990C3C (PiDqActionDataFree.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1409A8548 (PiDqQueryActionQueueEntryFree.c)
 */

BOOLEAN __fastcall PiDqQueryFreeActiveData(__int64 a1)
{
  RTL_AVL_TABLE *i; // rcx
  BOOLEAN result; // al
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  void *v6; // rcx
  _QWORD *v7; // rax

  for ( i = (RTL_AVL_TABLE *)(a1 + 72); ; i = (RTL_AVL_TABLE *)(a1 + 72) )
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
